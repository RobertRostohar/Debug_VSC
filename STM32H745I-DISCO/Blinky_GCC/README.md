# Blinky project

The **Blinky** project is a simple example that can be used to verify the
basic tool setup.

It is compliant to the Cortex Microcontroller Software Interface Standard (CMSIS)
and uses the CMSIS-RTOS2 API interface for RTOS functionality. The CMSIS-RTOS2 API
is available with various real-time operating systems, for example RTX5 or FreeRTOS.

## Operation

**CPU1 - Cortex-M7:**
- Wait until CPU2 boots and enters stop mode.
- System initialization.
- Wake-up CPU2.
- The vioLED0 blinks in 1 sec interval.
- The vioBUTTON0 changes the blink frequency.

**CPU2 - Cortex-M4:**
- Go to stop mode.
- Wait for CPU1 to perform system initialization.
- The vioLED1 blinks in 2 sec interval.
 
### CMSIS-Driver Virtual I/O mapping

| CMSIS-Driver VIO      | Board component
|:----------------------|:--------------------------------------
| vioBUTTON0            | USER button (B1)
| vioLED0               | LED red     (LD6)
| vioLED1               | LED green   (LD7)
