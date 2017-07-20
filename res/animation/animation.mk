LOCAL_PATH := device/qcom/$(CUSTOM_PRODUCT)/res/animation

PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/bootanimation.zip:system/media/bootanimation.zip \
    $(LOCAL_PATH)/boot.mp3:system/media/boot.mp3
