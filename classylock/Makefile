ARCHS = armv7 armv7s arm64
GO_EASY_ON_ME=1
include theos/makefiles/common.mk

BUNDLE_NAME = ClassyLock
ClassyLock_FILES = ClassyLock.mm
ClassyLock_INSTALL_PATH = /Library/PreferenceBundles
ClassyLock_FRAMEWORKS = UIKit
ClassyLock_PRIVATE_FRAMEWORKS = Preferences

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/ClassyLock.plist$(ECHO_END)
