
SUMMARY = "nInvaders CLI-based Invaders Clone"
HOMEPAGE = "https://ninvaders.sourceforge.net/"
SECTION = "games"
SRC_URI = "${SOURCEFORGE_MIRROR}/project/${BPN}/${BPN}/${PV}/${BPN}-${PV}.tar.gz"

# Apply Patches
SRC_URI += "file://${THISDIR}/patches/joystick-support.patch;apply=yes"

DEPENDS = "ncurses (>= 5.2)"

do_compile() {
	oe_runmake CC="${CC}" CFLAGS="-fcommon"
}

do_install() {
	install -d ${D}${bindir}
	install -m 0755 nInvaders ${D}${bindir}
}

