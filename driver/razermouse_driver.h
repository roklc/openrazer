/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright (c) 2015 Terry Cain <terry@terrys-home.co.uk>
 */

#ifndef __HID_RAZER_MOUSE_H
#define __HID_RAZER_MOUSE_H

#define USB_DEVICE_ID_RAZER_OROCHI_2011 0x0013
#define USB_DEVICE_ID_RAZER_DEATHADDER_3_5G 0x0016
#define USB_DEVICE_ID_RAZER_ABYSSUS_1800 0x0020
#define USB_DEVICE_ID_RAZER_MAMBA_2012_WIRED 0x0024
#define USB_DEVICE_ID_RAZER_MAMBA_2012_WIRELESS 0x0025
#define USB_DEVICE_ID_RAZER_DEATHADDER_3_5G_BLACK 0x0029
#define USB_DEVICE_ID_RAZER_NAGA_2012 0x002E
#define USB_DEVICE_ID_RAZER_IMPERATOR 0x002F
#define USB_DEVICE_ID_RAZER_OUROBOROS 0x0032
#define USB_DEVICE_ID_RAZER_TAIPAN 0x0034
#define USB_DEVICE_ID_RAZER_NAGA_HEX_RED 0x0036
#define USB_DEVICE_ID_RAZER_DEATHADDER_2013 0x0037
#define USB_DEVICE_ID_RAZER_DEATHADDER_1800 0x0038
#define USB_DEVICE_ID_RAZER_OROCHI_2013 0x0039
#define USB_DEVICE_ID_RAZER_NAGA_EPIC_CHROMA 0x003E
#define USB_DEVICE_ID_RAZER_NAGA_EPIC_CHROMA_DOCK 0x003F
#define USB_DEVICE_ID_RAZER_NAGA_2014 0x0040
#define USB_DEVICE_ID_RAZER_NAGA_HEX 0x0041
#define USB_DEVICE_ID_RAZER_ABYSSUS 0x0042
#define USB_DEVICE_ID_RAZER_DEATHADDER_CHROMA 0x0043
#define USB_DEVICE_ID_RAZER_MAMBA_WIRED 0x0044
#define USB_DEVICE_ID_RAZER_MAMBA_WIRELESS 0x0045
#define USB_DEVICE_ID_RAZER_MAMBA_TE_WIRED 0x0046
#define USB_DEVICE_ID_RAZER_OROCHI_CHROMA 0x0048
#define USB_DEVICE_ID_RAZER_DIAMONDBACK_CHROMA 0x004C
#define USB_DEVICE_ID_RAZER_DEATHADDER_2000 0x004F
#define USB_DEVICE_ID_RAZER_NAGA_HEX_V2 0x0050
#define USB_DEVICE_ID_RAZER_NAGA_CHROMA 0x0053
#define USB_DEVICE_ID_RAZER_DEATHADDER_3500 0x0054
#define USB_DEVICE_ID_RAZER_LANCEHEAD_WIRED 0x0059
#define USB_DEVICE_ID_RAZER_LANCEHEAD_WIRELESS 0x005A
#define USB_DEVICE_ID_RAZER_ABYSSUS_V2 0x005B
#define USB_DEVICE_ID_RAZER_DEATHADDER_ELITE 0x005C
#define USB_DEVICE_ID_RAZER_ABYSSUS_2000 0x005E
#define USB_DEVICE_ID_RAZER_LANCEHEAD_TE_WIRED 0x0060
#define USB_DEVICE_ID_RAZER_ATHERIS_RECEIVER 0x0062
#define USB_DEVICE_ID_RAZER_BASILISK 0x0064
#define USB_DEVICE_ID_RAZER_BASILISK_ESSENTIAL 0x0065
#define USB_DEVICE_ID_RAZER_NAGA_TRINITY 0x0067
#define USB_DEVICE_ID_RAZER_ABYSSUS_ELITE_DVA_EDITION 0x006A
#define USB_DEVICE_ID_RAZER_ABYSSUS_ESSENTIAL 0x006B
#define USB_DEVICE_ID_RAZER_MAMBA_ELITE 0x006C
#define USB_DEVICE_ID_RAZER_DEATHADDER_ESSENTIAL 0x006E
#define USB_DEVICE_ID_RAZER_LANCEHEAD_WIRELESS_RECEIVER 0x006F
#define USB_DEVICE_ID_RAZER_LANCEHEAD_WIRELESS_WIRED 0x0070
#define USB_DEVICE_ID_RAZER_DEATHADDER_ESSENTIAL_WHITE_EDITION 0x0071
#define USB_DEVICE_ID_RAZER_MAMBA_WIRELESS_RECEIVER 0x0072
#define USB_DEVICE_ID_RAZER_MAMBA_WIRELESS_WIRED 0x0073
#define USB_DEVICE_ID_RAZER_PRO_CLICK_RECEIVER 0x0077
#define USB_DEVICE_ID_RAZER_VIPER 0x0078
#define USB_DEVICE_ID_RAZER_VIPER_ULTIMATE_WIRED 0x007A
#define USB_DEVICE_ID_RAZER_VIPER_ULTIMATE_WIRELESS 0x007B
#define USB_DEVICE_ID_RAZER_DEATHADDER_V2_PRO_WIRED 0x007C
#define USB_DEVICE_ID_RAZER_DEATHADDER_V2_PRO_WIRELESS 0x007D
#define USB_DEVICE_ID_RAZER_PRO_CLICK_WIRED 0x0080
#define USB_DEVICE_ID_RAZER_BASILISK_X_HYPERSPEED 0x0083
#define USB_DEVICE_ID_RAZER_DEATHADDER_V2 0x0084
#define USB_DEVICE_ID_RAZER_BASILISK_V2 0x0085
#define USB_DEVICE_ID_RAZER_BASILISK_ULTIMATE_WIRED 0x0086
#define USB_DEVICE_ID_RAZER_BASILISK_ULTIMATE_RECEIVER 0x0088
#define USB_DEVICE_ID_RAZER_VIPER_MINI 0x008A
#define USB_DEVICE_ID_RAZER_DEATHADDER_V2_MINI 0x008C
#define USB_DEVICE_ID_RAZER_NAGA_LEFT_HANDED_2020 0x008D
#define USB_DEVICE_ID_RAZER_NAGA_PRO_WIRED 0x008F
#define USB_DEVICE_ID_RAZER_NAGA_PRO_WIRELESS 0x0090
#define USB_DEVICE_ID_RAZER_VIPER_8K 0x0091
#define USB_DEVICE_ID_RAZER_OROCHI_V2_RECEIVER 0x0094
#define USB_DEVICE_ID_RAZER_OROCHI_V2_BLUETOOTH 0x0095
#define USB_DEVICE_ID_RAZER_NAGA_X 0x0096
#define USB_DEVICE_ID_RAZER_DEATHADDER_ESSENTIAL_2021 0x0098
#define USB_DEVICE_ID_RAZER_BASILISK_V3 0x0099
#define USB_DEVICE_ID_RAZER_PRO_CLICK_MINI_RECEIVER 0x009A
#define USB_DEVICE_ID_RAZER_DEATHADDER_V2_X_HYPERSPEED 0x009C
#define USB_DEVICE_ID_RAZER_VIPER_MINI_SE_WIRED 0x009E
#define USB_DEVICE_ID_RAZER_VIPER_MINI_SE_WIRELESS 0x009F
#define USB_DEVICE_ID_RAZER_DEATHADDER_V2_LITE 0x00A1
#define USB_DEVICE_ID_RAZER_COBRA 0x00A3
#define USB_DEVICE_ID_RAZER_VIPER_V2_PRO_WIRED 0x00A5
#define USB_DEVICE_ID_RAZER_VIPER_V2_PRO_WIRELESS 0x00A6
#define USB_DEVICE_ID_RAZER_BASILISK_V3_PRO_WIRED 0x00AA
#define USB_DEVICE_ID_RAZER_BASILISK_V3_PRO_WIRELESS 0x00AB
#define USB_DEVICE_ID_RAZER_COBRA_PRO_WIRED 0x00AF
#define USB_DEVICE_ID_RAZER_COBRA_PRO_WIRELESS 0x00B0
#define USB_DEVICE_ID_RAZER_DEATHADDER_V3 0x00B2
#define USB_DEVICE_ID_RAZER_HYPERPOLLING_WIRELESS_DONGLE 0x00B3
#define USB_DEVICE_ID_RAZER_NAGA_V2_HYPERSPEED_RECEIVER 0x00B4
#define USB_DEVICE_ID_RAZER_DEATHADDER_V3_PRO_WIRED 0x00B6
#define USB_DEVICE_ID_RAZER_DEATHADDER_V3_PRO_WIRELESS 0x00B7
#define USB_DEVICE_ID_RAZER_VIPER_V3_HYPERSPEED 0x00B8
#define USB_DEVICE_ID_RAZER_BASILISK_V3_X_HYPERSPEED 0x00B9
#define USB_DEVICE_ID_RAZER_VIPER_V3_PRO_WIRED 0x00C0
#define USB_DEVICE_ID_RAZER_VIPER_V3_PRO_WIRELESS 0x00C1
#define USB_DEVICE_ID_RAZER_DEATHADDER_V3_PRO_WIRED_ALT 0x00C2
#define USB_DEVICE_ID_RAZER_DEATHADDER_V3_PRO_WIRELESS_ALT 0x00C3

/* Each keyboard report has 90 bytes*/
#define RAZER_REPORT_LEN 0x5A

#define RAZER_MAMBA_ROW_LEN 15          // 0 => 14
#define RAZER_MAMBA_TE_ROW_LEN 16       // 0 => 15
#define RAZER_DIAMONDBACK_ROW_LEN 21    // 0 => 20

#define RAZER_MOUSE_WAIT_MIN_US 600
#define RAZER_MOUSE_WAIT_MAX_US 800

#define RAZER_NEW_MOUSE_RECEIVER_WAIT_MIN_US 31000
#define RAZER_NEW_MOUSE_RECEIVER_WAIT_MAX_US 31100

#define RAZER_ATHERIS_RECEIVER_WAIT_MIN_US 400000
#define RAZER_ATHERIS_RECEIVER_WAIT_MAX_US 400100

#define RAZER_VIPER_MOUSE_RECEIVER_WAIT_MIN_US 59900
#define RAZER_VIPER_MOUSE_RECEIVER_WAIT_MAX_US 60000

#define RAZER_MOUSE_MAX_DPI_STAGES 5

struct razer_mouse_device {
    struct usb_device *usb_dev;
    struct mutex lock;

    struct input_dev *input;
    struct hrtimer repeat_timer;
    unsigned int tilt_hwheel;
    unsigned int tilt_repeat_delay;
    unsigned int tilt_repeat;
    __s32 hwheel_value;
    u8 button_byte; // Previous value of mouse button byte in HID record
    u8 rep4[16]; // Previous value of report 4 on the keyboard intf

    unsigned char usb_interface_protocol;
    unsigned char usb_interface_subclass;

    unsigned short usb_vid;
    unsigned short usb_pid;

    char serial[23]; // Now storing a random serial to be used with old devices that don't support it

    struct {
        unsigned char led;
        unsigned char dpi;
        unsigned short poll;
    } orochi2011;

    // The DeathAdder 3.5G, uses OR logic so need to remember last values. Part of a 4byte payload
    struct {
        unsigned char poll;
        unsigned char dpi;
        unsigned char profile;
        unsigned char leds;
    } da3_5g;
};

// Mamba Key Location
// 0 => 6  --->  top left  => bottom left
// 7 => 13 --->  top right => bottom right
// 14      --->  Scroll LED

// Mamba TE Key Location
// 0 => 6  --->  top left  => bottom left
// 7 => 13 --->  top right => bottom right
// 14      --->  Logo LED
// 15      --->  Scroll LED

#endif
