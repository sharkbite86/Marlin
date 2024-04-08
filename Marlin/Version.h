/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

////////////////////////////
// VENDOR VERSION EXAMPLE //
////////////////////////////

/**
 * Marlin release version identifier
 */
#define SHORT_BUILD_VERSION "2.1.2_Beta3"

/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */

#if(ENABLED(DriverA4988))
  #define VerChar1 "A"
#elif(ENABLED(Driver2209))
  #define VerChar1 "T"
#endif

#if(ENABLED(BL_Touch))
  #define VerChar2 "B"
#else
  #define VerChar2 "E"
#endif

#if(ENABLED(LOWRES_DWIN))
#define VerChar3 "L"
  #else
#define VerChar3 "H"
#endif


#if(ENABLED(ACBed))
  #define VerChar4 "A"
#else
  #define VerChar4 "D"
#endif

#if(ENABLED(OpticalY))
  #define VerChar5 "O"
#else
  #define VerChar5 "M"
#endif

#if(ENABLED(TitanExtruder))
  #define VerChar6 "T"
#elif ANY(BMGExtruderV2, BMGExtruderV3)
  #define VerChar6 "B"
#elif ENABLED(BondtechLGX)
  #define VerChar6 "L"
#else
  #define VerChar6 "S"
#endif

#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION "_" VerChar1 VerChar2 VerChar3 VerChar4 VerChar5 VerChar6

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
#define STRING_DISTRIBUTION_DATE "2024-04-08"

/**
 * Defines a generic printer name to be output to the LCD after booting Marlin.
 */
#if(ENABLED(MachineTLD3P))
  #define CUSTOM_MACHINE_NAME "LNL D3Pro"
#elif(ENABLED(MachineTLD5))
  #define CUSTOM_MACHINE_NAME "LNL D5Pro"
#elif(ENABLED(MachineTLD6))
  #define CUSTOM_MACHINE_NAME "LNL D6Pro"
#endif

/**
 * The SOURCE_CODE_URL is the location where users will find the Marlin Source
 * Code which is installed on the device. In most cases —unless the manufacturer
 * has a distinct Github fork— the Source Code URL should just be the main
 * Marlin repository.
 */
#define SOURCE_CODE_URL "https://github.com/InsanityAutomation/Marlin/tree/Tenlog_DWIN"

/**
 * Default generic printer UUID.
 */
//#define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"

/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 */
#define WEBSITE_URL "http://www.lnl3d.com     "

/**
 * Set the vendor info the serial USB interface, if changable
 * Currently only supported by DUE platform
 */
//#define  USB_DEVICE_VENDOR_ID           0x0000
//#define  USB_DEVICE_PRODUCT_ID          0x0000
//#define  USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL