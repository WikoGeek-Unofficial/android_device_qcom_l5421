
/*
WARNING: This file is auto-generated.

Generated using: rfc_autogen.exe
Generated from:  v4.32.916 of DPM2_RFC_HWSWCD.xlsm
*/

/*=============================================================================

          R F C     A U T O G E N    F I L E

GENERAL DESCRIPTION
  This file is auto-generated and it captures the configuration of the RF Card.

Copyright (c) 2014 Qualcomm Technologies Incorporated.  All Rights Reserved.

$Header: //Commercial/MPSS.DPM.2.0.2.c1/Main/modem_proc/rfc_dimepm/rf_card/rfc_wtr4905_china_v2/gsm/src/rfc_wtr4905_china_v2_gsm_config_data_ag.c#2 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include "rfc_wtr4905_china_v2_cmn_ag.h" 
#include "rfc_common.h" 
#include "rfcom.h" 
#include "wtr4905_typedef_ag.h" 
#include "rfdevice_qtuner_api.h" 



rfc_device_info_type rf_card_wtr4905_china_v2_init_gsm_rx_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  0 /* Warning: Not Specified */,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0 /*Warning: Not specified*/,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        0  /* Invalid TRx port*/ ,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_init_gsm_rx_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_init_gsm_tx_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  0 /* Warning: Not Specified */,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0 /*Warning: Not specified*/,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        0  /* Invalid TRx port*/ ,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_init_gsm_tx_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_gsm_g850_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_GSM_PRXLGY1_BAND850_PLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (3)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_gsm_g850_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_gsm_g850_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
 4 ,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
	        (int)WTR4905_GSM_TX_BAND850_THMLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* SKY77648 */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x1E << 14)/*prd_id*/ | (10<< 7)/*sec_port_num*/ | (8)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (8)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_gsm_g850_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PA_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PAPM_MULTISLOT_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -6 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_GPDATA0_0,   { RFC_CONFIG_ONLY, 0 }, {RFC_CONFIG_ONLY, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_gsm_g900_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_GSM_PRXLGY1_BAND900_PLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (9)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_gsm_g900_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_gsm_g900_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  4,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_GSM_TX_BAND900_THMLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* SKY77648 */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x1E << 14)/*prd_id*/ | (10<< 7)/*sec_port_num*/ | (8)/*port_num*/,	/* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (8)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_gsm_g900_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PA_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PAPM_MULTISLOT_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -6 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_GPDATA0_0,   { RFC_CONFIG_ONLY, 0 }, {RFC_CONFIG_ONLY, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_gsm_g1800_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_GSM_PRXLGY1_BAND1800_PMB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (6)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_gsm_g1800_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -40 }, {RFC_LOW, 0 }  },
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_09,   { RFC_LOW, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_gsm_g1800_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  4,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_GSM_TX_BAND1800_THMLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* SKY77648 */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x1E << 14)/*prd_id*/ | (11<< 7)/*sec_port_num*/ | (9)/*port_num*/,   /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (8)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_gsm_g1800_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PA_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PAPM_MULTISLOT_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -6 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_GPDATA0_0,   { RFC_CONFIG_ONLY, 0 }, {RFC_CONFIG_ONLY, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_gsm_g1900_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_GSM_PRXLGY1_BAND1900_PMB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_gsm_g1900_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -40 }, {RFC_LOW, 0 }  },
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_09,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_gsm_g1900_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  4,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_GSM_TX_BAND1900_THMLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* SKY77648 */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x1E << 14)/*prd_id*/ | (11<< 7)/*sec_port_num*/ | (9)/*port_num*/,   /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (8)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_gsm_g1900_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PA_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TIMING_PAPM_MULTISLOT_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -6 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_GPDATA0_0,   { RFC_CONFIG_ONLY, 0 }, {RFC_CONFIG_ONLY, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_gsm_properties_type rfc_wtr4905_china_v2_gsm_properties = 
{
  0x04200394,   /* Revision: v4.32.916 */
  /* GSM_DESENSE_CHANNEL (Max: 25 per band) */
  {
    { (uint32)RFCOM_NUM_GSM_BANDS , RFC_INVALID_PARAM },
  },
};

