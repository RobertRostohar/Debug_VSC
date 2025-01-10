# Debug_VSC
Debug with VS Code extensions

## STM32L4R9I-DISCO/Blinky_GCC
- Example: Standard Blinky (GCC)
  - Build type
    - Debug: printf using ITM
    - Release: printf using ST-Link VCOM
- Board: STM32L4R9I-DISCO
- Debug Probe: on-board ST-Link
- Debugger:
  - Arm Debugger (VSC extension + backend)
  - CDT GDB debug adapter (VSC extension + following gdb servers)
    - pyOCD
  - Cortex-Debug (VSC extension + following gdb servers)
    - PyOCD 
    - OpenOCD (with ITM printf)
    - ST-Link

## STM32L496G-DISCO/Blinky_GCC
- Example: Standard Blinky (GCC)
- Board: STM32L496G-DISCO
- Debug Probe: on board J-Link (converted from ST-Link)
- Debugger:
  - Cortex-Debug (VSC extension + following gdb servers)
    - J-Link

## STM32H745I-DISCO/Blinky_GCC
- Example: Dual core Blinky  (GCC) - each core independently blinks one LED
- Board: STM32H745I-DISCO (STM32H745 device: Cortex-M7 + Cortex-M4)
- Debug Probe: on-board ST-Link
- Debugger:
  - Cortex-Debug (VSC extension + following gdb servers)
    - ST-Link (one gdb instance per core)

## B-U585I-IOT02A/Fault
- Example: Standard Fault example (GCC, derived from CMSIS-View)
- Board: B-U585I-IOT02A (TrustZone enabled device: Cortex-M33)
- Debug Probe: on-board ST-Link
- Debugger:
  - Cortex-Debug (VSC extension + following gdb servers)
    - ST-Link

## STM32F769I-EVAL/Network
- Example: Standard MDK-Middleware Network solution with 10 projects (GCC)
- Board: STM32F769I-EVAL
- Debug Probe
  - On-board ST-Link
  -	External CMSIS-DAP via Cortex-M debug connector (ULINKplus)
- Debugger:
  -	Arm Debugger (VSC extension + backend) with ST-Link and CMSIS-DAP probe
  - Cortex-Debug (VSC extension + following gdb servers)
    - PyOCD with ST-Link and CMSIS-DAP probe
    - OpenOCD with ST-Link and CMSIS-DAP probe
    - ST-Link
