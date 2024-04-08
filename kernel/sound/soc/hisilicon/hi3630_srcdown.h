/*
 * hi3630_srcdown.h --  ALSA SoC HI3630 SRCDOWN driver
 *
 * Copyright (c) 2013 Hisilicon Technologies CO., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __HI3630_SRCDOWN_H__
#define __HI3630_SRCDOWN_H__

#include <linux/regulator/consumer.h>

/* SRCDOWN base addr */
#define HI3630_SRCDOWN_BASE			(0xE8051000 - 0xE804E000)

/******************************************************************************/
#define HI3630_SRCDOWN_CH0_A_ADDR_REG		(HI3630_SRCDOWN_BASE + 0x0)
#define HI3630_SRCDOWN_CH0_A_LENGTH_REG		(HI3630_SRCDOWN_BASE + 0x4)
#define HI3630_SRCDOWN_CH0_B_ADDR_REG		(HI3630_SRCDOWN_BASE + 0x8)
#define HI3630_SRCDOWN_CH0_B_LENGTH_REG		(HI3630_SRCDOWN_BASE + 0xC)
#define HI3630_SRCDOWN_CH1_A_ADDR_REG		(HI3630_SRCDOWN_BASE + 0x10)
#define HI3630_SRCDOWN_CH1_A_LENGTH_REG		(HI3630_SRCDOWN_BASE + 0x14)
#define HI3630_SRCDOWN_CH1_B_ADDR_REG		(HI3630_SRCDOWN_BASE + 0x18)
#define HI3630_SRCDOWN_CH1_B_LENGTH_REG		(HI3630_SRCDOWN_BASE + 0x1C)
#define HI3630_SRCDOWN_CH2_A_ADDR_REG		(HI3630_SRCDOWN_BASE + 0x20)
#define HI3630_SRCDOWN_CH2_A_LENGTH_REG		(HI3630_SRCDOWN_BASE + 0x24)
#define HI3630_SRCDOWN_CH2_B_ADDR_REG		(HI3630_SRCDOWN_BASE + 0x28)
#define HI3630_SRCDOWN_CH2_B_LENGTH_REG		(HI3630_SRCDOWN_BASE + 0x2C)
#define HI3630_SRCDOWN_CH_DMA_EN_REG		(HI3630_SRCDOWN_BASE + 0x30)
#define HI3630_SRCDOWN_CH_STP_REG			(HI3630_SRCDOWN_BASE + 0x34)
#define HI3630_SRCDOWN_CH_CLEAR_REG		(HI3630_SRCDOWN_BASE + 0x38)
#define HI3630_SRCDOWN_CH0_A_LEAVE_REG		(HI3630_SRCDOWN_BASE + 0x3C)
#define HI3630_SRCDOWN_CH0_B_LEAVE_REG		(HI3630_SRCDOWN_BASE + 0x40)
#define HI3630_SRCDOWN_CH1_A_LEAVE_REG		(HI3630_SRCDOWN_BASE + 0x44)
#define HI3630_SRCDOWN_CH1_B_LEAVE_REG		(HI3630_SRCDOWN_BASE + 0x48)
#define HI3630_SRCDOWN_CH2_A_LEAVE_REG		(HI3630_SRCDOWN_BASE + 0x4C)
#define HI3630_SRCDOWN_CH2_B_LEAVE_REG		(HI3630_SRCDOWN_BASE + 0x50)
#define HI3630_SRCDOWN_CH0_CTRL_REG		(HI3630_SRCDOWN_BASE + 0x54)
#define HI3630_SRCDOWN_CH0_GAIN_REG		(HI3630_SRCDOWN_BASE + 0x58)
#define HI3630_SRCDOWN_CH1_CTRL_REG		(HI3630_SRCDOWN_BASE + 0x5C)
#define HI3630_SRCDOWN_CH1_GAIN_REG		(HI3630_SRCDOWN_BASE + 0x60)
#define HI3630_SRCDOWN_CH2_CTRL_REG		(HI3630_SRCDOWN_BASE + 0x64)
#define HI3630_SRCDOWN_CH2_SINC_ININUM_REG	(HI3630_SRCDOWN_BASE + 0x68)
#define HI3630_SRCDOWN_CH2_SINC_INIFRAC_REG	(HI3630_SRCDOWN_BASE + 0x6C)
#define HI3630_SRCDOWN_CH2_SINC_INI_LOAD_REG	(HI3630_SRCDOWN_BASE + 0x70)
#define HI3630_SRCDOWN_CH2_SINC_STEP_INT_REG	(HI3630_SRCDOWN_BASE + 0x74)
#define HI3630_SRCDOWN_CH2_SINC_STEP_FRAC_REG	(HI3630_SRCDOWN_BASE + 0x78)
#define HI3630_SRCDOWN_CH2_SINC_COEFLAST_REG	(HI3630_SRCDOWN_BASE + 0x7C)
#define HI3630_SRCDOWN_CH2_GAIN_REG		(HI3630_SRCDOWN_BASE + 0x80)
#define HI3630_SRCDOWN_MIX_CTRL_REG		(HI3630_SRCDOWN_BASE + 0x84)
#define HI3630_SRCDOWN_SINGLE_REQ_MODE_REG	(HI3630_SRCDOWN_BASE + 0x88)
#define HI3630_SRCDOWN_LEFT_FIX_ADDR_REG		(HI3630_SRCDOWN_BASE + 0x8C)
#define HI3630_SRCDOWN_RIGHT_FIX_ADDR_REG		(HI3630_SRCDOWN_BASE + 0x90)
#define HI3630_SRCDOWN_WB_SKIP_NUM_REG		(HI3630_SRCDOWN_BASE + 0x94)
#define HI3630_SRCDOWN_SRCDOWN_EN_REG		(HI3630_SRCDOWN_BASE + 0x98)
#define HI3630_SRCDOWN_SECURYT_EN_REG		(HI3630_SRCDOWN_BASE + 0x9C)
#define HI3630_SRCDOWN_G_CLK_CTRL1_REG		(HI3630_SRCDOWN_BASE + 0xA0)
#define HI3630_SRCDOWN_CH_INT_FLAG_REG		(HI3630_SRCDOWN_BASE + 0xA4)
#define HI3630_SRCDOWN_CH_INTEN_REG		(HI3630_SRCDOWN_BASE + 0xA8)
#define HI3630_SRCDOWN_CH_SECU_INT_REG		(HI3630_SRCDOWN_BASE + 0xAC)
#define HI3630_SRCDOWN_CH_SECU_INTEN_REG		(HI3630_SRCDOWN_BASE + 0xB0)
#define HI3630_SRCDOWN_MEM_POWER_REG		(HI3630_SRCDOWN_BASE + 0xB4)

#define HI3630_SRCDOWN_CH0_FIR76_REG		(HI3630_SRCDOWN_BASE + 0x100)
#define HI3630_SRCDOWN_CH1_FIR76_REG		(HI3630_SRCDOWN_BASE + 0x200)
#define HI3630_SRCDOWN_CH2_FIR76_REG		(HI3630_SRCDOWN_BASE + 0x3e4)
#define HI3630_SRCDOWN_CH2_FIR114_REG		(HI3630_SRCDOWN_BASE + 0x300)
#define HI3630_SRCDOWN_CH2_SINC_REG		(HI3630_SRCDOWN_BASE + 0x2000)

#define HI3630_SRCDOWN_CH0_A_ADDR_LEN    32
#define HI3630_SRCDOWN_CH0_A_ADDR_OFFSET 0
#define HI3630_SRCDOWN_CH0_A_LENGTH_LEN    32
#define HI3630_SRCDOWN_CH0_A_LENGTH_OFFSET 0
#define HI3630_SRCDOWN_CH0_B_ADDR_LEN    32
#define HI3630_SRCDOWN_CH0_B_ADDR_OFFSET 0
#define HI3630_SRCDOWN_CH0_B_LENGTH_LEN    32
#define HI3630_SRCDOWN_CH0_B_LENGTH_OFFSET 0
#define HI3630_SRCDOWN_CH1_A_ADDR_LEN    32
#define HI3630_SRCDOWN_CH1_A_ADDR_OFFSET 0
#define HI3630_SRCDOWN_CH1_A_LENGTH_LEN    32
#define HI3630_SRCDOWN_CH1_A_LENGTH_OFFSET 0
#define HI3630_SRCDOWN_CH1_B_ADDR_LEN    32
#define HI3630_SRCDOWN_CH1_B_ADDR_OFFSET 0
#define HI3630_SRCDOWN_CH1_B_LENGTH_LEN    32
#define HI3630_SRCDOWN_CH1_B_LENGTH_OFFSET 0
#define HI3630_SRCDOWN_CH2_A_ADDR_LEN    32
#define HI3630_SRCDOWN_CH2_A_ADDR_OFFSET 0
#define HI3630_SRCDOWN_CH2_A_LENGTH_LEN    32
#define HI3630_SRCDOWN_CH2_A_LENGTH_OFFSET 0
#define HI3630_SRCDOWN_CH2_B_ADDR_LEN    32
#define HI3630_SRCDOWN_CH2_B_ADDR_OFFSET 0
#define HI3630_SRCDOWN_CH2_B_LENGTH_LEN    32
#define HI3630_SRCDOWN_CH2_B_LENGTH_OFFSET 0
#define HI3630_SRCDOWN_CH2_B_EN_LEN    1
#define HI3630_SRCDOWN_CH2_B_EN_OFFSET 5
#define HI3630_SRCDOWN_CH2_A_EN_LEN    1
#define HI3630_SRCDOWN_CH2_A_EN_OFFSET 4
#define HI3630_SRCDOWN_CH1_B_EN_LEN    1
#define HI3630_SRCDOWN_CH1_B_EN_OFFSET 3
#define HI3630_SRCDOWN_CH1_A_EN_LEN    1
#define HI3630_SRCDOWN_CH1_A_EN_OFFSET 2
#define HI3630_SRCDOWN_CH0_B_EN_LEN    1
#define HI3630_SRCDOWN_CH0_B_EN_OFFSET 1
#define HI3630_SRCDOWN_CH0_A_EN_LEN    1
#define HI3630_SRCDOWN_CH0_A_EN_OFFSET 0
#define HI3630_SRCDOWN_CH2_B_STP_LEN    1
#define HI3630_SRCDOWN_CH2_B_STP_OFFSET 6
#define HI3630_SRCDOWN_CH2_A_STP_LEN    1
#define HI3630_SRCDOWN_CH2_A_STP_OFFSET 5
#define HI3630_SRCDOWN_CH1_B_STP_LEN    1
#define HI3630_SRCDOWN_CH1_B_STP_OFFSET 4
#define HI3630_SRCDOWN_CH1_A_STP_LEN    1
#define HI3630_SRCDOWN_CH1_A_STP_OFFSET 3
#define HI3630_SRCDOWN_CH0_B_STP_LEN    1
#define HI3630_SRCDOWN_CH0_B_STP_OFFSET 2
#define HI3630_SRCDOWN_CH0_A_STP_LEN    1
#define HI3630_SRCDOWN_CH0_A_STP_OFFSET 1
#define HI3630_SRCDOWN_ALL_STP_LEN    1
#define HI3630_SRCDOWN_ALL_STP_OFFSET 0
#define HI3630_SRCDOWN_CH2_CLEAR_LEN    1
#define HI3630_SRCDOWN_CH2_CLEAR_OFFSET 3
#define HI3630_SRCDOWN_CH1_CLEAR_LEN    1
#define HI3630_SRCDOWN_CH1_CLEAR_OFFSET 2
#define HI3630_SRCDOWN_CH0_CLEAR_LEN    1
#define HI3630_SRCDOWN_CH0_CLEAR_OFFSET 1
#define HI3630_SRCDOWN_GLOBAL_CLEAR_LEN    1
#define HI3630_SRCDOWN_GLOBAL_CLEAR_OFFSET 0
#define HI3630_SRCDOWN_CH0_A_LEN_ST_LEN    32
#define HI3630_SRCDOWN_CH0_A_LEN_ST_OFFSET 0
#define HI3630_SRCDOWN_CH0_B_LEN_ST_LEN    32
#define HI3630_SRCDOWN_CH0_B_LEN_ST_OFFSET 0
#define HI3630_SRCDOWN_CH1_A_LEN_ST_LEN    32
#define HI3630_SRCDOWN_CH1_A_LEN_ST_OFFSET 0
#define HI3630_SRCDOWN_CH1_B_LEN_ST_LEN    32
#define HI3630_SRCDOWN_CH1_B_LEN_ST_OFFSET 0
#define HI3630_SRCDOWN_CH2_A_LEN_ST_LEN    32
#define HI3630_SRCDOWN_CH2_A_LEN_ST_OFFSET 0
#define HI3630_SRCDOWN_CH2_B_LEN_ST_LEN    32
#define HI3630_SRCDOWN_CH2_B_LEN_ST_OFFSET 0
#define HI3630_SRCDOWN_CH0_GAIN_EN_LEN    1
#define HI3630_SRCDOWN_CH0_GAIN_EN_OFFSET 11
#define HI3630_SRCDOWN_CH0_SRC_EN_LEN    1
#define HI3630_SRCDOWN_CH0_SRC_EN_OFFSET 6
#define HI3630_SRCDOWN_CH0_US8BIT_LEN    1
#define HI3630_SRCDOWN_CH0_US8BIT_OFFSET 5
#define HI3630_SRCDOWN_CH0_BDIAN_LEN    1
#define HI3630_SRCDOWN_CH0_BDIAN_OFFSET 4
#define HI3630_SRCDOWN_CH0_HLC_LEN    1
#define HI3630_SRCDOWN_CH0_HLC_OFFSET 3
#define HI3630_SRCDOWN_CH0_AUFMT_LEN    3
#define HI3630_SRCDOWN_CH0_AUFMT_OFFSET 0
#define HI3630_SRCDOWN_CH0_R_GAIN_LEN    16
#define HI3630_SRCDOWN_CH0_R_GAIN_OFFSET 16
#define HI3630_SRCDOWN_CH0_L_GAIN_LEN    16
#define HI3630_SRCDOWN_CH0_L_GAIN_OFFSET 0
#define HI3630_SRCDOWN_CH1_GAIN_EN_LEN    1
#define HI3630_SRCDOWN_CH1_GAIN_EN_OFFSET 11
#define HI3630_SRCDOWN_CH1_SRC_EN_LEN    1
#define HI3630_SRCDOWN_CH1_SRC_EN_OFFSET 6
#define HI3630_SRCDOWN_CH1_US8BIT_LEN    1
#define HI3630_SRCDOWN_CH1_US8BIT_OFFSET 5
#define HI3630_SRCDOWN_CH1_BDIAN_LEN    1
#define HI3630_SRCDOWN_CH1_BDIAN_OFFSET 4
#define HI3630_SRCDOWN_CH1_HLC_LEN    1
#define HI3630_SRCDOWN_CH1_HLC_OFFSET 3
#define HI3630_SRCDOWN_CH1_AUFMT_LEN    3
#define HI3630_SRCDOWN_CH1_AUFMT_OFFSET 0
#define HI3630_SRCDOWN_CH1_R_GAIN_LEN    16
#define HI3630_SRCDOWN_CH1_R_GAIN_OFFSET 16
#define HI3630_SRCDOWN_CH1_L_GAIN_LEN    16
#define HI3630_SRCDOWN_CH1_L_GAIN_OFFSET 0
#define HI3630_SRCDOWN_CH2_SINC_EN_LEN    1
#define HI3630_SRCDOWN_CH2_SINC_EN_OFFSET 15
#define HI3630_SRCDOWN_CH2_GAIN_EN_LEN    1
#define HI3630_SRCDOWN_CH2_GAIN_EN_OFFSET 11
#define HI3630_SRCDOWN_CH2_SRCDOWN_MODE_LEN    2
#define HI3630_SRCDOWN_CH2_SRCDOWN_MODE_OFFSET 8
#define HI3630_SRCDOWN_CH2_SRC_EN_LEN    1
#define HI3630_SRCDOWN_CH2_SRC_EN_OFFSET 6
#define HI3630_SRCDOWN_CH2_US8BIT_LEN    1
#define HI3630_SRCDOWN_CH2_US8BIT_OFFSET 5
#define HI3630_SRCDOWN_CH2_BDIAN_LEN    1
#define HI3630_SRCDOWN_CH2_BDIAN_OFFSET 4
#define HI3630_SRCDOWN_CH2_HLC_LEN    1
#define HI3630_SRCDOWN_CH2_HLC_OFFSET 3
#define HI3630_SRCDOWN_CH2_AUFMT_LEN    3
#define HI3630_SRCDOWN_CH2_AUFMT_OFFSET 0
#define HI3630_SRCDOWN_INI_NUM_LEN    5
#define HI3630_SRCDOWN_INI_NUM_OFFSET 0
#define HI3630_SRCDOWN_INI_FRAC_LEN    30
#define HI3630_SRCDOWN_INI_FRAC_OFFSET 0
#define HI3630_SRCDOWN_LOAD_INI_LEN    1
#define HI3630_SRCDOWN_LOAD_INI_OFFSET 0
#define HI3630_SRCDOWN_STEP_NUM_LEN    5
#define HI3630_SRCDOWN_STEP_NUM_OFFSET 0
#define HI3630_SRCDOWN_STEP_FRAC_LEN    30
#define HI3630_SRCDOWN_STEP_FRAC_OFFSET 0
#define HI3630_SRCDOWN_COEFLAST_LEN    32
#define HI3630_SRCDOWN_COEFLAST_OFFSET 0
#define HI3630_SRCDOWN_CH2_R_GAIN_LEN    16
#define HI3630_SRCDOWN_CH2_R_GAIN_OFFSET 16
#define HI3630_SRCDOWN_CH2_L_GAIN_LEN    16
#define HI3630_SRCDOWN_CH2_L_GAIN_OFFSET 0
#define HI3630_SRCDOWN_MIX_CTRL_LEN    3
#define HI3630_SRCDOWN_MIX_CTRL_OFFSET 0
#define HI3630_SRCDOWN_OUT_FMT_LEN    2
#define HI3630_SRCDOWN_OUT_FMT_OFFSET 2
#define HI3630_SRCDOWN_MONO_MODE_LEN    1
#define HI3630_SRCDOWN_MONO_MODE_OFFSET 1
#define HI3630_SRCDOWN_SINGLE_REQ_MODE_LEN    1
#define HI3630_SRCDOWN_SINGLE_REQ_MODE_OFFSET 0
#define HI3630_SRCDOWN_LEFT_FIX_ADDR_LEN    32
#define HI3630_SRCDOWN_LEFT_FIX_ADDR_OFFSET 0
#define HI3630_SRCDOWN_RIGHT_FIX_ADDR_LEN    32
#define HI3630_SRCDOWN_RIGHT_FIX_ADDR_OFFSET 0
#define HI3630_SRCDOWN_WB_SKIP_NUM_LEN    10
#define HI3630_SRCDOWN_WB_SKIP_NUM_OFFSET 0
#define HI3630_SRCDOWN_SRCDOWN_EN_LEN    1
#define HI3630_SRCDOWN_SRCDOWN_EN_OFFSET 0
#define HI3630_SRCDOWN_RIGHT_ADDR_SECU_EN_LEN    1
#define HI3630_SRCDOWN_RIGHT_ADDR_SECU_EN_OFFSET 9
#define HI3630_SRCDOWN_LEFT_ADDR_SECU_EN_LEN    1
#define HI3630_SRCDOWN_LEFT_ADDR_SECU_EN_OFFSET 8
#define HI3630_SRCDOWN_CH2_DMA_SECU_EN_LEN    1
#define HI3630_SRCDOWN_CH2_DMA_SECU_EN_OFFSET 7
#define HI3630_SRCDOWN_CH1_DMA_SECU_EN_LEN    1
#define HI3630_SRCDOWN_CH1_DMA_SECU_EN_OFFSET 6
#define HI3630_SRCDOWN_CH0_DMA_SECU_EN_LEN    1
#define HI3630_SRCDOWN_CH0_DMA_SECU_EN_OFFSET 5
#define HI3630_SRCDOWN_WB_SECU_INFO_LEN    1
#define HI3630_SRCDOWN_WB_SECU_INFO_OFFSET 4
#define HI3630_SRCDOWN_CH2_SECU_INFO_LEN    1
#define HI3630_SRCDOWN_CH2_SECU_INFO_OFFSET 3
#define HI3630_SRCDOWN_CH1_SECU_INFO_LEN    1
#define HI3630_SRCDOWN_CH1_SECU_INFO_OFFSET 2
#define HI3630_SRCDOWN_CH0_SECU_INFO_LEN    1
#define HI3630_SRCDOWN_CH0_SECU_INFO_OFFSET 1
#define HI3630_SRCDOWN_SRCU_SECU_EN_LEN    1
#define HI3630_SRCDOWN_SRCU_SECU_EN_OFFSET 0
#define HI3630_SRCDOWN_CFG_GF_EN_LEN    1
#define HI3630_SRCDOWN_CFG_GF_EN_OFFSET 3
#define HI3630_SRCDOWN_CH2_RFIFO_GF_EN_LEN    1
#define HI3630_SRCDOWN_CH2_RFIFO_GF_EN_OFFSET 2
#define HI3630_SRCDOWN_CH1_RFIFO_GF_EN_LEN    1
#define HI3630_SRCDOWN_CH1_RFIFO_GF_EN_OFFSET 1
#define HI3630_SRCDOWN_CH0_RFIFO_GF_EN_LEN    1
#define HI3630_SRCDOWN_CH0_RFIFO_GF_EN_OFFSET 0
#define HI3630_SRCDOWN_CH2_B_FINISH_LEN    1
#define HI3630_SRCDOWN_CH2_B_FINISH_OFFSET 5
#define HI3630_SRCDOWN_CH2_A_FINISH_LEN    1
#define HI3630_SRCDOWN_CH2_A_FINISH_OFFSET 4
#define HI3630_SRCDOWN_CH1_B_FINISH_LEN    1
#define HI3630_SRCDOWN_CH1_B_FINISH_OFFSET 3
#define HI3630_SRCDOWN_CH1_A_FINISH_LEN    1
#define HI3630_SRCDOWN_CH1_A_FINISH_OFFSET 2
#define HI3630_SRCDOWN_CH0_B_FINISH_LEN    1
#define HI3630_SRCDOWN_CH0_B_FINISH_OFFSET 1
#define HI3630_SRCDOWN_CH0_A_FINISH_LEN    1
#define HI3630_SRCDOWN_CH0_A_FINISH_OFFSET 0
#define HI3630_SRCDOWN_CH2_B_FINISH_EN_LEN    1
#define HI3630_SRCDOWN_CH2_B_FINISH_EN_OFFSET 5
#define HI3630_SRCDOWN_CH2_A_FINISH_EN_LEN    1
#define HI3630_SRCDOWN_CH2_A_FINISH_EN_OFFSET 4
#define HI3630_SRCDOWN_CH1_B_FINISH_EN_LEN    1
#define HI3630_SRCDOWN_CH1_B_FINISH_EN_OFFSET 3
#define HI3630_SRCDOWN_CH1_A_FINISH_EN_LEN    1
#define HI3630_SRCDOWN_CH1_A_FINISH_EN_OFFSET 2
#define HI3630_SRCDOWN_CH0_B_FINISH_EN_LEN    1
#define HI3630_SRCDOWN_CH0_B_FINISH_EN_OFFSET 1
#define HI3630_SRCDOWN_CH0_A_FINISH_EN_LEN    1
#define HI3630_SRCDOWN_CH0_A_FINISH_EN_OFFSET 0
#define HI3630_SRCDOWN_SRCD_SECU_A_ERROR_LEN    1
#define HI3630_SRCDOWN_SRCD_SECU_A_ERROR_OFFSET 0
#define HI3630_SRCDOWN_SRCD_SECU_A_ERROR_EN_LEN    1
#define HI3630_SRCDOWN_SRCD_SECU_A_ERROR_EN_OFFSET 0
#define HI3630_SRCDOWN_CFG_SINC_PGEN_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_SINC_PGEN_MEM_OFFSET 14
#define HI3630_SRCDOWN_CFG_SINC_RET1N_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_SINC_RET1N_MEM_OFFSET 13
#define HI3630_SRCDOWN_CFG_SINC_RET2N_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_SINC_RET2N_MEM_OFFSET 12
#define HI3630_SRCDOWN_CFG_CH2_PGEN_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_CH2_PGEN_MEM_OFFSET 10
#define HI3630_SRCDOWN_CFG_CH2_RET1N_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_CH2_RET1N_MEM_OFFSET 9
#define HI3630_SRCDOWN_CFG_CH2_RET2N_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_CH2_RET2N_MEM_OFFSET 8
#define HI3630_SRCDOWN_CFG_CH1_PGEN_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_CH1_PGEN_MEM_OFFSET 6
#define HI3630_SRCDOWN_CFG_CH1_RET1N_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_CH1_RET1N_MEM_OFFSET 5
#define HI3630_SRCDOWN_CFG_CH1_RET2N_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_CH1_RET2N_MEM_OFFSET 4
#define HI3630_SRCDOWN_CFG_CH0_PGEN_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_CH0_PGEN_MEM_OFFSET 2
#define HI3630_SRCDOWN_CFG_CH0_RET1N_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_CH0_RET1N_MEM_OFFSET 1
#define HI3630_SRCDOWN_CFG_CH0_RET2N_MEM_LEN    1
#define HI3630_SRCDOWN_CFG_CH0_RET2N_MEM_OFFSET 0

#define HI3630_MIN_DMA_TIME_US  22000
#define HI3630_MAX_DMA_TIME_US  20000
#define HI3630_MIN_STOP_DMA_TIME_US 1000
#define HI3630_MAX_STOP_DMA_TIME_US 2000

#define SRCDOWN_CH0_DMA_A 0
#define SRCDOWN_CH0_DMA_B 1

#define SRCDOWN_CH0_DMA_A_MASK (0x1 << SRCDOWN_CH0_DMA_A)
#define SRCDOWN_CH0_DMA_B_MASK (0x1 << SRCDOWN_CH0_DMA_B)

#define SRCDOWN_CH0 0
#define SRCDOWN_CH1 1
#define SRCDOWN_CH2 2

#define SRCDOWN_CH0_STP (0x1 << 1 | 0x1 << 2)

#define SRCDOWN_GLOBAL_CLEAR_BIT 0
#define SRCDOWN_CH0_CLEAR_BIT 	1
#define SRCDOWN_CH1_CLEAR_BIT 	2
#define SRCDOWN_CH2_CLEAR_BIT 	3

#define SRCDOWN_CH0_MASK			0x3
#define SRCDOWN_CH0_INT_FLAG_BIT	0
#define SRCDOWN_CH0_FINISH_EN_BIT	0
#define SRCDOWN_CH0_A_FINISH_EN_BIT	0
#define SRCDOWN_CH0_B_FINISH_EN_BIT	1
#define SRCDOWN_CH0_A_DMA_EN_BIT	0
#define SRCDOWN_CH0_B_DMA_EN_BIT	1

#define SRCDOWN_CH1_MASK				0xc
#define SRCDOWN_CH1_INT_FLAG_BIT	2
#define SRCDOWN_CH1_FINISH_EN_BIT	2
#define SRCDOWN_CH1_A_FINISH_EN_BIT	2
#define SRCDOWN_CH1_B_FINISH_EN_BIT	3
#define SRCDOWN_CH1_A_DMA_EN_BIT	2
#define SRCDOWN_CH1_B_DMA_EN_BIT	3

#define SRCDOWN_CH2_MASK				0x30
#define SRCDOWN_CH2_INT_FLAG_BIT	4
#define SRCDOWN_CH2_FINISH_EN_BIT	4
#define SRCDOWN_CH2_A_FINISH_EN_BIT	4
#define SRCDOWN_CH2_B_FINISH_EN_BIT	5
#define SRCDOWN_CH2_A_DMA_EN_BIT	4
#define SRCDOWN_CH2_B_DMA_EN_BIT	5

#define SRCDOWN_BIG_DIAN_BIT		(0x1 << 0x4)
#define SRCDOWN_CH0_HLC			(0x1 << 0x3)

#define SRCDOWN_OUT_FORMT_24BIT		(0x0 << 0x2)
#define SRCDOWN_STEREO_DATA		(0x0 << 0x1)
#define SRCDOWN_SINGLE_REQ_MODE		(0x1 << 0x0)

enum HI3630_SRCDOWN_STATUS {
	STATUS_SRCDOWN_STOP = 0,
	STATUS_SRCDOWN_RUNNING,
};

enum HI3630_FORMAT {
	STEREO_16BIT = 0,
	MONO_16BIT,
	STEREO_8BIT,
	MONO_8BIT,
	STEREO_18BIT,
	STEREO_20BIT,
	STEREO_24BIT,
};

struct hi3630_srcdown_data {
	struct hi3630_asp_irq *hi3630_asp_irq;
	struct regulator_bulk_data regu;
	int irq;
	struct device *dev;
};

struct hi3630_srcdown_runtime_data {
	spinlock_t lock;
	struct hi3630_srcdown_data *pdata;
	struct mutex mutex;
	enum HI3630_SRCDOWN_STATUS status;
	bool two_dma_flag;
	unsigned int dma_addr;
	unsigned int period_size;
	int period_cur;
	int period_next;
};

#endif