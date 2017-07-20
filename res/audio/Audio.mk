#
# Copyright (C) 2012 TINNO Corporation. All rights reserved
#
# 
# Include this file in a product makefile to include these audio files
#

LOCAL_PATH := device/qcom/$(CUSTOM_PRODUCT)/res/audio

PRODUCT_COPY_FILES += \
	$(LOCAL_PATH)/ui/Dock.ogg:system/media/audio/ui/Dock.ogg \
	$(LOCAL_PATH)/ui/KeypressDelete.ogg:system/media/audio/ui/KeypressDelete.ogg \
	$(LOCAL_PATH)/ui/KeypressInvalid.ogg:system/media/audio/ui/KeypressInvalid.ogg \
	$(LOCAL_PATH)/ui/KeypressSpacebar.ogg:system/media/audio/ui/KeypressSpacebar.ogg \
	$(LOCAL_PATH)/ui/KeypressStandard.ogg:system/media/audio/ui/KeypressStandard.ogg \
	$(LOCAL_PATH)/ui/LowBattery.ogg:system/media/audio/ui/LowBattery.ogg \
	$(LOCAL_PATH)/ui/camera_click.ogg:system/media/audio/ui/camera_click.ogg \
	$(LOCAL_PATH)/ui/camera_focus.ogg:system/media/audio/ui/camera_focus.ogg \
	$(LOCAL_PATH)/ui/Lock.ogg:system/media/audio/ui/Lock.ogg \
	$(LOCAL_PATH)/ui/Unlock.ogg:system/media/audio/ui/Unlock.ogg \
	$(LOCAL_PATH)/ui/VideoRecord.ogg:system/media/audio/ui/VideoRecord.ogg \
	$(LOCAL_PATH)/ui/KeypressReturn.ogg:system/media/audio/ui/KeypressReturn.ogg \
        $(LOCAL_PATH)/ui/Effect_Tick.ogg:system/media/audio/ui/Effect_Tick.ogg \
	$(LOCAL_PATH)/alarms/Ballad_guitar.ogg:system/media/audio/alarms/Ballad_guitar.ogg \
	$(LOCAL_PATH)/alarms/GreenAlarm.ogg:system/media/audio/alarms/GreenAlarm.ogg \
	$(LOCAL_PATH)/alarms/Morning.ogg:system/media/audio/alarms/Morning.ogg \
	$(LOCAL_PATH)/alarms/Stream.ogg:system/media/audio/alarms/Stream.ogg \
	$(LOCAL_PATH)/alarms/Thetraditionalalarm.ogg:system/media/audio/alarms/Thetraditionalalarm.ogg \
	$(LOCAL_PATH)/notifications/Arrive.ogg:system/media/audio/notifications/Arrive.ogg \
	$(LOCAL_PATH)/notifications/Bruce.ogg:system/media/audio/notifications/Bruce.ogg \
	$(LOCAL_PATH)/notifications/Flash.ogg:system/media/audio/notifications/Flash.ogg \
	$(LOCAL_PATH)/notifications/Guitar.ogg:system/media/audio/notifications/Guitar.ogg \
	$(LOCAL_PATH)/notifications/Horizon.ogg:system/media/audio/notifications/Horizon.ogg \
	$(LOCAL_PATH)/notifications/Imagine.ogg:system/media/audio/notifications/Imagine.ogg \
	$(LOCAL_PATH)/notifications/Jumping_notes.ogg:system/media/audio/notifications/Jumping_notes.ogg \
	$(LOCAL_PATH)/notifications/Nervous.ogg:system/media/audio/notifications/Nervous.ogg \
	$(LOCAL_PATH)/notifications/Pure.ogg:system/media/audio/notifications/Pure.ogg \
	$(LOCAL_PATH)/notifications/Water.ogg:system/media/audio/notifications/Water.ogg \
	$(LOCAL_PATH)/ringtones/Acoustic_Guitar.ogg:system/media/audio/ringtones/Acoustic_Guitar.ogg \
	$(LOCAL_PATH)/ringtones/Dance.ogg:system/media/audio/ringtones/Dance.ogg \
	$(LOCAL_PATH)/ringtones/Dazzle.ogg:system/media/audio/ringtones/Dazzle.ogg \
	$(LOCAL_PATH)/ringtones/Fun.ogg:system/media/audio/ringtones/Fun.ogg \
	$(LOCAL_PATH)/ringtones/House.ogg:system/media/audio/ringtones/House.ogg \
	$(LOCAL_PATH)/ringtones/Lattice.ogg:system/media/audio/ringtones/Lattice.ogg \
	$(LOCAL_PATH)/ringtones/Marimbas.ogg:system/media/audio/ringtones/Marimbas.ogg \
	$(LOCAL_PATH)/ringtones/Neon.ogg:system/media/audio/ringtones/Neon.ogg \
	$(LOCAL_PATH)/ringtones/Spar.ogg:system/media/audio/ringtones/Spar.ogg \
	$(LOCAL_PATH)/ringtones/Yearn_for.ogg:system/media/audio/ringtones/Yearn_for.ogg \
	$(LOCAL_PATH)/ftm/ringtone.wav:system/vendor/res/ringtone.wav
