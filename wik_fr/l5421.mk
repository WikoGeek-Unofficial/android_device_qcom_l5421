#DEVICE_PACKAGE_OVERLAYS := device/qcom/l5421/overlay
$(warning --[shormin]-------------wik_fr l5421.mk----------------)
$(warning --[shormin]--TARGET_PRODUCT = [$(TARGET_PRODUCT)])
TARGET_USES_QCOM_BSP := true
ifeq ($(TARGET_PRODUCT),l5421)
TARGET_USES_QCA_NFC := other
endif

# Add QC Video Enhancements flag
TARGET_ENABLE_QC_AV_ENHANCEMENTS := true

####################### start ################################
#wangyanhui add disable qcom featrues 
# Don't move this line to other place, because it is used in qtic-config.mk
TINNO_DISABLE_FEATRUES := true
CUSTOM_PRODUCT := l5421
######################## end #############################

#QTIC flag
-include $(QCPATH)/common/config/qtic-config.mk

# media_profiles and media_codecs xmls for 8916
ifeq ($(TARGET_ENABLE_QC_AV_ENHANCEMENTS), true)
PRODUCT_COPY_FILES += device/qcom/l5421/media/media_profiles_8916.xml:system/etc/media_profiles.xml \
                      device/qcom/l5421/media/media_codecs_8916.xml:system/etc/media_codecs.xml \
                      device/qcom/l5421/media/media_codecs_8939.xml:system/etc/media_codecs_8939.xml \
                      device/qcom/l5421/media/media_codecs_8929.xml:system/etc/media_codecs_8929.xml
endif

PRODUCT_PROPERTY_OVERRIDES += \
       dalvik.vm.heapgrowthlimit=128m \
       dalvik.vm.heapminfree=6m \
       dalvik.vm.heapstartsize=14m
$(call inherit-product, device/qcom/common/common.mk)

PRODUCT_NAME := l5421
PRODUCT_DEVICE := l5421

# inherit-product configs.mk.
# wanglj add for multisim/singlesim config
ifeq ($(strip $(CUST_SIM)),)
    CFG_FILE := vendor/tinno/$(TARGET_PRODUCT)/$(PROJECT_NAME)/configs.mk
else
    $(warning --CUST_SIM--$(CUST_SIM)---)
    CFG_FILE := vendor/tinno/$(TARGET_PRODUCT)/$(PROJECT_NAME)/$(CUST_SIM)/configs.mk
    ifeq ($(wildcard $(CFG_FILE)),)
        CFG_FILE := vendor/tinno/$(TARGET_PRODUCT)/$(PROJECT_NAME)/configs.mk
    endif
endif


$(warning --CFG_FILE--$(CFG_FILE)---)
$(call inherit-product-if-exists, $(CFG_FILE))

ifeq ($(strip $(PROJECT_NAME)),wik_fr)
  TARGET_DEVICE:=wiko
  PRODUCT_BRAND:=WIKO
  PRODUCT_MANUFACTURER:=WIKO
  PRODUCT_MODEL:=PULP 4G
endif

$(warning --[shormin]--wik_fr_l5421.mk--, TARGET_DEVICE--[$(TARGET_DEVICE)])
$(warning --[shormin]--wik_fr_l5421.mk--, PRODUCT_NAME--[$(PRODUCT_NAME)])
$(warning --[shormin]--wik_fr_l5421.mk--, PRODUCT_BRAND--[$(PRODUCT_BRAND)])
$(warning --[shormin]--wik_fr_l5421.mk--, PRODUCT_MANUFACTURER--[$(PRODUCT_MANUFACTURER)])
$(warning --[shormin]--wik_fr_l5421.mk--, PRODUCT_MODEL--[$(PRODUCT_MODEL)])


ifeq ($(strip $(TARGET_USES_QTIC)),true)
# font rendering engine feature switch
-include $(QCPATH)/common/config/rendering-engine.mk
ifneq (,$(strip $(wildcard $(PRODUCT_RENDERING_ENGINE_REVLIB))))
    MULTI_LANG_ENGINE := REVERIE
endif
endif

PRODUCT_BOOT_JARS += \
           qcmediaplayer \
           WfdCommon \
           oem-services \
           qcom.fmradio \
           org.codeaurora.Performance \
           tcmiface

# Audio configuration file
PRODUCT_COPY_FILES += \
    device/qcom/l5421/audio_policy.conf:system/etc/audio_policy.conf \
    device/qcom/l5421/audio_effects.conf:system/vendor/etc/audio_effects.conf \
    device/qcom/l5421/mixer_paths_mtp.xml:system/etc/mixer_paths_mtp.xml \
    device/qcom/l5421/mixer_paths_sbc.xml:system/etc/mixer_paths_sbc.xml \
    device/qcom/l5421/mixer_paths_qrd_skuh.xml:system/etc/mixer_paths_qrd_skuh.xml \
    device/qcom/l5421/mixer_paths_qrd_skui.xml:system/etc/mixer_paths_qrd_skui.xml \
    device/qcom/l5421/mixer_paths_qrd_skuhf.xml:system/etc/mixer_paths_qrd_skuhf.xml \
    device/qcom/l5421/mixer_paths_wcd9306.xml:system/etc/mixer_paths_wcd9306.xml \
    device/qcom/l5421/mixer_paths_skuk.xml:system/etc/mixer_paths_skuk.xml \
    device/qcom/l5421/mixer_paths_skul.xml:system/etc/mixer_paths_skul.xml \
    device/qcom/l5421/mixer_paths.xml:system/etc/mixer_paths.xml \
    device/qcom/l5421/sound_trigger_mixer_paths.xml:system/etc/sound_trigger_mixer_paths.xml \
    device/qcom/l5421/sound_trigger_mixer_paths_wcd9306.xml:system/etc/sound_trigger_mixer_paths_wcd9306.xml \
    device/qcom/l5421/sound_trigger_platform_info.xml:system/etc/sound_trigger_platform_info.xml \
    device/qcom/l5421/mixer_paths_wcd9330.xml:system/etc/mixer_paths_wcd9330.xml

# ANT+ stack
PRODUCT_PACKAGES += \
    AntHalService \
    libantradio \
    antradio_app

PRODUCT_DEFAULT_PROPERTY_OVERRIDES += \
    camera2.portability.force_api=1

# NFC packages
ifeq ($(TARGET_USES_QCA_NFC),true)
NFC_D := true

ifeq ($(NFC_D), true)
    PRODUCT_PACKAGES += \
        libnfcD-nci \
        libnfcD_nci_jni \
        nfc_nci.msm8916 \
        NfcDNci \
        Tag \
        com.android.nfc_extras \
        com.android.nfc.helper
else
    PRODUCT_PACKAGES += \
    libnfc-nci \
    libnfc_nci_jni \
    nfc_nci.msm8916 \
    NfcNci \
    Tag \
    com.android.nfc_extras
endif

# file that declares the MIFARE NFC constant
# Commands to migrate prefs from com.android.nfc3 to com.android.nfc
# NFC access control + feature files + configuration
PRODUCT_COPY_FILES += \
        packages/apps/Nfc/migrate_nfc.txt:system/etc/updatecmds/migrate_nfc.txt \
        frameworks/native/data/etc/com.nxp.mifare.xml:system/etc/permissions/com.nxp.mifare.xml \
        frameworks/native/data/etc/com.android.nfc_extras.xml:system/etc/permissions/com.android.nfc_extras.xml \
        frameworks/native/data/etc/android.hardware.nfc.xml:system/etc/permissions/android.hardware.nfc.xml
endif # TARGET_USES_QCA_NFC

# Feature definition files for msm8916
PRODUCT_COPY_FILES += \
    frameworks/native/data/etc/android.hardware.sensor.accelerometer.xml:system/etc/permissions/android.hardware.sensor.accelerometer.xml \
    frameworks/native/data/etc/android.hardware.sensor.compass.xml:system/etc/permissions/android.hardware.sensor.compass.xml \
    frameworks/native/data/etc/android.hardware.sensor.gyroscope.xml:system/etc/permissions/android.hardware.sensor.gyroscope.xml \
    frameworks/native/data/etc/android.hardware.sensor.light.xml:system/etc/permissions/android.hardware.sensor.light.xml \
    frameworks/native/data/etc/android.hardware.sensor.proximity.xml:system/etc/permissions/android.hardware.sensor.proximity.xml

#fstab.qcom
PRODUCT_PACKAGES += fstab.qcom

PRODUCT_PACKAGES += \
    libqcomvisualizer \
    libqcompostprocbundle \
    libqcomvoiceprocessing

#OEM Services library
PRODUCT_PACKAGES += oem-services
PRODUCT_PACKAGES += libsubsystem_control
PRODUCT_PACKAGES += libSubSystemShutdown

PRODUCT_PACKAGES += wcnss_service

# MSM IRQ Balancer configuration file
PRODUCT_COPY_FILES += \
    device/qcom/l5421/msm_irqbalance.conf:system/vendor/etc/msm_irqbalance.conf

#wlan driver
PRODUCT_COPY_FILES += \
    device/qcom/l5421/WCNSS_qcom_cfg.ini:system/etc/wifi/WCNSS_qcom_cfg.ini \
    device/qcom/l5421/WCNSS_wlan_dictionary.dat:persist/WCNSS_wlan_dictionary.dat \
    device/qcom/l5421/WCNSS_qcom_wlan_nv.bin:persist/WCNSS_qcom_wlan_nv.bin

PRODUCT_PACKAGES += \
    wpa_supplicant_overlay.conf \
    p2p_supplicant_overlay.conf
#ANT+ stack
PRODUCT_PACKAGES += \
AntHalService \
libantradio \
antradio_app

#HBTP
PRODUCT_PACKAGES += hbtp_daemon
PRODUCT_PACKAGES += libhbtpclient.so
PRODUCT_PACKAGES += libhbtpfrmwk.so
PRODUCT_PACKAGES += libhbtparm.so
PRODUCT_PACKAGES += libafehal_5_rohm_v3.so
PRODUCT_PACKAGES += hbtp_8939_5_rohm_v3.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_5_rohm_v3.dat
PRODUCT_PACKAGES += libafehal_5_rohm_v4.so
PRODUCT_PACKAGES += hbtp_8939_5_rohm_v4.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_5_rohm_v4.dat
PRODUCT_PACKAGES += libafehal_5p5_rohm_v4.so
PRODUCT_PACKAGES += hbtp_8939_5p5_rohm_v4.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_5p5_rohm_v4.dat
PRODUCT_PACKAGES += libafehal_6_rohm_v3.so
PRODUCT_PACKAGES += hbtp_8939_6_rohm_v3.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_6_rohm_v3.dat

# Defined the locales
PRODUCT_LOCALES += th_TH vi_VN tl_PH hi_IN ar_EG ru_RU tr_TR pt_BR bn_IN mr_IN ta_IN te_IN zh_HK \
        in_ID my_MM km_KH sw_KE uk_UA pl_PL sr_RS sl_SI fa_IR kn_IN ml_IN ur_IN gu_IN or_IN

# Add the overlay path
ifeq ($(strip $(TARGET_USES_QTIC)),true)
PRODUCT_PACKAGE_OVERLAYS := $(QCPATH)/qrdplus/Extension/res-overlay \
        $(PRODUCT_PACKAGE_OVERLAYS)
endif


###################################### tinno oem ####################################

#audio params
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Bluetooth_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Bluetooth_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/General_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/General_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Global_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Global_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Handset_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Handset_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Hdmi_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Hdmi_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Headset_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Headset_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Speaker_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Speaker_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/workspaceFile.qwsp vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/workspaceFile.qwsp)

# TINNO APPS
$(call inherit-product-if-exists, vendor/tinno/packages/apps/tinno_apps.mk)

# MYOS
MYOS_LAUNCHER          := true
MYOS_MUSIC             := false
MYOS_SOUNDRECORDER     := true
MYOS_WEATHER           := true
MYOS_FILEMANAGER       := true
MYOS_MIRROR            := false
MYOS_TORCH             := false
MYOS_CALCULATOR        := true

MYOS_ROOT_DIR := vendor/tinno/myos
$(call inherit-product-if-exists, vendor/tinno/myos/myos.mk)

PRODUCT_PACKAGES += TNSystemUpdate
PRODUCT_COPY_FILES += \
       vendor/tinno/packages/apps/TinnoOTA/ota_settings_default.xml:system/etc/ota_settings.xml

# MY Camera/Gallery/VideoPlayer/FaceBeatyUI
CONFIG_MYOS_RELEASE_APK := true
RELEASE_APK_CONFIG_FILE_DIR := device/qcom/$(TARGET_PRODUCT)
$(call inherit-product-if-exists, vendor/tinno/packages/apps/ReleaseAPK/release_copy.mk)

# 3RD Apps
# BROWSER := true
$(call inherit-product-if-exists, vendor/tinno/3rd/3rd_apps.mk)




#bt
$(call inherit-product, device/qcom/l5421/bt.mk)



# zenghaihui enable SSR
#ifneq ($(filter user, $(TARGET_BUILD_VARIANT)),)
ifeq ($(TARGET_BUILD_VARIANT),user)
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.ssr.restart_level=1
else
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.ssr.restart_level=0
endif

#add TnNvOperate by huiyong.yin
PRODUCT_PACKAGES += TnNvOperate





#//Begin<REQ><20150724><>add GESTURE_WAKEUP;xiongdajun
PRODUCT_PROPERTY_OVERRIDES += ro.function.smartawake=true

#PRODUCT_PROPERTY_OVERRIDES += ro.function.tinnogesture=true
#PRODUCT_PACKAGES += \
#   GesturePhone
#//END<REQ><20150724><>add GESTURE_WAKEUP;xiongdajun


# zenghaihui add 
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.sim2.preferred3G=0

#add sts by liuzongbin
PRODUCT_PACKAGES += SaleTracker
PRODUCT_COPY_FILES += \
       vendor/tinno/packages/apps/SaleTracker/Tracksms:persist/sts/Tracksms \
       vendor/tinno/packages/apps/SaleTracker/SaleTrackerConfig.xml:system/etc/SaleTrackerConfig.xml \
       vendor/tinno/packages/apps/SaleTracker/libsltrckrcnfg.so:system/lib/libsltrckrcnfg.so


## #add TouchPal by maojun
## PRODUCT_PACKAGES += \
##     TouchPal_Global \
##     FrenchPack \
##     GermanPack \
##     ArabicPack \
##     SpanishPack \
##     RussianPack \
##     ThaiPack \
##     IndonesianPack 


#gms hexiaoming
TINNO_GMS_ABLE          := false

#smartstandby
PRODUCT_COPY_FILES += \
	device/qcom/l5421/st-settings-config.xml:system/etc/st-settings-config.xml
#smartstandby
