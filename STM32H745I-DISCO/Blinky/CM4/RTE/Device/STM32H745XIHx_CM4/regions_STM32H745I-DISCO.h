#ifndef REGIONS_STM32H745I_DISCO_H
#define REGIONS_STM32H745I_DISCO_H


//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------
//------ With VS Code: Open Preview for Configuration Wizard -------------------

// <n> Auto-generated using information from packs
// <i> Device Family Pack (DFP):   Keil::STM32H7xx_DFP@4.0.0-dev
// <i> Board Support Pack (BSP):   Keil::STM32H745I-DISCO_BSP@1.0.0-dev

// <h> ROM Configuration
// =======================
// <h> __ROM0 (is rx memory: FLASH_Bank2 from DFP)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region. Default: 0x08100000
//   <i> Contains Startup and Vector Table
#define __ROM0_BASE 0x08100000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region. Default: 0x00100000
#define __ROM0_SIZE 0x00100000
// </h>

// <h> __ROM1 (unused)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
#define __ROM1_BASE 0
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
#define __ROM1_SIZE 0
// </h>

// <h> __ROM2 (unused)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
#define __ROM2_BASE 0
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
#define __ROM2_SIZE 0
// </h>

// <h> __ROM3 (unused)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
#define __ROM3_BASE 0
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
#define __ROM3_SIZE 0
// </h>

// </h>

// <h> RAM Configuration
// =======================
// <h> __RAM0 (is rw memory: RAM_D2 from DFP)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region. Default: 0x10000000
//   <i> Contains uninitialized RAM, Stack, and Heap
#define __RAM0_BASE 0x10000000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region. Default: 0x00048000
#define __RAM0_SIZE 0x00048000
// </h>

// <h> __RAM1 (unused)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
#define __RAM1_BASE 0
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
#define __RAM1_SIZE 0
// </h>

// <h> __RAM2 (unused)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
#define __RAM2_BASE 0
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
#define __RAM2_SIZE 0
// </h>

// <h> __RAM3 (unused)
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
#define __RAM3_BASE 0
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
#define __RAM3_SIZE 0
// </h>

// </h>

#endif /* REGIONS_STM32H745I_DISCO_H */
