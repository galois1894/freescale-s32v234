/* 
 * Copyright (C) 2014 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __DT_BINDINGS_CLOCK_SAC58R_H
#define __DT_BINDINGS_CLOCK_SAC58R_H


#define	SAC58R_CLK_DUMMY			0
#define	SAC58R_CLK_SIRC_128K		1
#define	SAC58R_CLK_SIRC_32K			2
#define	SAC58R_CLK_FIRC				3
#define	SAC58R_CLK_SXOSC			4
#define	SAC58R_CLK_FXOSC			5
#define	SAC58R_CLK_FXOSC_HALF		6
#define	SAC58R_CLK_SLOW_CLK_SEL		7
#define	SAC58R_CLK_FASK_CLK_SEL		8
#define	SAC58R_CLK_PLL1_MAIN		9
#define	SAC58R_CLK_PLL1_MAIN_DIV2	10
#define	SAC58R_CLK_A7_SEL			11
#define	SAC58R_CLK_A7_DIV			12
#define	SAC58R_CLK_QOS_DDR_SEL		13
#define	SAC58R_CLK_QOS_DDR_DIV		14
#define	SAC58R_CLK_QOS301_DIV		15
#define	SAC58R_CLK_SYS_BUS2X		16
#define	SAC58R_CLK_SYS_BUS			17
#define	SAC58R_CLK_PER				18
#define	SAC58R_CLK_PIT				19
#define	SAC58R_CLK_UART0			20

#define	SAC58R_CLK_PLL2_MAIN		21
#define	SAC58R_CLK_PLL2_PFD1		22
#define	SAC58R_CLK_PLL2_PFD2		23
#define	SAC58R_CLK_PLL2_PFD3		24
#define	SAC58R_CLK_PLL2_PFD4		25

#define	SAC58R_CLK_PLL3_MAIN		26
#define	SAC58R_CLK_PLL3_PFD1		27
#define	SAC58R_CLK_PLL3_PFD2		28
#define	SAC58R_CLK_PLL3_PFD3		29
#define	SAC58R_CLK_PLL3_PFD4		30

#define	SAC58R_CLK_PLL4_MAIN		31
#define	SAC58R_CLK_PLL4_MAIN_DIV2	32
#define	SAC58R_CLK_PLL5_MAIN		33
#define	SAC58R_CLK_ENET_EXT			34
#define	SAC58R_CLK_PLL6_MAIN		35
#define	SAC58R_CLK_PLL6_MAIN_DIV2	36
#define	SAC58R_CLK_PLL7_MAIN		37

#define	SAC58R_CLK_PLL8_MAIN		38
#define	SAC58R_CLK_PLL8_MAIN_DIV2	39


#define SAC58R_CLK_PLL3_MAIN_DIV	41
#define SAC58R_CLK_PLL4_MAIN_DIV	42
#define SAC58R_CLK_PLL6_MAIN_DIV	43
#define SAC58R_CLK_PLL1_PFD_SEL		44
#define SAC58R_CLK_PLL2_PFD_SEL		45
#define SAC58R_CLK_AUDIO_EXT		46
#define SAC58R_CLK_UART1			49
#define SAC58R_CLK_UART2			50
#define SAC58R_CLK_UART3			51
#define SAC58R_CLK_UART4			52
#define SAC58R_CLK_UART5			53
#define SAC58R_CLK_I2C0				55
#define SAC58R_CLK_I2C1				56
#define SAC58R_CLK_I2C2				57
#define SAC58R_CLK_I2C3				58
#define SAC58R_CLK_DMACH_MUX0		59
#define SAC58R_CLK_DMACH_MUX1		60
#define SAC58R_CLK_PORTA			61
#define SAC58R_CLK_PORTB			62
#define SAC58R_CLK_PORTC			63
#define SAC58R_CLK_PORTD			64
#define SAC58R_CLK_PORTE			65
#define SAC58R_CLK_PORTF			66
#define SAC58R_CLK_PORTG			67
#define SAC58R_CLK_PORTH			68
#define SAC58R_CLK_PORTJ			69
#define SAC58R_CLK_PORTK			70
#define SAC58R_CLK_PORTL			71
#define SAC58R_CLK_AUDIO0_PLL_SEL	72
#define SAC58R_CLK_AUDIO0_PLL_EN	73
#define SAC58R_CLK_AUDIO0_PLL_DIV	74
#define SAC58R_CLK_AUDIO1_PLL_SEL	75
#define SAC58R_CLK_AUDIO1_PLL_EN	76
#define SAC58R_CLK_AUDIO1_PLL_DIV	77
#define SAC58R_CLK_VIDEO_PLL_SEL	78
#define SAC58R_CLK_VIDEO_PLL_EN		79
#define SAC58R_CLK_VIDEO_PLL_DIV	80
#define SAC58R_CLK_DCU_LDI_SEL		81
#define SAC58R_CLK_DCU_LDI_EN		82
#define SAC58R_CLK_DCU_LDI_DIV		83
#define SAC58R_CLK_GCC_SEL			84
#define SAC58R_CLK_GCC_EN			85
#define SAC58R_CLK_GCC_DIV			86
#define SAC58R_CLK_ANACATUM_SEL		87
#define SAC58R_CLK_ANACATUM_EN		88
#define SAC58R_CLK_ANACATUM_DIV		89
#define SAC58R_CLK_USDHC0_SEL		90
#define SAC58R_CLK_USDHC0_EN		91
#define SAC58R_CLK_USDHC0_DIV		92
#define SAC58R_CLK_USDHC0			93
#define SAC58R_CLK_USDHC1_SEL		94
#define SAC58R_CLK_USDHC1_EN		95
#define SAC58R_CLK_USDHC1_DIV		96
#define SAC58R_CLK_USDHC1			97
#define SAC58R_CLK_USDHC2_SEL		98
#define SAC58R_CLK_USDHC2_EN		99
#define SAC58R_CLK_USDHC2_DIV		100
#define SAC58R_CLK_USDHC2			101
#define SAC58R_CLK_QSPI_SEL			102
#define SAC58R_CLK_QSPI_EN			103
#define SAC58R_CLK_QSPI_DIV			104
#define SAC58R_CLK_QSPI				105
#define SAC58R_CLK_AUD_CLK0_SEL		106
#define SAC58R_CLK_AUD_CLK1_SEL 	107
#define SAC58R_CLK_FTM0_EXT_SEL		108
#define SAC58R_CLK_FTM0_FIX_SEL		109
#define SAC58R_CLK_FTM0_EXT_FIX_EN	110
#define SAC58R_CLK_FTM1_EXT_SEL		111
#define SAC58R_CLK_FTM1_FIX_SEL		112
#define SAC58R_CLK_FTM1_EXT_FIX_EN	113
#define SAC58R_CLK_FTM2_EXT_SEL		114
#define SAC58R_CLK_FTM2_FIX_SEL		115
#define SAC58R_CLK_FTM2_EXT_FIX_EN	116
#define SAC58R_CLK_FTM3_EXT_SEL		117
#define SAC58R_CLK_FTM3_FIX_SEL		118
#define SAC58R_CLK_FTM3_EXT_FIX_EN	119
#define SAC58R_CLK_FTM0				120
#define SAC58R_CLK_FTM1				121
#define SAC58R_CLK_FTM2				122
#define SAC58R_CLK_FTM3				123
#define SAC58R_CLK_ENET_50M			124
#define SAC58R_CLK_ENET_25M			125
#define SAC58R_CLK_ENET_SEL			126
#define SAC58R_CLK_ENET				127
#define SAC58R_CLK_ENET_TS_SEL		128
#define SAC58R_CLK_ENET_TS			129
#define SAC58R_CLK_DSPI0			130
#define SAC58R_CLK_DSPI1			131
#define SAC58R_CLK_DSPI2			132
#define SAC58R_CLK_DSPI3			133
#define SAC58R_CLK_WDT				134
#define SAC58R_CLK_SAI0_SEL			135
#define SAC58R_CLK_SAI0_EN			136
#define SAC58R_CLK_SAI0_DIV			137
#define SAC58R_CLK_SAI0				138
#define SAC58R_CLK_SAI1_SEL			139
#define SAC58R_CLK_SAI1_EN			140
#define SAC58R_CLK_SAI1_DIV			141
#define SAC58R_CLK_SAI1				142
#define SAC58R_CLK_SAI2_SEL			143
#define SAC58R_CLK_SAI2_EN			144
#define SAC58R_CLK_SAI2_DIV			145
#define SAC58R_CLK_SAI2				146
#define SAC58R_CLK_SAI3_SEL			147
#define SAC58R_CLK_SAI3_EN			148
#define SAC58R_CLK_SAI3_DIV			149
#define SAC58R_CLK_SAI3				150
#define SAC58R_CLK_SAI4				151
#define SAC58R_CLK_SAI5				152
#define SAC58R_CLK_SAI6				153
#define SAC58R_CLK_SAI7				154
#define SAC58R_CLK_ESAI0_SEL		155
#define SAC58R_CLK_ESAI0			156
#define SAC58R_CLK_ESAI1_SEL		157
#define SAC58R_CLK_ESAI1			158
#define SAC58R_CLK_SAI_BCLK0_SEL	159
#define SAC58R_CLK_SAI_BCLK0_EN		160
#define SAC58R_CLK_SAI_BCLK0_DIV	161
#define SAC58R_CLK_SAI_BCLK1_SEL	162
#define SAC58R_CLK_SAI_BCLK1_EN		163
#define SAC58R_CLK_SAI_BCLK1_DIV	164
#define SAC58R_CLK_VIU_SEL			165
#define SAC58R_CLK_VIU_EN			166
#define SAC58R_CLK_VIU_DIV			167
#define SAC58R_CLK_VIU				168
#define SAC58R_CLK_MIPI_24M_SEL		169
#define SAC58R_CLK_MIPI_ESC_EN		170
#define SAC58R_CLK_MIPI_ESC			171
#define SAC58R_CLK_VIU_INTF_EN		172
#define SAC58R_CLK_VIU_INTF_DIV		173
#define SAC58R_CLK_VPU_EN			174
#define SAC58R_CLK_VPU_DIV			175
#define SAC58R_CLK_VPU				176
#define SAC58R_CLK_USBC0			177
#define SAC58R_CLK_USBC1			178
#define SAC58R_CLK_USBC2			179
#define SAC58R_CLK_NFC_SEL			180
#define SAC58R_CLK_NFC_EN			181
#define SAC58R_CLK_NFC				182
#define SAC58R_CLK_NFC_DIV			183
#define SAC58R_CLK_ADC0				184
#define SAC58R_CLK_ADC1				185
#define SAC58R_CLK_DAC0				186
#define SAC58R_CLK_DAC1				187
#define SAC58R_CLK_FLEXCAN0			188
#define SAC58R_CLK_FLEXCAN1			189
#define SAC58R_CLK_FLEXCAN2			190
#define SAC58R_CLK_ASRC				191
#define SAC58R_CLK_GPU_SEL			192
#define SAC58R_CLK_GPU_EN			193
#define SAC58R_CLK_ENET0			195
#define SAC58R_CLK_USBPHY0			196
#define SAC58R_CLK_USBPHY1			197
#define SAC58R_CLK_SAI8				198
#define SAC58R_CLK_SAI9				199
#define SAC58R_CLK_SAI10			200
#define SAC58R_CLK_SAI11			201
#define SAC58R_CLK_AUD_A			202
#define SAC58R_CLK_AUD_B			203
#define SAC58R_CLK_AUD_C			204
#define SAC58R_CLK_AUD_ADC_DAC		205
#define SAC58R_CLK_SWT0				206
#define SAC58R_CLK_SWT1				207
#define SAC58R_CLK_SWT2				208
#define SAC58R_CLK_SNVS_WDOG		209
#define SAC58R_CLK_GPIO				210

#define SAC58R_CLK_END				211
#endif /* __DT_BINDINGS_CLOCK_SAC58R_H */
