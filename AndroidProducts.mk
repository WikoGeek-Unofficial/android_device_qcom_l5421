$(warning --[shormin]------PROJECT_NAME---$(PROJECT_NAME)------)
ifeq ($(strip $(PROJECT_NAME)), wik_fr)
  $(warning --PROJECT_NAME---is--wik_fr, take wik_fr_l5421.mk)
  PRODUCT_MAKEFILES := \
	  $(LOCAL_DIR)/$(PROJECT_NAME)/l5421.mk
else
  $(warning --PROJECT_NAME---is--else, take l5421.mk)
PRODUCT_MAKEFILES := \
	$(LOCAL_DIR)/l5421.mk
endif
