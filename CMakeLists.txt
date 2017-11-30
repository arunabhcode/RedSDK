cmake_minimum_required(VERSION 3.8)
project(REDSDK)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

message("Build Type: " ${CMAKE_BUILD_TYPE})

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -Wall -O3")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O3 -std=c++0x")


add_library(${PROJECT_NAME} STATIC
    src/base64.c
    src/c_list.c
    src/clist.cpp
    src/decorated_string.c
    src/rcp_api.c
    src/rcp_parser2.c
    src/strlcat.c
    src/strlcpy.c
)

target_include_directories(${PROJECT_NAME} PUBLIC
                          $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
                          $<INSTALL_INTERFACE:${CMAKE_INSTALL_PREFIX}/include>)
if(MSVC)
  if(CMAKE_BUILD_TYPE STREQUAL Release)
    target_link_libraries(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/lib/R3DSDK-2015MT.lib)
  elseif(CMAKE_BUILD_TYPE STREQUAL Debug)
    target_link_libraries(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/lib/R3DSDK-2015MTd.lib)
  endif()
else()
    target_link_libraries(${PROJECT_NAME} PRIVATE
      ${CMAKE_SOURCE_DIR}/lib/libR3DSDKPIC.a)
endif()

if(NOT TARGET uninstall)
  configure_file(
      ${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in
      ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake
      IMMEDIATE @ONLY)

  add_custom_target(uninstall
      COMMAND ${CMAKE_COMMAND} -P
      ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
endif()

if(${CMAKE_CURRENT_SOURCE_DIR} STREQUAL ${CMAKE_SOURCE_DIR})
  export(TARGETS FILE ${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}Targets.cmake)
endif()

file(WRITE ${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}Config.cmake
    "include(\${CMAKE_CURRENT_LIST_DIR}/${CMAKE_PROJECT_NAME}Targets.cmake)\n")

install(DIRECTORY ${PROJECT_SOURCE_DIR}/include DESTINATION ${CMAKE_INSTALL_PREFIX}
  FILES_MATCHING PATTERN "*.h")

install(FILES ${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}Config.cmake
        DESTINATION lib/cmake/${CMAKE_PROJECT_NAME})

install(EXPORT ${CMAKE_PROJECT_NAME}Targets NAMESPACE red::
        DESTINATION lib/cmake/${CMAKE_PROJECT_NAME})

install(TARGETS ${PROJECT_NAME}
        EXPORT ${CMAKE_PROJECT_NAME}Targets
        ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
        LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
        RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)