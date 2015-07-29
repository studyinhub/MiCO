/**
******************************************************************************
* @file    MICODefine.h 
* @author  William Xu
* @version V1.0.0
* @date    05-May-2014
* @brief   This file provide constant definition and type declaration for MICO
*          running.
******************************************************************************
*
*  The MIT License
*  Copyright (c) 2014 MXCHIP Inc.
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy 
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights 
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is furnished
*  to do so, subject to the following conditions:
*
*  The above copyright notice and this permission notice shall be included in
*  all copies or substantial portions of the Software.
*
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR 
*  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
******************************************************************************
*/

#ifndef __MICO_SYSTEM_CONFIG_H
#define __MICO_SYSTEM_CONFIG_H


#define APP_INFO   "mxchipWNet BASE Demo based on MICO OS"

#define FIRMWARE_REVISION   "MICO_BASE_1_0"
#define MANUFACTURER        "MXCHIP Inc."
#define SERIAL_NUMBER       "20140606"
#define PROTOCOL            "com.mxchip.basic"

#define CONFIG_MODE_EASYLINK                    (2)
#define CONFIG_MODE_SOFT_AP                     (3)
#define CONFIG_MODE_EASYLINK_WITH_SOFTAP        (4)
//#define CONFIG_MODE_WPS                         (5)
//#define CONFIG_MODE_WPS_WITH_SOFTAP             (6)
#define CONFIG_MODE_WAC                         (7)
//#define CONFIG_MODE_AIRKISS                     (8)


/************************************************************************
 * Wi-Fi configuration mode */
#define MICO_CONFIG_MODE CONFIG_MODE_EASYLINK
//#define MICO_CONFIG_MODE CONFIG_MODE_SOFT_AP

#define EasyLink_TimeOut                60000 /**< EasyLink timeout 60 seconds. */

#define EasyLink_ConnectWlan_Timeout    20000 /**< Connect to wlan after configured by easylink.
                                                   Restart easylink after timeout: 20 seconds. */

/************************************************************************
 * MiCO command line interface */
#define MICO_CLI_ENABLE  

/************************************************************************
 * Device enter MFG mode if MICO settings are erased. */
//#define MFG_MODE_AUTO 

/************************************************************************
 * Start a system monitor daemon, application can register some monitor  
 * points, If one of these points is not excuted in a predefined period, 
 * a watchdog reset will occur. */
#define MICO_SYSTEM_MONITOR_ENABLE


/************************************************************************
 * Start a NTP client to sync RTC with NTP server. */
#define MICO_NTP_CLIENT_ENABLE  

/************************************************************************
 * MiCO TCP server used for configuration and ota. */
#define MICO_CONFIG_SERVER_ENABLE 
#define MICO_CONFIG_SERVER_PORT    8000

/************************************************************************
 * Application thread stack size */
#define MICO_DEFAULT_APPLICATION_STACK_SIZE         (1500)


#endif /* __MICO_SYSTEM_CONFIG_H */