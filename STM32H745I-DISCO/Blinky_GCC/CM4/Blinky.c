/*---------------------------------------------------------------------------
 * Copyright (c) 2024 Arm Limited (or its affiliates).
 * All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#include "main.h"
#include "cmsis_vio.h"

/*-----------------------------------------------------------------------------
 * Application main
 *----------------------------------------------------------------------------*/
int app_main (void) {
  for (;;) {
    vioSetSignal(vioLED1, vioLEDon);            // Switch LED1 on
    HAL_Delay(1000U);                           // Delay 1000 ms
    vioSetSignal(vioLED1, vioLEDoff);           // Switch LED1 off
    HAL_Delay(1000U);                           // Delay 1000 ms
  }
}
