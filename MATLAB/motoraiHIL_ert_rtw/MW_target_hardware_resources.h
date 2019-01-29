#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#define MW_MULTI_TASKING_MODE 0
#include "stm32f4xx.h"
#include "MW_MbedPinInterface.h"
#include "SysTickScheduler.h"
#include "arm_cortex_m_multitasking.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE STM32 Nucleo F411RE
#define MW_CONNECTIONINFO_SERIAL_BAUDRATE 115200
#define MW_CONNECTIONINFO_SERIAL_COMPORT COM1
#define MW_CONNECTIONINFO_SERIAL_VERBOSE 1
#define MW_EXTMODE_CONFIGURATION serial
#define MW_RTOS Baremetal
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 0
#define MW_HOSTDRIVE_SET_HOST_DRIVE 0
#define MW_HOSTDRIVE_DRIVE F:
#define MW_CLOCKING_CPUCLOCKRATEMHZ 100
#define MW_I2C0_BUSSPEEDHZ 100000
#define MW_I2C0_SCL_INDEX 0
#define MW_I2C0_SDA_INDEX 0
#define MW_I2C0_SCL D15
#define MW_I2C0_SDA D14
#define MW_I2C2_BUSSPEEDHZ 100000
#define MW_I2C2_SCL_INDEX 0
#define MW_I2C2_SDA_INDEX 0
#define MW_I2C2_SCL D6
#define MW_I2C2_SDA D3
#define MW_I2C3_BUSSPEEDHZ 100000
#define MW_I2C3_SCL_INDEX 0
#define MW_I2C3_SDA_INDEX 0
#define MW_I2C3_SCL D7
#define MW_I2C3_SDA D5
#define MW_SPI0_BUSSPEEDHZ 1000000
#define MW_SPI0_MOSIPIN_INDEX 0
#define MW_SPI0_MISOPIN_INDEX 0
#define MW_SPI0_SCKPIN_INDEX 0
#define MW_SPI0_MOSIPIN D11
#define MW_SPI0_MISOPIN D12
#define MW_SPI0_SCKPIN D13
#define MW_SPI2_BUSSPEEDHZ 1000000
#define MW_SPI2_MOSIPIN_INDEX 0
#define MW_SPI2_MISOPIN_INDEX 0
#define MW_SPI2_SCKPIN_INDEX 0
#define MW_SPI2_MOSIPIN PB_15
#define MW_SPI2_MISOPIN PB_14
#define MW_SPI2_SCKPIN PB_13
#define MW_SPI3_BUSSPEEDHZ 1000000
#define MW_SPI3_MOSIPIN_INDEX 1
#define MW_SPI3_MISOPIN_INDEX 1
#define MW_SPI3_SCKPIN_INDEX 1
#define MW_SPI3_MOSIPIN PC_12
#define MW_SPI3_MISOPIN PC_11
#define MW_SPI3_SCKPIN PC_10
#define MW_SPI5_BUSSPEEDHZ 1000000
#define MW_SPI5_MOSIPIN_INDEX 0
#define MW_SPI5_MISOPIN_INDEX 0
#define MW_SPI5_SCKPIN_INDEX 0
#define MW_SPI5_MOSIPIN D2
#define MW_SPI5_MISOPIN PA_12
#define MW_SPI5_SCKPIN A3
#define MW_SCI1_BAUDRATE 115200
#define MW_SCI1_RXPIN_INDEX 0
#define MW_SCI1_TXPIN_INDEX 0
#define MW_SCI1_DATABITS 8
#define MW_SCI1_PARITY 0.000000
#define MW_SCI1_STOPBITS 1.000000
#define MW_SCI1_RXPIN D2
#define MW_SCI1_TXPIN D10
#define MW_SCI0_BAUDRATE 115200
#define MW_SCI0_RXPIN_INDEX 0
#define MW_SCI0_TXPIN_INDEX 0
#define MW_SCI0_DATABITS 8
#define MW_SCI0_PARITY 0.000000
#define MW_SCI0_STOPBITS 1.000000
#define MW_SCI0_RXPIN D0
#define MW_SCI0_TXPIN D1
#define MW_SCI6_BAUDRATE 115200
#define MW_SCI6_RXPIN_INDEX 0
#define MW_SCI6_TXPIN_INDEX 0
#define MW_SCI6_DATABITS 8
#define MW_SCI6_PARITY 0.000000
#define MW_SCI6_STOPBITS 1.000000
#define MW_SCI6_RXPIN PA_12
#define MW_SCI6_TXPIN PA_11
#define MW_PIL_INTERFACE 0
#define MW_PIL_COMPORT COM2
#define MW_DATAVERSION 2016.02

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif