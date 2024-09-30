/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 25/09/2024 10:04:45
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ ETH            -----------------------------*/
#define MX_ETH                                  1

/* Pins */

/* ETH_COL */
#define MX_ETH_COL_Pin                          PH3
#define MX_ETH_COL_GPIO_Pin                     GPIO_PIN_3
#define MX_ETH_COL_GPIOx                        GPIOH
#define MX_ETH_COL_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_ETH_COL_GPIO_PuPd                    GPIO_NOPULL
#define MX_ETH_COL_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_ETH_COL_GPIO_AF                      GPIO_AF11_ETH

/* ETH_CRS */
#define MX_ETH_CRS_Pin                          PH2
#define MX_ETH_CRS_GPIO_Pin                     GPIO_PIN_2
#define MX_ETH_CRS_GPIOx                        GPIOH
#define MX_ETH_CRS_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_ETH_CRS_GPIO_PuPd                    GPIO_NOPULL
#define MX_ETH_CRS_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_ETH_CRS_GPIO_AF                      GPIO_AF11_ETH

/* ETH_MDC */
#define MX_ETH_MDC_Pin                          PC1
#define MX_ETH_MDC_GPIO_Pin                     GPIO_PIN_1
#define MX_ETH_MDC_GPIOx                        GPIOC
#define MX_ETH_MDC_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_ETH_MDC_GPIO_PuPd                    GPIO_NOPULL
#define MX_ETH_MDC_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDC_GPIO_AF                      GPIO_AF11_ETH

/* ETH_MDIO */
#define MX_ETH_MDIO_Pin                         PA2
#define MX_ETH_MDIO_GPIO_Pin                    GPIO_PIN_2
#define MX_ETH_MDIO_GPIOx                       GPIOA
#define MX_ETH_MDIO_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_MDIO_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_MDIO_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDIO_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD0 */
#define MX_ETH_RXD0_Pin                         PC4
#define MX_ETH_RXD0_GPIO_Pin                    GPIO_PIN_4
#define MX_ETH_RXD0_GPIOx                       GPIOC
#define MX_ETH_RXD0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD0_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD0_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD1 */
#define MX_ETH_RXD1_Pin                         PC5
#define MX_ETH_RXD1_GPIO_Pin                    GPIO_PIN_5
#define MX_ETH_RXD1_GPIOx                       GPIOC
#define MX_ETH_RXD1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD1_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD1_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD2 */
#define MX_ETH_RXD2_Pin                         PB0
#define MX_ETH_RXD2_GPIO_Pin                    GPIO_PIN_0
#define MX_ETH_RXD2_GPIOx                       GPIOB
#define MX_ETH_RXD2_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD2_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD2_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD2_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD3 */
#define MX_ETH_RXD3_Pin                         PB1
#define MX_ETH_RXD3_GPIO_Pin                    GPIO_PIN_1
#define MX_ETH_RXD3_GPIOx                       GPIOB
#define MX_ETH_RXD3_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD3_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD3_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD3_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RX_CLK */
#define MX_ETH_RX_CLK_Pin                       PA1
#define MX_ETH_RX_CLK_GPIO_Pin                  GPIO_PIN_1
#define MX_ETH_RX_CLK_GPIOx                     GPIOA
#define MX_ETH_RX_CLK_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_ETH_RX_CLK_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_RX_CLK_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_ETH_RX_CLK_GPIO_AF                   GPIO_AF11_ETH

/* ETH_RX_DV */
#define MX_ETH_RX_DV_Pin                        PA7
#define MX_ETH_RX_DV_GPIO_Pin                   GPIO_PIN_7
#define MX_ETH_RX_DV_GPIOx                      GPIOA
#define MX_ETH_RX_DV_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_RX_DV_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_RX_DV_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_RX_DV_GPIO_AF                    GPIO_AF11_ETH

/* ETH_RX_ER */
#define MX_ETH_RX_ER_Pin                        PI10
#define MX_ETH_RX_ER_GPIO_Pin                   GPIO_PIN_10
#define MX_ETH_RX_ER_GPIOx                      GPIOI
#define MX_ETH_RX_ER_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_RX_ER_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_RX_ER_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_RX_ER_GPIO_AF                    GPIO_AF11_ETH

/* ETH_TXD0 */
#define MX_ETH_TXD0_Pin                         PG13
#define MX_ETH_TXD0_GPIO_Pin                    GPIO_PIN_13
#define MX_ETH_TXD0_GPIOx                       GPIOG
#define MX_ETH_TXD0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD0_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD0_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD1 */
#define MX_ETH_TXD1_Pin                         PG12
#define MX_ETH_TXD1_GPIO_Pin                    GPIO_PIN_12
#define MX_ETH_TXD1_GPIOx                       GPIOG
#define MX_ETH_TXD1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD1_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD1_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD2 */
#define MX_ETH_TXD2_Pin                         PC2
#define MX_ETH_TXD2_GPIO_Pin                    GPIO_PIN_2
#define MX_ETH_TXD2_GPIOx                       GPIOC
#define MX_ETH_TXD2_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD2_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD2_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD2_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD3 */
#define MX_ETH_TXD3_Pin                         PE2
#define MX_ETH_TXD3_GPIO_Pin                    GPIO_PIN_2
#define MX_ETH_TXD3_GPIOx                       GPIOE
#define MX_ETH_TXD3_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD3_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD3_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD3_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TX_CLK */
#define MX_ETH_TX_CLK_Pin                       PC3
#define MX_ETH_TX_CLK_GPIO_Pin                  GPIO_PIN_3
#define MX_ETH_TX_CLK_GPIOx                     GPIOC
#define MX_ETH_TX_CLK_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_ETH_TX_CLK_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_TX_CLK_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_ETH_TX_CLK_GPIO_AF                   GPIO_AF11_ETH

/* ETH_TX_EN */
#define MX_ETH_TX_EN_Pin                        PG11
#define MX_ETH_TX_EN_GPIO_Pin                   GPIO_PIN_11
#define MX_ETH_TX_EN_GPIOx                      GPIOG
#define MX_ETH_TX_EN_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_TX_EN_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_TX_EN_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_TX_EN_GPIO_AF                    GPIO_AF11_ETH

/*------------------------------ FDCAN1         -----------------------------*/
#define MX_FDCAN1                               1

/* Pins */

/* FDCAN1_TX */
#define MX_FDCAN1_TX_Pin                        PH13
#define MX_FDCAN1_TX_GPIO_Pin                   GPIO_PIN_13
#define MX_FDCAN1_TX_GPIOx                      GPIOH
#define MX_FDCAN1_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_FDCAN1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_FDCAN1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_FDCAN1_TX_GPIO_AF                    GPIO_AF9_FDCAN1

/*------------------------------ FDCAN2         -----------------------------*/
#define MX_FDCAN2                               1

/* Pins */

/* FDCAN2_RX */
#define MX_FDCAN2_RX_Pin                        PB5
#define MX_FDCAN2_RX_GPIO_Pin                   GPIO_PIN_5
#define MX_FDCAN2_RX_GPIOx                      GPIOB
#define MX_FDCAN2_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_FDCAN2_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_FDCAN2_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_FDCAN2_RX_GPIO_AF                    GPIO_AF9_FDCAN2

/* FDCAN2_TX */
#define MX_FDCAN2_TX_Pin                        PB13
#define MX_FDCAN2_TX_GPIO_Pin                   GPIO_PIN_13
#define MX_FDCAN2_TX_GPIOx                      GPIOB
#define MX_FDCAN2_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_FDCAN2_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_FDCAN2_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_FDCAN2_TX_GPIO_AF                    GPIO_AF9_FDCAN2

/*------------------------------ SDMMC1         -----------------------------*/
#define MX_SDMMC1                               1

/* Mode */
#define MX_SDMMC1_MODE_MMC                      1

/* Peripheral Clock Frequency */
#define MX_SDMMC1_PERIPH_CLOCK_FREQ             48097826.086956516

/* Pins */

/* SDMMC1_CK */
#define MX_SDMMC1_CK_Pin                        PC12
#define MX_SDMMC1_CK_GPIO_Pin                   GPIO_PIN_12
#define MX_SDMMC1_CK_GPIOx                      GPIOC
#define MX_SDMMC1_CK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_CK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_CK_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CK_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_CMD */
#define MX_SDMMC1_CMD_Pin                       PD2
#define MX_SDMMC1_CMD_GPIO_Pin                  GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIOx                     GPIOD
#define MX_SDMMC1_CMD_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_CMD_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CMD_GPIO_AF                   GPIO_AF12_SDIO1

/* SDMMC1_D0 */
#define MX_SDMMC1_D0_Pin                        PC8
#define MX_SDMMC1_D0_GPIO_Pin                   GPIO_PIN_8
#define MX_SDMMC1_D0_GPIOx                      GPIOC
#define MX_SDMMC1_D0_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D0_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_D1 */
#define MX_SDMMC1_D1_Pin                        PC9
#define MX_SDMMC1_D1_GPIO_Pin                   GPIO_PIN_9
#define MX_SDMMC1_D1_GPIOx                      GPIOC
#define MX_SDMMC1_D1_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D1_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D1_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D1_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_D2 */
#define MX_SDMMC1_D2_Pin                        PC10
#define MX_SDMMC1_D2_GPIO_Pin                   GPIO_PIN_10
#define MX_SDMMC1_D2_GPIOx                      GPIOC
#define MX_SDMMC1_D2_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D2_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D2_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D2_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_D3 */
#define MX_SDMMC1_D3_Pin                        PC11
#define MX_SDMMC1_D3_GPIO_Pin                   GPIO_PIN_11
#define MX_SDMMC1_D3_GPIOx                      GPIOC
#define MX_SDMMC1_D3_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D3_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D3_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D3_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_D4 */
#define MX_SDMMC1_D4_Pin                        PB8
#define MX_SDMMC1_D4_GPIO_Pin                   GPIO_PIN_8
#define MX_SDMMC1_D4_GPIOx                      GPIOB
#define MX_SDMMC1_D4_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D4_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D4_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D4_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_D5 */
#define MX_SDMMC1_D5_Pin                        PB9
#define MX_SDMMC1_D5_GPIO_Pin                   GPIO_PIN_9
#define MX_SDMMC1_D5_GPIOx                      GPIOB
#define MX_SDMMC1_D5_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D5_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D5_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D5_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_D6 */
#define MX_SDMMC1_D6_Pin                        PC6
#define MX_SDMMC1_D6_GPIO_Pin                   GPIO_PIN_6
#define MX_SDMMC1_D6_GPIOx                      GPIOC
#define MX_SDMMC1_D6_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D6_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D6_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D6_GPIO_AF                    GPIO_AF12_SDIO1

/* SDMMC1_D7 */
#define MX_SDMMC1_D7_Pin                        PC7
#define MX_SDMMC1_D7_GPIO_Pin                   GPIO_PIN_7
#define MX_SDMMC1_D7_GPIOx                      GPIOC
#define MX_SDMMC1_D7_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D7_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D7_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D7_GPIO_AF                    GPIO_AF12_SDIO1

/*------------------------------ USB_OTG_FS     -----------------------------*/
#define MX_USB_OTG_FS                           1

/* Handle */
#define MX_USB_OTG_FS_HANDLE                    hpcd_USB_OTG_FS

/* Virtual mode */
#define MX_USB_OTG_FS_VM                        Device_Only
#define MX_USB_OTG_FS_Device_Only               1

/* Pins */

/* USB_OTG_FS_DM */
#define MX_USB_OTG_FS_DM_Pin                    PA11
#define MX_USB_OTG_FS_DM_GPIO_Pin               GPIO_PIN_11
#define MX_USB_OTG_FS_DM_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DM_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DM_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DM_GPIO_Speed             GPIO_SPEED_FREQ_LOW
#define MX_USB_OTG_FS_DM_GPIO_AF                GPIO_AF10_OTG1_FS

/* USB_OTG_FS_DP */
#define MX_USB_OTG_FS_DP_Pin                    PA12
#define MX_USB_OTG_FS_DP_GPIO_Pin               GPIO_PIN_12
#define MX_USB_OTG_FS_DP_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DP_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DP_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DP_GPIO_Speed             GPIO_SPEED_FREQ_LOW
#define MX_USB_OTG_FS_DP_GPIO_AF                GPIO_AF10_OTG1_FS

/* USB_OTG_FS_VBUS */
#define MX_USB_OTG_FS_VBUS_Pin                  PA9
#define MX_USB_OTG_FS_VBUS_GPIO_Pin             GPIO_PIN_9
#define MX_USB_OTG_FS_VBUS_GPIOx                GPIOA
#define MX_USB_OTG_FS_VBUS_GPIO_Mode            GPIO_MODE_INPUT
#define MX_USB_OTG_FS_VBUS_GPIO_PuPd            GPIO_NOPULL

#endif  /* MX_DEVICE_H__ */
