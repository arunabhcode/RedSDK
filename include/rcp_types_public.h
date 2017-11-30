/********************************************************************************
 * This file is part of the RCP SDK Release 6.50.23
 * Copyright (C) 2009-2017 Red.com, Inc.  All rights reserved.
 *
 * For technical support please email rcpsdk@red.com.
 *
 * "Source Code" means the accompanying software in any form preferred for making
 * modifications. "Source Code" does not include the accompanying strlcat.c and
 * strlcpy.c software and examples/qt/common/qt/serial software.
 * 
 * "Binary Code" means machine-readable Source Code in binary form.
 * 
 * "Approved Recipients" means only those recipients of the Source Code who have
 * entered into the RCP SDK License Agreement with Red.com, Inc. All
 * other recipients are not authorized to possess, modify, use, or distribute the
 * Source Code.
 *
 * Red.com, Inc. hereby grants Approved Recipients the rights to modify this
 * Source Code, create derivative works based on this Source Code, and distribute
 * the modified/derivative works only as Binary Code in its binary form. Approved
 * Recipients may not distribute the Source Code or any modification or derivative
 * work of the Source Code. Redistributions of Binary Code must reproduce this
 * copyright notice, this list of conditions, and the following disclaimer in the
 * documentation or other materials provided with the distribution. Red.com, Inc.
 * may not be used to endorse or promote Binary Code redistributions without
 * specific prior written consent from Red.com, Inc. 
 *
 * The only exception to the above licensing requirements is any recipient may use,
 * copy, modify, and distribute in any format the strlcat.c and strlcpy.c software
 * in accordance with the provisions required by the license associated therewith;
 * provided, however, that the modifications are solely to the strlcat.c and
 * strlcpy.c software and do not include any other portion of the Source Code.
 * 
 * THE ACCOMPANYING SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE, AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL THE RED.COM, INC., ANY OTHER COPYRIGHT HOLDERS, OR ANYONE
 * DISTRIBUTING THE SOFTWARE BE LIABLE FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER
 * IN CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 ********************************************************************************/

#ifndef RCP_TYPES_PUBLIC_H
#define RCP_TYPES_PUBLIC_H

#include <stdint.h>

#define ALLOWED_NAME_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 -=[];',./!@#$%^&*()_+{}:<>?"
#define ALLOWED_SCENE_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-"
#define ALLOWED_SHOT_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789*"
#define ALLOWED_COMM_NAME_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_"
#define ALLOWED_AUDIO_CHANNEL_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
#define ALLOWED_HOST_IP_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-."
#define ALLOWED_SSID_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 -=[];',./!@#$%^&*()_+{}:<>?\""
#define ALLOWED_WEP_PW_CHARS "ABCDEF0123456789"
#define ALLOWED_WPA_PW_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 -=[];',./!@#$%^&*()_+{}:<>?\"\\`|"
#define ALLOWED_LENS_NAME_CHARS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 -=[];',./!@#$%^&*()_+{}:<>?"
#define ALLOWED_LENS_SERIAL_CHARS "0123456789"

/* RCP: CSPACE */
typedef enum {
    COLORSPACE_REC709 = 1,
    COLORSPACE_REDCOLOR2 = 6,
    COLORSPACE_REDCOLOR3 = 8,
    COLORSPACE_DRAGONCOLOR = 9,
    COLORSPACE_ACES = 10,
    COLORSPACE_REDCOLOR4 = 11,
    COLORSPACE_DRAGONCOLOR2 = 12,
    COLORSPACE_REC2020 = 13,
    COLORSPACE_ACES_AP1 = 14,
    COLORSPACE_RWGRGB = 15,
    COLORSPACE_P3 = 16,
    COLORSPACE_MAX,
    COLORSPACE_UNDEFINED = 255
} colorspace_t;

/* RCP: GSPACE */
typedef enum {
    GAMMACURVE_REDLOGFILM = 9,
    GAMMACURVE_REDGAMMA2 = 10,
    GAMMACURVE_REDGAMMA3 = 11,
    GAMMACURVE_REDGAMMA4 = 12,
    GAMMACURVE_ACESPROXY = 13,
    GAMMACURVE_LOG3G12 = 14,
    GAMMACURVE_HDR2084 = 15,
    GAMMACURVE_BT1886 = 16,
    GAMMACURVE_ACESCC = 17,
    GAMMACURVE_LOG3G10 = 18,
    GAMMACURVE_MAX,
    GAMMACURVE_UNDEFINED = 255
} gammaspace_t;

/* RCP: CLPDIR */
typedef enum
{
    PLAYER_DIRECTION_DEFAULT,
    PLAYER_DIRECTION_FWD,
    PLAYER_DIRECTION_REV
} player_direction_t;

/* RCP: LOOP */
typedef enum
{
    PLAYER_NO_LOOP,
    PLAYER_LOOP,
    PLAYER_LOOP_LIST
} player_loop_t;

/* RCP: FORMAT2 */
typedef enum
{
    RESOLUTION_8K = 0,
    RESOLUTION_6P5K,
    RESOLUTION_2K,
    RESOLUTION_3K,
    RESOLUTION_3P5K,
    RESOLUTION_4K,
    RESOLUTION_4P5K,
    RESOLUTION_5K,
    RESOLUTION_1K,
    RESOLUTION_6K,
    RESOLUTION_5P5K,
    RESOLUTION_2P5K,
    RESOLUTION_7K,
    RESOLUTION_7P5K,
    RESOLUTION_UNKNOWN,
    RESOLUTION_MAX
} resolution_t;

/* RCP: FORMAT2 */
typedef enum
{
    AR_3_2,
    AR_4_3,
    AR_5_4,
    AR_16_9,
    AR_2_1,
    AR_2_4_1,
    AR_FF,
    AR_720P,
    AR_1080P,
    AR_1_22_1,
    AR_6_5,
    AR_4_1,
    AR_8_1,
    AR_1_1,
    AR_14_9,
    AR_1_7_1,
    AR_8_9,
    AR_1_2_1,
    AR_UNKNOWN,
    AR_MAX
} aspect_ratio_t;

/* RCP: FORMAT2 */
typedef enum
{
    ANA_OFF = 0,
    ANA_2 = 1,
    ANA_1_3 = 2,
    ANA_1_25 = 3,
    ANA_MAX
} anamorphic_t;

/* RCP: HDRMODE */
typedef enum
{
    HDR_MODE_OFF,
    HDR_MODE_HDRX
} hdr_mode_t;

/* RCP: OGTMODE */
typedef enum
{
    OPEN_GATE_MODE_DONT_ALLOW,
    OPEN_GATE_MODE_ALLOW
} open_gate_mode_t;

/* RCP: OGTSTATE */
typedef enum
{
    OPEN_GATE_STATE_OFF,
    OPEN_GATE_STATE_ACTIVE
} open_gate_state_t;

/* RCP: LENSFDMD */
typedef enum {
    FOCUS_DISTANCE_MODE_METRIC,
    FOCUS_DISTANCE_MODE_IMPERIAL
} focus_distance_mode_t;

/* RCP: SHMODE */
typedef enum {
    SHUTTER_MODE_ABSOLUTE,
    SHUTTER_MODE_RELATIVE
} shutter_mode_t;

/* RCP: SHDISP */
typedef enum {
    SHUTTER_TIME,
    SHUTTER_ANGLE
} shutter_display_t;

/* RCP: SYNC */
typedef enum {  /* actual shutter sync state. */
    SYNC_STATE_NONE,          /*  grey */
    SYNC_STATE_NO_LOCK,       /*  red */
    SYNC_STATE_GENLOCK        /*  green */
} sync_state_t;

/* RCP: GENLOC */
typedef enum {
    GENLOCK_STATE_NONE,      /*  grey - no signal detected */
    GENLOCK_STATE_PRESENT,   /*  red - signal detected but not locked */
    GENLOCK_STATE_LOCKED,     /*  green - monitors locked to genlock signal. */
    GENLOCK_STATE_CROSSLOCKED /*  yellow - genlock in does not match monitor rate, but gennum can cross lock */
} genlock_state_t;

/* RCP: FALSEC */
typedef enum {
    FALSE_COLOR_MODE_NONE,
    FALSE_COLOR_MODE_EXPOSURE,
    FALSE_COLOR_MODE_VIDEO,
    FALSE_COLOR_MODE_FOCUS,
    FALSE_COLOR_MODE_EDGE,
    FALSE_COLOR_MODE_GIO_SCOPE
} false_color_mode_t;

/* RCP: PWRSRC */
typedef enum {
    POWER_SOURCE_REAR_BAT_1,
    POWER_SOURCE_REAR_BAT_2,
    POWER_SOURCE_REAR_BAT_3,
    POWER_SOURCE_REAR_BAT_4,
    POWER_SOURCE_SH_BAT,
    POWER_SOURCE_DC_JACK_BAT,   /* Battery */
    POWER_SOURCE_DC_JACK_AC,    /* AC Adaptor (ElPac) */
    POWER_SOURCE_DEPRECATED_1,
    POWER_SOURCE_DEPRECATED_2,
    POWER_SOURCE_VMOUNT,
    POWER_SOURCE_DC_JACK_28V,   /* XL 28V DC IN */
    POWER_SOURCE_COUNT
} power_source_t;

/* RCP: RECORD (S) */
typedef enum {
    SET_RECORD_STATE_STOP,
    SET_RECORD_STATE_START,
    SET_RECORD_STATE_TOGGLE,
    SET_RECORD_STATE_START_PRE_RECORD
} set_record_state_t;

/* RCP: RECORD (G and C) */
typedef enum {
    RECORD_STATE_NOT_RECORDING,
    RECORD_STATE_RECORDING,
    RECORD_STATE_FINALIZING,
    RECORD_STATE_PRE_RECORDING,
    RECORD_STATE_ENCODING,
    RECORD_STATE_COUNT
} record_state_t;

/* RCP: TETHERED SERVER (G and C) */
typedef enum {
    TETHERED_SERVER_STATE_NOT_RECORDING,
    TETHERED_SERVER_STATE_RECORDING
} tethered_server_state_t;

/* RCP: PLAYBACK (S) */
typedef enum {
    SET_PLAYBACK_STATE_STOP,
    SET_PLAYBACK_STATE_START,
    SET_PLAYBACK_STATE_TOGGLE
} set_playback_state_t;

/* RCP: PLAYBACK (G and C) */
typedef enum {
    PLAYBACK_STATE_NOT_IN_PLAYBACK,
    PLAYBACK_STATE_IN_PLAYBACK,
    PLAYBACK_STATE_COUNT
} playback_state_t;

/* RCP: CAMPOS */
typedef enum {
    CAM_POS_LEFT,
    CAM_POS_CENTER,
    CAM_POS_RIGHT
} cam_pos_t;

/* RCP: TPATTERN */
typedef enum
{
    MONITOR_TEST_PATTERN_NONE,
    MONITOR_TEST_PATTERN_CHIP_CHART,
    MONITOR_TEST_PATTERN_SMPTE_BAR,
    MONITOR_TEST_PATTERN_LUMA_RAMP,
    MONITOR_TEST_PATTERN_COUNT
} monitor_test_pattern_t;

/* RCP: SELISO, SELSH */
typedef enum {
    LIST_SELECT_NEXT,
    LIST_SELECT_PREVIOUS,
    LIST_SELECT_FIRST,
    LIST_SELECT_LAST
} list_select_t;

/* RCP: TCJAM */
typedef enum {
    TC_SYNC_STATE_NOT_PRESENT,       /* no analog LTC timecode being detected */
    TC_SYNC_STATE_PRESENT_NOT_USED,  /* analog LTC signal is being received, but not being used */
    TC_SYNC_STATE_PRESENT_USED       /* analog LTC signal is being received and TC is jamsynced to it */
} tc_sync_state_t;

/* RCP: FRPRMODE */
typedef enum {
    FRAME_PROCESSING_INVALID = -1,
    FRAME_PROCESSING_OFF,
    FRAME_PROCESSING_SUM,
    FRAME_PROCESSING_AVG
} frame_processing_t;

/* RCP: BATTMODE */
typedef enum {
    BATTERY_DISPLAY_MODE_PERCENT,
    BATTERY_DISPLAY_MODE_TOTAL_TIME
} battery_display_mode_t;

/* RCP: RAWMODE */
typedef enum {
    RAW_MODE_OFF,
    RAW_MODE_ON,
    RAW_MODE_COUNT
} raw_mode_t;

/* RCP: LOGVIEWMODE */
typedef enum {
    LOG_VIEW_MODE_OFF,
    LOG_VIEW_MODE_ON,
    LOG_VIEW_MODE_COUNT
} log_view_mode_t;

/* RCP: MEDIAMOD */
typedef enum
{
    MEDIA_DISPLAY_PERCENTAGE,
    MEDIA_DISPLAY_TIME
} media_display_t;

/* RCP: RECMODE */
typedef enum {
    RECORD_MODE_CONTINUOUS,
    RECORD_MODE_TIMELAPSE,
    RECORD_MODE_FRAME_TRIGGER,
    RECORD_MODE_RAMP,
    RECORD_MODE_EXTERNAL,
    RECORD_MODE_STREAM,
    RECORD_MODE_BURST,
    RECORD_MODE_MULTI_SHOT,
    RECORD_MODE_MOTION_PLUS_STILLS,
    RECORD_MODE_PREVIEW_OVERDRIVE,
    RECORD_MODE_COUNT
} record_mode_t;

/* RCP: HDRXMONX */
typedef enum
{
    HDR_TRACK_A,
    HDR_TRACK_X
} hdr_track_t;

typedef enum
{
    KEY_ACTION_KEY_DISABLED = 1,
    KEY_ACTION_SLOT_SET_ISO = 2,
    KEY_ACTION_SLOT_SET_COLOR_TEMP = 3,
    KEY_ACTION_SLOT_SET_SHUTTER = 4,
    KEY_ACTION_SLOT_SET_APERTURE = 5,
    KEY_ACTION_RECORD_TOGGLE = 6,
    KEY_ACTION_MAGNIFY_TOGGLE = 7,
    KEY_ACTION_WB_AUTO_CALC = 8,
    KEY_ACTION_NAVIGATION_SELECT = 9,
    KEY_ACTION_EJECT_MEDIA = 10,
    KEY_ACTION_AF_START = 11,
    KEY_ACTION_NAVIGATION_LEFT = 12,
    KEY_ACTION_NAVIGATION_RIGHT = 13,
    KEY_ACTION_NAVIGATION_MENU = 14,
    KEY_ACTION_SHOW_DIALOG = 15,
    KEY_ACTION_VIDEO_CHECK_TOGGLE = 16,
    KEY_ACTION_SLOT_NEXT_VALUE = 17,
    KEY_ACTION_SLOT_PREVIOUS_VALUE = 18,
    KEY_ACTION_SHUTDOWN = 19,
    KEY_ACTION_AF_MODE_CYCLE = 20,
    KEY_ACTION_EXPOSURE_CHECK_TOGGLE = 21,
    KEY_ACTION_AF_CENTER_WINDOW = 22,
    KEY_ACTION_LCD_BRAIN_BR_UP = 23,
    KEY_ACTION_LCD_BRAIN_BR_DOWN = 24,
    KEY_ACTION_SLOT_SET_FPS = 25,
    KEY_ACTION_SLOT_SET_FORMAT = 26,
    KEY_ACTION_SLOT_SET_REDCODE = 27,
    KEY_ACTION_LCD_TOGGLE_LOCK = 28,
    KEY_ACTION_EVF_BRAIN_CYCLE_MODE = 29,
    KEY_ACTION_RECORD_START = 30,
    KEY_ACTION_RECORD_STOP = 31,
    KEY_ACTION_SH_TOGGLE_BACKLIGHT = 32,
    KEY_ACTION_NAVIGATION_UP = 33,
    KEY_ACTION_NAVIGATION_DOWN = 34,
    KEY_ACTION_NAVIGATION_CW = 35,
    KEY_ACTION_NAVIGATION_CCW = 36,
    KEY_ACTION_CAMERA_MODE_STILLS = 37,
    KEY_ACTION_CAMERA_MODE_MOTION = 38,
    KEY_ACTION_RAW_CHECK_TOGGLE = 39,
    KEY_ACTION_HDR_MODE_TOGGLE = 40,
    KEY_ACTION_DISPLAY_CHECK_MODE_CYCLE = 41,
    KEY_ACTION_PLAYBACK_PREVIEW_TOGGLE = 42,
    KEY_ACTION_ZEBRA_1_TOGGLE = 43,
    KEY_ACTION_ZEBRA_2_TOGGLE = 44,
    KEY_ACTION_ZEBRA_1_2_TOGGLE = 45,
    KEY_ACTION_SHUTTER_MODE_TOGGLE = 46,
    KEY_ACTION_SHUTTER_ANGLE_ABS_REL_MODE_TOGGLE = 47,
    KEY_ACTION_TC_DISPLAY_MODE_TOGGLE = 48,
    /* Deprecated - 49 */
    KEY_ACTION_AF_ONE_SHOT = 50,
    KEY_ACTION_SOUND_SHUTTER = 51,
    KEY_ACTION_SOUND_OTHER = 52,
    KEY_ACTION_AF_TOGGLE_WINDOW_SIZE = 53,
    KEY_ACTION_EVF_REAR_CYCLE_MODE = 54,
    KEY_ACTION_EDGE_FOCUS_CHECK_TOGGLE = 55,
    KEY_ACTION_FOCUS_CHECK_TOGGLE = 56,
    KEY_ACTION_IRIS_OPEN = 57,
    KEY_ACTION_IRIS_CLOSE = 58,
    KEY_ACTION_FOCUS_NEAR = 59,
    KEY_ACTION_FOCUS_FAR = 60,
    KEY_ACTION_GO_TO_PLAYBACK = 61,
    KEY_ACTION_GO_TO_PREVIEW = 62,
    /* Deprecated - 63 */
    KEY_ACTION_STROBE_TRIGGER = 64,
    KEY_ACTION_APPLY_LOOK = 65,
    KEY_ACTION_LCD_REAR_BR_UP = 66,
    KEY_ACTION_LCD_REAR_BR_DOWN = 67,
    KEY_ACTION_SH_TOGGLE_KEY_LOCK = 68,
    KEY_ACTION_APPLY_PRESET = 69,
    KEY_ACTION_MAGNIFY_ON = 70,
    KEY_ACTION_MAGNIFY_OFF = 71,
    KEY_ACTION_PLAYBACK_PLAY_PAUSE = 72,
    KEY_ACTION_PLAYBACK_STEP_FORWARD = 73,
    KEY_ACTION_PLAYBACK_STEP_BACKWARD = 74,
    KEY_ACTION_PLAYBACK_NEXT_CLIP = 75,
    KEY_ACTION_PLAYBACK_PREV_CLIP = 76,
    KEY_ACTION_PLAYBACK_SET_IN_POINT = 77,
    KEY_ACTION_PLAYBACK_SET_OUT_POINT = 78,
    KEY_ACTION_PLAYBACK_TOGGLE_LOOP = 79,
    KEY_ACTION_PLAYBACK_TOGGLE_DIRECTION = 80,
    KEY_ACTION_PLAYBACK_CYCLE_SPEED = 81,
    KEY_ACTION_INTEGRATION_TIME_INCREASE = 82,
    KEY_ACTION_INTEGRATION_TIME_DECREASE = 83,
    KEY_ACTION_ISO_INCREASE = 84,
    KEY_ACTION_ISO_DECREASE = 85,
    KEY_ACTION_SAVE_UI_SCREENSHOT_TO_MEDIA = 86,
    KEY_ACTION_LCD_BRAIN_CYCLE_MODE = 87,
    KEY_ACTION_HDMI_BRAIN_CYCLE_MODE = 88,
    KEY_ACTION_HDSDI_BRAIN_CYCLE_MODE = 89,
    KEY_ACTION_LCD_REAR_CYCLE_MODE = 90,
    KEY_ACTION_HDSDI_PVW_PRO_I_O_CYCLE_MODE = 91,
    KEY_ACTION_HDSDI_PGM_PRO_I_O_CYCLE_MODE = 92,
    KEY_ACTION_POWER_OUT_PRO_I_O_GPIO_ENABLE = 93,
    KEY_ACTION_POWER_OUT_PRO_I_O_GPIO_DISABLE = 94,
    KEY_ACTION_POWER_OUT_PRO_I_O_GPIO_TOGGLE = 95,
    KEY_ACTION_POWER_OUT_PRO_I_O_PWR_ENABLE = 96,
    KEY_ACTION_POWER_OUT_PRO_I_O_PWR_DISABLE = 97,
    KEY_ACTION_POWER_OUT_PRO_I_O_PWR_TOGGLE = 98,
    KEY_ACTION_POWER_OUT_PRO_I_O_AUX_ENABLE = 99,
    KEY_ACTION_POWER_OUT_PRO_I_O_AUX_DISABLE = 100,
    KEY_ACTION_POWER_OUT_PRO_I_O_AUX_TOGGLE = 101,
    KEY_ACTION_RECORD_FRAME_TRIGGER = 102,
    KEY_ACTION_RECORD_START_SPEED_RAMP_A = 103,
    KEY_ACTION_EVF_BRAIN_BR_UP = 104,
    KEY_ACTION_EVF_BRAIN_BR_DOWN = 105,
    KEY_ACTION_EVF_REAR_BR_UP = 106,
    KEY_ACTION_EVF_REAR_BR_DOWN = 107,
    KEY_ACTION_RECORD_START_PRE_RECORD = 108,
    KEY_ACTION_POWER_OUT_PLUS_1_PWR_ENABLE = 109,
    KEY_ACTION_POWER_OUT_PLUS_1_PWR_DISABLE = 110,
    KEY_ACTION_POWER_OUT_PLUS_1_PWR_TOGGLE = 111,
    KEY_ACTION_POWER_SAVE_ENTER_LOW_POWER_PREVIEW = 112,
    KEY_ACTION_POWER_SAVE_ENTER_SLEEP = 113,
    KEY_ACTION_RECORD_START_SPEED_RAMP_B = 114,
    KEY_ACTION_RECORD_START_SPEED_RAMP_C = 115,
    KEY_ACTION_RECORD_START_SPEED_RAMP_D = 116,
    KEY_ACTION_RECORD_START_SPEED_RAMP_RESET = 117,
    KEY_ACTION_SHUTTER_ND_075 = 118,
    KEY_ACTION_SHUTTER_ND_100 = 119,
    KEY_ACTION_SHUTTER_ND_150 = 120,
    KEY_ACTION_SHUTTER_ND_225 = 121,
    KEY_ACTION_SHUTTER_ND_300 = 122,
    KEY_ACTION_SHUTTER_ANTIALIAS_1944_360 = 123,
    KEY_ACTION_SHUTTER_ND_ONLY = 124,
    KEY_ACTION_TOGGLE_RETURN_FEED = 125,
    KEY_ACTION_SHUTTER_INCREMENT_ND_PLUS_010 = 126,
    KEY_ACTION_SHUTTER_DECREMENT_ND_MINUS_010 = 127,
    KEY_ACTION_SHUTTER_ND_050 = 128,
    KEY_ACTION_SHUTTER_SQUARE_180_360 = 129,
    /* free - 130 */
    KEY_ACTION_AF_RACK_TO_A = 131,
    KEY_ACTION_AF_RACK_TO_B = 132,
    KEY_ACTION_AF_RACK_TO_C = 133,
    KEY_ACTION_AF_RACK_TO_D = 134,
    /* free - 135 */
    KEY_ACTION_SAVE_LOG = 136,
    KEY_ACTION_MARK_SNAPSHOT = 137,
    KEY_ACTION_TOGGLE_OVERLAYS_BRAIN_LCD = 138,
    KEY_ACTION_TOGGLE_OVERLAYS_BRAIN_EVF = 139,
    KEY_ACTION_TOGGLE_OVERLAYS_BRAIN_HDMI = 140,
    KEY_ACTION_TOGGLE_OVERLAYS_BRAIN_HDSDI = 141,
    KEY_ACTION_TOGGLE_OVERLAYS_REAR_LCD = 142,
    KEY_ACTION_TOGGLE_OVERLAYS_REAR_EVF = 143,
    KEY_ACTION_TOGGLE_OVERLAYS_REAR_HDSDI_1 = 144,
    KEY_ACTION_TOGGLE_OVERLAYS_REAR_HDSDI_2 = 145,
    KEY_ACTION_RUN_SCRIPT = 146,
    KEY_ACTION_NEXT_TAGGED_FRAME = 147,
    KEY_ACTION_PREV_TAGGED_FRAME = 148,
    KEY_ACTION_AE_CALC = 149,
    KEY_ACTION_AE_EV_UP = 150,
    KEY_ACTION_AE_EV_DOWN = 151,
    KEY_ACTION_HDR_TRACK_TOGGLE = 152,
    KEY_ACTION_HORIZON_ENABLE = 153,
    KEY_ACTION_HORIZON_DISABLE = 154,
    KEY_ACTION_HORIZON_TOGGLE = 155,
    KEY_ACTION_AE_MODE_OFF = 156,
    KEY_ACTION_AE_MODE_SINGLE_SHOT = 157,
    KEY_ACTION_AE_MODE_PREVIEW_ONLY = 158,
    KEY_ACTION_AE_MODE_PREVIEW_RECORD = 159,
    KEY_ACTION_AE_MODE_TOGGLE = 160,
    KEY_ACTION_AE_ZONE_SPOT = 161,
    KEY_ACTION_AE_ZONE_CENTER = 162,
    KEY_ACTION_AE_ZONE_AVERAGE = 163,
    KEY_ACTION_AE_ZONE_TOGGLE = 164,
    KEY_ACTION_RECORD_START_MARK_FRAME = 165,
    KEY_ACTION_RECORD_MULTISHOT_STOP = 166,
    KEY_ACTION_APERTURE_PRIORITY_ENABLE_TOGGLE = 167,
    KEY_ACTION_ALGO_TRIGGER = 168,
    KEY_ACTION_GIO_SCOPE_TOGGLE = 169,
    /* free - 170 */
    /* free - 171 */
    KEY_ACTION_CAMERA_MODE_TOGGLE = 172,
    KEY_ACTION_SH_KEY_1 = 173,
    KEY_ACTION_SH_KEY_2 = 174,
    KEY_ACTION_SH_KEY_3 = 175,
    KEY_ACTION_SH_KEY_4 = 176,
    KEY_ACTION_RECORD_MULTISHOT_START = 177,
    KEY_ACTION_AUDIO_CH1_GAIN_INCREMENT = 178,
    KEY_ACTION_AUDIO_CH1_GAIN_DECREMENT = 179,
    KEY_ACTION_AUDIO_CH2_GAIN_INCREMENT = 180,
    KEY_ACTION_AUDIO_CH2_GAIN_DECREMENT = 181,
    KEY_ACTION_AUDIO_CH3_GAIN_INCREMENT = 182,
    KEY_ACTION_AUDIO_CH3_GAIN_DECREMENT = 183,
    KEY_ACTION_AUDIO_CH4_GAIN_INCREMENT = 184,
    KEY_ACTION_AUDIO_CH4_GAIN_DECREMENT = 185,
    KEY_ACTION_AF_SET_RACK_A = 186,
    KEY_ACTION_AF_SET_RACK_B = 187,
    KEY_ACTION_AF_SET_RACK_C = 188,
    KEY_ACTION_AF_SET_RACK_D = 189,
    KEY_ACTION_LCD3_BR_UP = 190,
    KEY_ACTION_LCD3_BR_DOWN = 191,
    KEY_ACTION_LCD3_CYCLE_MODE = 192,
    KEY_ACTION_TOGGLE_OVERLAYS_LCD3 = 193,
    KEY_ACTION_EVF3_BR_UP = 194,
    KEY_ACTION_EVF3_BR_DOWN = 195,
    KEY_ACTION_EVF3_CYCLE_MODE = 196,
    KEY_ACTION_TOGGLE_OVERLAYS_EVF3 = 197,
    KEY_ACTION_APERTURE_FINE_ADJUSTMENT_OPEN = 198,
    KEY_ACTION_APERTURE_FINE_ADJUSTMENT_CLOSE = 199
} key_action_t;

typedef enum
{
    TAG_INFO_TAG_TYPE_NONE = 0,
    TAG_INFO_TAG_TYPE_STILL = 1
} tag_info_tag_type_t;

typedef struct
{
    uint64_t frame;
    tag_info_tag_type_t type;
    char tod_timecode[14];
} tag_info_t;

/* RCP: MMNDMODE */
typedef enum
{
    MOTION_MOUNT_DISPLAY_ND,
    MOTION_MOUNT_DISPLAY_OD,
    MOTION_MOUNT_DISPLAY_FSTOP
} motion_mount_display_mode_t;

/* RCP: MMMODE */
typedef enum {
    MOTION_MOUNT_SHUTTER_MODE_ND_ONLY,
    MOTION_MOUNT_SHUTTER_MODE_SOFT,
    MOTION_MOUNT_SHUTTER_MODE_SQUARE
} motion_mount_shutter_mode_t;

/* RCP: RIGSTATE */
typedef enum
{
    METADATA_STATUS_DISABLED,
    METADATA_STATUS_ENABLED_INVALID,
    METADATA_STATUS_ENABLED_VALID
} metadata_status_t;

/* RCP: NWSTAT */
typedef enum
{
    GIGE_STATUS_DISABLED,
    GIGE_STATUS_ERROR,
    GIGE_STATUS_OK,
    GIGE_STATUS_WARNING
} gige_status_t;

/* RCP: LCDM, HDMIM, HDSDIM, PLCDM, PHDSDI1M, PHDSDI2M, EVFM, REVFM */
typedef enum
{
    MONITOR_MODE_OVERLAY,
    MONITOR_MODE_CLEAN,
    MONITOR_MODE_MIRROR_BRAIN_LCD,
    MONITOR_MODE_MIRROR_BRAIN_EVF,
    MONITOR_MODE_MIRROR_BRAIN_HDMI,
    MONITOR_MODE_MIRROR_BRAIN_HDSDI,
    MONITOR_MODE_MIRROR_REAR_LCD,
    MONITOR_MODE_MIRROR_REAR_EVF,
    MONITOR_MODE_MIRROR_PROIO_HDSDI_1,
    MONITOR_MODE_MIRROR_PROIO_HDSDI_2,
    MONITOR_MODE_DEPRECATED_1,
    MONITOR_MODE_MIRROR_BRAIN_LCD3,
    MONITOR_MODE_MIRROR_BRAIN_EVF3,
    MONITOR_MODE_CLONE_PROIO_HDSDI_1,
    MONITOR_MODE_CLONE_PROIO_HDSDI_2,
    MONITOR_MODE_UHD
} monitor_mode_t;

/* RCP: MAGNIFY */
typedef enum {
    MAGNIFY_MODE_OFF,
    MAGNIFY_MODE_ON,
    MAGNIFY_MODE_COUNT
} magnify_mode_t;

/* RCP: AFMODE */
typedef enum
{
    AF_MODE_MANUAL,
    AF_MODE_CONFIRM,
    AF_MODE_PRIORITY,
    AF_MODE_CONTINUOUS,
    AF_MODE_TOUCH_TRACK,
    AF_MODE_RACK,
    AF_MODE_FAST
} af_mode_t;

/* RCP: AFZONE */
typedef enum
{
    AF_FOCUSZONE_CENTER,
    AF_FOCUSZONE_SPOT
} af_focuszone_t;

/* RCP: FSMODE */
typedef enum {
    FAN_MODE_MANUAL,                                    /* Manual Mode */
    FAN_MODE_AUTO,
    FAN_MODE_CONTROL_LOOP = 6,                          /* Adaptive Mode */
    FAN_MODE_LOW_NOISE_PREVIEW_RECORD,                  /* Quiet Mode */
    FAN_MODE_ADAPTIVE_PREVIEW_LOW_NOISE_RECORD = 9      /* Adaptive Preview Quiet Record Mode */
} fan_mode_t;

/* RCP: AEMODE */
typedef enum {
    AE_MODE_OFF,
    AE_MODE_SINGLESHOT,
    AE_MODE_CONTINUOUS_PREVIEW,
    AE_MODE_CONTINUOUS_RECORD,
    AE_MODE_TOGGLE
} ae_mode_t;

/* RCP: CALSTAT */
typedef enum {
    CAL_STATUS_MINUS_LEVEL_3,
    CAL_STATUS_MINUS_LEVEL_2,
    CAL_STATUS_MINUS_LEVEL_1,
    CAL_STATUS_OK,
    CAL_STATUS_PLUS_LEVEL_1,
    CAL_STATUS_PLUS_LEVEL_2,
    CAL_STATUS_PLUS_LEVEL_3
} cal_status_t;

/* RCP: LDISPM */
typedef enum
{
    APERTURE_LIST_1_3,
    APERTURE_LIST_1_4
} aperture_list_t;

/* RCP: VUSRC */
typedef enum {
    VU_METER_SOURCE_PRE_MIXER,
    VU_METER_SOURCE_POST_MIXER
} vu_meter_source_t;

/* RCP: HISTTYPE */
typedef enum
{
    HISTOGRAM_TYPE_RGB,
    HISTOGRAM_TYPE_LUMA
} histogram_type_t;

/* RCP: MMMISOND */
typedef enum
{
    MOTION_MOUNT_ISO_PULL_DISABLE,
    MOTION_MOUNT_ISO_PULL_ENABLE
} motion_mount_iso_pull_t;

/* RCP: SHRCKDST */
typedef enum
{
    FOCUS_RACK_SHOW_DISTANCE_DISABLE,
    FOCUS_RACK_SHOW_DISTANCE_ENABLE
} focus_rack_show_distance_t;

/* RCP: TCDMODE */
typedef enum {
    TC_DISPLAY_TOD,
    TC_DISPLAY_EDGE
} tc_display_t;

/* RCP: TCDFMODE */
typedef enum {
    TC_DISPLAY_DROP_FRAME,
    TC_DISPLAY_NON_DROP_FRAME
} tc_drop_frame_display_t;

/* RCP: TCSOURCE */
typedef enum
{
    TC_SOURCE_USER,
    TC_SOURCE_BRAIN,
    TC_SOURCE_REAR_MODULE,
    TC_SOURCE_INTERNAL
} tc_source_t;

/* RCP: F0MODE, F1MODE, F2MODE */
typedef enum
{
    GUIDE_ASPECT_RATIO_ABSOLUTE = -3,
    GUIDE_ASPECT_RATIO_USER = -2,
    GUIDE_ASPECT_RATIO_OFF = -1,
    GUIDE_ASPECT_RATIO_FULL = 0,
    GUIDE_ASPECT_RATIO_4__3 = 1333333,
    GUIDE_ASPECT_RATIO_16__9 = 1777778,
    GUIDE_ASPECT_RATIO_1_85__1 = 1850000,
    GUIDE_ASPECT_RATIO_1_9__1 = 1896296,
    GUIDE_ASPECT_RATIO_2_4__1 = 2400000
} guide_aspect_ratio_t;

/* RCP: F0LNST, F1LNST, F2LNST */
typedef enum
{
    GUIDE_LINE_STYLE_SOLID,
    GUIDE_LINE_STYLE_DASHED,
    GUIDE_LINE_STYLE_BRACKET,
    GUIDE_LINE_STYLE_NONE,
    GUIDE_LINE_STYLE_COUNT
} guide_line_style_t;

/* RCP: AFCNFRMS */
typedef enum
{
    FOCUS_ASSIST_NONE,
    FOCUS_ASSIST_CIRCLE,
    FOCUS_ASSIST_BAR,
    FOCUS_ASSIST_PIE
} focus_assist_type_t;

/* RCP: AEMETERM */
typedef enum {
    AE_METERING_AVERAGE,
    AE_METERING_CENTER_WEIGHTED,
    AE_METERING_SPOT,
    AE_METERING_EVALUATIVE,
    AE_METERING_TOGGLE
} ae_metering_t;

/* RCP: AESPEED */
typedef enum {
    AE_SPEED_SLOW,
    AE_SPEED_NORMAL,
    AE_SPEED_FAST
} ae_speed_t;

/* RCP: AESELECT */
typedef enum {
    AE_SELECTION_LIST_ONLY_SAVE,
    AE_SELECTION_LIST_ONLY_CLOSEST,
    AE_SELECTION_FREE
} ae_selection_t;

/* RCP: AEEXPRI */
typedef enum {
    AE_EXPOSURE_PRIORITY_M,
    AE_EXPOSURE_PRIORITY_A,
    AE_EXPOSURE_PRIORITY_AV,
    AE_EXPOSURE_PRIORITY_TV
} ae_exposure_priority_t;

/* RCP: CH12SRC, CH34SRC */
typedef enum {
    AUDIO_CHANNEL_SOURCE_NONE,
    AUDIO_CHANNEL_SOURCE_CAM_ANALOG12,
    AUDIO_CHANNEL_SOURCE_PRO_IO_ANALOG12,
    AUDIO_CHANNEL_SOURCE_PRO_IO_DIGITAL12,
    AUDIO_CHANNEL_SOURCE_PRO_IO_DIGITAL34
} audio_channel_source_t;

/* RCP: CH1MODE, CH2MODE, CH3MODE, CH4MODE */
typedef enum {
    AUDIO_CHANNEL_MODE_OFF,
    AUDIO_CHANNEL_MODE_DYN_MIC,       /* for analog input, Unbalanced Dynamic Microphone */
    AUDIO_CHANNEL_MODE_48V_MIC,       /* for analog input, Balanced Mic with Phantom Power !!Should not be set Directly !!! */
    AUDIO_CHANNEL_MODE_AES_LOCK,      /* for digital input, AS Locked (Not supported in current HW) */
    AUDIO_CHANNEL_MODE_AES_FREE,      /* for digital input, AES Free-Running */
    AUDIO_CHANNEL_MODE_LINE,          /* Analog Line(0dBu) in (Only supported on Pro I/O) */
    AUDIO_CHANNEL_MODE_BAL_MIC,       /* Balanced Mic without Phantom Power */
    AUDIO_CHANNEL_MODE_LINE_1         /* Analog Line(0VU) in (Only supported on Pro I/O) */
} audio_channel_mode_t;

typedef enum {
    NOTIFICATION_PROGRESS_NONE,
    NOTIFICATION_PROGRESS_NORMAL,
    NOTIFICATION_PROGRESS_INFINITE
} notification_progress_t;

typedef enum {
    NOTIFICATION_SEVERITY_NOTE,
    NOTIFICATION_SEVERITY_WARNING,
    NOTIFICATION_SEVERITY_ERROR
} notification_severity_t;

typedef enum
{
    NOTIFICATION_STYLE_POPUP,
    NOTIFICATION_STYLE_STATUS
} notification_style_t;

/* RCP: SHSYNC */
typedef enum {
    SYNC_MODE_OFF,
    SYNC_MODE_TRI_LEVEL,   /* requires external tri-level source, aka Genlcok */
    SYNC_MODE_SHUTTER,     /* external single pulses in, double pulse to sensor, aka MoCo */
    SYNC_MODE_DEPRECATED_1,
    SYNC_MODE_DEPRECATED_2,
    SYNC_MODE_DEPRECATED_3,
    SYNC_MODE_COUNT,
    SYNC_MODE_INVALID = SYNC_MODE_COUNT
} sync_mode_t;

/* RCP: GPIN */
typedef enum {
    GPI_FUNCTION_EXTERNAL_SYNCI,
    GPI_FUNCTION_GP_INPUT
} gpi_function_t;

/* RCP: GPOUT */
typedef enum {
    GPO_FUNCTION_EXTERNAL_SYNCO,
    GPO_FUNCTION_GP_OUTPUT
} gpo_function_t;

/* RCP: GENSRC */
typedef enum
{
    GENLOCK_SOURCE_BRAIN,
    GENLOCK_SOURCE_REAR_MODULE
} genlock_source_t;

typedef enum {
    RCP_MENU_NODE_TYPE_BRANCH,
    RCP_MENU_NODE_TYPE_ACTION_LEAF,
    RCP_MENU_NODE_TYPE_CURVE_LEAF,
    RCP_MENU_NODE_TYPE_ENABLE_LEAF,
    RCP_MENU_NODE_TYPE_IP_ADDRESS_LEAF,
    RCP_MENU_NODE_TYPE_LIST_LEAF,
    RCP_MENU_NODE_TYPE_NUMBER_LEAF,
    RCP_MENU_NODE_TYPE_TEXT_LEAF,
    RCP_MENU_NODE_TYPE_ORDERED_LIST_LEAF,
    RCP_MENU_NODE_TYPE_DATETIME_LEAF,
    RCP_MENU_NODE_TYPE_TIMECODE_LEAF,
    RCP_MENU_NODE_TYPE_STATUS_LEAF,
    RCP_MENU_NODE_TYPE_MULTI_ACTION_LIST_LEAF,
    RCP_MENU_NODE_TYPE_NOT_YET_SUPPORTED_LEAF,
    RCP_MENU_NODE_TYPE_CLIP_LIST_LEAF,
    RCP_MENU_NODE_TYPE_GIO_SCOPE_LEAF,
    RCP_MENU_NODE_TYPE_KEY_MAPPING_LEAF
} rcp_menu_node_type_t;

typedef enum {
    RCP_MENU_NODE_FILTER_NONE = 0,
    RCP_MENU_NODE_FILTER_RECORD_ONLY = 1,
    RCP_MENU_NODE_FILTER_PLAYBACK_ONLY = 2,
    RCP_MENU_NODE_FILTER_RECORD_AND_PLAYBACK = RCP_MENU_NODE_FILTER_RECORD_ONLY | RCP_MENU_NODE_FILTER_PLAYBACK_ONLY
} rcp_menu_node_filter_t;

typedef enum {
    RCP_MENU_ACTION_NODE_PERFORM_ACTION,
    RCP_MENU_ACTION_NODE_CANCEL_ACTION
} rcp_menu_action_node_t;

/* RCP: HORIZON */
typedef enum
{
    UI_ENABLE_HORIZON_DISABLED,
    UI_ENABLE_HORIZON_ENABLED,
    UI_ENABLE_HORIZON_TOGGLE
} ui_enable_horizon_t;

/* RCP: BEEPREC, BEEPSTOP, BEEPTAGS */
typedef enum
{
    AUDIO_SIGNAL_NONE,
    AUDIO_SIGNAL_BEEP,
    AUDIO_SIGNAL_BEEP_2,
    AUDIO_SIGNAL_BEEP_ASC,
    AUDIO_SIGNAL_BEEP_DES,
    AUDIO_SIGNAL_MONEY,
    AUDIO_SIGNAL_SHUTTER,
    AUDIO_SIGNAL_COUNT
} audio_signal_t;

/* RCP: SERPROTO */
typedef enum {
    UART_PROTOCOL_NONE,
    UART_PROTOCOL_ET,
    UART_PROTOCOL_TA,
    UART_PROTOCOL_DEPRECIATED_1,
    UART_PROTOCOL_SERIAL_SHELL,
    UART_PROTOCOL_RCP,
    UART_PROTOCOL_RCP_3D_METADATA,
    UART_PROTOCOL_RCP_CAM_TO_CAM,
    UART_PROTOCOL_COOKE_I,
    UART_PROTOCOL_PRESTON
} uart_protocol_t;

/* RCP: HDMIR, HDSDIR, PHDSDI1R, PHDSDI2R */
typedef enum
{
    MONITOR_RESOLUTION_480,
    MONITOR_RESOLUTION_600,
    MONITOR_RESOLUTION_720,
    MONITOR_RESOLUTION_784,
    MONITOR_RESOLUTION_1080,
    MONITOR_RESOLUTION_360,
    MONITOR_RESOLUTION_1200,
    MONITOR_RESOLUTION_768,
    MONITOR_RESOLUTION_848,
    MONITOR_RESOLUTION_480P,
    MONITOR_RESOLUTION_720_NO_PD,
    MONITOR_RESOLUTION_UHD,
    MONITOR_RESOLUTION_1200_2,
    MONITOR_RESOLUTION_COUNT
} monitor_resolution_t;

typedef enum
{
    FREQUENCY_AUTO,
    FREQUENCY_23_98 = 24000,
    FREQUENCY_24 = 24024,
    FREQUENCY_25 = 25025,
    FREQUENCY_29_97 = 30000,
    FREQUENCY_30 = 30030,
    FREQUENCY_48 = 48048,
    FREQUENCY_50 = 50050,
    FREQUENCY_59_94 = 60000,
    FREQUENCY_60 = 60060
} monitor_frequency_t;

/* RCP: AF_ZONE_COLOR, GUIDE_FRAME_0_COLOR, GUIDE_FRAME_1_COLOR */
/* GUIDE_FRAME_2_COLOR, GUIDE_CENTER_COLOR, GUIDE_GRID_COLOR, GUIDE_LOOKAROUND_COLOR */
typedef enum {
    FRAMEGUIDE_COLOR_BLACK,
    FRAMEGUIDE_COLOR_RED,
    FRAMEGUIDE_COLOR_BLUE,
    FRAMEGUIDE_COLOR_GREEN,
    FRAMEGUIDE_COLOR_YELLOW,
    FRAMEGUIDE_COLOR_MAGENTA,
    FRAMEGUIDE_COLOR_CYAN,
    FRAMEGUIDE_COLOR_DARKGRAY,
    FRAMEGUIDE_COLOR_WHITE,
    FRAMEGUIDE_COLOR_DEFAULT,
    FRAMEGUIDE_COLOR_COUNT
} frameguide_color_t;

/* RCP: AWBMODE */
typedef enum {
    AWB_MODE_OFF,
    AWB_MODE_SINGLESHOT
} awb_mode_t;

/* RCP: TARGET */
typedef enum {
    RCP_TARGET_ALL,
    RCP_TARGET_NONE,
    RCP_TARGET_CUSTOM
} rcp_target_t;

typedef enum {
    MEDIA_LOC_ACTIVE,
    MEDIA_LOC_SIDE,
    MEDIA_LOC_REAR
} media_loc_t;

/* RCP: LCDCV, HDMICV, HDSDICV, PLCDCV */
/*      PHDSD1CV, PHDSD2CV, EVFCV, REVFCV */
typedef enum
{
    MONITOR_CURVE_NEUTRAL,
    MONITOR_CURVE_GRADED,
    MONITOR_CURVE_PRIMARY_ACESCC,
    MONITOR_CURVE_PRIMARY_BT1886,
    MONITOR_CURVE_PRIMARY_HDR2084,
    MONITOR_CURVE_PRIMARY_LOG3G10,
    MONITOR_CURVE_PRIMARY_REDGAMMA2,
    MONITOR_CURVE_PRIMARY_REDGAMMA3,
    MONITOR_CURVE_PRIMARY_REDGAMMA4,
    MONITOR_CURVE_PRIMARY_REDLOGFILM,
    MONITOR_CURVE_PRIMARY_REC709,
    MONITOR_CURVE_3DLUT,
    MONITOR_CURVE_3DLUT_ACESCC_SDR,
    MONITOR_CURVE_3DLUT_BT1886_SDR,
    MONITOR_CURVE_3DLUT_HDR2084_SDR,
    MONITOR_CURVE_3DLUT_LOG3G10_SDR,
    MONITOR_CURVE_3DLUT_REDLOGFILM_SDR,
    MONITOR_CURVE_3DLUT_REC709_SDR,
    MONITOR_CURVE_COUNT
} monitor_curve_t;

/* RCP: DROPREG */
typedef enum
{
    DROP_REGION_START,
    DROP_REGION_END
} drop_region_t;

typedef enum
{
    RCP_INTERFACE_UNKNOWN,
    RCP_INTERFACE_BRAIN_SERIAL,
    RCP_INTERFACE_BRAIN_GIGABIT_ETHERNET,
    RCP_INTERFACE_REDLINK_BRIDGE,
    RCP_INTERFACE_BRAIN_WIFI,
    RCP_INTERFACE_REDMOTE_REDLINK,
    RCP_INTERFACE_INTERNAL,
    RCP_INTERFACE_COUNT
} rcp_interface_t;

/* RCP: CNA1STA */
typedef enum
{
    RCP_CNA1_STATUS_DISABLED,           /* interface is turned off */
    RCP_CNA1_STATUS_UNCONFIGURED,       /* no IP configured */
    RCP_CNA1_STATUS_CONNECTING,         /* trying to connect */
    RCP_CNA1_STATUS_CONNECTED,          /* connected and operating */
    RCP_CNA1_STATUS_ERROR               /* something is broken */
} rcp_cna1_status_t;

/* RCP: WLANSTAT */
typedef enum {
    WL_STATUS_OFFLINE,          /* Offline */
    WL_STATUS_SEARCHING,        /* Searching for infrastructure network */
    WL_STATUS_CONNECTING,       /* Connecting to infrastructure network or establishing ad-hoc network */
    WL_STATUS_CONNECTED,        /* Connected to infrastructure network or ad-hoc network established */
    WL_STATUS_LOST,             /* Has lost its infrastructure connection - will try to re-connect */
    WL_STATUS_ERROR             /* Has failed to establish an infrastructure network connection */
} wl_status_t;

/* RCP: MTMST0, MTMST1, MTMST2 */
typedef enum {
    MC_MOTOR_STATUS_UNCONNECTED = 0, /* No Motor Connected */
    MC_MOTOR_STATUS_ERROR = 1,       /* Error */
    MC_MOTOR_STATUS_IDLE = 2,        /* Motor is Idle */
    MC_MOTOR_STATUS_MOVING = 3,      /* Motor is Moving */
    MC_MOTOR_STATUS_HOMING = 4       /* Motor is searching homing position */
} mc_motor_status_t;

/* RCP: RMSTATE */
typedef enum {
    REDMOTE_CONNECTED_STATE_NOT_CONNECTED,      /* REDMOTE is not connected */
    REDMOTE_CONNECTED_STATE_CONNECTED           /* REDMOTE is connected */
} redmote_connected_state_t;

typedef enum {
    CAMERA_CAPTURE_MODE_MOTION = 2,
    CAMERA_CAPTURE_MODE_STILLS = 4
} camera_capture_mode_t;

typedef enum
{
    PRIMARY_STORAGE_LOCAL,
    PRIMARY_STORAGE_NETWORK,
    PRIMARY_STORAGE_EXTERNAL,
    PRIMARY_STORAGE_COUNT
} primary_storage_t;

typedef enum
{
    MONITOR_NULL = -1,
    MONITOR_BRAIN_LCD = 0,
    MONITOR_BRAIN_EVF,
    MONITOR_BRAIN_HDMI,
    MONITOR_BRAIN_HDSDI,
    MONITOR_REAR_LCD,
    MONITOR_REAR_EVF,
    MONITOR_REAR_HDSDI_1,
    MONITOR_REAR_HDSDI_2,
    MONITOR_BRAIN_LCD3,
    MONITOR_BRAIN_EVF3,
    MONITOR_REAR_UHDSDI_1,
    MONITOR_REAR_UHDSDI_2,
    MONITOR_COUNT
} monitor_t;

typedef enum {
    VIDEO_CODEC_PRORES_4444 = 0,
    VIDEO_CODEC_PRORES_4444XQ,
    VIDEO_CODEC_PRORES_422HQ,
    VIDEO_CODEC_PRORES_422,
    VIDEO_CODEC_PRORES_422LT,
    VIDEO_CODEC_DNX_444,
    VIDEO_CODEC_DNX_HQX,
    VIDEO_CODEC_DNX_HQ,
    VIDEO_CODEC_DNX_SQ,
    VIDEO_CODEC_DNX_LB,
    VIDEO_CODEC_COUNT
} video_codec_t;

typedef enum {
    FILE_FORMAT_REDCODE_RAW,
    FILE_FORMAT_QUICKTIME,
    FILE_FORMAT_REDCODE_RAW_PLUS_QUICKTIME,
    FILE_FORMAT_MXF,
    FILE_FORMAT_REDCODE_RAW_PLUS_MXF,
    FILE_FORMAT_COUNT
} file_format_t;

typedef enum {
    FILE_FORMAT_TYPE_RAW,
    FILE_FORMAT_TYPE_BAKED,
    FILE_FORMAT_TYPE_COUNT
} file_format_type_t;

typedef enum {
    CODEC_RESOLUTION_2K = 0,
    CODEC_RESOLUTION_4K,
    CODEC_RESOLUTION_COUNT
} codec_resolution_t;

typedef enum {
    /* When adding HW capabilities to this enum, remember to also add it to the hw_cap_name[]
     * table in hw_cap_if.cpp
     * */

    HW_CAP_COLOR_SENSOR,
    HW_CAP_WIFI,
    HW_CAP_FIZ,
    HW_CAP_GIG_ETHERNET,
    HW_CAP_TETHERING,
    HW_CAP_SIDE_UI,
    HW_CAP_ND_CONTROL,
    HW_CAP_3D_LUT,
    HW_CAP_MON_BRAIN_LCD_EVF,
    HW_CAP_SW,
    HW_CAP_MON_BRAIN_HDMI,
    HW_CAP_MON_BRAIN_HDSDI,
    HW_CAP_MON_REAR_LCD_EVF,
    HW_CAP_WIRELESS_HAND_CONTROLLER,
    HW_CAP_MON_REAR_HDSDI_1,
    HW_CAP_MON_REAR_HDSDI_2,
    HW_CAP_CONTROL_UART,
    HW_CAP_REDMOTE_COMM,
    HW_CAP_PRORES,
    HW_CAP_HEADPHONE,
    HW_CAP_AUDIO_OUT,
    HW_CAP_MONITOR_WITH_AUDIO,
    HW_CAP_AUDIO_PHANTOM_POWER,
    HW_CAP_AUDIO_LIMITER,
    HW_CAP_TIMECODE_IN,
    HW_CAP_TIMECODE_OUT,
    HW_CAP_GENLOCK,
    HW_CAP_GPI,
    HW_CAP_GPO,
    HW_CAP_SYNC_IN,
    HW_CAP_SYNC_OUT,
    HW_CAP_GPI_SYNC_IN_MUXED,
    HW_CAP_GPO_SYNC_OUT_MUXED,
    HW_CAP_PRO_IO_GPI_A,
    HW_CAP_PRO_IO_GPI_B,
    HW_CAP_PRO_IO_SW_1,
    HW_CAP_PRO_IO_SW_2,
    HW_CAP_LCD_EVF_2_HDMI_MUX,
    HW_CAP_SIDE_HANDLE,
    HW_CAP_POWER_OUT_PRO_IO_GPIO,
    HW_CAP_POWER_OUT_PRO_IO_PWR,
    HW_CAP_POWER_OUT_PRO_IO_AUX,
    HW_CAP_POWER_OUT_PLUS_ONE_PWR,
    HW_CAP_POWER_OUT_BAT_AUX,
    HW_CAP_POWER_OUT_BAT_AUX_WITH_ENABLE,
    HW_CAP_POWER_OUT_JETPACK_USB,
    HW_CAP_MULTI_MONITOR_FEEDS,
    HW_CAP_MON_BRAIN_LCD_EVF_MULTI_FEEDS,
    HW_CAP_MON_BRAIN_HDMI_MULTI_FEEDS,
    HW_CAP_MON_BRAIN_HDSDI_MULTI_FEEDS,
    HW_CAP_MON_REAR_LCD_EVF_MULTI_FEEDS,
    HW_CAP_MON_REAR_HDSDI_1_MULTI_FEEDS,
    HW_CAP_MON_REAR_HDSDI_2_MULTI_FEEDS,
    HW_CAP_SSD_TALLY_LIGHT,
    HW_CAP_STROBE,
    HW_CAP_MULTI_MONITOR_FEED_0,
    HW_CAP_MULTI_MONITOR_FEED_1,
    HW_CAP_MULTI_MONITOR_FEED_1_AND_3D_LUT,
    HW_CAP_POWER_OUT_REAR_PTAP,
    HW_CAP_CONTROL_UART_2,
    HW_CAP_POWER_OUT_REAR_AUX,
    HW_CAP_POWER_OUT_TIMECODE,
    HW_CAP_SW_2,
    HW_CAP_AUDIO_MODE_NO_UI_CONTROL_12,
    HW_CAP_AUDIO_MODE_UI_CONTROL_12,
    HW_CAP_AUDIO_MODE_UI_CONTROL_34,
    HW_CAP_WEAPON_SIDE_HANDLE,
    HW_CAP_MON_LCD3_EVF3,
    HW_CAP_MON_LCD3_EVF3_MULTI_FEEDS,
    HW_CAP_AUDIO_CAM_MIC_12,
    HW_CAP_AUDIO_REAR_ANALOG_12,
    HW_CAP_AUDIO_REAR_DIGITAL_12,
    HW_CAP_AUDIO_REAR_DIGITAL_34,
    HW_CAP_THIRD_PARTY_OLPFS,
    HW_CAP_PL_POWER,
    HW_CAP_PL_DETECT,
    HW_CAP_GENLOCK_MUXED,
    HW_CAP_AUDIO_MODE_NO_UI_CONTROL_34,
    HW_CAP_TOP_MODULE_RECORD_BUTTON,
    HW_CAP_SIDE_MODULE_FOCUS_WHEEL,
    HW_CAP_SIDE_MODULE_KEYS,
    HW_CAP_SIDE_MODULE_RECORD,
    HW_CAP_SIDE_MODULE_NAVIGATION,
    HW_CAP_INTERNAL_AMBIENT,
    HW_CAP_COLOR_SCIENCE_IPP2,
    HW_CAP_PRESTON_FIZ,
    HW_CAP_SIDE_UI_LEFT,
    HW_CAP_SIDE_UI_RIGHT,
    HW_CAP_MON_REAR_UHDSDI_1,
    HW_CAP_MON_REAR_UHDSDI_2,
    HW_CAP_RETURN_FEED,
    HW_CAP_MON_BRAIN_LCD_EVF_RETURN_FEED,
    HW_CAP_MON_BRAIN_HDMI_RETURN_FEED,
    HW_CAP_MON_BRAIN_HDSDI_RETURN_FEED,
    HW_CAP_MON_REAR_LCD_EVF_RETURN_FEED,
    HW_CAP_MON_REAR_HDSDI_1_RETURN_FEED,
    HW_CAP_MON_REAR_HDSDI_2_RETURN_FEED,
    HW_CAP_MON_LCD3_EVF3_RETURN_FEED,
    HW_CAP_MON_REAR_UHDSDI_1_2_SHARED,
    HW_CAP_FRAME_PROCESSING,
    HW_CAP_ANAMORPHIC,
    HW_CAP_LOOKAROUND,
    HW_CAP_ALLOW_ISO_CALIBRATION1,
    HW_CAP_DROP_FRAME_TIMECODE,
    HW_CAP_PRIVATE_0,
    HW_CAP_SENSOR_FLIP,
    HW_CAP_PRIVATE_1,
    HW_CAP_COUNT
} hw_cap_t;

typedef enum {
    WL_MODE_DISABLED,
    WL_MODE_AD_HOC,
    WL_MODE_INFRASTRUCTURE
} wl_mode_t;

typedef enum {
    WL_ENCRYPTION_NONE,
    WL_ENCRYPTION_WEP,
    WL_ENCRYPTION_WPA,
    WL_ENCRYPTION_WPA2
} wl_encryption_t;

typedef enum {
    WL_ERROR_NO_ERROR,
    WL_ERROR_WRONG_PASSPHRASE,
    WL_ERROR_WRONG_ENCRYPTION,
    WL_ERROR_CONNECTION_FAILED,
    WL_ERROR_UNKNOWN_ERROR,
    WL_ERROR_INVALID_WEP_PW,
    WL_ERROR_INVALID_IP_ADDR,
    WL_ERROR_INVALID_ADHOC_PW
} wl_error_t;

typedef enum {
    MULTI_ACTION_LIST_LEAF_PROPERTY_CLOSE_ON_ACTION = 0x10000,

    MULTI_ACTION_LIST_LEAF_ENABLE_MASK = 0x0f,
    MULTI_ACTION_LIST_LEAF_PROPERTY_MASK = 0xf0,
    MULTI_ACTION_LIST_LEAF_ENABLE_BIT_MASK = 0xffff,
    MULTI_ACTION_LIST_LEAF_PROPERTY_BIT_MASK = 0x000f0000,

    MULTI_ACTION_LIST_LEAF_PROPERTY_BIT_SHIFT = 12
} multi_action_list_leaf_property_t;

/* RCP: PWRSAVE */
typedef enum {
    POWER_SAVE_STATE_NORMAL,
    POWER_SAVE_STATE_LEVEL_1,
    POWER_SAVE_STATE_LEVEL_2,
    POWER_SAVE_STATE_LEVEL_3
} power_save_state_t;

typedef enum
{
    RFTP_SUCCESS,                               /* No error */
    RFTP_TRANSFER_COMPLETE,                     /* No error, file transfer completed */
    RFTP_ERROR_FILE_NOT_FOUND,                  /* File not found (when retrieving a remote file) */
    RFTP_ERROR_FILE_EXISTS,                     /* File already exists (when sending a local file) */
    RFTP_ERROR_NO_READ_PERMISSION,              /* Read permission denied (when retrieving a remote file) */
    RFTP_ERROR_NO_WRITE_PERMISSION,             /* Write permission denied (when sending a local file) */
    RFTP_ERROR_INVALID_PATH,                    /* Invalid path specified (when sending a local file to the wrong directory, getting a directory listing for a directory that does not exist, etc.) */
    RFTP_ERROR_NOT_ENOUGH_SPACE,                /* File receiver doesn't have enough space */
    RFTP_ERROR_UNABLE_TO_CREATE_FILE,           /* Other file creation errors */
    RFTP_ERROR_TETHERED_TRANSFER_IN_PROGRESS,   /* A tethered transfer is already in progress (when retrieving another file using tethering) */
    RFTP_ERROR_INTERNAL                         /* Internal error  */
} rftp_error_t;

typedef enum
{
    RFTP_PERMISSION_DIRECTORY = 0x01,
    RFTP_PERMISSION_READ = 0x02,
    RFTP_PERMISSION_WRITE = 0x04
} rftp_permission_t;

typedef enum
{
    RFTP_TYPE_NONE,
    RFTP_TYPE_STORE,
    RFTP_TYPE_RETRIEVE,
    RFTP_TYPE_ABORT_STORE,
    RFTP_TYPE_ABORT_RETRIEVE,
    RFTP_TYPE_DELETE,
    RFTP_TYPE_LIST
} rftp_type_t;

typedef enum
{
    VIDEO_SOURCE_GRADED,
    VIDEO_SOURCE_SPLIT_CURVE_RLF,
    VIDEO_SOURCE_ACES,
    VIDEO_SOURCE_ACES_AND_SPLIT_CURVE,
    VIDEO_SOURCE_SPLIT_CURVE_LOG3G12,
    VIDEO_SOURCE_DEPRECATED_0,
    VIDEO_SOURCE_DEPRECATED_1,
    VIDEO_SOURCE_SLOG3,
    VIDEO_SOURCE_SPLIT_CURVE_SLOG3,
    VIDEO_SOURCE_SPLIT_CURVE_LOG3G10,
    VIDEO_SOURCE_ACESCC_ACESAP1,
    VIDEO_SOURCE_LOG3G10_DRAGONCOLOR,
    VIDEO_SOURCE_LOG3G10_DRAGONCOLOR2,
    VIDEO_SOURCE_LOG3G10_REC709,
    VIDEO_SOURCE_LOG3G10_REC709NK,
    VIDEO_SOURCE_LOG3G10_REC2020,
    VIDEO_SOURCE_LOG3G10_REDCOLOR2,
    VIDEO_SOURCE_LOG3G10_REDCOLOR3,
    VIDEO_SOURCE_LOG3G10_REDCOLOR4,
    VIDEO_SOURCE_LOG3G10_RWGRGB,
    VIDEO_SOURCE_3DLUT,
    VIDEO_SOURCE_COUNT
} video_source_t;

typedef enum
{
    MONITOR_FEED_0,
    MONITOR_FEED_1,
    MONITOR_FEED_COUNT
} monitor_feed_t;

typedef enum
{
    REDCODE_RAW_RECORD_STATE_OFF,
    REDCODE_RAW_RECORD_STATE_OK,
    REDCODE_RAW_RECORD_STATE_ERROR,
    REDCODE_RAW_RECORD_STATE_COUNT
} redcode_raw_record_state_t;

typedef enum
{
    QUICKTIME_RECORD_STATE_OFF,
    QUICKTIME_RECORD_STATE_OK,
    QUICKTIME_RECORD_STATE_ERROR,
    QUICKTIME_RECORD_STATE_WARNING,
    QUICKTIME_RECORD_STATE_COUNT
} quicktime_record_state_t;

typedef enum
{
    MXF_RECORD_STATE_OFF,
    MXF_RECORD_STATE_OK,
    MXF_RECORD_STATE_ERROR,
    MXF_RECORD_STATE_WARNING,
    MXF_RECORD_STATE_COUNT
} mxf_record_state_t;

typedef enum {
    FLAT_UI_CONTROL_MODE_LOCAL,
    FLAT_UI_CONTROL_MODE_REMOTE
} flat_ui_control_mode_t;

typedef enum {
    SENSOR_SCAN_DIRECTION_NORMAL,
    SENSOR_SCAN_DIRECTION_ROTATED,
    SENSOR_SCAN_DIRECTION_COUNT
} sensor_scan_direction_t;

typedef enum
{
    HDMI_MUX_LCD_EVF,
    HDMI_MUX_HDMI
} hdmi_mux_t;

/* ZEBRA1M, ZEBRA2M */
typedef enum
{
    ZEBRA_MODE_VIDEO,
    ZEBRA_MODE_RAW,
    ZEBRA_MODE_COUNT
} zebra_mode_t;

typedef enum
{
    ZEBRA_PATTERN_BACK,
    ZEBRA_PATTERN_FORWARD,
    ZEBRA_PATTERN_FILL
} zebra_pattern_t;

typedef enum {
    ZEBRA_COLOR_BLACK,
    ZEBRA_COLOR_RED,
    ZEBRA_COLOR_BLUE,
    ZEBRA_COLOR_GREEN,
    ZEBRA_COLOR_YELLOW,
    ZEBRA_COLOR_MAGENTA,
    ZEBRA_COLOR_CYAN,
    ZEBRA_COLOR_DARKGRAY,
    ZEBRA_COLOR_WHITE
} zebra_color_t;

typedef enum
{
    HDMI_VENDOR_NONE = 0,
    HDMI_VENDOR_ATOMOS,
    HDMI_VENDOR_COUNT
} hdmi_vendor_t;

/* PLDETECT */
typedef enum
{
    PL_DETECT_DISABLE = 0,
    PL_DETECT_RETRY = 5,
    PL_DETECT_ENABLE = 255
} pl_detect_t;

typedef enum
{
    POWER_OUT_PROPERTY_UNSUPPORTED = 0,
    POWER_OUT_PROPERTY_ENABLE = 1,
    POWER_OUT_PROPERTY_CURRENT = 2,
    POWER_OUT_PROPERTY_STATUS = 4,

    POWER_OUT_PROPERTY_RESET = POWER_OUT_PROPERTY_ENABLE | POWER_OUT_PROPERTY_STATUS
} power_out_property_t;

typedef enum
{
    MENU_LABEL_FULL,
    MENU_LABEL_PARENT,
    MENU_LABEL_CHILD,
    MENU_LABEL_FROM_LIST_VAL_WITH_INDEX,
    MENU_LABEL_COUNT
} menu_label_t;

/* RCP: MEDAGCII, */
typedef struct
{
    int32_t index;
    char clip_name[20];
    char clip_date[12];
    char clip_time[10];
    int32_t sensor_fps;
    char edge_start_timecode[14];
    char edge_end_timecode[14];
    char tod_start_timecode[14];
    char tod_end_timecode[14];
    int has_r3d;
    int has_qt;
    int has_mxf;
    char duration[12];
    record_mode_t record_mode;
    char compression[5];
    char format[30];
    char project_fps[20];
    char iso[20];
    char kelvin[20];
    char tint[20];
    char num_frames[10];
    camera_capture_mode_t camera_mode;
    char sensor_fps_str[20];
    tc_drop_frame_display_t drop_frame_display_mode;
} extended_clipinfo_t;

typedef enum
{
    COLOR_SCIENCE_FLUT,
    COLOR_SCIENCE_IPP2,
    COLOR_SCIENCE_COUNT
} color_science_t;

typedef enum
{
    IMAGE_PIPELINE_MODE_LEGACY,
    IMAGE_PIPELINE_MODE_IPP2,
    IMAGE_PIPELINE_MODE_CUSTOM,
    IMAGE_PIPELINE_MODE_COUNT
} image_pipeline_mode_t;

typedef enum
{
    SIDE_UI_PAGE_OFF,
    SIDE_UI_PAGE_ON
} side_ui_page_t;

typedef enum
{
    SIDE_UI_AUTO_HOME_NEVER,
    SIDE_UI_AUTO_HOME_ON_RECORD,
    SIDE_UI_AUTO_HOME_ON_TIMEOUT
} side_ui_auto_home_t;

typedef enum
{
    MAIN_OUTPUT_PRESET_CAMERA_DEFAULT = -1,
    MAIN_OUTPUT_PRESET_ACES_PROXY = 0,
    MAIN_OUTPUT_PRESET_BT1886,
    MAIN_OUTPUT_PRESET_HDR,
    MAIN_OUTPUT_PRESET_HDR2084,
    MAIN_OUTPUT_PRESET_HDR_400,
    MAIN_OUTPUT_PRESET_HDR_1K,
    MAIN_OUTPUT_PRESET_HDR_2K,
    MAIN_OUTPUT_PRESET_HDR_4K,
    MAIN_OUTPUT_PRESET_LOG3G10,
    MAIN_OUTPUT_PRESET_REC709,
    MAIN_OUTPUT_PRESET_REDGAMMA2,
    MAIN_OUTPUT_PRESET_REDGAMMA3,
    MAIN_OUTPUT_PRESET_REDGAMMA4,
    MAIN_OUTPUT_PRESET_REDLOGFILM,
    MAIN_OUTPUT_PRESET_SDR,
    MAIN_OUTPUT_PRESET_SDR_REC709,
    MAIN_OUTPUT_PRESET_SDR_REC709_NO_KNEE,
    MAIN_OUTPUT_PRESET_USER,
    MAIN_OUTPUT_PRESET_RLF_TO_3DLUT,
    MAIN_OUTPUT_PRESET_COUNT
} main_output_preset_t;

/* RCP: DPLCD, DPHDMI, DPHDSDI, DPRLCD  */
/*      DPDSD1, DPPHDSD2, DPEVF, DPREVF */
/*      DPLCD3, DPEVF3                  */
typedef enum
{
    DISPLAY_PRESET_CAMERA_DEFAULT = -1,
    DISPLAY_PRESET_ACES_PROXY = 0,
    DISPLAY_PRESET_FLUT_BT1886,
    DISPLAY_PRESET_FLUT_HDR2084,
    DISPLAY_PRESET_FLUT_LOG3G10,
    DISPLAY_PRESET_FLUT_REDGAMMA2,
    DISPLAY_PRESET_FLUT_REDGAMMA3,
    DISPLAY_PRESET_FLUT_REDGAMMA4,
    DISPLAY_PRESET_FLUT_REDLOGFILM,
    DISPLAY_PRESET_MAIN_HDR,
    DISPLAY_PRESET_MAIN_HDR_400,
    DISPLAY_PRESET_MAIN_HDR_1K,
    DISPLAY_PRESET_MAIN_HDR_2K,
    DISPLAY_PRESET_MAIN_HDR_4K,
    DISPLAY_PRESET_MAIN_SDR,
    DISPLAY_PRESET_MAIN_SDR_REC709,
    DISPLAY_PRESET_MAIN_SDR_REC709_NO_KNEE,
    DISPLAY_PRESET_RWGRGB_HDR,
    DISPLAY_PRESET_RWGRGB_HDR_400,
    DISPLAY_PRESET_RWGRGB_HDR_1K,
    DISPLAY_PRESET_RWGRGB_HDR_2K,
    DISPLAY_PRESET_RWGRGB_HDR_4K,
    DISPLAY_PRESET_RWGRGB_SDR,
    DISPLAY_PRESET_RWGRGB_SDR_REC709,
    DISPLAY_PRESET_RWGRGB_SDR_REC709_NO_KNEE,
    DISPLAY_PRESET_USER,
    DISPLAY_PRESET_RWGRGB_LOG3G10,
    DISPLAY_PRESET_RLF_TO_3DLUT,
    DISPLAY_PRESET_COUNT
} display_preset_t;

typedef enum
{
    OUTPUT_TRANSFORM_CAMERA_DEFAULT = -1,
    OUTPUT_TRANSFORM_ACES_AP1 = 0,
    OUTPUT_TRANSFORM_DRAGONCOLOR,
    OUTPUT_TRANSFORM_DRAGONCOLOR2,
    OUTPUT_TRANSFORM_P3,
    OUTPUT_TRANSFORM_REC709,
    OUTPUT_TRANSFORM_REC2020,
    OUTPUT_TRANSFORM_REDCOLOR2,
    OUTPUT_TRANSFORM_REDCOLOR3,
    OUTPUT_TRANSFORM_REDCOLOR4,
    OUTPUT_TRANSFORM_RWGRGB,
    OUTPUT_TRANSFORM_NONE,
    OUTPUT_TRANSFORM_CUSTOM,
    OUTPUT_TRANSFORM_COUNT
} output_transform_t;

typedef enum
{
    POWER_IN_PROPERTY_NONE = 0,
    POWER_IN_PROPERTY_VOLTAGE = (1 << 0),
    POWER_IN_PROPERTY_PERCENT = (1 << 1),
    POWER_IN_PROPERTY_RUNTIME = (1 << 2),
    POWER_IN_PROPERTY_CURRENT = (1 << 3),
    POWER_IN_PROPERTY_PRESENT = (1 << 4)
} power_in_property_t;

typedef enum
{
    OUTPUT_TONE_MAP_LOW_CONTRAST,
    OUTPUT_TONE_MAP_MEDIUM_CONTRAST,
    OUTPUT_TONE_MAP_HIGH_CONTRAST,
    OUTPUT_TONE_MAP_NONE,
    OUTPUT_TONE_MAP_COUNT
} output_tone_map_t;

typedef enum
{
    RETURN_FEED_DISABLED,
    RETURN_FEED_ON,
    RETURN_FEED_NO_SIGNAL,
    RETURN_FEED_INVALID_SIGNAL,
    RETURN_FEED_INVALID_CAMERA_FORMAT
} return_feed_status_t;

typedef enum
{
    ROLL_OFF_NONE,
    ROLL_OFF_HARD,
    ROLL_OFF_MEDIUM,
    ROLL_OFF_SOFT,
    ROLL_OFF_VERY_SOFT,
    ROLL_OFF_COUNT
} roll_off_t;

#endif
