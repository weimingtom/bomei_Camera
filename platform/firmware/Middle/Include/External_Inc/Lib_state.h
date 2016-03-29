#ifndef _M_STATE_H
#define _M_STATE_H
#include "Lib_event.h"


#define MAX_STACK_DEPTH 21

typedef enum 
{
  eM_s_init_system = 0,
  eM_s_init_power_on = 1,
  eM_s_stdb_standby = 2,
  eM_s_audio_root = 3,
  eM_s_audio_fetch_song = 4,
  eM_s_audio_list_curply = 5,
  eM_s_audio_list = 6,
  eM_s_audio_list_menu = 7,
  eM_s_audio_add_to_mylist = 8,
  eM_s_audio_add_list_to_mylist = 9,
  eM_s_audio_delete_cnfm = 10,
  eM_s_audio_delete_all_cnfm = 11,
  eM_s_audio_player = 12,
  eM_s_audio_menu = 13,
  eM_s_audio_list_repeat_mode = 14,
  eM_s_audio_list_tone_mode = 15,
  eM_s_audio_list_pitch_mode = 16,
  eM_s_audio_list_pre_time = 17,
  eM_s_audio_set_speed = 18,
  eM_s_audio_set_default_path = 19,
  eM_s_audio_list_mylist = 20,
  eM_s_audio_delete_list = 21,
  eM_s_audio_delete_all_list = 22,
  eM_s_audio_update = 23,
  eM_s_camera_preview = 24,
  eM_s_camera_capture = 25,
  eM_s_camera_multishot_show = 26,
  eM_s_camera_shot_show = 27,
  eM_s_camera_recorder = 28,
  eM_s_audio_recorder_menu = 29,
  eM_s_audio_recorder = 30,
  eM_s_audio_recorder_set_mode = 31,
  eM_s_audio_recorder_set_rate = 32,
  eM_s_audio_recorder_list = 33,
  eM_s_audio_recorder_list_menu = 34,
  eM_s_audiorec_delete_cnfm = 35,
  eM_s_audiorec_delete_all_cnfm = 36,
  eM_s_tool_menu = 37,
  eM_s_usb_host = 38,
  eM_s_usb_camera = 39,
  eM_s_video_list = 40,
  eM_s_video_player = 41,
  eM_s_video_menu = 42,
  eM_s_video_delete_cnfm = 43,
  eM_s_video_delete_all_cnfm = 44,
  eM_s_video_add_movie = 45,
  eM_s_video_read_list = 46,
  eM_s_video_list_repeat_mode = 47,
  eM_s_video_save_list = 48,
  eM_s_img_list = 49,
  eM_s_img_browser = 50,
  eM_s_img_menu = 51,
  eM_s_img_thumbnail_view = 52,
  eM_s_img_delete_cnfm = 53,
  eM_s_img_delete_all_cnfm = 54,
  eM_s_img_set_slide = 55,
  eM_s_set_disp_explorer = 56,
  eM_s_set_explorer_menu = 57,
  eM_s_explorer_delete_cnfm = 58,
  eM_s_explorer_delete_all_cnfm = 59,
  eM_s_set_default_path = 60,
  eM_s_explorer_paste_file = 61,
  eM_s_explorer_paste_folder = 62,
  eM_s_set_save_path = 63,
  eM_s_sd_format = 64,
  eM_s_set_menu = 65,
  eM_s_set_disp_language = 66,
  eM_s_set_disp_memory = 67,
  eM_s_set_disp_version = 68,
  eM_s_set_factory_setting = 69,
  eM_s_set_personal_set_menu = 70,
  eM_s_set_disp_brightness = 71,
  eM_s_set_disp_contrast = 72,
  eM_s_set_poff_time = 73,
  eM_s_set_lowbat_time = 74,
  eM_s_set_disp_ss_time = 75,
  eM_s_set_adjust_speaker = 76,
  eM_s_tscr_calibrate = 77,
  eM_s_display_switch = 78,
  eM_s_set_animated_speed = 79,
  eM_s_lib_version = 80,
  eM_s_watchdog_test = 81,
  eM_s_set_font = 82,
  eM_s_set_sys_update = 83,
  eM_s_timeset_menu = 84,
  eM_s_func_calendar = 85,
  eM_s_set_sysclock = 86,
  eM_s_clk_world_map = 87,
  eM_s_set_alarm = 88,
  eM_s_set_alarm_sound = 89,
  eM_s_pub_message_box = 90,
  eM_s_pub_pre_message = 91,
  eM_s_pub_switch_off = 92,
  eM_s_pub_key_unlock = 93,
  eM_s_pub_screen_saver = 94,
  eM_s_pub_reserved1 = 95,
  eM_s_pub_reserved2 = 96,
  eM_s_pub_reserved3 = 97,
  eM_s_pub_del_file = 98,
  eM_s_pub_bat_warn = 99,
  eM_s_pub_empty = 100,
  eM_s_pub_usb = 101,
  eM_s_pub_alarm = 102,
  eM_preproc = 103,
  eM_postproc = 104,
  eM_s_autotest_menu = 105,
  eM_s_autotest_startrecord_menu = 106,
  eM_s_autotest_starttest_normaltest_menu = 107,
  eM_s_autotest_starttest_compatibletest_menu = 108,
  eM_s_autotest_starttest_performancetest_menu = 109,
  eM_s_autotest_starttest_presstest_menu = 110,
  eM_s_autotest_starttest_crosstest_menu = 111,
  eM_s_autotest_stoprecord_menu = 112,
  eM_s_network_menu = 113,
  eM_s_ping_test = 114,
  eM_s_ip_set = 115,
  eM_s_tcp_server = 116,
  eM_s_port_set = 117,
  eM_s_tcp_client = 118,
  eM_s_udp_trans = 119,
  eM_s_network_set_menu = 120,
  eM_s_network_data_trans = 121,
  eM_s_set_send_file = 122,
  eM_s_set_recv_path = 123
} M_STATES;
typedef enum 
{
  eM_handleaudio_add_list_to_mylist = 0,
  eM_handleaudio_add_to_mylist = 1,
  eM_handleaudio_delete_all_cnfm = 2,
  eM_handleaudio_delete_all_list = 3,
  eM_handleaudio_delete_cnfm = 4,
  eM_handleaudio_delete_list = 5,
  eM_handleaudio_fetch_song = 6,
  eM_handleaudio_list = 7,
  eM_handleaudio_list_curply = 8,
  eM_handleaudio_list_menu = 9,
  eM_handleaudio_list_mylist = 10,
  eM_handleaudio_list_pitch_mode = 11,
  eM_handleaudio_list_pre_time = 12,
  eM_handleaudio_list_repeat_mode = 13,
  eM_handleaudio_list_tone_mode = 14,
  eM_handleaudio_menu = 15,
  eM_handleaudio_player = 16,
  eM_handleaudio_recorder = 17,
  eM_handleaudio_recorder_list = 18,
  eM_handleaudio_recorder_list_menu = 19,
  eM_handleaudio_recorder_menu = 20,
  eM_handleaudio_recorder_set_mode = 21,
  eM_handleaudio_recorder_set_rate = 22,
  eM_handleaudio_root = 23,
  eM_handleaudio_set_default_path = 24,
  eM_handleaudio_set_speed = 25,
  eM_handleaudio_update = 26,
  eM_handleaudiorec_delete_all_cnfm = 27,
  eM_handleaudiorec_delete_cnfm = 28,
  eM_handleautotest_menu = 29,
  eM_handleautotest_startrecord_menu = 30,
  eM_handleautotest_starttest_compatibletest_menu = 31,
  eM_handleautotest_starttest_crosstest_menu = 32,
  eM_handleautotest_starttest_normaltest_menu = 33,
  eM_handleautotest_starttest_performancetest_menu = 34,
  eM_handleautotest_starttest_presstest_menu = 35,
  eM_handleautotest_stoprecord_menu = 36,
  eM_handlecamera_capture = 37,
  eM_handlecamera_multishot_show = 38,
  eM_handlecamera_preview = 39,
  eM_handlecamera_recorder = 40,
  eM_handlecamera_shot_show = 41,
  eM_handleclk_world_map = 42,
  eM_handledisplay_switch = 43,
  eM_handleexplorer_delete_all_cnfm = 44,
  eM_handleexplorer_delete_cnfm = 45,
  eM_handleexplorer_paste_file = 46,
  eM_handleexplorer_paste_folder = 47,
  eM_handlefunc_calendar = 48,
  eM_handleimg_browser = 49,
  eM_handleimg_delete_all_cnfm = 50,
  eM_handleimg_delete_cnfm = 51,
  eM_handleimg_list = 52,
  eM_handleimg_menu = 53,
  eM_handleimg_set_slide = 54,
  eM_handleimg_thumbnail_view = 55,
  eM_handleinit_power_on = 56,
  eM_handleinit_system = 57,
  eM_handleip_set = 58,
  eM_handlelib_version = 59,
  eM_handlenetwork_data_trans = 60,
  eM_handlenetwork_menu = 61,
  eM_handlenetwork_set_menu = 62,
  eM_handleping_test = 63,
  eM_handleport_set = 64,
  eM_handlepub_alarm = 65,
  eM_handlepub_bat_warn = 66,
  eM_handlepub_del_file = 67,
  eM_handlepub_empty = 68,
  eM_handlepub_key_unlock = 69,
  eM_handlepub_message_box = 70,
  eM_handlepub_pre_message = 71,
  eM_handlepub_reserved1 = 72,
  eM_handlepub_reserved2 = 73,
  eM_handlepub_reserved3 = 74,
  eM_handlepub_screen_saver = 75,
  eM_handlepub_switch_off = 76,
  eM_handlepub_usb = 77,
  eM_handlesd_format = 78,
  eM_handleset_adjust_speaker = 79,
  eM_handleset_alarm = 80,
  eM_handleset_alarm_sound = 81,
  eM_handleset_animated_speed = 82,
  eM_handleset_default_path = 83,
  eM_handleset_disp_brightness = 84,
  eM_handleset_disp_contrast = 85,
  eM_handleset_disp_explorer = 86,
  eM_handleset_disp_language = 87,
  eM_handleset_disp_memory = 88,
  eM_handleset_disp_ss_time = 89,
  eM_handleset_disp_version = 90,
  eM_handleset_explorer_menu = 91,
  eM_handleset_factory_setting = 92,
  eM_handleset_font = 93,
  eM_handleset_lowbat_time = 94,
  eM_handleset_menu = 95,
  eM_handleset_personal_set_menu = 96,
  eM_handleset_poff_time = 97,
  eM_handleset_recv_path = 98,
  eM_handleset_save_path = 99,
  eM_handleset_send_file = 100,
  eM_handleset_sys_update = 101,
  eM_handleset_sysclock = 102,
  eM_handlestdb_standby = 103,
  eM_handletcp_client = 104,
  eM_handletcp_server = 105,
  eM_handletimeset_menu = 106,
  eM_handletool_menu = 107,
  eM_handletscr_calibrate = 108,
  eM_handleudp_trans = 109,
  eM_handleusb_camera = 110,
  eM_handleusb_host = 111,
  eM_handlevideo_add_movie = 112,
  eM_handlevideo_delete_all_cnfm = 113,
  eM_handlevideo_delete_cnfm = 114,
  eM_handlevideo_list = 115,
  eM_handlevideo_list_repeat_mode = 116,
  eM_handlevideo_menu = 117,
  eM_handlevideo_player = 118,
  eM_handlevideo_read_list = 119,
  eM_handlevideo_save_list = 120,
  eM_handlewatchdog_test = 121
} M_FUNCTIONS;
typedef enum 
{
  eM_ddalarmhandler = 0,
  eM_ddaudioabplay = 1,
  eM_ddaudiorecordstop = 2,
  eM_ddaudiostop = 3,
  eM_ddemptymsghandler = 4,
  eM_ddpiniofliphandler = 5,
  eM_ddpublicdetecthandler = 6,
  eM_ddpubtimerhandler = 7,
  eM_ddsdcardhandler = 8,
  eM_ddsdcbmsghandler = 9,
  eM_ddsysstarthandler = 10,
  eM_ddtouchscreenhandler = 11,
  eM_ddusbhandler = 12,
  eM_dduserkeyhandler = 13,
  eM_ddvideorecordstop = 14,
  eM_ddwakesaverhandler = 15
} M_EFUNCTIONS;
#endif