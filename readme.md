# Corecell USB STM

Corecell USB STM is a project that manages communication between a host, generally a linux host, and the radio front end (SX1302/SX1303 & SX1261).
The µC is mainly a SPI-USB bridge.
The communication is achieved through a USB VCP (Virtual Com Port)


## Compiler & IDE

This project has been developed with [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html) (Version: 1.2.0)

This IDE includes everything that is required to compile & debug the project on the µC.


## Project configuration

The project configuration (clock, gpio, spi, usb, ...) has been done with STM32CubeMX. 

If you re-generate the project with STM32CubeMX, some files and the project defines will be overwritten. These files have been lightly modified and these modifications need to be re-applied. Git discard is a good tool to find them and cancel the modifications.

Search for the the tag  **@CUSTOM_SEMTECH** and re-apply them 

The project define **#DEBUG** will be added in the release. Please remove it. 


## Boot mode

This project can force the µC in boot mode (USB DFU boot mode). If modifications to the source code are made, then it is critical to check that the new firmware still allows the use of the boot command.

## Licenses

This project uses several components under different licensing

* All files in Project (except Project\RTOS\FreeRTOSConfig.h) is under [Revised BSD License](https://opensource.org/licenses/BSD-3-Clause)
* All files in  Middlewares\FreeRTOS and Project\RTOS\FreeRTOSConfig.h is under [MIT Licence](https://opensource.org/licenses/MIT)
* Other files are provied or generated by STMicroelectronics. These files are under one the following licence:
  * [ST under Ultimate Liberty license SLA0044](http://www.st.com/SLA0044)
  * [BSD 3-Clause license](https://opensource.org/licenses/BSD-3-Clause)
