## Bondtech DDX Creality Firmware, with Touchscreen support

This branch has been developed in collaboration with [Bondtech](https://www.bondtech.se/) and [Tiny Machines 3D](https://www.tinymachines3d.com/?rfsn=3419592.cc302fe). It is intended to offer
preconfigured Bondtech DDX configurations for the most common Creality machines and includes support for the following machines :

- [CR10S Pro](http://bit.ly/2rxZ6lP)
- [CR10S Pro V2](http://bit.ly/2rxZ6lP)
- [CR10 Max](http://bit.ly/2L6wZRy)
- [Ender 5 Plus](https://bit.ly/2SriM5I)
- [CR10 V2/V3 ](https://bit.ly/3nnhPcM)
- [Ender 3 / Pro 4.2.2 and 4.2.7](https://amzn.to/3gVUg7M)
- [Ender 3 V2](https://bit.ly/3xmx4XI)
- [Ender 5 / Pro 4.2.2 and 4.2.7](https://amzn.to/3gMb2Yu)
- [Ender 6](https://amzn.to/3wMaoj3)

- [CR20 and Pro](http://bit.ly/2Oxxruk)
- [CR10S](http://bit.ly/33AAaHv)
- [CR10S4 400mm](http://bit.ly/2XXCBmq)
- [CR10S5 500mm](http://bit.ly/35K4ZuR)
- [CR6 / Max](https://bit.ly/2SdYijE)
- [CR10 Smart](https://bit.ly/3JFVWzi)
- [Ender 7](https://bit.ly/3rZOCZi)
- [CR30](https://bit.ly/3rZOMQo)
- [Sermoon D1](https://amzn.to/3LXfZeD)
- CR10, CR10Mini, CR2020, Ender 4, Ender 2 - Legacy support
-- These configurations exist however due to age and product availability are no longer actively tested
--Coming Soon
- [Ender 3 S1](https://bit.ly/35cUGo4)
- [CR10 Smart Pro](https://bit.ly/3Hg8ewN)
- [Ender 2 Pro](https://bit.ly/3oZPtHE)
- [CR5 / Pro HT](https://amzn.to/3gWvpBt)




Ender 3V2 has a dedicated file set. CR10 Smart has a dedicated high resolution screen set. Portrait displays use the CR6/E3 Touch variant and landscape use the combined set.

Screen files are archived with [7-Zip](https://www.7-zip.org/) simply because it came out 1/5 the file size of a zip file. That added up fast!

There is a limitation with Windows systems and path depth so the file names need to be shorter than we would prefer. If you get an error compiling due to the path limit, move the folder to the
root of your hard drive. Here is a legend to help decode the files:

- BLT = BLTouch
- EZABL = TH3D EZABL or other Normally Open 18mm Sensor
- 12mm = TH3D 12mm EZABL or other Normally Open 18mm Sensor
- Slnt = Creality Silent Board (For Ender 5 Plus assumes Dual Z)
- 422 = Creality STM32F1 based Motherboard 4.2.2
- 427 = Creality STM32F1 based Motherboard 4.2.7
- ET = E3D or Slice Engineering 300C Thermistor
- ST = Slice Engineering 450C Thermistor
- PT = Slice Engineering PT1000 Temperature Sensor
- 50W - PID settings for 50 watt Slice Engineering heater cartridge
- ZM = BLTouch connected to ZMin port instead of Probe pin 5 connector harness

## Support

This firmware is provided to the public as-is with no warranty or guarantee. It's based on a large open source project and there is no entitlement to support. That said, Tiny Machines 3D customers may obtain
support through their normal support queue. I will provide support to Patreons as I am able. If you require more immediate support and are not a Tiny Machines 3D customer, you may contact them at
support@tinymachines3d.com about purchasing support hours. Aside from this, we are active on many Facebook groups as well as several discord channels and typically help anyone we can when we come across them.

We have now created a dedicated Discord server to handle support and archive relevant guides and instructions. Patreon supporters will get priority assistance.

Insanity Automation Discord - https://discord.gg/TKmJ85PyG4
Marlin Firmware Discord - https://discord.gg/n5NJ59y

## Primary Notes for DW7.4.5
  - Added support for CR10 Smart - Thanks to Tinymachines for providing the machine
  - Revised file size issues causing corrupted screens on DWINOS3/4 displays (Sermoon, E6/7 etc)
  - Added support for enabling / disabling filament runout and power loss recovery on the touchscreen
  - Added LED control for equiped machines
  - Resolved issue redirecting some users to chinese language displays instead of manual move screens
  - Update to upstream current as of 2022-02-04
  - CR6 / E3 Portrait Touchscreen files have an added NextGen dwin set. This supports the new DWIN OS 4 screens that began shipping in december. There are a few cosmetic issues left to resolve, but we decided to add them now anyway so that users who haver that hardware and will require it are not stuck.

## Primary Notes for DW7.4.4
  - Added Feedrate / Accel / Jerk Screens
  - Touchscreen DGUS tools bumped to 8.2
  -- All Portrait displays operate with the same build
  -- Older screens (10S Pro) audio file selection is a bit off, havnt found a way to properly enforce wav file used yet
  - Ender 7 support
  - Sermoon D1 Support
  -- Some users have reported Z clicking that the scripts run in the Leveling screen resolves, so if you hear clicking from the Z stepper when printing, run measuring from the leveling screen after powerup before printing.
  - E3V2 Screens Icon issue fixed thanks to note from Jyers on icon file size limit


## Primary Notes for DW7.4.4
  - Added Feedrate / Accel / Jerk Screens
  - Touchscreen DGUS tools bumped to 8.2
  -- All Portrait displays operate with the same build
  -- Older screens (10S Pro) audio file selection is a bit off, havnt found a way to properly enforce wav file used yet
  - Ender 7 support
  - Sermoon D1 Support
  -- Some users have reported Z clicking that the scripts run in the Leveling screen resolves, so if you hear clicking from the Z stepper when printing, run measuring from the leveling screen after powerup before printing.
  - E3V2 Screens Icon issue fixed thanks to note from Jyers on icon file size limit

## Primary Notes for DW7.4.3
 - PID Messaging Fixed
 - M600 / Advanced pause messaging improved
 - Volume / Brightness numeric entry fixed
 - Ender 5 Pro with 427 board reversed motors fixed
 - Update base to 2.0.9.2
 -- Includes improved UI for the E3V2 with expanded menus submitted by Jyers
 - Add Gcode configuration to disable BLTouch High Speed Mode to allow runtime config to support CRTouch
 -- This one is pending upstream https://github.com/MarlinFirmware/Marlin/pull/22916
 - Add precompiled options for CR10S/4/5 and CR10V3

## Primary Notes for DW7.4
- Added Screen Calibration Options
-- Standby Brightness
-- Volume
-- Both now saved in EEPROM
-- Screen configuration code based loosely on the work from the CR6 community modified for this screen model
-- Automatic Screen rotation for the Ender 6 (Default is upside-down)
- Manual Mesh Controls for no Probe machines
-- CRX and Ender 6 with no Probe can now use all mesh controls
-- All machines now use the same screen files except for Ender 3 V2 Rotary Dial machines and CR6
- Home button added to 5 point adjustment screen
- Tap mesh values to manually type in a new value - allows for manual adjustment of mesh values
- Additional functions, messaging on pause / filament runout
-- No will no longer cancel print
-- Depending on state, if only option is continue (eg Reheat, Load filament) Any response continues
-- On final Confirm Continue, No will purge more filament and Yes will resume
- Most places temperatures are shown, can now tap them to type in a value to set the temerature
- Updated to Marlin 2.0.9 Base
- CR6 Branches merged in
-- Support for this machine is primarily based on the fork by the [CR6 Community](https://github.com/CR6Community)

## Primary notes for DW7.3
- File browser rewritten to support paging as well as subdirectories
-- New file browser has a limit of a 66 character directory depth. This can be expanded at the cost of more RAM if users find this more limiting.
-- Due to the above, the current recommendation is to try and limit folder depth to 3 subdirectories and keep names short if possible.
- Base bumped to Marlin Bugfix as of 20210418

The default build button is now a batch Build All! If you want to build a custom stock 2560 environment, use the env:megaatmega2560 environment.
For SKR 1.3/1.4 boards use the LPC1768/9 environments as usual. For SKR Mini or Creality STM32F1 boards use the standard STM32 environments per vendor.

## About Our Branches

The firmware branches maintained here are made possible by the support of [Tiny Machines 3D](https://www.tinymachines3d.com/?rfsn=3419592.cc302fe) as well as our customer base through our 3D printing Services.
Maintaining and developing these branches takes a significant investment, made up of time and machines. To support continued development, please consider your next 3D Printer related purchase from Tiny Machines 3D
and thank them for supporting open source development. Or, consider us for printing services outside of your machine’s capabilities. Print service requests can be sent to d.menzel@insanityautomation.com and we will
respond typically within 1 working day. If you do not need anything printed or a 3D Printer but still want to contribute, you can support us through [Patreon](https://www.patreon.com/InsanityAutomation).

## Setup

All configuration options intended to be adjusted by end users have been placed in the top section of Configuration.h and have been documented there. There is typically a break line to segregate the standard
configuration below. Anything aside from the upper options is intended for advanced users only.
Please keep in mind when flashing the Creality 32 bit boards with the binary files (.bin) that occasionally they will not accept particular filenames. This is most common with reflashing after an aborted flash. The machine stores the filename it was last flashed with, so renaming the file to something such as firmware.bin or firmware1.bin (anything different than what it is now) will typically resolve any issue with file names.

## Known Issues
 - While auto leveling (measuring) is in progress pressing other buttons on the screen can abort portions of the script depending where it is
 - - The process includes heating the bed before probing, probing then heating the nozzle before moving to Z0.


## Future Goals

For this branch, we still have some active goals open that we plan to continue working on provided there is continued interest in the project.
- CR10 Smart Power controls and network reset pin output to web interface device
- Add temp reporting to leveling screens so preheat is less of a mystery
- Revise aux leveling to use probe and deviation reporting when present
- Determine cause of clicking on Sermoon (need to get hands on a machine)
- Add CR5 Support
- Add Ender 3 S1 support


## Creality Firmware Branches
  - Most Creality machines [CrealityDwin_2.0](https://github.com/InsanityAutomation/Marlin/tree/CrealityDwin_2.0)
  - CR6 modified from [CR-6 Community](https://github.com/CR6Community) - [Creality CR6](https://github.com/InsanityAutomation/Marlin/tree/CR-6Devel)
## Formbot / Vivedino Firmware Branches
  - Raptor 1/2 Firmware [Raptor_2.0.X](https://github.com/InsanityAutomation/Marlin/tree/Raptor_2.0.X)
  - Trex 2+/3 Firmware [TM_Trex2+_2.0.x](https://github.com/InsanityAutomation/Marlin/tree/TM_Trex2+_2.0.x)
## Mamorubot / HieHa Firmware Branches
  - SX4/SX2 Firmware [TM_SX4_2.0](https://github.com/InsanityAutomation/Marlin/tree/TM_SX4_2.0)
## Other Firmware
  - Raise 3D N2+ (Dual) 2.0 [Raise3D-N2+-Dual](https://github.com/InsanityAutomation/Marlin/tree/Raise3D-N2+-Dual)
  - Evnovo Artillery Sidewinder X1 2.0 [Evnovo X1](https://github.com/InsanityAutomation/Marlin/tree/ArtilleryX1_2.0_Devel)
  - [Anet E16](https://github.com/InsanityAutomation/Marlin/tree/AnetE16V2.0.5.2)
  - Lulzbot with Universal Tools options [Lulzbot](https://github.com/InsanityAutomation/Marlin/tree/LulzbotTestBase)
  - Funmat HT with Graphical Display [Funmat HT](https://github.com/InsanityAutomation/Marlin/tree/FunmatHT)
  - [Modix Big60](https://github.com/InsanityAutomation/Marlin/tree/ModixBig60)
  - Tronxy Chithu Machines [Tronxy](https://github.com/InsanityAutomation/Marlin/tree/TronxyX5SA)


[Marlin Commit History](https://github.com/MarlinFirmware/Marlin/pulls?q=is%3Apr+is%3Aclosed+author%3AInsanityAutomation)


## Marlin
This is just one of many forks of Marlin. We don't try to bury that behind fancy marketting or anything else. As you can see from the links above, most of the work done here is submitted back to the mainstream Marlin
branches. The end goal of every project is to get it to the point where it is merged and maintained there. See marlin resources, including how to contribute to the Marlin Project as well, down below.


## Building Marlin 2.0

To build Marlin 2.0 you'll need  [PlatformIO](http://docs.platformio.org/en/latest/ide.html#platformio-ide). We've posted detailed instructions on [Building Marlin with PlatformIO for ReArm](http://marlinfw.org/docs/basics/install_rearm.html) (which applies well to other 32-bit boards).


## The current Marlin dev team consists of:

 - Scott Lahteine [[@thinkyhead](https://github.com/thinkyhead)] - USA &nbsp; [![Flattr Scott](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=thinkyhead&url=https://github.com/MarlinFirmware/Marlin&title=Marlin&language=&tags=github&category=software)
 - Roxanne Neufeld [[@Roxy-3D](https://github.com/Roxy-3D)] - USA
 - Bob Kuhn [[@Bob-the-Kuhn](https://github.com/Bob-the-Kuhn)] - USA
 - Chris Pepper [[@p3p](https://github.com/p3p)] - UK
 - João Brazio [[@jbrazio](https://github.com/jbrazio)] - Portugal
 - Erik van der Zalm [[@ErikZalm](https://github.com/ErikZalm)] - Netherlands &nbsp; [![Flattr Erik](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=ErikZalm&url=https://github.com/MarlinFirmware/Marlin&title=Marlin&language=&tags=github&category=software)

## License

Marlin is published under the [GPL license](/LICENSE) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.

While we can't prevent the use of this code in products (3D printers, CNC, etc.) that are closed source or crippled by a patent, we would prefer that you choose another firmware or, better yet, make your own.
