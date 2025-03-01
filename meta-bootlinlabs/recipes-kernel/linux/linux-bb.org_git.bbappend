FILESEXTRAPATHS:prepend := "${THISDIR}/patches:"

SRC_URI += "file://0001-Add-nunchuk-driver.patch"
SRC_URI += "file://0002-Add-i2c1-and-nunchuk-nodes-in-dts.patch"
SRC_URI += "file://defconfig"
