
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

$Header: //Commercial/MPSS.DPM.2.0.2.c1/Main/modem_proc/rfc_dimepm/rf_card/rfc_wtr4905_china_v2/wcdma/src/rfc_wtr4905_china_v2_wcdma_config_ag.cpp#2 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include "rfc_wtr4905_china_v2_wcdma_config_ag.h" 
#include "rfc_wtr4905_china_v2_cmn_ag.h" 
#include "rfc_common.h" 
#include "rfcom.h" 



extern "C" 
{
  extern rfc_device_info_type rf_card_wtr4905_china_v2_init_wcdma_rx_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_init_wcdma_rx_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_init_wcdma_tx_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_init_wcdma_tx_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_rx0_wcdma_b1_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_wcdma_b1_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_rx1_wcdma_b1_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_wcdma_b1_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_tx0_wcdma_b1_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_wcdma_b1_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_rx0_wcdma_b2_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_wcdma_b2_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_rx1_wcdma_b2_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_wcdma_b2_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_tx0_wcdma_b2_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_wcdma_b2_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_rx0_wcdma_b4_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_wcdma_b4_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_rx1_wcdma_b4_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_wcdma_b4_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_tx0_wcdma_b4_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_wcdma_b4_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_rx0_wcdma_b5_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_wcdma_b5_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_rx1_wcdma_b5_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_wcdma_b5_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_tx0_wcdma_b5_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_wcdma_b5_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_rx0_wcdma_b8_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_wcdma_b8_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_rx1_wcdma_b8_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_wcdma_b8_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_tx0_wcdma_b8_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_wcdma_b8_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_wcdma_en_et_cal0_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_wcdma_en_et_cal0_sig_cfg;
  extern rfc_device_info_type rf_card_wtr4905_china_v2_wcdma_dis_et_cal0_device_info;
  extern rfc_sig_info_type rf_card_wtr4905_china_v2_wcdma_dis_et_cal0_sig_cfg;
} /* extern "C" */


rfc_wcdma_data * rfc_wtr4905_china_v2_wcdma_ag::get_instance()
{
  if (rfc_wcdma_data_ptr == NULL)
  {
    rfc_wcdma_data_ptr = (rfc_wcdma_data *)new rfc_wtr4905_china_v2_wcdma_ag();
  }
  return( (rfc_wcdma_data *)rfc_wcdma_data_ptr);
}

//constructor
rfc_wtr4905_china_v2_wcdma_ag::rfc_wtr4905_china_v2_wcdma_ag()
  :rfc_wcdma_data()
{
}

boolean rfc_wtr4905_china_v2_wcdma_ag::sig_cfg_data_get( rfc_cfg_params_type *cfg, rfc_sig_cfg_type **ptr )
{

  boolean ret_val = FALSE;

  if (NULL==ptr)
  {
    return FALSE;
  }

  if (NULL==cfg)
  {
    *ptr = NULL;
    return FALSE;
  }

  *ptr = NULL;

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->req == RFC_REQ_INIT ) )
  { *ptr = &(rf_card_wtr4905_china_v2_init_wcdma_rx_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->req == RFC_REQ_INIT ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_init_wcdma_tx_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_IMT ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx0_wcdma_b1_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_IMT ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx1_wcdma_b1_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_IMT ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_tx0_wcdma_b1_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_1900 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx0_wcdma_b2_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_1900 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx1_wcdma_b2_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_1900 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_tx0_wcdma_b2_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC4 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx0_wcdma_b4_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC4 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx1_wcdma_b4_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC4 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_tx0_wcdma_b4_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_800 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx0_wcdma_b5_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_800 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx1_wcdma_b5_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_800 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_tx0_wcdma_b5_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC8 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx0_wcdma_b8_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC8 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx1_wcdma_b8_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC8 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_tx0_wcdma_b8_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( ( cfg->band == (int)RFCOM_BAND_IMT )||  ( cfg->band == (int)RFCOM_BAND_1900 )||  ( cfg->band == (int)RFCOM_BAND_BC4 )||  ( cfg->band == (int)RFCOM_BAND_800 )||  ( cfg->band == (int)RFCOM_BAND_BC8 )) && ( cfg->req == RFC_REQ_ENABLE_ET_CAL ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_wcdma_en_et_cal0_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( ( cfg->band == (int)RFCOM_BAND_IMT )||  ( cfg->band == (int)RFCOM_BAND_1900 )||  ( cfg->band == (int)RFCOM_BAND_BC3 )||  ( cfg->band == (int)RFCOM_BAND_BC4 )||  ( cfg->band == (int)RFCOM_BAND_800 )||  ( cfg->band == (int)RFCOM_BAND_BC8 )) && ( cfg->req == RFC_REQ_DISABLE_ET_CAL ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_wcdma_dis_et_cal0_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  return ret_val;
}

boolean rfc_wtr4905_china_v2_wcdma_ag::devices_cfg_data_get( rfc_cfg_params_type *cfg, rfc_device_info_type **ptr )
{

  boolean ret_val = FALSE;

  if (NULL==ptr)
  {
    return FALSE;
  }

  if (NULL==cfg)
  {
    *ptr = NULL;
    return FALSE;
  }

  *ptr = NULL;

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->req == RFC_REQ_INIT ) )
  { *ptr = &(rf_card_wtr4905_china_v2_init_wcdma_rx_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->req == RFC_REQ_INIT ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_init_wcdma_tx_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_IMT ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx0_wcdma_b1_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_IMT ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx1_wcdma_b1_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_IMT ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_tx0_wcdma_b1_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_1900 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx0_wcdma_b2_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_1900 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx1_wcdma_b2_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_1900 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_tx0_wcdma_b2_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC4 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx0_wcdma_b4_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC4 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx1_wcdma_b4_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC4 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_tx0_wcdma_b4_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_800 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx0_wcdma_b5_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_800 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx1_wcdma_b5_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_800 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_tx0_wcdma_b5_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC8 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx0_wcdma_b8_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC8 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_rx1_wcdma_b8_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( cfg->band == (int)RFCOM_BAND_BC8 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_tx0_wcdma_b8_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( ( cfg->band == (int)RFCOM_BAND_IMT )||  ( cfg->band == (int)RFCOM_BAND_1900 )||  ( cfg->band == (int)RFCOM_BAND_BC4 )||  ( cfg->band == (int)RFCOM_BAND_800 )||  ( cfg->band == (int)RFCOM_BAND_BC8 )) && ( cfg->req == RFC_REQ_ENABLE_ET_CAL ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_wcdma_en_et_cal0_device_info);  ret_val = TRUE; }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->alternate_path == 0 /*Warning: not specified*/ ) && ( ( cfg->band == (int)RFCOM_BAND_IMT )||  ( cfg->band == (int)RFCOM_BAND_1900 )||  ( cfg->band == (int)RFCOM_BAND_BC3 )||  ( cfg->band == (int)RFCOM_BAND_BC4 )||  ( cfg->band == (int)RFCOM_BAND_800 )||  ( cfg->band == (int)RFCOM_BAND_BC8 )) && ( cfg->req == RFC_REQ_DISABLE_ET_CAL ) && !ret_val )
  { *ptr = &(rf_card_wtr4905_china_v2_wcdma_dis_et_cal0_device_info);  ret_val = TRUE; }

  return ret_val;
}

boolean rfc_wtr4905_china_v2_wcdma_ag::band_split_cfg_data_get( rfc_cfg_params_type *cfg, rfc_band_split_info_type **ptr )
{
  boolean ret_val = FALSE;

  if (NULL==ptr)
  {
    return FALSE;
  }

  if (NULL==cfg)
  {
    *ptr = NULL;
    return FALSE;
  }

  *ptr = NULL;

  return ret_val;
}

