/* DO NOT EDIT. This file is generated from applets.src.h */
/* vi: set sw=4 ts=4: */
/*
 * applets.h - a listing of all busybox applets.
 *
 * If you write a new applet, you need to add an entry to this list to make
 * busybox aware of it.
 */

/*
name  - applet name as it is typed on command line
name2 - applet name, converted to C (ether-wake: name2 = ether_wake)
main  - corresponding <applet>_main to call (bzcat: main = bunzip2)
l     - location to install link to: [/usr]/[s]bin
s     - suid type:
        BB_SUID_REQUIRE: will complain if busybox isn't suid
        and is run by non-root (applet_main() will not be called at all)
        BB_SUID_DROP: will drop suid prior to applet_main()
        BB_SUID_MAYBE: neither of the above
        (every instance of BB_SUID_REQUIRE and BB_SUID_MAYBE
        needs to be justified in comment)
        NB: please update FEATURE_SUID help text whenever you add/remove
        BB_SUID_REQUIRE or BB_SUID_MAYBE applet.
*/

#if defined(PROTOTYPES)
# define APPLET(name,l,s)                    int name##_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
# define APPLET_ODDNAME(name,main,l,s,name2) int main##_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
# define APPLET_NOEXEC(name,main,l,s,name2)  int main##_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
# define APPLET_NOFORK(name,main,l,s,name2)  int main##_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;

#elif defined(NAME_MAIN_CNAME)
# define APPLET(name,l,s)                    name name##_main name
# define APPLET_ODDNAME(name,main,l,s,name2) name main##_main name2
# define APPLET_NOEXEC(name,main,l,s,name2)  name main##_main name2
# define APPLET_NOFORK(name,main,l,s,name2)  name main##_main name2

#elif defined(MAKE_USAGE) && ENABLE_FEATURE_VERBOSE_USAGE
# define APPLET(name,l,s)                    MAKE_USAGE(#name, name##_trivial_usage name##_full_usage)
# define APPLET_ODDNAME(name,main,l,s,name2) MAKE_USAGE(#name, name2##_trivial_usage name2##_full_usage)
# define APPLET_NOEXEC(name,main,l,s,name2)  MAKE_USAGE(#name, name2##_trivial_usage name2##_full_usage)
# define APPLET_NOFORK(name,main,l,s,name2)  MAKE_USAGE(#name, name2##_trivial_usage name2##_full_usage)

#elif defined(MAKE_USAGE) && !ENABLE_FEATURE_VERBOSE_USAGE
# define APPLET(name,l,s)                    MAKE_USAGE(#name, name##_trivial_usage)
# define APPLET_ODDNAME(name,main,l,s,name2) MAKE_USAGE(#name, name2##_trivial_usage)
# define APPLET_NOEXEC(name,main,l,s,name2)  MAKE_USAGE(#name, name2##_trivial_usage)
# define APPLET_NOFORK(name,main,l,s,name2)  MAKE_USAGE(#name, name2##_trivial_usage)

#elif defined(MAKE_LINKS)
# define APPLET(name,l,c)                    LINK l name
# define APPLET_ODDNAME(name,main,l,s,name2) LINK l name
# define APPLET_NOEXEC(name,main,l,s,name2)  LINK l name
# define APPLET_NOFORK(name,main,l,s,name2)  LINK l name

#elif defined(MAKE_SUID)
# define APPLET(name,l,s)                    SUID s l name
# define APPLET_ODDNAME(name,main,l,s,name2) SUID s l name
# define APPLET_NOEXEC(name,main,l,s,name2)  SUID s l name
# define APPLET_NOFORK(name,main,l,s,name2)  SUID s l name

#else
  static struct bb_applet applets[] = { /*    name, main, location, need_suid */
# define APPLET(name,l,s)                    { #name, #name, l, s },
# define APPLET_ODDNAME(name,main,l,s,name2) { #name, #main, l, s },
# define APPLET_NOEXEC(name,main,l,s,name2)  { #name, #main, l, s, 1 },
# define APPLET_NOFORK(name,main,l,s,name2)  { #name, #main, l, s, 1, 1 },
#endif

#if ENABLE_INSTALL_NO_USR
# define BB_DIR_USR_BIN BB_DIR_BIN
# define BB_DIR_USR_SBIN BB_DIR_SBIN
#endif


IF_AR(APPLET(ar, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_UNCOMPRESS(APPLET(uncompress, BB_DIR_BIN, BB_SUID_DROP))
IF_GUNZIP(APPLET(gunzip, BB_DIR_BIN, BB_SUID_DROP))
IF_GUNZIP(APPLET_ODDNAME(zcat, gunzip, BB_DIR_BIN, BB_SUID_DROP, zcat))
IF_BUNZIP2(APPLET(bunzip2, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_BUNZIP2(APPLET_ODDNAME(bzcat, bunzip2, BB_DIR_USR_BIN, BB_SUID_DROP, bzcat))
IF_UNLZMA(APPLET(unlzma, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_UNLZMA(APPLET_ODDNAME(lzcat, unlzma, BB_DIR_USR_BIN, BB_SUID_DROP, lzcat))
IF_LZMA(APPLET_ODDNAME(lzma, unlzma, BB_DIR_USR_BIN, BB_SUID_DROP, lzma))
IF_UNXZ(APPLET(unxz, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_UNXZ(APPLET_ODDNAME(xzcat, unxz, BB_DIR_USR_BIN, BB_SUID_DROP, xzcat))
IF_XZ(APPLET_ODDNAME(xz, unxz, BB_DIR_USR_BIN, BB_SUID_DROP, xz))
IF_BZIP2(APPLET(bzip2, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_CPIO(APPLET(cpio, BB_DIR_BIN, BB_SUID_DROP))
IF_DPKG(APPLET(dpkg, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_DPKG_DEB(APPLET_ODDNAME(dpkg-deb, dpkg_deb, BB_DIR_USR_BIN, BB_SUID_DROP, dpkg_deb))
IF_GZIP(APPLET(gzip, BB_DIR_BIN, BB_SUID_DROP))
IF_LZOP(APPLET(lzop, BB_DIR_BIN, BB_SUID_DROP))
IF_LZOP(APPLET_ODDNAME(lzopcat, lzop, BB_DIR_USR_BIN, BB_SUID_DROP, lzopcat))
IF_LZOP(APPLET_ODDNAME(unlzop, lzop, BB_DIR_USR_BIN, BB_SUID_DROP, unlzop))
IF_RPM(APPLET(rpm, BB_DIR_BIN, BB_SUID_DROP))
IF_RPM2CPIO(APPLET(rpm2cpio, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_TAR(APPLET(tar, BB_DIR_BIN, BB_SUID_DROP))
IF_UNZIP(APPLET(unzip, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_DATE(APPLET(date, BB_DIR_BIN, BB_SUID_DROP))
IF_HOSTID(APPLET_NOFORK(hostid, hostid, BB_DIR_USR_BIN, BB_SUID_DROP, hostid))
IF_GROUPS(APPLET_NOEXEC(groups, id, BB_DIR_USR_BIN, BB_SUID_DROP, groups))
IF_ID(    APPLET_NOEXEC(id,     id, BB_DIR_USR_BIN, BB_SUID_DROP, id    ))
IF_TOUCH(APPLET_NOFORK(touch, touch, BB_DIR_BIN, BB_SUID_DROP, touch))
IF_BASE64(APPLET(base64, BB_DIR_BIN, BB_SUID_DROP))
IF_USERS(APPLET_ODDNAME(users, who, BB_DIR_USR_BIN, BB_SUID_DROP, users))
IF_WHO(  APPLET(  who, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_AWK(APPLET_NOEXEC(awk, awk, BB_DIR_USR_BIN, BB_SUID_DROP, awk))
IF_CMP(APPLET(cmp, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_DIFF(APPLET(diff, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_ED(APPLET(ed, BB_DIR_BIN, BB_SUID_DROP))
IF_PATCH(APPLET(patch, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_SED(APPLET(sed, BB_DIR_BIN, BB_SUID_DROP))
IF_VI(APPLET(vi, BB_DIR_BIN, BB_SUID_DROP))
IF_FIND(APPLET_NOEXEC(find, find, BB_DIR_USR_BIN, BB_SUID_DROP, find))
IF_GREP(APPLET(grep, BB_DIR_BIN, BB_SUID_DROP))
IF_FEATURE_GREP_EGREP_ALIAS(APPLET_ODDNAME(egrep, grep, BB_DIR_BIN, BB_SUID_DROP, egrep))
IF_FEATURE_GREP_FGREP_ALIAS(APPLET_ODDNAME(fgrep, grep, BB_DIR_BIN, BB_SUID_DROP, fgrep))
IF_XARGS(APPLET_NOEXEC(xargs, xargs, BB_DIR_USR_BIN, BB_SUID_DROP, xargs))
IF_BOOTCHARTD(APPLET(bootchartd, BB_DIR_SBIN, BB_SUID_DROP))
IF_HALT(APPLET(halt, BB_DIR_SBIN, BB_SUID_DROP))
IF_HALT(APPLET_ODDNAME(poweroff, halt, BB_DIR_SBIN, BB_SUID_DROP, poweroff))
IF_HALT(APPLET_ODDNAME(reboot, halt, BB_DIR_SBIN, BB_SUID_DROP, reboot))
IF_INIT(APPLET(init, BB_DIR_SBIN, BB_SUID_DROP))
IF_FEATURE_INITRD(APPLET_ODDNAME(linuxrc, init, BB_DIR_ROOT, BB_SUID_DROP, linuxrc))
IF_MESG(APPLET(mesg, BB_DIR_USR_BIN, BB_SUID_DROP))
IF_ADD_SHELL(   APPLET_ODDNAME(add-shell   , add_remove_shell, BB_DIR_USR_SBIN, BB_SUID_DROP, add_shell   ))
IF_REMOVE_SHELL(APPLET_ODDNAME(remove-shell, add_remove_shell, BB_DIR_USR_SBIN, BB_SUID_DROP, remove_shell))
IF_CONSPY(APPLET(conspy, BB_DIR_BIN, BB_SUID_DROP))
IF_NANDWRITE(APPLET(nandwrite, BB_DIR_USR_SBIN, BB_SUID_DROP))
IF_NANDDUMP(APPLET_ODDNAME(nanddump, nandwrite, BB_DIR_USR_SBIN, BB_SUID_DROP, nanddump))
IF_RFKILL(APPLET(rfkill, BB_DIR_USR_SBIN, BB_SUID_DROP))
IF_SETSERIAL(APPLET(setserial, BB_DIR_BIN, BB_SUID_DROP))
IF_UBIATTACH(APPLET_ODDNAME(ubiattach, ubi_tools, BB_DIR_USR_SBIN, BB_SUID_DROP, ubiattach))
IF_UBIDETACH(APPLET_ODDNAME(ubidetach, ubi_tools, BB_DIR_USR_SBIN, BB_SUID_DROP, ubidetach))
IF_UBIMKVOL(APPLET_ODDNAME(ubimkvol, ubi_tools, BB_DIR_USR_SBIN, BB_SUID_DROP, ubimkvol))
IF_UBIRMVOL(APPLET_ODDNAME(ubirmvol, ubi_tools, BB_DIR_USR_SBIN, BB_SUID_DROP, ubirmvol))
IF_UBIRSVOL(APPLET_ODDNAME(ubirsvol, ubi_tools, BB_DIR_USR_SBIN, BB_SUID_DROP, ubirsvol))
IF_UBIUPDATEVOL(APPLET_ODDNAME(ubiupdatevol, ubi_tools, BB_DIR_USR_SBIN, BB_SUID_DROP, ubiupdatevol))
IF_WALL(APPLET(wall, BB_DIR_USR_BIN, BB_SUID_REQUIRE))
IF_DEPMOD(APPLET(depmod, BB_DIR_SBIN, BB_SUID_DROP))
IF_INSMOD(APPLET(insmod, BB_DIR_SBIN, BB_SUID_DROP))
IF_LSMOD(APPLET(lsmod, BB_DIR_SBIN, BB_SUID_DROP))
IF_MODINFO(APPLET(modinfo, BB_DIR_SBIN, BB_SUID_DROP))
IF_MODPROBE_SMALL(APPLET(modprobe, BB_DIR_SBIN, BB_SUID_DROP))
IF_MODPROBE_SMALL(APPLET_ODDNAME(depmod, modprobe, BB_DIR_SBIN, BB_SUID_DROP, modprobe))
IF_MODPROBE_SMALL(APPLET_ODDNAME(insmod, modprobe, BB_DIR_SBIN, BB_SUID_DROP, modprobe))
IF_MODPROBE_SMALL(APPLET_ODDNAME(lsmod, modprobe, BB_DIR_SBIN, BB_SUID_DROP, modprobe))
IF_MODPROBE_SMALL(APPLET_ODDNAME(rmmod, modprobe, BB_DIR_SBIN, BB_SUID_DROP, modprobe))
IF_MODPROBE(APPLET(modprobe, BB_DIR_SBIN, BB_SUID_DROP))
