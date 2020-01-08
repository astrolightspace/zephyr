/* SPDX-License-Identifier: Apache-2.0 */
/*
 * Copyright 2018 Broadcom.
 */

/* SoC level DTS fixup file */

#define DT_NUM_IRQ_PRIO_BITS			DT_ARM_V7M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS
#define DT_NUM_MPU_REGIONS			DT_ARM_ARMV7M_MPU_E000ED90_ARM_NUM_MPU_REGIONS

#define DT_UART_NS16550_PORT_0_BASE_ADDR	DT_NS16550_40020000_BASE_ADDRESS
#define DT_UART_NS16550_PORT_0_NAME		DT_NS16550_40020000_LABEL
#define DT_UART_NS16550_PORT_0_CLK_FREQ		DT_NS16550_40020000_CLOCK_FREQUENCY
#define DT_UART_NS16550_PORT_0_BAUD_RATE	DT_NS16550_40020000_CURRENT_SPEED
#define DT_UART_NS16550_PORT_0_IRQ		DT_NS16550_40020000_IRQ_0
#define DT_UART_NS16550_PORT_0_IRQ_PRI		DT_NS16550_40020000_IRQ_0_PRIORITY

#define DT_UART_NS16550_PORT_1_BASE_ADDR	DT_NS16550_48100000_BASE_ADDRESS
#define DT_UART_NS16550_PORT_1_NAME		DT_NS16550_48100000_LABEL
#define DT_UART_NS16550_PORT_1_CLK_FREQ		DT_NS16550_48100000_CLOCK_FREQUENCY
#define DT_UART_NS16550_PORT_1_BAUD_RATE	DT_NS16550_48100000_CURRENT_SPEED
#define DT_UART_NS16550_PORT_1_IRQ		DT_NS16550_48100000_IRQ_0
#define DT_UART_NS16550_PORT_1_IRQ_PRI		DT_NS16550_48100000_IRQ_0_PRIORITY

/* End of SoC Level DTS fixup file */
