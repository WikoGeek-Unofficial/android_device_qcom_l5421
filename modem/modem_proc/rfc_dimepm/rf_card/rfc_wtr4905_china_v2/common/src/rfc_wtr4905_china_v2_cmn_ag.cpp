
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

$Header: //Commercial/MPSS.DPM.2.0.2.c1/Main/modem_proc/rfc_dimepm/rf_card/rfc_china_v2/common/src/rfc_china_v2_cmn_ag.cpp#2 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include <stringl/stringl.h>
#include "rfc_msm_signal_info_ag.h" 
#include "rfc_wtr4905_china_v2_cmn_ag.h" 
#include "DDITlmm.h" 
#include "rfc_common.h" 
#include "rfcommon_core_sbi.h" 

#ifdef FEATURE_GSM
#include "rfc_wtr4905_china_v2_gsm_config_ag.h" 
#endif 

#ifdef FEATURE_CDMA1X
#include "rfc_wtr4905_china_v2_cdma_config_ag.h" 
#endif 

#ifdef FEATURE_WCDMA
#include "rfc_wtr4905_china_v2_wcdma_config_ag.h" 
#endif 

#ifdef FEATURE_LTE
#include "rfc_wtr4905_china_v2_lte_config_ag.h" 
#endif 

#ifdef FEATURE_TDSCDMA
#include "rfc_wtr4905_china_v2_tdscdma_config_ag.h" 
#endif 

#ifdef FEATURE_CGPS
#include "rfc_wtr4905_china_v2_gnss_config_ag.h" 
#endif 



rfc_phy_device_info_type rfc_wtr4905_china_v2_phy_devices_list[] = 
{
  { /*Device: WTR4905 */ 
    WTR4905, /* PHY_DEVICE_NAME */ 
    0, /* PHY_DEVICE_INSTANCE */ 
    RFC_NO_ALTERNATE_PART, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    4,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0x217, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0xC8, /* PHY_DEVICE_PRODUCT_ID */ 
    0, /* PHY_DEVICE_PRODUCT_REV */ 
    0x1, /* DEFAULT USID RANGE START */
    0x1, /* DEFAULT USID RANGE END */
    0x1, /* PHY_DEVICE_ASSIGNED_USID */ 
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_TX_MODEM_CHAIN_0, /* ASSOCIATED_DAC */ 
  }, /* END - Device: WTR4905 */ 

  { /*Device: QFE2101 */ 
    QFE2101, /* PHY_DEVICE_NAME */ 
    1, /* PHY_DEVICE_INSTANCE */ 
    RFC_NO_ALTERNATE_PART, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    0,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0x217, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0x31, /* PHY_DEVICE_PRODUCT_ID */ 
    0, /* PHY_DEVICE_PRODUCT_REV */ 
    0x4, /* DEFAULT USID RANGE START */
    0x4, /* DEFAULT USID RANGE END */
    0x4, /* PHY_DEVICE_ASSIGNED_USID */ 
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    TRUE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
  }, /* END - Device: QFE2101 */ 

  { /*Device: GEN_PA */ /*Device:SKY77648 */ 
    GEN_PA, /* PHY_DEVICE_NAME */ 
    2, /* PHY_DEVICE_INSTANCE */ 
    RFC_NO_ALTERNATE_PART, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    0,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0x01A5, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0x1E, /* PHY_DEVICE_PRODUCT_ID */ 
    0, /* PHY_DEVICE_PRODUCT_REV */ 
    0x0F, /* DEFAULT USID RANGE START */
    0x0F, /* DEFAULT USID RANGE END */
    0x0F, /* PHY_DEVICE_ASSIGNED_USID */ 
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
  }, /* END - Device: GEN_PA */ 

  { /*Device: GEN_PA */  /*Device:SKY77781 */ 
    GEN_PA, /* PHY_DEVICE_NAME */ 
	  3, /* PHY_DEVICE_INSTANCE */ 
	  RFC_NO_ALTERNATE_PART, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
	  RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
	  {    0,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
	  0x01A5, /* PHY_DEVICE_MANUFACTURER_ID */ 
	  0x15, /* PHY_DEVICE_PRODUCT_ID */ 
	  0, /* PHY_DEVICE_PRODUCT_REV */ 
	  0x0E, /* DEFAULT USID RANGE START */
	  0x0E, /* DEFAULT USID RANGE END */
	  0x0E, /* PHY_DEVICE_ASSIGNED_USID */ 
	  0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
	  FALSE, /* INIT */ 
	  RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
	}, /* END - Device: GEN_PA */ 

  { /*Device: GEN_ASM */ /*Device:RF1496A */
		  GEN_ASM, /* PHY_DEVICE_NAME */ 
		  4, /* PHY_DEVICE_INSTANCE */ 
		  RFC_NO_ALTERNATE_PART, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
		  RFDEVICE_COMM_PROTO_RFFE, /* PHY_DEVICE_COMM_PROTOCOL */ 
		  {    0,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
		  0x0134, /* PHY_DEVICE_MANUFACTURER_ID */ 
		  0x20, /* PHY_DEVICE_PRODUCT_ID */  
    0, /* PHY_DEVICE_PRODUCT_REV */ 
    0xB, /* DEFAULT USID RANGE START */
    0xB, /* DEFAULT USID RANGE END */
    0xB, /* PHY_DEVICE_ASSIGNED_USID */ 
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
  }, /* END - Device: GEN_ASM */ 

  { /*Device: RFDEVICE_INVALID */ 
    RFDEVICE_INVALID, /* PHY_DEVICE_NAME */ 
    0 /*Warning: Not specified*/, /* PHY_DEVICE_INSTANCE */ 
    0 /*Warning: Not specified*/, /* PHY_DEVICE_ALT_PART_NUM_OF_INSTANCE */ 
    RFDEVICE_COMM_PROTO_INVALID, /* PHY_DEVICE_COMM_PROTOCOL */ 
    {    0 /* 0 not specified */,0 /* 0 not specified */,}, /* PHY_DEVICE_COMM_BUS */ 
    0 /*Warning: Not specified*/, /* PHY_DEVICE_MANUFACTURER_ID */ 
    0 /*Warning: Not specified*/, /* PHY_DEVICE_PRODUCT_ID */ 
    0 /*Warning: Not specified*/, /* PHY_DEVICE_PRODUCT_REV */ 
    0 /*Warning: Not specified*/, /* DEFAULT USID RANGE START */
    0 /*Warning: Not specified*/, /* DEFAULT USID RANGE END */
    0 /*Warning: Not specified*/, /* PHY_DEVICE_ASSIGNED_USID */ 
    0 /*Warning: Not specified*/, /* RFFE_GROUP_ID */ 
    FALSE, /* INIT */ 
    RFC_INVALID_PARAM, /* ASSOCIATED_DAC */ 
  }, /* END - Device: RFDEVICE_INVALID */ 

};


rfc_logical_device_info_type rfc_wtr4905_china_v2_logical_devices_list[] = 
{
  { /*Device: WTR4905 */ 
    RFDEVICE_TRANSCEIVER, /* DEVICE_MODULE_TYPE */ 
    WTR4905, /* DEVICE_MODULE_NAME */ 
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    0, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: WTR4905 */ 

  { /*Device: QFE2101 */ 
    RFDEVICE_PAPM, /* DEVICE_MODULE_TYPE */ 
    QFE2101, /* DEVICE_MODULE_NAME */ 
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    1, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: QFE2101 */ 

  { /*Device: GEN_PA */ 
    RFDEVICE_PA, /* DEVICE_MODULE_TYPE */ 
    GEN_PA, /* DEVICE_MODULE_NAME */  /* SKY77648 */
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    2, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: GEN_PA */ 

  { /*Device: GEN_PA */ 
    RFDEVICE_PA, /* DEVICE_MODULE_TYPE */ 
    GEN_PA, /* DEVICE_MODULE_NAME */   /* sky77781_U2703_B7 */ 
    1, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    3, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: GEN_PA */ 

  
  { /*Device: GEN_ASM */ 
    RFDEVICE_ASM, /* DEVICE_MODULE_TYPE */ 
    GEN_ASM, /* DEVICE_MODULE_NAME */ /* RF1496A */ 
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    4, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: GEN_ASM */  

  { /*Device: TRX_HDET */ 
    RFDEVICE_HDET, /* DEVICE_MODULE_TYPE */ 
    TRX_HDET, /* DEVICE_MODULE_NAME */ 
    0, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    0, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: TRX_HDET */ 

  { /*Device: RFDEVICE_INVALID */ 
    RFDEVICE_TYPE_INVALID, /* DEVICE_MODULE_TYPE */ 
    RFDEVICE_INVALID, /* DEVICE_MODULE_NAME */ 
    0 /*Warning: Not specified*/, /* DEVICE_MODULE_TYPE_INSTANCE */ 
    0 /*Warning: Not specified*/, /* ASSOCIATED_PHY_DEVICE_INSTANCE */ 
  }, /* END - Device: RFDEVICE_INVALID */ 

};


rfc_signal_info_type rfc_wtr4905_china_v2_sig_info[RFC_WTR4905_CHINA_V2_SIG_NUM + 1] = 
{
  { RFC_MSM_TIMING_PA_CTL                   , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_PA_CTL */ 
  { RFC_MSM_TIMING_PA_RANGE                 , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_PA_RANGE */ 
  { RFC_MSM_TIMING_ASM_CTL                  , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_ASM_CTL */ 
  { RFC_MSM_TIMING_PAPM_CTL                 , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_PAPM_CTL */ 
  { RFC_MSM_TIMING_PAPM_MULTISLOT_CTL       , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_PAPM_MULTISLOT_CTL */ 
  { RFC_MSM_TIMING_TX_TX_RF_ON0             , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_TX_TX_RF_ON0 */ 
  { RFC_MSM_TIMING_TX_RX_RF_ON0             , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_TX_RX_RF_ON0 */ 
  { RFC_MSM_TIMING_ASM_TRIGGER              , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_ASM_TRIGGER */ 
  { RFC_MSM_TIMING_PAPM_TX_TX_TRIGGER       , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_PAPM_TX_TX_TRIGGER */ 
  { RFC_MSM_TIMING_PAPM_OFF_TX_RX_TX_TRIGGER, RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_PAPM_OFF_TX_RX_TX_TRIGGER */ 
  { RFC_MSM_TIMING_PA_TRIGGER               , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_PA_TRIGGER */ 
  { RFC_MSM_TIMING_PAPM_OFF_TX_RX_TX_CTL    , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_PAPM_OFF_TX_RX_TX_CTL */ 
  { RFC_MSM_TIMING_PAPM_TX_TX_CTL           , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TIMING_PAPM_TX_TX_CTL */ 
  { RFC_MSM_RF_PATH_SEL_14                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_CHINA_V2_RF_PATH_SEL_14 */ 
  { RFC_MSM_RF_PATH_SEL_09                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_CHINA_V2_RF_PATH_SEL_09 */ 
  { RFC_MSM_RF_PATH_SEL_06                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06 */ 
  { RFC_MSM_RF_PATH_SEL_11                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_CHINA_V2_RF_PATH_SEL_11 */ 
  { RFC_MSM_GPDATA0_0                       , RFC_CONFIG_ONLY, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_GPDATA0_0 */ 
  { RFC_MSM_RFFE5_CLK                       , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RFFE5_CLK */ 
  { RFC_MSM_RFFE5_DATA                      , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RFFE5_DATA */ 
  { RFC_MSM_RFFE1_CLK                       , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RFFE1_CLK */ 
  { RFC_MSM_RFFE1_DATA                      , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RFFE1_DATA */ 
  { RFC_MSM_RFFE2_CLK                       , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RFFE2_CLK */ 
  { RFC_MSM_RFFE2_DATA                      , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RFFE2_DATA */ 
  { RFC_MSM_RFFE3_CLK                       , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RFFE3_CLK */ 
  { RFC_MSM_RFFE3_DATA                      , RFC_CONFIG_ONLY, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RFFE3_DATA */ 
  { RFC_MSM_INTERNAL_GNSS_BLANK             , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_INTERNAL_GNSS_BLANK */ 
  { RFC_MSM_INTERNAL_GNSS_BLANK_CONCURRENCY , RFC_LOW, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_INTERNAL_GNSS_BLANK_CONCURRENCY */ 
  { RFC_MSM_TX_GTR_TH                       , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_TX_GTR_TH */ 
  { RFC_MSM_PA_IND                          , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_PA_IND */ 
  { RFC_MSM_RF_PATH_SEL_03                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RF_PATH_SEL_03 */ 
  { RFC_MSM_RF_PATH_SEL_04                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RF_PATH_SEL_04 */ 
  { RFC_MSM_RF_PATH_SEL_05                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RF_PATH_SEL_05 */ 
  { RFC_MSM_RF_PATH_SEL_10                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RF_PATH_SEL_10 */
  { RFC_MSM_RF_PATH_SEL_13                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RF_PATH_SEL_13 */ 
  { RFC_MSM_RF_PATH_SEL_15                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RF_PATH_SEL_15 */ 
  { RFC_MSM_RF_PATH_SEL_17                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RF_PATH_SEL_17 */ 
  { RFC_MSM_RF_PATH_SEL_20                  , RFC_LOW, DAL_GPIO_PULL_DOWN, DAL_GPIO_2MA, (DALGpioSignalType)NULL }, /* RFC_WTR4905_china_v2_RF_PATH_SEL_20 */ 
  { (rfc_msm_signal_type)RFC_SIG_LIST_END   , (rfc_logic_type)0x04200394, DAL_GPIO_NO_PULL, DAL_GPIO_2MA, (DALGpioSignalType)NULL } /* LAST SIG INDICATOR */ 
};


rfc_common_data* rfc_wtr4905_china_v2_cmn_ag::get_instance(rf_hw_type rf_hw)
{
  if (rfc_common_data_ptr == NULL)
  {
    rfc_common_data_ptr = (rfc_common_data *)new rfc_wtr4905_china_v2_cmn_ag(rf_hw);
  }
  return( (rfc_common_data *)rfc_common_data_ptr);
}

//constructor
rfc_wtr4905_china_v2_cmn_ag::rfc_wtr4905_china_v2_cmn_ag(rf_hw_type rf_hw)
  :rfc_common_data(rf_hw)
{
}


uint32 rfc_wtr4905_china_v2_cmn_ag::sig_info_table_get(rfc_signal_info_type **rfc_info_table)
{
  if (NULL == rfc_info_table)
  {
    return 0;
  }

  *rfc_info_table = &rfc_wtr4905_china_v2_sig_info[0];

  #ifdef FEATURE_GSM
  // Create GSM RFC AG Data Object
  rfc_gsm_data *rfc_gsm_data = rfc_wtr4905_china_v2_gsm_ag::get_instance(); 
  if (rfc_gsm_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC GSM Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_GSM */

  #ifdef FEATURE_CDMA1X
  // Create CDMA RFC AG Data Object
  rfc_cdma_data *rfc_cdma_data = rfc_wtr4905_china_v2_cdma_ag::get_instance(); 
  if (rfc_cdma_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC CDMA Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_CDMA */

  #ifdef FEATURE_WCDMA
  // Create WCDMA RFC AG Data Object
  rfc_wcdma_data *rfc_wcdma_data = rfc_wtr4905_china_v2_wcdma_ag::get_instance(); 
  if (rfc_wcdma_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC WCDMA Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_WCDMA */

  #ifdef FEATURE_LTE
  // Create LTE RFC AG Data Object
  rfc_lte_data *rfc_lte_data = rfc_wtr4905_china_v2_lte_ag::get_instance(); 
  if (rfc_lte_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC LTE Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_LTE */

  #ifdef FEATURE_TDSCDMA
  // Create TDSCDMA RFC AG Data Object
  rfc_tdscdma_data *rfc_tdscdma_data = rfc_wtr4905_china_v2_tdscdma_ag::get_instance(); 
  if (rfc_tdscdma_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC TDSCDMA Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_TDSCDMA */

  #ifdef FEATURE_CGPS
  // Create GNSS RFC AG Data Object
  rfc_gnss_data *rfc_gnss_data = rfc_wtr4905_china_v2_gnss_ag::get_instance(); 
  if (rfc_gnss_data == NULL)
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR,"RFC GNSS Data Object is NOT Created", 0);
    return 0;
  }
  #endif /* FEATURE_GNSS */

  return RFC_WTR4905_CHINA_V2_SIG_NUM;
}

rfc_phy_device_info_type* rfc_wtr4905_china_v2_cmn_ag::get_phy_device_cfg( void )
{
  return (&rfc_wtr4905_china_v2_phy_devices_list[0]);
}

rfc_logical_device_info_type* rfc_wtr4905_china_v2_cmn_ag::get_logical_device_cfg( void )
{
  return (&rfc_wtr4905_china_v2_logical_devices_list[0]);
}


rfm_devices_configuration_type rfc_wtr4905_china_v2_logical_device_properties = 
{
  151, /* HWID */
  { /* Mode Concurrencies: Bit0 represents Rx concurrency and Bit1 represents Tx concurrency */
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
    { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,    },
  },
  { /* device_support */ 
    { /* Logical Device 0 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          ( ( (uint64)1 << (SYS_BAND_GSM_850 - 0) ) | ( (uint64)1 << (SYS_BAND_GSM_EGSM_900 - 0) ) | ( (uint64)1 << (SYS_BAND_GSM_DCS_1800 - 0) ) | ( (uint64)1 << (SYS_BAND_GSM_PCS_1900 - 0) ) | ( (uint64)1 << (SYS_BAND_BC0 - 0) ) | ( (uint64)1 << (SYS_BAND_BC1 - 0) ) | ( (uint64)1 << (SYS_BAND_BC6 - 0) ) 
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          ( ( (uint64)1 << (SYS_BAND_WCDMA_I_IMT_2000 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_II_PCS_1900 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_IV_1700 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_V_850 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_VIII_900 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND1 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND2 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND3 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND4 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND5 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND7 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND8 - 64) ) 
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          ( ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND17 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND20 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND26 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND27 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND28 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND38 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND39 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND40 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND41 - 128) ) | ( (uint64)1 << (SYS_BAND_TDS_BANDA - 128) ) | ( (uint64)1 << (SYS_BAND_TDS_BANDF - 128) ) 
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( RFM_DEVICE_RX_SUPPORTED | RFM_DEVICE_TX_SUPPORTED),
      RFM_DEVICE_1, /* Associated Slave Device for RFM_DEVICE_0 */
    }, /* End Logical Device 0 */ 
    { /* Logical Device 1 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          ( ( (uint64)1 << (SYS_BAND_BC0 - 0) ) | ( (uint64)1 << (SYS_BAND_BC1 - 0) ) | ( (uint64)1 << (SYS_BAND_BC6 - 0) ) 
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          ( ( (uint64)1 << (SYS_BAND_WCDMA_I_IMT_2000 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_II_PCS_1900 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_IV_1700 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_V_850 - 64) ) | ( (uint64)1 << (SYS_BAND_WCDMA_VIII_900 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND1 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND2 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND3 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND4 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND5 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND7 - 64) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND8 - 64) ) 
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          ( ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND17 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND20 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND26 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND27 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND28 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND38 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND39 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND40 - 128) ) | ( (uint64)1 << (SYS_BAND_LTE_EUTRAN_BAND41 - 128) ) | ( (uint64)1 << (SYS_BAND_TDS_BANDA - 128) ) | ( (uint64)1 << (SYS_BAND_TDS_BANDF - 128) ) 
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( RFM_DEVICE_RX_SUPPORTED),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_1 */
    }, /* End Logical Device 1 */ 
    { /* Logical Device 2 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_DEVICE_3, /* Associated Slave Device for RFM_DEVICE_2 */
    }, /* End Logical Device 2 */ 
    { /* Logical Device 3 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_3 */
    }, /* End Logical Device 3 */ 
    { /* Logical Device 4 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_4 */
    }, /* End Logical Device 4 */ 
    { /* Logical Device 5 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_5 */
    }, /* End Logical Device 5 */ 
    { /* Logical Device 6 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_6 */
    }, /* End Logical Device 6 */ 
    { /* Logical Device 7 */ 
      /* bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* ca1_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      /* dr_bands_supported */ 
      {
        {
          /* Bit mask element 0 */ 
          (
            0
          ),  /* End Bit mask element 0 */
          /* Bit mask element 1 */ 
          (
            0
          ),  /* End Bit mask element 1 */
          /* Bit mask element 2 */ 
          (
            0
          ),  /* End Bit mask element 2 */
        },
      },
      ( 0),
      RFM_INVALID_DEVICE, /* Associated Slave Device for RFM_DEVICE_7 */
    }, /* End Logical Device 7 */ 
  },
  {
    0, /* num_concurrency_restrictions */ 
    NULL, /* No Concurrency Restrictions */ 
  },
  {
    0, /* num_3mode_entries */ 
    NULL, /* No 3Mode Support */ 
  },
  FALSE, /* gps_has_independent_receive_chain */ 
  FALSE, /* antenna_swap_supported */ 
};

boolean rfc_wtr4905_china_v2_cmn_ag::get_logical_path_config(rfm_devices_configuration_type* dev_cfg)
{
  if ( dev_cfg == NULL )
  {
    MSG_1(MSG_SSID_RF, MSG_LEGACY_ERROR, "rfm_get_devices_configuration: Invalid Container", 0);
    return FALSE;
  }

  memscpy(dev_cfg,
          sizeof(rfm_devices_configuration_type),
          &rfc_wtr4905_china_v2_logical_device_properties,
          sizeof(rfm_devices_configuration_type));

  return TRUE;
}

rfc_cmn_properties_type rfc_wtr4905_china_v2_cmn_properties = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_ATTENUATION_STATE_MID,
};

boolean rfc_wtr4905_china_v2_cmn_ag::get_cmn_properties(rfc_cmn_properties_type **ptr)
{
  if (NULL==ptr)
  {
    return FALSE;
  }

  *ptr = &rfc_wtr4905_china_v2_cmn_properties;
  return TRUE;
}
