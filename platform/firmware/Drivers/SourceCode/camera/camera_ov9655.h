/**
 * @FILENAME: camera_ov9655.h
 * @BRIEF camera driver file
 * Copyright (C) 2007 Anyka (GuangZhou) Software Technology Co., Ltd.
 * @AUTHOR 
 * @DATE 2008-02-25
 * @VERSION 1.0
 * @REF
 */ 
#ifndef __CAMERA_OV9655_H__
#define __CAMERA_OV9655_H__


#ifdef USE_CAMERA_OV9655

#define DELAY_FLAG   0xfe
#define END_FLAG     0xff


static const T_U8 INIT_TAB[] = 
{
	//14.3fps
	0x12, 0x80,
	DELAY_FLAG, 100,
	0xb5, 0x00,
	0x35, 0x00,
	0xa8, 0xc1,
	0x3a, 0x8c,    //0x80 to 0x8c, UYVY
	0x3d, 0x99,
	0x77, 0x02,
	0x13, 0xe7,
	0x26, 0x72,
	0x27, 0x08,
	0x28, 0x08,
	0x29, 0x15,
	0x2c, 0x08,
	0xab, 0x04,
	0x6e, 0x00,
	0x6d, 0x55,
	0x00, 0x32,
	0x10, 0x7b,
	0xbb, 0xae,
	0x72, 0x00,
	0x3e, 0x0c,
	0x74, 0x3a,
	0x76, 0x01,
	0x75, 0x35,
	0x73, 0x00,
	0xc7, 0x80,
	0xc3, 0x4e,
	0x33, 0x00,
	0xa4, 0x50,
	0xaa, 0x92,
	0xc2, 0x01,
	0xc1, 0xc8,
	0x1e, 0x04,
	0xa9, 0xef,
	0x0e, 0x61,
	0x39, 0x57,
	0x0f, 0x42,
	0x24, 0x3c,
	0x25, 0x36,
	0x12, 0x62,
	0x03, 0x12,
	0x32, 0xff,
	0x17, 0x16,
	0x18, 0x02,
	0x19, 0x01,
	0x1a, 0x3d,
	0x36, 0xfa,
	0x69, 0x0a,
	0x8c, 0x8d,
	0xc0, 0xaa,
	0x40, 0xc0,
	0xc6, 0x85,
	0xcb, 0xf0,
	0xcc, 0xd8,
	0x71, 0x78,
	0xa5, 0x68,
	0x6f, 0x9e,
	0x42, 0xc1,   //0xc0 to 0xc1, 50HZ banding filer
	0x3f, 0x82, 
	0x8a, 0x23,
	0x14, 0x18,   //0x1a to 0x18
	0x3b, 0x0c,
	0x2d, 0x00,
	0x2e, 0x00,
	0x34, 0x3d,
	0x41, 0x40,
	0xc9, 0xe0,
	0xca, 0xe8,
	0xcd, 0x93,
	0x7a, 0x20,
	0x7b, 0x1c,
	0x7c, 0x28,
	0x7d, 0x3c,
	0x7e, 0x5a,
	0x7f, 0x68,
	0x80, 0x76,
	0x81, 0x80,
	0x82, 0x88,
	0x83, 0x8f,
	0x84, 0x96,
	0x85, 0xa3,
	0x86, 0xaf,
	0x87, 0xc4,
	0x88, 0xd7,
	0x89, 0xe8,
	0x4f, 0x98,
	0x50, 0x98,
	0x51, 0x00,
	0x52, 0x28,
	0x53, 0x70,
	0x54, 0x98,
	0x58, 0x1a,
	0x90, 0x86,
	0x91, 0x84,
	0x9f, 0x75,
	0xa0, 0x73,
	0x16, 0x24,
	0x2a, 0x00,
	0x2b, 0x00,
	0xac, 0x80,
	0xad, 0x80,
	0xae, 0x80,
	0xaf, 0x80,
	0xb2, 0xf2,
	0xb3, 0x20,
	0xb4, 0x20,
	0xb6, 0xaf,
	0xb6, 0xaf,
	0x04, 0x03,
	0x05, 0x2b,
	0x06, 0x35,
	0x07, 0x36,
	0x08, 0x3b,
	0x2f, 0x35,
	0x4a, 0xea,
	0x4b, 0xe6,
	0x4c, 0xe6,
	0x4d, 0xe6,
	0x4e, 0xe6,
	0x70, 0x0b,
	0xa6, 0x40,
	0xbc, 0x04,
	0xbd, 0x01,
	0xbe, 0x03,
	0xbf, 0x01,
	0xbf, 0x01,
	0x43, 0x14,
	0x44, 0xf0,
	0x45, 0x46,
	0x46, 0x62,
	0x47, 0x2a,
	0x48, 0x3c,
	0x59, 0x85,
	0x5a, 0xa9,
	0x5b, 0x64,
	0x5c, 0x84,
	0x5d, 0x53,
	0x5e, 0x0e,
	0x6c, 0x0c,
	0x6d, 0x55,
	0x6e, 0x00,
	0x6f, 0x9e,
	0x62, 0x10,    //0x00 to 0x10
	0x63, 0xd0,    //0x00 to 0xd0
	0x64, 0x06,    //0x08 to 0x06
	0x65, 0x00,    //0x20 to 0x00
	0x66, 0x05,    
	0x9d, 0x06,    //0x08 to 0x06
	0x9e, 0x08,    //0x09 to 0x08
	0x29, 0x15,
	0xa9, 0xef,
	0x11, 0x00,
#if (defined(CHIP_AK7801) || defined(CHIP_AK7802))
	0x6b, 0x1a,    
#else
	0x6b, 0x5a,    //0x1a to 0x5a
#endif
	0x92, 0x18,
	0x93, 0x00,
	0xa2, 0x4a,    //0x4b to 0x4a
	0xa3, 0x3e,    //0x4b to 0x3e
	0x6a, 0x06,    //0x4b to 0x06
	0xc5, 0x07,    //add
	0x1e, 0x04,    //0x14 to 0x04, no flip/mirror
	0x55, 0x00,
	0x56, 0x40,
	0xc6, 0x05,
	0x24, 0x50,
	0x25, 0x48,
	0x26, 0x82,

	END_FLAG, END_FLAG
};

/****************   Camera Resolution Table   ****************/
static const T_U8 SXGA_MODE_TAB[] = 
{//1280*1024
#if (defined(CHIP_AK7801) || defined(CHIP_AK7802))
	0x11, 0x01,   
	0x6b, 0x5a,   //0x1a to 0x5a
#else
	0x11, 0x00,   //0x01 to 0x00
	0x6b, 0xda,   //0x1a to 0xda
#endif	
	0x72, 0x00,
	0x3e, 0x0c,
	0x74, 0x3a,
	0x75, 0x35,
	0x73, 0x01,
	0xc7, 0x80,
	
	0x12, 0x02,	
	0x03, 0x1b,
	0x32, 0xff,
	0x17, 0x1c,
	0x18, 0xbc,
	0x19, 0x01,
	0x1a, 0x81,
	0x41, 0x40,
	
	0x36, 0xf8,
	0x69, 0x02,
	0x8c, 0x0d,
	0xc0, 0xe2,
	0x92, 0x37,
	0x93, 0x00,
	0xa2, 0x4e,
	0xa3, 0x41,   //0x4e to ox41
	0x6a, 0x4e,
	0xc5, 0x4f,   //add

	END_FLAG, END_FLAG
};

static const T_U8 VGA_MODE_TAB[] = 
{//640*480
	0x11, 0x01,  
#if (defined(CHIP_AK7801) || defined(CHIP_AK7802))  
	0x6b, 0x1a,   
#else
	0x6b, 0x5a,    //0x1a to 0x5a
#endif	
	0x72, 0x00,
	0x3e, 0x0c,
	0x74, 0x3a,
	0x75, 0x35,
	0x73, 0x00,
	0xc7, 0x80,

	0x12, 0x62,
	0x03, 0x12,
	0x32, 0xff,
	0x17, 0x16,	
	0x18, 0x02,
	0x19, 0x01,
	0x1a, 0x3d,
	0x41, 0x40,
	
	0x36, 0xfa,
	0x69, 0x0a,
	0x8c, 0x8d,
	0xc0, 0xaa,
	0x92, 0x18,
	0x93, 0x00,
	0xa2, 0x4a,    //0x4b to 0x4a
	0xa3, 0x3e,    //0x4b to 0x3e
	0x6a, 0x06,    //0x4b to 0x06
	0xc5, 0x07,    //add
	
	END_FLAG, END_FLAG
};

static const T_U8 CIF_MODE_TAB[] = 
{//352*288
/*	0x11, 0x01,
#if (defined(CHIP_AK7801) || defined(CHIP_AK7802))  
	0x6b, 0x1a,   
#else
	0x6b, 0x5a,    //0x1a to 0x5a
#endif	
	0x72, 0x00, 
	0x3e, 0x0e,   
	0x74, 0x3a,    
	0x75, 0x35,    
	0x73, 0x01,    
	0xc7, 0x81,    

	0x12, 0x62,
	0x03, 0x09,
	0x32, 0xb6,
	0x17, 0x17,
	0x18, 0x0b,	
	0x19, 0x01,
	0x1a, 0x81,	
	0x41, 0x41,
	
	0x36, 0x3a,    
	0x69, 0x0a,
	0x8c, 0x80,   
	0xc0, 0xaa,
	0x92, 0x18,
	0x93, 0x00,
	0xa2, 0x4a,    
	0xa3, 0x3e,    
	0x6a, 0x06,    
	0xc5, 0x07,     
*/
	0x11, 0x01,
#if (defined(CHIP_AK7801) || defined(CHIP_AK7802))  
	0x6b, 0x1a,   
#else
	0x6b, 0x5a,    //0x1a to 0x5a
#endif	
	0x72, 0x00,
	0x3e, 0x0c,
	0x74, 0x3a,
	0x75, 0x35,
	0x73, 0x00,
	0xc7, 0x80,

	0x12, 0x62,
	0x03, 0x12,
	0x32, 0xbf,   //0xff to 0xbf
	0x17, 0x28,   //0x16 to 0x28
	0x18, 0x54,   //0x02 to 0x54
	0x19, 0x0d,   //0x01 to 0x0d
	0x1a, 0x31,   //0x3d to 0x31
	0x41, 0x40,
	
	0x36, 0xfa,
	0x69, 0x0a,
	0x8c, 0x8d,
	0xc0, 0xaa,
	0x92, 0x18,
	0x93, 0x00,
	0xa2, 0x4a,    //0x4b to 0x4a
	0xa3, 0x3e,    //0x4b to 0x3e
	0x6a, 0x06,    //0x4b to 0x06
	0xc5, 0x07,    //add
	
	END_FLAG, END_FLAG
};

static const T_U8 QVGA_MODE_TAB[] = 
{//320*240
	0x11, 0x01,
#if (defined(CHIP_AK7801) || defined(CHIP_AK7802))  
	0x6b, 0x1a,   
#else
	0x6b, 0x5a,    //0x1a to 0x5a
#endif	   
	0x72, 0x11,    
	0x3e, 0x0e,   
	0x74, 0x10,    
	0x75, 0x10,    
	0x73, 0x01,    
	0xc7, 0x81,    

	0x12, 0x62,
	0x03, 0x02,
	0x32, 0x12,
	0x17, 0x18,	
	0x18, 0x04,
	0x19, 0x01,
	0x1a, 0x81,
	0x41, 0x41,
	
	0x36, 0x3a,    
	0x69, 0x0a,
	0x8c, 0x80,   
	0xc0, 0xaa,
	0x92, 0x18,
	0x93, 0x00,
	0xa2, 0x4a,    
	0xa3, 0x3e,    
	0x6a, 0x06,    
	0xc5, 0x07,    

	END_FLAG, END_FLAG
};

static const T_U8 QCIF_MODE_TAB[] = 
{//176*144
	0x11, 0x01,
#if (defined(CHIP_AK7801) || defined(CHIP_AK7802))  
	0x6b, 0x1a,   
#else
	0x6b, 0x5a,    //0x1a to 0x5a
#endif	   
	0x72, 0x11,    
	0x3e, 0x0e,   
	0x74, 0x3a,    
	0x75, 0x35,    
	0x73, 0x02,    
	0xc7, 0x82,    

	0x12, 0x62,
	0x03, 0x36,   //0x12 to 0x36	
	0x32, 0x80,
	0x17, 0x18,	
	0x18, 0x0c,
	0x19, 0x01,
	0x1a, 0x81,
	0x41, 0x41,
	
	0x36, 0x3a,    
	0x69, 0x0a,
	0x8c, 0x80,   
	0xc0, 0xaa,
	0x92, 0x18,
	0x93, 0x00,
	0xa2, 0x4a,    
	0xa3, 0x3e,    
	0x6a, 0x06,    
	0xc5, 0x07,      

	END_FLAG, END_FLAG
};

static const T_U8 QQVGA_MODE_TAB[] = 
{//160*120
	0x11, 0x01,
#if (defined(CHIP_AK7801) || defined(CHIP_AK7802))  
	0x6b, 0x1a,   
#else
	0x6b, 0x5a,    //0x1a to 0x5a
#endif	    
	0x72, 0x22,    
	0x3e, 0x0e,   
	0x74, 0x10,    
	0x75, 0x10,   
	0x73, 0x02,    
	0xc7, 0x82,    

	0x12, 0x62,
	0x03, 0x02,
	0x32, 0xa4,
	0x17, 0x18,	
	0x18, 0x04,
	0x19, 0x01,
	0x1a, 0x81,
	0x41, 0x41,
	
	0x36, 0x3a,    
	0x69, 0x0a,
	0x8c, 0x80,   
	0xc0, 0xaa,
	0x92, 0x18,
	0x93, 0x00,
	0xa2, 0x4a,   
	0xa3, 0x3e,    
	0x6a, 0x06,    
	0xc5, 0x07,    
	
	END_FLAG, END_FLAG
};

static const T_U8 PREV_MODE_TAB[] = 
{//640*480
	0x11, 0x00,
#if (defined(CHIP_AK7801) || defined(CHIP_AK7802))  
	0x6b, 0x1a,   
#else
	0x6b, 0x5a,    //0x1a to 0x5a
#endif	
	0x72, 0x00,
	0x3e, 0x0c,
	0x74, 0x3a,
	0x75, 0x35,
	0x73, 0x00,
	0xc7, 0x80,
	0x36, 0xfa,
	0x8c, 0x8d,
	0x41, 0x40,
	
	0x12, 0x62,
	0x69, 0x0a,
	0xc0, 0xaa,
	0x18, 0x02,
	0x17, 0x16,
	0x32, 0xff,
	0x03, 0x12,
	0x1a, 0x3d,
	0x19, 0x01,

	0x92, 0x18,
	0x93, 0x00,
	0xa2, 0x4a,    //0x4b to 0x4a
	0xa3, 0x3e,    //0x4b to 0x3e
	0x6a, 0x06,    //0x4b to 0x06
	0xc5, 0x07,    //add

	END_FLAG, END_FLAG
};

static const T_U8 RECORD_MODE_TAB[] = 
{
#if (defined(CHIP_AK7801) || defined(CHIP_AK7802))
	//640*480, 25fps
	0x11, 0x01,
	0x6b, 0x5a,    
	0x72, 0x00,
	0x3e, 0x0c,
	0x74, 0x3a,
	0x75, 0x35,
	0x73, 0x00,
	0xc7, 0x80,
	0x36, 0xfa,
	0x8c, 0x8d,
	0x41, 0x40,
	
	0x12, 0x62,
	0x69, 0x0a,
	0xc0, 0xaa,
	0x18, 0x02,
	0x17, 0x16,
	0x32, 0xff,
	0x03, 0x12,
	0x1a, 0x3d,
	0x19, 0x01,

	0x92, 0x64,   //0x18 to 0x64   
	0x93, 0x00,
	0xa2, 0x95,    //0x4a to 0x95
	0xa3, 0x7c,    //0x3e to 0x7c
	0x6a, 0x06,    //0x4b to 0x06
	0xc5, 0x07,    //add
#else
	//352*288, 25fps
#if (defined(CHIP_AK7801) || defined(CHIP_AK7802))
	0x11, 0x01,  
	0x6b, 0x5a,    //0x1a to 0x5a   
#else
	0x11, 0x00,
	0x6b, 0xda,    //0x1a to 0xda
#endif	
	0x72, 0x00,
	0x3e, 0x0c,
	0x74, 0x3a,
	0x75, 0x35,
	0x73, 0x00,
	0xc7, 0x80,
	0x36, 0xfa,
	0x8c, 0x8d,
	0x41, 0x40,
	
	0x12, 0x62,
	0x69, 0x0a,
	0xc0, 0xaa,
	0x18, 0x54,   //0x02 to 0x54
	0x17, 0x28,   //0x16 to 0x28
	0x32, 0xbf,   //0xff to 0xbf
	0x03, 0x12,
	0x1a, 0x31,   //0x3d to 0x31
	0x19, 0x0d,   //0x01 to 0x0d

	0x92, 0x64,   //0x18 to 0x64   
	0x93, 0x00,
	0xa2, 0x95,    //0x4a to 0x95
	0xa3, 0x7c,    //0x3e to 0x7c
	0x6a, 0x06,    //0x4b to 0x06
	0xc5, 0x07,    //add
#endif

	END_FLAG, END_FLAG
};

const T_U8 SXGA_ROOM_LEVEL0_TAB[]=
{
	0x17, 0x1c,
	0x18, 0xbc,
	0x32, 0xff,
	0x19, 0x01,
	0x1a, 0x81,
	0x03, 0x1b,
	END_FLAG, END_FLAG
};

const T_U8 VGA_ROOM_LEVEL0_TAB[]=
{
	0x17, 0x16,
	0x18, 0x02,
	0x32, 0xff,
	0x19, 0x01,
	0x1a, 0x3d,
	0x03, 0x12,
	END_FLAG, END_FLAG
};

const T_U8 CIF_ROOM_LEVEL0_TAB[]=
{
	0x17, 0x17,
	0x18, 0x0b,
	0x32, 0xb6,
	0x19, 0x01,
	0x1a, 0x81,
	0x03, 0x09,	
	END_FLAG, END_FLAG
};

const T_U8 QVGA_ROOM_LEVEL0_TAB[]=
{
	0x17, 0x18,
	0x18, 0x04,
	0x32, 0x12,
	0x19, 0x01,
	0x1a, 0x81,
	0x03, 0x02,	
	END_FLAG, END_FLAG
};

const T_U8 QCIF_ROOM_LEVEL0_TAB[]=
{
	0x17, 0x18,
	0x18, 0x0c,
	0x32, 0x80,
	0x19, 0x01,
	0x1a, 0x81,
	0x03, 0x36,   //0x12 to 0x36	
	END_FLAG, END_FLAG
};

const T_U8 QQVGA_ROOM_LEVEL0_TAB[]=
{
	0x17, 0x18,
	0x18, 0x04,
	0x32, 0xa4,
	0x19, 0x01,
	0x1a, 0x81,
	0x03, 0x02,	
	END_FLAG, END_FLAG
};

const T_U8 PREV_ROOM_LEVEL0_TAB[]=
{
	0x17, 0x16,
	0x18, 0x02,
	0x32, 0xff,
	0x19, 0x01,
	0x1a, 0x3d,
	0x03, 0x12,
	END_FLAG, END_FLAG
};

/****************   Camera Exposure Table   ****************/
static const T_U8 EXPOSURE_WHOLE_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 EXPOSURE_CENTER_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 EXPOSURE_MIDDLE_TAB[] = 
{
	END_FLAG, END_FLAG
};

/****************   Camera brightness Table   ****************/
static const T_U8 BRIGHTNESS_0_TAB[] = 
{//Brightness -3
	0x55, 0xc0,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_1_TAB[] = 
{//Brightness -2
	0x55, 0xb0,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_2_TAB[] = 
{//Brightness -1
	0x55, 0x98,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_3_TAB[] = 
{//Brightness 0
	0x55, 0x00,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_4_TAB[] = 
{//Brightness +1
	0x55, 0x18,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_5_TAB[] = 
{//Brightness +2
	0x55, 0x30,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_6_TAB[] = 
{//Brightness +3
	0x55, 0x40,
	END_FLAG, END_FLAG
};

/****************   Camera Contrast Table   ****************/
static const T_U8 CONTRAST_1_TAB[] = 
{//Contrast -3
	0x56, 0x20,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_2_TAB[] = 
{//Contrast -2
	0x56, 0x30,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_3_TAB[] = 
{//Contrast -1
	0x56, 0x38,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_4_TAB[] = 
{//Contrast 0
	0x56, 0x40,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_5_TAB[] = 
{//Contrast +1
	0x56, 0x50,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_6_TAB[] = 
{//Contrast +2
	0x56, 0x60,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_7_TAB[] = 
{//Contrast +3
	0x56, 0x70,
	END_FLAG, END_FLAG
};


/****************   Camera Saturation Table   ****************/
static const T_U8 SATURATION_1_TAB[] = 
{//Saturation �C 2
	0x4f, 0x40,
	0x50, 0x40,
	0x51, 0x00,
	0x52, 0x11,
	0x53, 0x2f,
	0x54, 0x40,
	0x58, 0x9e,
	END_FLAG, END_FLAG
};

static const T_U8 SATURATION_2_TAB[] = 
{//Saturation -1
	0x4f, 0x66,
	0x50, 0x66,
	0x51, 0x00,
	0x52, 0x1b,
	0x53, 0x4b,
	0x54, 0x66,
	0x58, 0x9e,
	END_FLAG, END_FLAG
};

static const T_U8 SATURATION_3_TAB[] = 
{//Saturation 0
	0x4f, 0x80,
	0x50, 0x80,
	0x51, 0x00,
	0x52, 0x22,
	0x53, 0x5e,
	0x54, 0x80,
	0x58, 0x9e,
	END_FLAG, END_FLAG
};

static const T_U8 SATURATION_4_TAB[] = 
{//Saturation + 1
	0x4f, 0x99,
	0x50, 0x99,
	0x51, 0x00,
	0x52, 0x28,
	0x53, 0x71,
	0x54, 0x99,
	0x58, 0x9e,
	END_FLAG, END_FLAG
};

static const T_U8 SATURATION_5_TAB[] = 
{//Saturation + 2
	0x4f, 0xc0,
	0x50, 0xc0,
	0x51, 0x00,
	0x52, 0x33,
	0x53, 0x8d,
	0x54, 0xc0,
	0x58, 0x9e,
	END_FLAG, END_FLAG
};


/****************   Camera Sharpness Table   ****************/
static const T_U8 SHARPNESS_0_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_1_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_2_TAB[] =
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_3_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_4_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_5_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_6_TAB[] = 
{
	END_FLAG, END_FLAG
};

/****************   Camera AWB Table   ****************/
static const T_U8 AWB_AUTO_TAB[] = 
{
	0x13, 0xe7, //AWB on
//	0x66, 0x05,
	0x14, 0x18,   //0x1a to 0x18
	0x3b, 0x0c,
	0x2d, 0x00, 
	0x2e, 0x00,
	END_FLAG, END_FLAG
};

static const T_U8 AWB_SUNNY_TAB[] = 
{
	0x13, 0xe5,   //AWB off
	0x01, 0x52,
	0x02, 0x44,
	0x14, 0x08,   //0x0a to 0x08
//	0x66, 0x05,	
	0x3b, 0x0c,
	0x2d, 0x00, 
	0x2e, 0x00,
	END_FLAG, END_FLAG
};

static const T_U8 AWB_CLOUDY_TAB[] = 
{
	0x13, 0xe5,  //AWB off
	0x01, 0x54, 
	0x02, 0x5a,
	0x14, 0x18,   //0x1a to 0x18
//	0x66, 0x05,	
	0x3b, 0x0c,
	0x2d, 0x00, 
	0x2e, 0x00,
	END_FLAG, END_FLAG
};

static const T_U8 AWB_OFFICE_TAB[] = 
{
	0x13, 0xe5,  //AWB off
	0x01, 0x97,
	0x02, 0x7d,
	0x14, 0x18,   //0x1a to 0x18
//	0x66, 0x05,	
	0x3b, 0x0c,
	0x2d, 0x00, 
	0x2e, 0x00,
	END_FLAG, END_FLAG
};

static const T_U8 AWB_HOME_TAB[] =
{
	0x13, 0xe5,  //AWB off
	0x01, 0x9c,
	0x02, 0x54,
	0x14, 0x18,   //0x1a to 0x18
//	0x66, 0x05,	
	0x3b, 0x0c,
	0x2d, 0x00, 
	0x2e, 0x00,
	END_FLAG, END_FLAG
};

static const T_U8 AWB_NIGHT_TAB[] = 
{
//	0x66, 0x00,
	0x13, 0xe7,
	0x14, 0x38,   //0x2a to 0x38
	0x3b, 0xac, 
	END_FLAG, END_FLAG
};

/****************   Camera Mirror Table   ****************/
static const T_U8 MIRROR_V_TAB[] = 
{
	//flip
	0x1e, 0x14,  
	END_FLAG, END_FLAG
};

static const T_U8 MIRROR_H_TAB[] = 
{
	//mirror
	0x1e, 0x24, 
	END_FLAG, END_FLAG
};

static const T_U8 MIRROR_NORMAL_TAB[] = 
{
	//no mirror/flip
	0x1e, 0x04, 
	END_FLAG, END_FLAG
};

static const T_U8 MIRROR_FLIP_TAB[] = 
{
	//flip/mirror
	0x1e, 0x34, 
	END_FLAG, END_FLAG
};

/****************   Camera Effect Table   ****************/
static const T_U8 EFFECT_NORMAL_TAB[] = 
{
	0x3a, 0x8c,
	0x67, 0x80,
	0x68, 0x80,									
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_SEPIA_TAB[] = 
{
	0x3a, 0x9c,
	0x67, 0x40,
	0x68, 0xb0,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_ANTIQUE_TAB[] = 
{
	0x3a, 0x9c,
	0x67, 0xa0,
	0x68, 0x40,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_BLUISH_TAB[] =
{
	0x3a, 0x9c,
	0x67, 0xc0,
	0x68, 0x80,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_GREENISH_TAB[] = 
{
	0x3a, 0x9c,
	0x67, 0x40,
	0x68, 0x40,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_REDDISH_TAB[] = 
{
	0x3a, 0x9c,
	0x67, 0x80,
	0x68, 0xc0,
	END_FLAG, END_FLAG,
};

static const T_U8 EFFECT_NEGATIVE_TAB[] = 
{
	0x3a, 0xac,
	0x67, 0x80,
	0x68, 0x80,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_BW_TAB[] = 
{
	0x3a, 0x9c,
	0x67, 0x80,
	0x68, 0x80,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_BWN_TAB[] = 
{
	0x3a, 0xbc,
	0x67, 0x80,
	0x68, 0x80,
	END_FLAG, END_FLAG
};

/****************   Camera PLL Table   ****************/
static const T_U8 PLL_1X_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 PLL_2X_TAB[] =
{
	END_FLAG, END_FLAG
};

static const T_U8 PLL_3X_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 PLL_4X_TAB[] = 
{
	END_FLAG, END_FLAG
};


/****************   Camera night/day mode   ****************/
static const T_U8 DAY_MODE_TAB[] = 
{
	//14.3fps
	0x13, 0xe7,
	//0x66, 0x05,
	0x14, 0x18,   //0x1a to 0x18
	0x3b, 0x0c,
	0x2d, 0x00, 
	0x2e, 0x00,
	END_FLAG, END_FLAG
};

static const T_U8 NIGHT_MODE_TAB[] = 
{
	//14.3~7.15fps
	//0x66, 0x00,
	0x13, 0xe7,
	0x14, 0x38,   //0x2a to 0x38
	0x3b, 0xac, 
	END_FLAG, END_FLAG
};


#endif
#endif
