.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* BLE_bless_isr */
.set BLE_bless_isr__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set BLE_bless_isr__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set BLE_bless_isr__INTC_MASK, 0x1000
.set BLE_bless_isr__INTC_NUMBER, 12
.set BLE_bless_isr__INTC_PRIOR_MASK, 0xC0
.set BLE_bless_isr__INTC_PRIOR_NUM, 3
.set BLE_bless_isr__INTC_PRIOR_REG, CYREG_CM0_IPR3
.set BLE_bless_isr__INTC_SET_EN_REG, CYREG_CM0_ISER
.set BLE_bless_isr__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* BLE_cy_m0s8_ble */
.set BLE_cy_m0s8_ble__ADC_BUMP1, CYREG_BLE_BLERD_ADC_BUMP1
.set BLE_cy_m0s8_ble__ADC_BUMP2, CYREG_BLE_BLERD_ADC_BUMP2
.set BLE_cy_m0s8_ble__ADV_CH_TX_POWER, CYREG_BLE_BLELL_ADV_CH_TX_POWER
.set BLE_cy_m0s8_ble__ADV_CONFIG, CYREG_BLE_BLELL_ADV_CONFIG
.set BLE_cy_m0s8_ble__ADV_INTERVAL_TIMEOUT, CYREG_BLE_BLELL_ADV_INTERVAL_TIMEOUT
.set BLE_cy_m0s8_ble__ADV_INTR, CYREG_BLE_BLELL_ADV_INTR
.set BLE_cy_m0s8_ble__ADV_NEXT_INSTANT, CYREG_BLE_BLELL_ADV_NEXT_INSTANT
.set BLE_cy_m0s8_ble__ADV_PARAMS, CYREG_BLE_BLELL_ADV_PARAMS
.set BLE_cy_m0s8_ble__ADV_SCN_RSP_TX_FIFO, CYREG_BLE_BLELL_ADV_SCN_RSP_TX_FIFO
.set BLE_cy_m0s8_ble__ADV_TX_DATA_FIFO, CYREG_BLE_BLELL_ADV_TX_DATA_FIFO
.set BLE_cy_m0s8_ble__AGC, CYREG_BLE_BLERD_AGC
.set BLE_cy_m0s8_ble__BALUN, CYREG_BLE_BLERD_BALUN
.set BLE_cy_m0s8_ble__BB_BUMP1, CYREG_BLE_BLERD_BB_BUMP1
.set BLE_cy_m0s8_ble__BB_BUMP2, CYREG_BLE_BLERD_BB_BUMP2
.set BLE_cy_m0s8_ble__BB_XO, CYREG_BLE_BLERD_BB_XO
.set BLE_cy_m0s8_ble__BB_XO_CAPTRIM, CYREG_BLE_BLERD_BB_XO_CAPTRIM
.set BLE_cy_m0s8_ble__CE_CNFG_STS_REGISTER, CYREG_BLE_BLELL_CE_CNFG_STS_REGISTER
.set BLE_cy_m0s8_ble__CE_LENGTH, CYREG_BLE_BLELL_CE_LENGTH
.set BLE_cy_m0s8_ble__CFG_1_FCAL, CYREG_BLE_BLERD_CFG_1_FCAL
.set BLE_cy_m0s8_ble__CFG_2_FCAL, CYREG_BLE_BLERD_CFG_2_FCAL
.set BLE_cy_m0s8_ble__CFG_3_FCAL, CYREG_BLE_BLERD_CFG_3_FCAL
.set BLE_cy_m0s8_ble__CFG_4_FCAL, CYREG_BLE_BLERD_CFG_4_FCAL
.set BLE_cy_m0s8_ble__CFG_5_FCAL, CYREG_BLE_BLERD_CFG_5_FCAL
.set BLE_cy_m0s8_ble__CFG_6_FCAL, CYREG_BLE_BLERD_CFG_6_FCAL
.set BLE_cy_m0s8_ble__CFG1, CYREG_BLE_BLERD_CFG1
.set BLE_cy_m0s8_ble__CFG2, CYREG_BLE_BLERD_CFG2
.set BLE_cy_m0s8_ble__CFGCTRL, CYREG_BLE_BLERD_CFGCTRL
.set BLE_cy_m0s8_ble__CLOCK_CONFIG, CYREG_BLE_BLELL_CLOCK_CONFIG
.set BLE_cy_m0s8_ble__COMMAND_REGISTER, CYREG_BLE_BLELL_COMMAND_REGISTER
.set BLE_cy_m0s8_ble__CONN_CE_COUNTER, CYREG_BLE_BLELL_CONN_CE_COUNTER
.set BLE_cy_m0s8_ble__CONN_CE_INSTANT, CYREG_BLE_BLELL_CONN_CE_INSTANT
.set BLE_cy_m0s8_ble__CONN_CH_TX_POWER, CYREG_BLE_BLELL_CONN_CH_TX_POWER
.set BLE_cy_m0s8_ble__CONN_CONFIG, CYREG_BLE_BLELL_CONN_CONFIG
.set BLE_cy_m0s8_ble__CONN_INDEX, CYREG_BLE_BLELL_CONN_INDEX
.set BLE_cy_m0s8_ble__CONN_INTERVAL, CYREG_BLE_BLELL_CONN_INTERVAL
.set BLE_cy_m0s8_ble__CONN_INTR, CYREG_BLE_BLELL_CONN_INTR
.set BLE_cy_m0s8_ble__CONN_INTR_MASK, CYREG_BLE_BLELL_CONN_INTR_MASK
.set BLE_cy_m0s8_ble__CONN_PARAM1, CYREG_BLE_BLELL_CONN_PARAM1
.set BLE_cy_m0s8_ble__CONN_PARAM2, CYREG_BLE_BLELL_CONN_PARAM2
.set BLE_cy_m0s8_ble__CONN_REQ_WORD0, CYREG_BLE_BLELL_CONN_REQ_WORD0
.set BLE_cy_m0s8_ble__CONN_REQ_WORD1, CYREG_BLE_BLELL_CONN_REQ_WORD1
.set BLE_cy_m0s8_ble__CONN_REQ_WORD10, CYREG_BLE_BLELL_CONN_REQ_WORD10
.set BLE_cy_m0s8_ble__CONN_REQ_WORD11, CYREG_BLE_BLELL_CONN_REQ_WORD11
.set BLE_cy_m0s8_ble__CONN_REQ_WORD2, CYREG_BLE_BLELL_CONN_REQ_WORD2
.set BLE_cy_m0s8_ble__CONN_REQ_WORD3, CYREG_BLE_BLELL_CONN_REQ_WORD3
.set BLE_cy_m0s8_ble__CONN_REQ_WORD4, CYREG_BLE_BLELL_CONN_REQ_WORD4
.set BLE_cy_m0s8_ble__CONN_REQ_WORD5, CYREG_BLE_BLELL_CONN_REQ_WORD5
.set BLE_cy_m0s8_ble__CONN_REQ_WORD6, CYREG_BLE_BLELL_CONN_REQ_WORD6
.set BLE_cy_m0s8_ble__CONN_REQ_WORD7, CYREG_BLE_BLELL_CONN_REQ_WORD7
.set BLE_cy_m0s8_ble__CONN_REQ_WORD8, CYREG_BLE_BLELL_CONN_REQ_WORD8
.set BLE_cy_m0s8_ble__CONN_REQ_WORD9, CYREG_BLE_BLELL_CONN_REQ_WORD9
.set BLE_cy_m0s8_ble__CONN_RXMEM_BASE_ADDR, CYREG_BLE_BLELL_CONN_RXMEM_BASE_ADDR
.set BLE_cy_m0s8_ble__CONN_STATUS, CYREG_BLE_BLELL_CONN_STATUS
.set BLE_cy_m0s8_ble__CONN_TXMEM_BASE_ADDR, CYREG_BLE_BLELL_CONN_TXMEM_BASE_ADDR
.set BLE_cy_m0s8_ble__CONN_UPDATE_NEW_INTERVAL, CYREG_BLE_BLELL_CONN_UPDATE_NEW_INTERVAL
.set BLE_cy_m0s8_ble__CONN_UPDATE_NEW_LATENCY, CYREG_BLE_BLELL_CONN_UPDATE_NEW_LATENCY
.set BLE_cy_m0s8_ble__CONN_UPDATE_NEW_SL_INTERVAL, CYREG_BLE_BLELL_CONN_UPDATE_NEW_SL_INTERVAL
.set BLE_cy_m0s8_ble__CONN_UPDATE_NEW_SUP_TO, CYREG_BLE_BLELL_CONN_UPDATE_NEW_SUP_TO
.set BLE_cy_m0s8_ble__CTR1, CYREG_BLE_BLERD_CTR1
.set BLE_cy_m0s8_ble__DATA_CHANNELS_H0, CYREG_BLE_BLELL_DATA_CHANNELS_H0
.set BLE_cy_m0s8_ble__DATA_CHANNELS_H1, CYREG_BLE_BLELL_DATA_CHANNELS_H1
.set BLE_cy_m0s8_ble__DATA_CHANNELS_L0, CYREG_BLE_BLELL_DATA_CHANNELS_L0
.set BLE_cy_m0s8_ble__DATA_CHANNELS_L1, CYREG_BLE_BLELL_DATA_CHANNELS_L1
.set BLE_cy_m0s8_ble__DATA_CHANNELS_M0, CYREG_BLE_BLELL_DATA_CHANNELS_M0
.set BLE_cy_m0s8_ble__DATA_CHANNELS_M1, CYREG_BLE_BLELL_DATA_CHANNELS_M1
.set BLE_cy_m0s8_ble__DATA_LIST_ACK_UPDATE__STATUS, CYREG_BLE_BLELL_DATA_LIST_ACK_UPDATE__STATUS
.set BLE_cy_m0s8_ble__DATA_LIST_SENT_UPDATE__STATUS, CYREG_BLE_BLELL_DATA_LIST_SENT_UPDATE__STATUS
.set BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR0, CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR0
.set BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR1, CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR1
.set BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR2, CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR2
.set BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR3, CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR3
.set BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR4, CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR4
.set BLE_cy_m0s8_ble__DATA0, CYREG_BLE_BLELL_DATA0
.set BLE_cy_m0s8_ble__DATA1, CYREG_BLE_BLELL_DATA1
.set BLE_cy_m0s8_ble__DATA10, CYREG_BLE_BLELL_DATA10
.set BLE_cy_m0s8_ble__DATA11, CYREG_BLE_BLELL_DATA11
.set BLE_cy_m0s8_ble__DATA12, CYREG_BLE_BLELL_DATA12
.set BLE_cy_m0s8_ble__DATA13, CYREG_BLE_BLELL_DATA13
.set BLE_cy_m0s8_ble__DATA2, CYREG_BLE_BLELL_DATA2
.set BLE_cy_m0s8_ble__DATA3, CYREG_BLE_BLELL_DATA3
.set BLE_cy_m0s8_ble__DATA4, CYREG_BLE_BLELL_DATA4
.set BLE_cy_m0s8_ble__DATA5, CYREG_BLE_BLELL_DATA5
.set BLE_cy_m0s8_ble__DATA6, CYREG_BLE_BLELL_DATA6
.set BLE_cy_m0s8_ble__DATA7, CYREG_BLE_BLELL_DATA7
.set BLE_cy_m0s8_ble__DATA8, CYREG_BLE_BLELL_DATA8
.set BLE_cy_m0s8_ble__DATA9, CYREG_BLE_BLELL_DATA9
.set BLE_cy_m0s8_ble__DBG_1, CYREG_BLE_BLERD_DBG_1
.set BLE_cy_m0s8_ble__DBG_2, CYREG_BLE_BLERD_DBG_2
.set BLE_cy_m0s8_ble__DBG_3, CYREG_BLE_BLERD_DBG_3
.set BLE_cy_m0s8_ble__DBG_BB, CYREG_BLE_BLERD_DBG_BB
.set BLE_cy_m0s8_ble__DBUS, CYREG_BLE_BLERD_DBUS
.set BLE_cy_m0s8_ble__DC, CYREG_BLE_BLERD_DC
.set BLE_cy_m0s8_ble__DCCAL, CYREG_BLE_BLERD_DCCAL
.set BLE_cy_m0s8_ble__DEV_PUB_ADDR_H, CYREG_BLE_BLELL_DEV_PUB_ADDR_H
.set BLE_cy_m0s8_ble__DEV_PUB_ADDR_L, CYREG_BLE_BLELL_DEV_PUB_ADDR_L
.set BLE_cy_m0s8_ble__DEV_PUB_ADDR_M, CYREG_BLE_BLELL_DEV_PUB_ADDR_M
.set BLE_cy_m0s8_ble__DEVICE_RAND_ADDR_H, CYREG_BLE_BLELL_DEVICE_RAND_ADDR_H
.set BLE_cy_m0s8_ble__DEVICE_RAND_ADDR_L, CYREG_BLE_BLELL_DEVICE_RAND_ADDR_L
.set BLE_cy_m0s8_ble__DEVICE_RAND_ADDR_M, CYREG_BLE_BLELL_DEVICE_RAND_ADDR_M
.set BLE_cy_m0s8_ble__DIAG1, CYREG_BLE_BLERD_DIAG1
.set BLE_cy_m0s8_ble__DPLL_CONFIG, CYREG_BLE_BLELL_DPLL_CONFIG
.set BLE_cy_m0s8_ble__DSM1, CYREG_BLE_BLERD_DSM1
.set BLE_cy_m0s8_ble__DSM2, CYREG_BLE_BLERD_DSM2
.set BLE_cy_m0s8_ble__DSM3, CYREG_BLE_BLERD_DSM3
.set BLE_cy_m0s8_ble__DSM4, CYREG_BLE_BLERD_DSM4
.set BLE_cy_m0s8_ble__DSM5, CYREG_BLE_BLERD_DSM5
.set BLE_cy_m0s8_ble__DSM6, CYREG_BLE_BLERD_DSM6
.set BLE_cy_m0s8_ble__DTM_RX_PKT_COUNT, CYREG_BLE_BLELL_DTM_RX_PKT_COUNT
.set BLE_cy_m0s8_ble__ENC_CONFIG, CYREG_BLE_BLELL_ENC_CONFIG
.set BLE_cy_m0s8_ble__ENC_INTR, CYREG_BLE_BLELL_ENC_INTR
.set BLE_cy_m0s8_ble__ENC_INTR_EN, CYREG_BLE_BLELL_ENC_INTR_EN
.set BLE_cy_m0s8_ble__ENC_KEY0, CYREG_BLE_BLELL_ENC_KEY0
.set BLE_cy_m0s8_ble__ENC_KEY1, CYREG_BLE_BLELL_ENC_KEY1
.set BLE_cy_m0s8_ble__ENC_KEY2, CYREG_BLE_BLELL_ENC_KEY2
.set BLE_cy_m0s8_ble__ENC_KEY3, CYREG_BLE_BLELL_ENC_KEY3
.set BLE_cy_m0s8_ble__ENC_KEY4, CYREG_BLE_BLELL_ENC_KEY4
.set BLE_cy_m0s8_ble__ENC_KEY5, CYREG_BLE_BLELL_ENC_KEY5
.set BLE_cy_m0s8_ble__ENC_KEY6, CYREG_BLE_BLELL_ENC_KEY6
.set BLE_cy_m0s8_ble__ENC_KEY7, CYREG_BLE_BLELL_ENC_KEY7
.set BLE_cy_m0s8_ble__ENC_PARAMS, CYREG_BLE_BLELL_ENC_PARAMS
.set BLE_cy_m0s8_ble__EVENT_ENABLE, CYREG_BLE_BLELL_EVENT_ENABLE
.set BLE_cy_m0s8_ble__EVENT_INTR, CYREG_BLE_BLELL_EVENT_INTR
.set BLE_cy_m0s8_ble__FCAL_TEST, CYREG_BLE_BLERD_FCAL_TEST
.set BLE_cy_m0s8_ble__FPD_TEST, CYREG_BLE_BLERD_FPD_TEST
.set BLE_cy_m0s8_ble__FSM, CYREG_BLE_BLERD_FSM
.set BLE_cy_m0s8_ble__IM, CYREG_BLE_BLERD_IM
.set BLE_cy_m0s8_ble__INIT_CONFIG, CYREG_BLE_BLELL_INIT_CONFIG
.set BLE_cy_m0s8_ble__INIT_INTERVAL, CYREG_BLE_BLELL_INIT_INTERVAL
.set BLE_cy_m0s8_ble__INIT_INTR, CYREG_BLE_BLELL_INIT_INTR
.set BLE_cy_m0s8_ble__INIT_NEXT_INSTANT, CYREG_BLE_BLELL_INIT_NEXT_INSTANT
.set BLE_cy_m0s8_ble__INIT_PARAM, CYREG_BLE_BLELL_INIT_PARAM
.set BLE_cy_m0s8_ble__INIT_SCN_ADV_RX_FIFO, CYREG_BLE_BLELL_INIT_SCN_ADV_RX_FIFO
.set BLE_cy_m0s8_ble__INIT_WINDOW, CYREG_BLE_BLELL_INIT_WINDOW
.set BLE_cy_m0s8_ble__IQMIS, CYREG_BLE_BLERD_IQMIS
.set BLE_cy_m0s8_ble__IV_MASTER0, CYREG_BLE_BLELL_IV_MASTER0
.set BLE_cy_m0s8_ble__IV_MASTER1, CYREG_BLE_BLELL_IV_MASTER1
.set BLE_cy_m0s8_ble__IV_SLAVE0, CYREG_BLE_BLELL_IV_SLAVE0
.set BLE_cy_m0s8_ble__IV_SLAVE1, CYREG_BLE_BLELL_IV_SLAVE1
.set BLE_cy_m0s8_ble__KVCAL, CYREG_BLE_BLERD_KVCAL
.set BLE_cy_m0s8_ble__LDO, CYREG_BLE_BLERD_LDO
.set BLE_cy_m0s8_ble__LDO_BYPASS, CYREG_BLE_BLERD_LDO_BYPASS
.set BLE_cy_m0s8_ble__LE_PING_TIMER_ADDR, CYREG_BLE_BLELL_LE_PING_TIMER_ADDR
.set BLE_cy_m0s8_ble__LE_PING_TIMER_NEXT_EXP, CYREG_BLE_BLELL_LE_PING_TIMER_NEXT_EXP
.set BLE_cy_m0s8_ble__LE_PING_TIMER_OFFSET, CYREG_BLE_BLELL_LE_PING_TIMER_OFFSET
.set BLE_cy_m0s8_ble__LE_PING_TIMER_WRAP_COUNT, CYREG_BLE_BLELL_LE_PING_TIMER_WRAP_COUNT
.set BLE_cy_m0s8_ble__LE_RF_TEST_MODE, CYREG_BLE_BLELL_LE_RF_TEST_MODE
.set BLE_cy_m0s8_ble__LF_CLK_CTRL, CYREG_BLE_BLESS_LF_CLK_CTRL
.set BLE_cy_m0s8_ble__LL_CLK_EN, CYREG_BLE_BLESS_LL_CLK_EN
.set BLE_cy_m0s8_ble__LL_DSM_CTRL, CYREG_BLE_BLESS_LL_DSM_CTRL
.set BLE_cy_m0s8_ble__LL_DSM_INTR_STAT, CYREG_BLE_BLESS_LL_DSM_INTR_STAT
.set BLE_cy_m0s8_ble__LLH_FEATURE_CONFIG, CYREG_BLE_BLELL_LLH_FEATURE_CONFIG
.set BLE_cy_m0s8_ble__MIC_IN0, CYREG_BLE_BLELL_MIC_IN0
.set BLE_cy_m0s8_ble__MIC_IN1, CYREG_BLE_BLELL_MIC_IN1
.set BLE_cy_m0s8_ble__MIC_OUT0, CYREG_BLE_BLELL_MIC_OUT0
.set BLE_cy_m0s8_ble__MIC_OUT1, CYREG_BLE_BLELL_MIC_OUT1
.set BLE_cy_m0s8_ble__MODEM, CYREG_BLE_BLERD_MODEM
.set BLE_cy_m0s8_ble__MONI, CYREG_BLE_BLERD_MONI
.set BLE_cy_m0s8_ble__NEXT_CE_INSTANT, CYREG_BLE_BLELL_NEXT_CE_INSTANT
.set BLE_cy_m0s8_ble__NEXT_RESP_TIMER_EXP, CYREG_BLE_BLELL_NEXT_RESP_TIMER_EXP
.set BLE_cy_m0s8_ble__NEXT_SUP_TO, CYREG_BLE_BLELL_NEXT_SUP_TO
.set BLE_cy_m0s8_ble__OFFSET_TO_FIRST_INSTANT, CYREG_BLE_BLELL_OFFSET_TO_FIRST_INSTANT
.set BLE_cy_m0s8_ble__PACKET_COUNTER0, CYREG_BLE_BLELL_PACKET_COUNTER0
.set BLE_cy_m0s8_ble__PACKET_COUNTER1, CYREG_BLE_BLELL_PACKET_COUNTER1
.set BLE_cy_m0s8_ble__PACKET_COUNTER2, CYREG_BLE_BLELL_PACKET_COUNTER2
.set BLE_cy_m0s8_ble__PDU_ACCESS_ADDR_H_REGISTER, CYREG_BLE_BLELL_PDU_ACCESS_ADDR_H_REGISTER
.set BLE_cy_m0s8_ble__PDU_ACCESS_ADDR_L_REGISTER, CYREG_BLE_BLELL_PDU_ACCESS_ADDR_L_REGISTER
.set BLE_cy_m0s8_ble__PDU_RESP_TIMER, CYREG_BLE_BLELL_PDU_RESP_TIMER
.set BLE_cy_m0s8_ble__PEER_ADDR_H, CYREG_BLE_BLELL_PEER_ADDR_H
.set BLE_cy_m0s8_ble__PEER_ADDR_L, CYREG_BLE_BLELL_PEER_ADDR_L
.set BLE_cy_m0s8_ble__PEER_ADDR_M, CYREG_BLE_BLELL_PEER_ADDR_M
.set BLE_cy_m0s8_ble__POC_REG__TIM_CONTROL, CYREG_BLE_BLELL_POC_REG__TIM_CONTROL
.set BLE_cy_m0s8_ble__RCCAL, CYREG_BLE_BLERD_RCCAL
.set BLE_cy_m0s8_ble__READ_IQ_1, CYREG_BLE_BLERD_READ_IQ_1
.set BLE_cy_m0s8_ble__READ_IQ_2, CYREG_BLE_BLERD_READ_IQ_2
.set BLE_cy_m0s8_ble__READ_IQ_3, CYREG_BLE_BLERD_READ_IQ_3
.set BLE_cy_m0s8_ble__READ_IQ_4, CYREG_BLE_BLERD_READ_IQ_4
.set BLE_cy_m0s8_ble__RECEIVE_TRIG_CTRL, CYREG_BLE_BLELL_RECEIVE_TRIG_CTRL
.set BLE_cy_m0s8_ble__RF_CONFIG, CYREG_BLE_BLESS_RF_CONFIG
.set BLE_cy_m0s8_ble__RMAP, CYREG_BLE_BLERD_RMAP
.set BLE_cy_m0s8_ble__RSSI, CYREG_BLE_BLERD_RSSI
.set BLE_cy_m0s8_ble__RX, CYREG_BLE_BLERD_RX
.set BLE_cy_m0s8_ble__RX_BUMP1, CYREG_BLE_BLERD_RX_BUMP1
.set BLE_cy_m0s8_ble__RX_BUMP2, CYREG_BLE_BLERD_RX_BUMP2
.set BLE_cy_m0s8_ble__SCAN_CONFIG, CYREG_BLE_BLELL_SCAN_CONFIG
.set BLE_cy_m0s8_ble__SCAN_INTERVAL, CYREG_BLE_BLELL_SCAN_INTERVAL
.set BLE_cy_m0s8_ble__SCAN_INTR, CYREG_BLE_BLELL_SCAN_INTR
.set BLE_cy_m0s8_ble__SCAN_NEXT_INSTANT, CYREG_BLE_BLELL_SCAN_NEXT_INSTANT
.set BLE_cy_m0s8_ble__SCAN_PARAM, CYREG_BLE_BLELL_SCAN_PARAM
.set BLE_cy_m0s8_ble__SCAN_WINDOW, CYREG_BLE_BLELL_SCAN_WINDOW
.set BLE_cy_m0s8_ble__SL_CONN_INTERVAL, CYREG_BLE_BLELL_SL_CONN_INTERVAL
.set BLE_cy_m0s8_ble__SLAVE_LATENCY, CYREG_BLE_BLELL_SLAVE_LATENCY
.set BLE_cy_m0s8_ble__SLAVE_TIMING_CONTROL, CYREG_BLE_BLELL_SLAVE_TIMING_CONTROL
.set BLE_cy_m0s8_ble__SLV_WIN_ADJ, CYREG_BLE_BLELL_SLV_WIN_ADJ
.set BLE_cy_m0s8_ble__SUP_TIMEOUT, CYREG_BLE_BLELL_SUP_TIMEOUT
.set BLE_cy_m0s8_ble__SY, CYREG_BLE_BLERD_SY
.set BLE_cy_m0s8_ble__SY_BUMP1, CYREG_BLE_BLERD_SY_BUMP1
.set BLE_cy_m0s8_ble__SY_BUMP2, CYREG_BLE_BLERD_SY_BUMP2
.set BLE_cy_m0s8_ble__TEST, CYREG_BLE_BLERD_TEST
.set BLE_cy_m0s8_ble__TEST2_SY, CYREG_BLE_BLERD_TEST2_SY
.set BLE_cy_m0s8_ble__THRSHD1, CYREG_BLE_BLERD_THRSHD1
.set BLE_cy_m0s8_ble__THRSHD2, CYREG_BLE_BLERD_THRSHD2
.set BLE_cy_m0s8_ble__THRSHD3, CYREG_BLE_BLERD_THRSHD3
.set BLE_cy_m0s8_ble__THRSHD4, CYREG_BLE_BLERD_THRSHD4
.set BLE_cy_m0s8_ble__THRSHD5, CYREG_BLE_BLERD_THRSHD5
.set BLE_cy_m0s8_ble__TIM_COUNTER_L, CYREG_BLE_BLELL_TIM_COUNTER_L
.set BLE_cy_m0s8_ble__TRANSMIT_WINDOW_OFFSET, CYREG_BLE_BLELL_TRANSMIT_WINDOW_OFFSET
.set BLE_cy_m0s8_ble__TRANSMIT_WINDOW_SIZE, CYREG_BLE_BLELL_TRANSMIT_WINDOW_SIZE
.set BLE_cy_m0s8_ble__TX, CYREG_BLE_BLERD_TX
.set BLE_cy_m0s8_ble__TX_BUMP1, CYREG_BLE_BLERD_TX_BUMP1
.set BLE_cy_m0s8_ble__TX_BUMP2, CYREG_BLE_BLERD_TX_BUMP2
.set BLE_cy_m0s8_ble__TX_EN_EXT_DELAY, CYREG_BLE_BLELL_TX_EN_EXT_DELAY
.set BLE_cy_m0s8_ble__TX_RX_ON_DELAY, CYREG_BLE_BLELL_TX_RX_ON_DELAY
.set BLE_cy_m0s8_ble__TX_RX_SYNTH_DELAY, CYREG_BLE_BLELL_TX_RX_SYNTH_DELAY
.set BLE_cy_m0s8_ble__TXRX_HOP, CYREG_BLE_BLELL_TXRX_HOP
.set BLE_cy_m0s8_ble__WAKEUP_CONFIG, CYREG_BLE_BLELL_WAKEUP_CONFIG
.set BLE_cy_m0s8_ble__WAKEUP_CONTROL, CYREG_BLE_BLELL_WAKEUP_CONTROL
.set BLE_cy_m0s8_ble__WCO_CONFIG, CYREG_BLE_BLESS_WCO_CONFIG
.set BLE_cy_m0s8_ble__WCO_STATUS, CYREG_BLE_BLESS_WCO_STATUS
.set BLE_cy_m0s8_ble__WCO_TRIM, CYREG_BLE_BLESS_WCO_TRIM
.set BLE_cy_m0s8_ble__WHITELIST_BASE_ADDR, CYREG_BLE_BLELL_WHITELIST_BASE_ADDR
.set BLE_cy_m0s8_ble__WIN_MIN_STEP_SIZE, CYREG_BLE_BLELL_WIN_MIN_STEP_SIZE
.set BLE_cy_m0s8_ble__WINDOW_WIDEN_INTVL, CYREG_BLE_BLELL_WINDOW_WIDEN_INTVL
.set BLE_cy_m0s8_ble__WINDOW_WIDEN_WINOFF, CYREG_BLE_BLELL_WINDOW_WIDEN_WINOFF
.set BLE_cy_m0s8_ble__WL_ADDR_TYPE, CYREG_BLE_BLELL_WL_ADDR_TYPE
.set BLE_cy_m0s8_ble__WL_ENABLE, CYREG_BLE_BLELL_WL_ENABLE
.set BLE_cy_m0s8_ble__XTAL_CLK_DIV_CONFIG, CYREG_BLE_BLESS_XTAL_CLK_DIV_CONFIG

/* IDAC_cy_psoc4_idac */
.set IDAC_cy_psoc4_idac__CONTROL, CYREG_CSD_CONFIG
.set IDAC_cy_psoc4_idac__CSD_IDAC, CYREG_CSD_IDAC
.set IDAC_cy_psoc4_idac__CSD_IDAC_SHIFT, 0
.set IDAC_cy_psoc4_idac__CSD_TRIM1, CYREG_CSD_TRIM1
.set IDAC_cy_psoc4_idac__CSD_TRIM1_SHIFT, 0
.set IDAC_cy_psoc4_idac__CSD_TRIM2, CYREG_CSD_TRIM2
.set IDAC_cy_psoc4_idac__CSD_TRIM2_SHIFT, 0
.set IDAC_cy_psoc4_idac__IDAC_NUMBER, 1
.set IDAC_cy_psoc4_idac__POLARITY, CYREG_CSD_CONFIG
.set IDAC_cy_psoc4_idac__POLARITY_SHIFT, 16

/* MyPin */
.set MyPin__0__DR, CYREG_GPIO_PRT0_DR
.set MyPin__0__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set MyPin__0__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set MyPin__0__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set MyPin__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set MyPin__0__HSIOM_MASK, 0x000000F0
.set MyPin__0__HSIOM_SHIFT, 4
.set MyPin__0__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set MyPin__0__INTR, CYREG_GPIO_PRT0_INTR
.set MyPin__0__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set MyPin__0__INTSTAT, CYREG_GPIO_PRT0_INTR
.set MyPin__0__MASK, 0x02
.set MyPin__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set MyPin__0__OUT_SEL_SHIFT, 2
.set MyPin__0__OUT_SEL_VAL, 0
.set MyPin__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set MyPin__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set MyPin__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set MyPin__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set MyPin__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set MyPin__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set MyPin__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set MyPin__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set MyPin__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set MyPin__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set MyPin__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set MyPin__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set MyPin__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set MyPin__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set MyPin__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set MyPin__0__PC, CYREG_GPIO_PRT0_PC
.set MyPin__0__PC2, CYREG_GPIO_PRT0_PC2
.set MyPin__0__PORT, 0
.set MyPin__0__PS, CYREG_GPIO_PRT0_PS
.set MyPin__0__SHIFT, 1
.set MyPin__DR, CYREG_GPIO_PRT0_DR
.set MyPin__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set MyPin__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set MyPin__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set MyPin__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set MyPin__INTR, CYREG_GPIO_PRT0_INTR
.set MyPin__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set MyPin__INTSTAT, CYREG_GPIO_PRT0_INTR
.set MyPin__MASK, 0x02
.set MyPin__PA__CFG0, CYREG_UDB_PA0_CFG0
.set MyPin__PA__CFG1, CYREG_UDB_PA0_CFG1
.set MyPin__PA__CFG10, CYREG_UDB_PA0_CFG10
.set MyPin__PA__CFG11, CYREG_UDB_PA0_CFG11
.set MyPin__PA__CFG12, CYREG_UDB_PA0_CFG12
.set MyPin__PA__CFG13, CYREG_UDB_PA0_CFG13
.set MyPin__PA__CFG14, CYREG_UDB_PA0_CFG14
.set MyPin__PA__CFG2, CYREG_UDB_PA0_CFG2
.set MyPin__PA__CFG3, CYREG_UDB_PA0_CFG3
.set MyPin__PA__CFG4, CYREG_UDB_PA0_CFG4
.set MyPin__PA__CFG5, CYREG_UDB_PA0_CFG5
.set MyPin__PA__CFG6, CYREG_UDB_PA0_CFG6
.set MyPin__PA__CFG7, CYREG_UDB_PA0_CFG7
.set MyPin__PA__CFG8, CYREG_UDB_PA0_CFG8
.set MyPin__PA__CFG9, CYREG_UDB_PA0_CFG9
.set MyPin__PC, CYREG_GPIO_PRT0_PC
.set MyPin__PC2, CYREG_GPIO_PRT0_PC2
.set MyPin__PORT, 0
.set MyPin__PS, CYREG_GPIO_PRT0_PS
.set MyPin__SHIFT, 1

/* Pin_1 */
.set Pin_1__0__DR, CYREG_GPIO_PRT1_DR
.set Pin_1__0__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set Pin_1__0__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set Pin_1__0__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set Pin_1__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set Pin_1__0__HSIOM_MASK, 0x0000000F
.set Pin_1__0__HSIOM_SHIFT, 0
.set Pin_1__0__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set Pin_1__0__INTR, CYREG_GPIO_PRT1_INTR
.set Pin_1__0__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set Pin_1__0__INTSTAT, CYREG_GPIO_PRT1_INTR
.set Pin_1__0__MASK, 0x01
.set Pin_1__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set Pin_1__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set Pin_1__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set Pin_1__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set Pin_1__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set Pin_1__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set Pin_1__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set Pin_1__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set Pin_1__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set Pin_1__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set Pin_1__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set Pin_1__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set Pin_1__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set Pin_1__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set Pin_1__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set Pin_1__0__PC, CYREG_GPIO_PRT1_PC
.set Pin_1__0__PC2, CYREG_GPIO_PRT1_PC2
.set Pin_1__0__PORT, 1
.set Pin_1__0__PS, CYREG_GPIO_PRT1_PS
.set Pin_1__0__SHIFT, 0
.set Pin_1__1__DR, CYREG_GPIO_PRT1_DR
.set Pin_1__1__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set Pin_1__1__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set Pin_1__1__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set Pin_1__1__HSIOM, CYREG_HSIOM_PORT_SEL1
.set Pin_1__1__HSIOM_MASK, 0x000000F0
.set Pin_1__1__HSIOM_SHIFT, 4
.set Pin_1__1__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set Pin_1__1__INTR, CYREG_GPIO_PRT1_INTR
.set Pin_1__1__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set Pin_1__1__INTSTAT, CYREG_GPIO_PRT1_INTR
.set Pin_1__1__MASK, 0x02
.set Pin_1__1__PA__CFG0, CYREG_UDB_PA1_CFG0
.set Pin_1__1__PA__CFG1, CYREG_UDB_PA1_CFG1
.set Pin_1__1__PA__CFG10, CYREG_UDB_PA1_CFG10
.set Pin_1__1__PA__CFG11, CYREG_UDB_PA1_CFG11
.set Pin_1__1__PA__CFG12, CYREG_UDB_PA1_CFG12
.set Pin_1__1__PA__CFG13, CYREG_UDB_PA1_CFG13
.set Pin_1__1__PA__CFG14, CYREG_UDB_PA1_CFG14
.set Pin_1__1__PA__CFG2, CYREG_UDB_PA1_CFG2
.set Pin_1__1__PA__CFG3, CYREG_UDB_PA1_CFG3
.set Pin_1__1__PA__CFG4, CYREG_UDB_PA1_CFG4
.set Pin_1__1__PA__CFG5, CYREG_UDB_PA1_CFG5
.set Pin_1__1__PA__CFG6, CYREG_UDB_PA1_CFG6
.set Pin_1__1__PA__CFG7, CYREG_UDB_PA1_CFG7
.set Pin_1__1__PA__CFG8, CYREG_UDB_PA1_CFG8
.set Pin_1__1__PA__CFG9, CYREG_UDB_PA1_CFG9
.set Pin_1__1__PC, CYREG_GPIO_PRT1_PC
.set Pin_1__1__PC2, CYREG_GPIO_PRT1_PC2
.set Pin_1__1__PORT, 1
.set Pin_1__1__PS, CYREG_GPIO_PRT1_PS
.set Pin_1__1__SHIFT, 1
.set Pin_1__2__DR, CYREG_GPIO_PRT1_DR
.set Pin_1__2__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set Pin_1__2__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set Pin_1__2__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set Pin_1__2__HSIOM, CYREG_HSIOM_PORT_SEL1
.set Pin_1__2__HSIOM_MASK, 0x00000F00
.set Pin_1__2__HSIOM_SHIFT, 8
.set Pin_1__2__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set Pin_1__2__INTR, CYREG_GPIO_PRT1_INTR
.set Pin_1__2__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set Pin_1__2__INTSTAT, CYREG_GPIO_PRT1_INTR
.set Pin_1__2__MASK, 0x04
.set Pin_1__2__PA__CFG0, CYREG_UDB_PA1_CFG0
.set Pin_1__2__PA__CFG1, CYREG_UDB_PA1_CFG1
.set Pin_1__2__PA__CFG10, CYREG_UDB_PA1_CFG10
.set Pin_1__2__PA__CFG11, CYREG_UDB_PA1_CFG11
.set Pin_1__2__PA__CFG12, CYREG_UDB_PA1_CFG12
.set Pin_1__2__PA__CFG13, CYREG_UDB_PA1_CFG13
.set Pin_1__2__PA__CFG14, CYREG_UDB_PA1_CFG14
.set Pin_1__2__PA__CFG2, CYREG_UDB_PA1_CFG2
.set Pin_1__2__PA__CFG3, CYREG_UDB_PA1_CFG3
.set Pin_1__2__PA__CFG4, CYREG_UDB_PA1_CFG4
.set Pin_1__2__PA__CFG5, CYREG_UDB_PA1_CFG5
.set Pin_1__2__PA__CFG6, CYREG_UDB_PA1_CFG6
.set Pin_1__2__PA__CFG7, CYREG_UDB_PA1_CFG7
.set Pin_1__2__PA__CFG8, CYREG_UDB_PA1_CFG8
.set Pin_1__2__PA__CFG9, CYREG_UDB_PA1_CFG9
.set Pin_1__2__PC, CYREG_GPIO_PRT1_PC
.set Pin_1__2__PC2, CYREG_GPIO_PRT1_PC2
.set Pin_1__2__PORT, 1
.set Pin_1__2__PS, CYREG_GPIO_PRT1_PS
.set Pin_1__2__SHIFT, 2
.set Pin_1__3__DR, CYREG_GPIO_PRT1_DR
.set Pin_1__3__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set Pin_1__3__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set Pin_1__3__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set Pin_1__3__HSIOM, CYREG_HSIOM_PORT_SEL1
.set Pin_1__3__HSIOM_MASK, 0x0000F000
.set Pin_1__3__HSIOM_SHIFT, 12
.set Pin_1__3__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set Pin_1__3__INTR, CYREG_GPIO_PRT1_INTR
.set Pin_1__3__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set Pin_1__3__INTSTAT, CYREG_GPIO_PRT1_INTR
.set Pin_1__3__MASK, 0x08
.set Pin_1__3__PA__CFG0, CYREG_UDB_PA1_CFG0
.set Pin_1__3__PA__CFG1, CYREG_UDB_PA1_CFG1
.set Pin_1__3__PA__CFG10, CYREG_UDB_PA1_CFG10
.set Pin_1__3__PA__CFG11, CYREG_UDB_PA1_CFG11
.set Pin_1__3__PA__CFG12, CYREG_UDB_PA1_CFG12
.set Pin_1__3__PA__CFG13, CYREG_UDB_PA1_CFG13
.set Pin_1__3__PA__CFG14, CYREG_UDB_PA1_CFG14
.set Pin_1__3__PA__CFG2, CYREG_UDB_PA1_CFG2
.set Pin_1__3__PA__CFG3, CYREG_UDB_PA1_CFG3
.set Pin_1__3__PA__CFG4, CYREG_UDB_PA1_CFG4
.set Pin_1__3__PA__CFG5, CYREG_UDB_PA1_CFG5
.set Pin_1__3__PA__CFG6, CYREG_UDB_PA1_CFG6
.set Pin_1__3__PA__CFG7, CYREG_UDB_PA1_CFG7
.set Pin_1__3__PA__CFG8, CYREG_UDB_PA1_CFG8
.set Pin_1__3__PA__CFG9, CYREG_UDB_PA1_CFG9
.set Pin_1__3__PC, CYREG_GPIO_PRT1_PC
.set Pin_1__3__PC2, CYREG_GPIO_PRT1_PC2
.set Pin_1__3__PORT, 1
.set Pin_1__3__PS, CYREG_GPIO_PRT1_PS
.set Pin_1__3__SHIFT, 3
.set Pin_1__DR, CYREG_GPIO_PRT1_DR
.set Pin_1__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set Pin_1__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set Pin_1__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set Pin_1__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set Pin_1__INTR, CYREG_GPIO_PRT1_INTR
.set Pin_1__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set Pin_1__INTSTAT, CYREG_GPIO_PRT1_INTR
.set Pin_1__MASK, 0x0F
.set Pin_1__PA__CFG0, CYREG_UDB_PA1_CFG0
.set Pin_1__PA__CFG1, CYREG_UDB_PA1_CFG1
.set Pin_1__PA__CFG10, CYREG_UDB_PA1_CFG10
.set Pin_1__PA__CFG11, CYREG_UDB_PA1_CFG11
.set Pin_1__PA__CFG12, CYREG_UDB_PA1_CFG12
.set Pin_1__PA__CFG13, CYREG_UDB_PA1_CFG13
.set Pin_1__PA__CFG14, CYREG_UDB_PA1_CFG14
.set Pin_1__PA__CFG2, CYREG_UDB_PA1_CFG2
.set Pin_1__PA__CFG3, CYREG_UDB_PA1_CFG3
.set Pin_1__PA__CFG4, CYREG_UDB_PA1_CFG4
.set Pin_1__PA__CFG5, CYREG_UDB_PA1_CFG5
.set Pin_1__PA__CFG6, CYREG_UDB_PA1_CFG6
.set Pin_1__PA__CFG7, CYREG_UDB_PA1_CFG7
.set Pin_1__PA__CFG8, CYREG_UDB_PA1_CFG8
.set Pin_1__PA__CFG9, CYREG_UDB_PA1_CFG9
.set Pin_1__PC, CYREG_GPIO_PRT1_PC
.set Pin_1__PC2, CYREG_GPIO_PRT1_PC2
.set Pin_1__PORT, 1
.set Pin_1__PS, CYREG_GPIO_PRT1_PS
.set Pin_1__SHIFT, 0

/* Connect_LED */
.set Connect_LED__0__DR, CYREG_GPIO_PRT3_DR
.set Connect_LED__0__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set Connect_LED__0__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set Connect_LED__0__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set Connect_LED__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set Connect_LED__0__HSIOM_MASK, 0xF0000000
.set Connect_LED__0__HSIOM_SHIFT, 28
.set Connect_LED__0__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set Connect_LED__0__INTR, CYREG_GPIO_PRT3_INTR
.set Connect_LED__0__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set Connect_LED__0__INTSTAT, CYREG_GPIO_PRT3_INTR
.set Connect_LED__0__MASK, 0x80
.set Connect_LED__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Connect_LED__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Connect_LED__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Connect_LED__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Connect_LED__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Connect_LED__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Connect_LED__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Connect_LED__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Connect_LED__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Connect_LED__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Connect_LED__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Connect_LED__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Connect_LED__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Connect_LED__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Connect_LED__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Connect_LED__0__PC, CYREG_GPIO_PRT3_PC
.set Connect_LED__0__PC2, CYREG_GPIO_PRT3_PC2
.set Connect_LED__0__PORT, 3
.set Connect_LED__0__PS, CYREG_GPIO_PRT3_PS
.set Connect_LED__0__SHIFT, 7
.set Connect_LED__DR, CYREG_GPIO_PRT3_DR
.set Connect_LED__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set Connect_LED__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set Connect_LED__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set Connect_LED__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set Connect_LED__INTR, CYREG_GPIO_PRT3_INTR
.set Connect_LED__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set Connect_LED__INTSTAT, CYREG_GPIO_PRT3_INTR
.set Connect_LED__MASK, 0x80
.set Connect_LED__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Connect_LED__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Connect_LED__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Connect_LED__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Connect_LED__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Connect_LED__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Connect_LED__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Connect_LED__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Connect_LED__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Connect_LED__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Connect_LED__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Connect_LED__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Connect_LED__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Connect_LED__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Connect_LED__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Connect_LED__PC, CYREG_GPIO_PRT3_PC
.set Connect_LED__PC2, CYREG_GPIO_PRT3_PC2
.set Connect_LED__PORT, 3
.set Connect_LED__PS, CYREG_GPIO_PRT3_PS
.set Connect_LED__SHIFT, 7

/* Disconnect_LED */
.set Disconnect_LED__0__DR, CYREG_GPIO_PRT2_DR
.set Disconnect_LED__0__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Disconnect_LED__0__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Disconnect_LED__0__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Disconnect_LED__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set Disconnect_LED__0__HSIOM_MASK, 0x0F000000
.set Disconnect_LED__0__HSIOM_SHIFT, 24
.set Disconnect_LED__0__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Disconnect_LED__0__INTR, CYREG_GPIO_PRT2_INTR
.set Disconnect_LED__0__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Disconnect_LED__0__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Disconnect_LED__0__MASK, 0x40
.set Disconnect_LED__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Disconnect_LED__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Disconnect_LED__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Disconnect_LED__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Disconnect_LED__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Disconnect_LED__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Disconnect_LED__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Disconnect_LED__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Disconnect_LED__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Disconnect_LED__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Disconnect_LED__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Disconnect_LED__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Disconnect_LED__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Disconnect_LED__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Disconnect_LED__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Disconnect_LED__0__PC, CYREG_GPIO_PRT2_PC
.set Disconnect_LED__0__PC2, CYREG_GPIO_PRT2_PC2
.set Disconnect_LED__0__PORT, 2
.set Disconnect_LED__0__PS, CYREG_GPIO_PRT2_PS
.set Disconnect_LED__0__SHIFT, 6
.set Disconnect_LED__DR, CYREG_GPIO_PRT2_DR
.set Disconnect_LED__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Disconnect_LED__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Disconnect_LED__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Disconnect_LED__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Disconnect_LED__INTR, CYREG_GPIO_PRT2_INTR
.set Disconnect_LED__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Disconnect_LED__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Disconnect_LED__MASK, 0x40
.set Disconnect_LED__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Disconnect_LED__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Disconnect_LED__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Disconnect_LED__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Disconnect_LED__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Disconnect_LED__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Disconnect_LED__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Disconnect_LED__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Disconnect_LED__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Disconnect_LED__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Disconnect_LED__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Disconnect_LED__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Disconnect_LED__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Disconnect_LED__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Disconnect_LED__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Disconnect_LED__PC, CYREG_GPIO_PRT2_PC
.set Disconnect_LED__PC2, CYREG_GPIO_PRT2_PC2
.set Disconnect_LED__PORT, 2
.set Disconnect_LED__PS, CYREG_GPIO_PRT2_PS
.set Disconnect_LED__SHIFT, 6

/* Advertising_LED */
.set Advertising_LED__0__DR, CYREG_GPIO_PRT3_DR
.set Advertising_LED__0__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set Advertising_LED__0__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set Advertising_LED__0__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set Advertising_LED__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set Advertising_LED__0__HSIOM_MASK, 0x0F000000
.set Advertising_LED__0__HSIOM_SHIFT, 24
.set Advertising_LED__0__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set Advertising_LED__0__INTR, CYREG_GPIO_PRT3_INTR
.set Advertising_LED__0__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set Advertising_LED__0__INTSTAT, CYREG_GPIO_PRT3_INTR
.set Advertising_LED__0__MASK, 0x40
.set Advertising_LED__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Advertising_LED__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Advertising_LED__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Advertising_LED__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Advertising_LED__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Advertising_LED__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Advertising_LED__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Advertising_LED__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Advertising_LED__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Advertising_LED__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Advertising_LED__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Advertising_LED__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Advertising_LED__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Advertising_LED__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Advertising_LED__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Advertising_LED__0__PC, CYREG_GPIO_PRT3_PC
.set Advertising_LED__0__PC2, CYREG_GPIO_PRT3_PC2
.set Advertising_LED__0__PORT, 3
.set Advertising_LED__0__PS, CYREG_GPIO_PRT3_PS
.set Advertising_LED__0__SHIFT, 6
.set Advertising_LED__DR, CYREG_GPIO_PRT3_DR
.set Advertising_LED__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set Advertising_LED__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set Advertising_LED__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set Advertising_LED__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set Advertising_LED__INTR, CYREG_GPIO_PRT3_INTR
.set Advertising_LED__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set Advertising_LED__INTSTAT, CYREG_GPIO_PRT3_INTR
.set Advertising_LED__MASK, 0x40
.set Advertising_LED__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Advertising_LED__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Advertising_LED__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Advertising_LED__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Advertising_LED__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Advertising_LED__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Advertising_LED__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Advertising_LED__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Advertising_LED__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Advertising_LED__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Advertising_LED__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Advertising_LED__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Advertising_LED__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Advertising_LED__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Advertising_LED__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Advertising_LED__PC, CYREG_GPIO_PRT3_PC
.set Advertising_LED__PC2, CYREG_GPIO_PRT3_PC2
.set Advertising_LED__PORT, 3
.set Advertising_LED__PS, CYREG_GPIO_PRT3_PS
.set Advertising_LED__SHIFT, 6

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 48000000
.set CYDEV_BCLK__HFCLK__KHZ, 48000
.set CYDEV_BCLK__HFCLK__MHZ, 48
.set CYDEV_BCLK__SYSCLK__HZ, 48000000
.set CYDEV_BCLK__SYSCLK__KHZ, 48000
.set CYDEV_BCLK__SYSCLK__MHZ, 48
.set CYDEV_CHIP_DIE_GEN4, 2
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 12
.set CYDEV_CHIP_DIE_PSOC4A, 5
.set CYDEV_CHIP_DIE_PSOC5LP, 11
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x0E34119E
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 5
.set CYDEV_CHIP_MEMBER_4C, 9
.set CYDEV_CHIP_MEMBER_4D, 3
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 6
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4L, 8
.set CYDEV_CHIP_MEMBER_4M, 7
.set CYDEV_CHIP_MEMBER_5A, 11
.set CYDEV_CHIP_MEMBER_5B, 10
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4F
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_GEN4_ES, 17
.set CYDEV_CHIP_REV_GEN4_ES2, 33
.set CYDEV_CHIP_REV_GEN4_PRODUCTION, 17
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4F_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 10
.set CYDEV_DFT_SELECT_CLK1, 11
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_VDDR_MV, 3300
.set CYDEV_WDT_GENERATE_ISR, 1
.set CYIPBLOCK_m0s8bless_VERSION, 1
.set CYIPBLOCK_m0s8cpussv2_VERSION, 1
.set CYIPBLOCK_m0s8csd_VERSION, 1
.set CYIPBLOCK_m0s8ioss_VERSION, 1
.set CYIPBLOCK_m0s8lcd_VERSION, 2
.set CYIPBLOCK_m0s8lpcomp_VERSION, 2
.set CYIPBLOCK_m0s8peri_VERSION, 1
.set CYIPBLOCK_m0s8scb_VERSION, 2
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 2
.set CYIPBLOCK_m0s8udbif_VERSION, 1
.set CYIPBLOCK_s8pass4al_VERSION, 1
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
