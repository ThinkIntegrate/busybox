/* DO NOT EDIT. This file is generated from usage.src.h */
/* vi: set sw=8 ts=8: */
/*
 * This file suffers from chronically incorrect tabification
 * of messages. Before editing this file:
 * 1. Switch you editor to 8-space tab mode.
 * 2. Do not use \t in messages, use real tab character.
 * 3. Start each source line with message as follows:
 *    |<7 spaces>"text with tabs"....
 * or
 *    |<5 spaces>"\ntext with tabs"....
 */
#ifndef BB_USAGE_H
#define BB_USAGE_H 1

#define NOUSAGE_STR "\b"

n#define ar_trivial_usage \
       "[-o] [-v] [-p] [-t] [-x] ARCHIVE FILES" \
n#define ar_full_usage "\n\n" \
       "Extract or list FILES from an ar archive\n" \
     "\n	-o	Preserve original dates" \
     "\n	-p	Extract to stdout" \
     "\n	-t	List" \
     "\n	-x	Extract" \
     "\n	-v	Verbose" \
n#define uncompress_trivial_usage \
       "[-cf] [FILE]..." \
n#define uncompress_full_usage "\n\n" \
       "Decompress .Z file[s]\n" \
     "\n	-c	Write to stdout" \
     "\n	-f	Overwrite" \
n#define gunzip_trivial_usage \
       "[-cft] [FILE]..." \
n#define gunzip_full_usage "\n\n" \
       "Decompress FILEs (or stdin)\n" \
     "\n	-c	Write to stdout" \
     "\n	-f	Force" \
     "\n	-t	Test file integrity" \
n#define gunzip_example_usage \
       "$ ls -la /tmp/BusyBox*\n" \
       "-rw-rw-r--    1 andersen andersen   557009 Apr 11 10:55 /tmp/BusyBox-0.43.tar.gz\n" \
       "$ gunzip /tmp/BusyBox-0.43.tar.gz\n" \
       "$ ls -la /tmp/BusyBox*\n" \
       "-rw-rw-r--    1 andersen andersen  1761280 Apr 14 17:47 /tmp/BusyBox-0.43.tar\n" \
n#define zcat_trivial_usage \
       "[FILE]..." \
n#define zcat_full_usage "\n\n" \
       "Decompress to stdout" \
n#define bunzip2_trivial_usage \
       "[-cf] [FILE]..." \
n#define bunzip2_full_usage "\n\n" \
       "Decompress FILEs (or stdin)\n" \
     "\n	-c	Write to stdout" \
     "\n	-f	Force" \
n#define bzcat_trivial_usage \
       "[FILE]..." \
n#define bzcat_full_usage "\n\n" \
       "Decompress to stdout" \
n#define unlzma_trivial_usage \
       "[-cf] [FILE]..." \
n#define unlzma_full_usage "\n\n" \
       "Decompress FILE (or stdin)\n" \
     "\n	-c	Write to stdout" \
     "\n	-f	Force" \
n#define lzma_trivial_usage \
       "-d [-cf] [FILE]..." \
n#define lzma_full_usage "\n\n" \
       "Decompress FILE (or stdin)\n" \
     "\n	-d	Decompress" \
     "\n	-c	Write to stdout" \
     "\n	-f	Force" \
n#define lzcat_trivial_usage \
       "[FILE]..." \
n#define lzcat_full_usage "\n\n" \
       "Decompress to stdout" \
n#define unxz_trivial_usage \
       "[-cf] [FILE]..." \
n#define unxz_full_usage "\n\n" \
       "Decompress FILE (or stdin)\n" \
     "\n	-c	Write to stdout" \
     "\n	-f	Force" \
n#define xz_trivial_usage \
       "-d [-cf] [FILE]..." \
n#define xz_full_usage "\n\n" \
       "Decompress FILE (or stdin)\n" \
     "\n	-d	Decompress" \
     "\n	-c	Write to stdout" \
     "\n	-f	Force" \
n#define xzcat_trivial_usage \
       "[FILE]..." \
n#define xzcat_full_usage "\n\n" \
       "Decompress to stdout" \
n#define bzip2_trivial_usage \
       "[OPTIONS] [FILE]..." \
n#define bzip2_full_usage "\n\n" \
       "Compress FILEs (or stdin) with bzip2 algorithm\n" \
     "\n	-1..9	Compression level" \
     "\n	-d	Decompress" \
     "\n	-c	Write to stdout" \
     "\n	-f	Force" \
n#define cpio_trivial_usage \
       "[-dmvu] [-F FILE]" IF_FEATURE_CPIO_O(" [-H newc]") \
       " [-ti"IF_FEATURE_CPIO_O("o")"]" IF_FEATURE_CPIO_P(" [-p DIR]") \
       " [EXTR_FILE]..." \
n#define cpio_full_usage "\n\n" \
       "Extract or list files from a cpio archive" \
n	IF_FEATURE_CPIO_O(", or" \
     "\ncreate an archive" IF_FEATURE_CPIO_P(" (-o) or copy files (-p)") \
n		" using file list on stdin" \
n	) \
     "\n" \
     "\nMain operation mode:" \
     "\n	-t	List" \
     "\n	-i	Extract EXTR_FILEs (or all)" \
n	IF_FEATURE_CPIO_O( \
     "\n	-o	Create (requires -H newc)" \
n	) \
n	IF_FEATURE_CPIO_P( \
     "\n	-p DIR	Copy files to DIR" \
n	) \
     "\n	-d	Make leading directories" \
     "\n	-m	Preserve mtime" \
     "\n	-v	Verbose" \
     "\n	-u	Overwrite" \
     "\n	-F FILE	Input (-t,-i,-p) or output (-o) file" \
n	IF_FEATURE_CPIO_O( \
     "\n	-H newc	Archive format" \
n	) \
n#define dpkg_trivial_usage \
       "[-ilCPru] [-F OPT] PACKAGE" \
n#define dpkg_full_usage "\n\n" \
       "Install, remove and manage Debian packages\n" \
n	IF_LONG_OPTS( \
     "\n	-i,--install	Install the package" \
     "\n	-l,--list	List of installed packages" \
     "\n	--configure	Configure an unpackaged package" \
     "\n	-P,--purge	Purge all files of a package" \
     "\n	-r,--remove	Remove all but the configuration files for a package" \
     "\n	--unpack	Unpack a package, but don't configure it" \
     "\n	--force-depends	Ignore dependency problems" \
     "\n	--force-confnew	Overwrite existing config files when installing" \
     "\n	--force-confold	Keep old config files when installing" \
n	) \
n	IF_NOT_LONG_OPTS( \
     "\n	-i		Install the package" \
     "\n	-l		List of installed packages" \
     "\n	-C		Configure an unpackaged package" \
     "\n	-P		Purge all files of a package" \
     "\n	-r		Remove all but the configuration files for a package" \
     "\n	-u		Unpack a package, but don't configure it" \
     "\n	-F depends	Ignore dependency problems" \
     "\n	-F confnew	Overwrite existing config files when installing" \
     "\n	-F confold	Keep old config files when installing" \
n	) \
n#define dpkg_deb_trivial_usage \
       "[-cefxX] FILE [argument]" \
n#define dpkg_deb_full_usage "\n\n" \
       "Perform actions on Debian packages (.debs)\n" \
     "\n	-c	List contents of filesystem tree" \
     "\n	-e	Extract control files to [argument] directory" \
     "\n	-f	Display control field name starting with [argument]" \
     "\n	-x	Extract packages filesystem tree to directory" \
     "\n	-X	Verbose extract" \
n#define dpkg_deb_example_usage \
       "$ dpkg-deb -X ./busybox_0.48-1_i386.deb /tmp\n" \
n#define gzip_trivial_usage \
       "[-cfd] [FILE]..." \
n#define gzip_full_usage "\n\n" \
       "Compress FILEs (or stdin)\n" \
     "\n	-d	Decompress" \
     "\n	-c	Write to stdout" \
     "\n	-f	Force" \
n#define gzip_example_usage \
       "$ ls -la /tmp/busybox*\n" \
       "-rw-rw-r--    1 andersen andersen  1761280 Apr 14 17:47 /tmp/busybox.tar\n" \
       "$ gzip /tmp/busybox.tar\n" \
       "$ ls -la /tmp/busybox*\n" \
       "-rw-rw-r--    1 andersen andersen   554058 Apr 14 17:49 /tmp/busybox.tar.gz\n" \
n#define lzop_trivial_usage \
       "[-cfvd123456789CF] [FILE]..." \
n#define lzop_full_usage "\n\n" \
       "	-1..9	Compression level" \
     "\n	-d	Decompress" \
     "\n	-c	Write to stdout" \
     "\n	-f	Force" \
     "\n	-v	Verbose" \
     "\n	-F	Don't store or verify checksum" \
     "\n	-C	Also write checksum of compressed block" \
n#define lzopcat_trivial_usage \
       "[-vCF] [FILE]..." \
n#define lzopcat_full_usage "\n\n" \
       "	-v	Verbose" \
     "\n	-F	Don't store or verify checksum" \
n#define unlzop_trivial_usage \
       "[-cfvCF] [FILE]..." \
n#define unlzop_full_usage "\n\n" \
       "	-c	Write to stdout" \
     "\n	-f	Force" \
     "\n	-v	Verbose" \
     "\n	-F	Don't store or verify checksum" \
n#define rpm_trivial_usage \
       "-i PACKAGE.rpm; rpm -qp[ildc] PACKAGE.rpm" \
n#define rpm_full_usage "\n\n" \
       "Manipulate RPM packages\n" \
     "\nCommands:" \
     "\n	-i	Install package" \
     "\n	-qp	Query package" \
     "\n	-qpi	Show information" \
     "\n	-qpl	List contents" \
     "\n	-qpd	List documents" \
     "\n	-qpc	List config files" \
n#define rpm2cpio_trivial_usage \
       "package.rpm" \
n#define rpm2cpio_full_usage "\n\n" \
       "Output a cpio archive of the rpm file" \
n#define tar_trivial_usage \
n	"-[" IF_FEATURE_TAR_CREATE("c") "xt" \
n	IF_FEATURE_SEAMLESS_Z("Z") \
n	IF_FEATURE_SEAMLESS_GZ("z") \
n	IF_FEATURE_SEAMLESS_XZ("J") \
n	IF_FEATURE_SEAMLESS_BZ2("j") \
n	IF_FEATURE_SEAMLESS_LZMA("a") \
n	IF_FEATURE_TAR_CREATE("h") \
n	IF_FEATURE_TAR_NOPRESERVE_TIME("m") \
n	"vO] " \
n	IF_FEATURE_TAR_FROM("[-X FILE] [-T FILE] ") \
n	"[-f TARFILE] [-C DIR] [FILE]..." \
n#define tar_full_usage "\n\n" \
n	IF_FEATURE_TAR_CREATE("Create, extract, ") \
n	IF_NOT_FEATURE_TAR_CREATE("Extract ") \
n	"or list files from a tar file\n" \
     "\nOperation:" \
n	IF_FEATURE_TAR_CREATE( \
     "\n	c	Create" \
n	) \
     "\n	x	Extract" \
     "\n	t	List" \
     "\n	f	Name of TARFILE ('-' for stdin/out)" \
     "\n	C	Change to DIR before operation" \
     "\n	v	Verbose" \
n	IF_FEATURE_SEAMLESS_Z( \
     "\n	Z	(De)compress using compress" \
n	) \
n	IF_FEATURE_SEAMLESS_GZ( \
     "\n	z	(De)compress using gzip" \
n	) \
n	IF_FEATURE_SEAMLESS_XZ( \
     "\n	J	(De)compress using xz" \
n	) \
n	IF_FEATURE_SEAMLESS_BZ2( \
     "\n	j	(De)compress using bzip2" \
n	) \
n	IF_FEATURE_SEAMLESS_LZMA( \
     "\n	a	(De)compress using lzma" \
n	) \
     "\n	O	Extract to stdout" \
n	IF_FEATURE_TAR_CREATE( \
     "\n	h	Follow symlinks" \
n	) \
n	IF_FEATURE_TAR_NOPRESERVE_TIME( \
     "\n	m	Don't restore mtime" \
n	) \
n	IF_FEATURE_TAR_FROM( \
n	IF_FEATURE_TAR_LONG_OPTIONS( \
     "\n	exclude	File to exclude" \
n	) \
     "\n	X	File with names to exclude" \
     "\n	T	File with names to include" \
n	) \
n#define tar_example_usage \
       "$ zcat /tmp/tarball.tar.gz | tar -xf -\n" \
       "$ tar -cf /tmp/tarball.tar /usr/local\n" \
n#define unzip_trivial_usage \
       "[-lnopq] FILE[.zip] [FILE]... [-x FILE...] [-d DIR]" \
n#define unzip_full_usage "\n\n" \
       "Extract FILEs from ZIP archive\n" \
     "\n	-l	List contents (with -q for short form)" \
     "\n	-n	Never overwrite files (default: ask)" \
     "\n	-o	Overwrite" \
     "\n	-p	Print to stdout" \
     "\n	-q	Quiet" \
     "\n	-x FILE	Exclude FILEs" \
     "\n	-d DIR	Extract into DIR" \
n#define chvt_trivial_usage \
       "N" \
n#define chvt_full_usage "\n\n" \
       "Change the foreground virtual terminal to /dev/ttyN" \
n#define clear_trivial_usage \
       "" \
n#define clear_full_usage "\n\n" \
       "Clear screen" \
n#define deallocvt_trivial_usage \
       "[N]" \
n#define deallocvt_full_usage "\n\n" \
       "Deallocate unused virtual terminal /dev/ttyN" \
n#define dumpkmap_trivial_usage \
       "> keymap" \
n#define dumpkmap_full_usage "\n\n" \
       "Print a binary keyboard translation table to stdout" \
n#define dumpkmap_example_usage \
       "$ dumpkmap > keymap\n" \
n#define fgconsole_trivial_usage \
n	"" \
n#define fgconsole_full_usage "\n\n" \
n	"Get active console" \
n#define kbd_mode_trivial_usage \
       "[-a|k|s|u] [-C TTY]" \
n#define kbd_mode_full_usage "\n\n" \
       "Report or set the keyboard mode\n" \
     "\n	-a	Default (ASCII)" \
     "\n	-k	Medium-raw (keyboard)" \
     "\n	-s	Raw (scancode)" \
     "\n	-u	Unicode (utf-8)" \
     "\n	-C TTY	Affect TTY instead of /dev/tty" \
n#define loadfont_trivial_usage \
       "< font" \
n#define loadfont_full_usage "\n\n" \
       "Load a console font from stdin" \
n#define loadfont_example_usage \
       "$ loadfont < /etc/i18n/fontname\n" \
n#define setfont_trivial_usage \
       "FONT [-m MAPFILE] [-C TTY]" \
n#define setfont_full_usage "\n\n" \
       "Load a console font\n" \
     "\n	-m MAPFILE	Load console screen map" \
     "\n	-C TTY		Affect TTY instead of /dev/tty" \
n#define setfont_example_usage \
       "$ setfont -m koi8-r /etc/i18n/fontname\n" \
n#define loadkmap_trivial_usage \
       "< keymap" \
n#define loadkmap_full_usage "\n\n" \
       "Load a binary keyboard translation table from stdin\n" \
n#define loadkmap_example_usage \
       "$ loadkmap < /etc/i18n/lang-keymap\n" \
n#define openvt_trivial_usage \
       "[-c N] [-sw] [PROG ARGS]" \
n#define openvt_full_usage "\n\n" \
       "Start PROG on a new virtual terminal\n" \
     "\n	-c N	Use specified VT" \
     "\n	-s	Switch to the VT" \
     "\n	-w	Wait for PROG to exit" \
n#define openvt_example_usage \
       "openvt 2 /bin/ash\n" \
n#define reset_trivial_usage \
       "" \
n#define reset_full_usage "\n\n" \
       "Reset the screen" \
n#define resize_trivial_usage \
       "" \
n#define resize_full_usage "\n\n" \
       "Resize the screen" \
n#define setconsole_trivial_usage \
       "[-r" IF_FEATURE_SETCONSOLE_LONG_OPTIONS("|--reset") "] [DEVICE]" \
n#define setconsole_full_usage "\n\n" \
       "Redirect system console output to DEVICE (default: /dev/tty)\n" \
     "\n	-r	Reset output to /dev/console" \
n#define setkeycodes_trivial_usage \
       "SCANCODE KEYCODE..." \
n#define setkeycodes_full_usage "\n\n" \
       "Set entries into the kernel's scancode-to-keycode map,\n" \
       "allowing unusual keyboards to generate usable keycodes.\n\n" \
       "SCANCODE may be either xx or e0xx (hexadecimal),\n" \
       "and KEYCODE is given in decimal." \
n#define setkeycodes_example_usage \
       "$ setkeycodes e030 127\n" \
n#define setlogcons_trivial_usage \
       "N" \
n#define setlogcons_full_usage "\n\n" \
       "Redirect the kernel output to console N (0 for current)" \
n#define showkey_trivial_usage \
       "[-a | -k | -s]" \
n#define showkey_full_usage "\n\n" \
       "Show keys pressed\n" \
     "\n	-a	Display decimal/octal/hex values of the keys" \
     "\n	-k	Display interpreted keycodes (default)" \
     "\n	-s	Display raw scan-codes" \
n#define basename_trivial_usage \
       "FILE [SUFFIX]" \
n#define basename_full_usage "\n\n" \
       "Strip directory path and .SUFFIX from FILE\n" \
n#define basename_example_usage \
       "$ basename /usr/local/bin/foo\n" \
       "foo\n" \
       "$ basename /usr/local/bin/\n" \
       "bin\n" \
       "$ basename /foo/bar.txt .txt\n" \
       "bar" \
n#define cal_trivial_usage \
       "[-jy] [[MONTH] YEAR]" \
n#define cal_full_usage "\n\n" \
       "Display a calendar\n" \
     "\n	-j	Use julian dates" \
     "\n	-y	Display the entire year" \
n#define cat_trivial_usage \
       "[FILE]..." \
n#define cat_full_usage "\n\n" \
       "Concatenate FILEs and print them to stdout" \
n#define cat_example_usage \
       "$ cat /proc/uptime\n" \
       "110716.72 17.67" \
n#define catv_trivial_usage \
       "[-etv] [FILE]..." \
n#define catv_full_usage "\n\n" \
       "Display nonprinting characters as ^x or M-x\n" \
     "\n	-e	End each line with $" \
     "\n	-t	Show tabs as ^I" \
     "\n	-v	Don't use ^x or M-x escapes" \
n#define chgrp_trivial_usage \
       "[-RhLHP"IF_DESKTOP("cvf")"]... GROUP FILE..." \
n#define chgrp_full_usage "\n\n" \
       "Change the group membership of each FILE to GROUP\n" \
     "\n	-R	Recurse" \
     "\n	-h	Affect symlinks instead of symlink targets" \
     "\n	-L	Traverse all symlinks to directories" \
     "\n	-H	Traverse symlinks on command line only" \
     "\n	-P	Don't traverse symlinks (default)" \
n	IF_DESKTOP( \
     "\n	-c	List changed files" \
     "\n	-v	Verbose" \
     "\n	-f	Hide errors" \
n	) \
n#define chgrp_example_usage \
       "$ ls -l /tmp/foo\n" \
       "-r--r--r--    1 andersen andersen        0 Apr 12 18:25 /tmp/foo\n" \
       "$ chgrp root /tmp/foo\n" \
       "$ ls -l /tmp/foo\n" \
       "-r--r--r--    1 andersen root            0 Apr 12 18:25 /tmp/foo\n" \
n#define chmod_trivial_usage \
       "[-R"IF_DESKTOP("cvf")"] MODE[,MODE]... FILE..." \
n#define chmod_full_usage "\n\n" \
       "Each MODE is one or more of the letters ugoa, one of the\n" \
       "symbols +-= and one or more of the letters rwxst\n" \
     "\n	-R	Recurse" \
n	IF_DESKTOP( \
     "\n	-c	List changed files" \
     "\n	-v	List all files" \
     "\n	-f	Hide errors" \
n	) \
n#define chmod_example_usage \
       "$ ls -l /tmp/foo\n" \
       "-rw-rw-r--    1 root     root            0 Apr 12 18:25 /tmp/foo\n" \
       "$ chmod u+x /tmp/foo\n" \
       "$ ls -l /tmp/foo\n" \
       "-rwxrw-r--    1 root     root            0 Apr 12 18:25 /tmp/foo*\n" \
       "$ chmod 444 /tmp/foo\n" \
       "$ ls -l /tmp/foo\n" \
       "-r--r--r--    1 root     root            0 Apr 12 18:25 /tmp/foo\n" \
n#define chown_trivial_usage \
       "[-RhLHP"IF_DESKTOP("cvf")"]... OWNER[<.|:>[GROUP]] FILE..." \
n#define chown_full_usage "\n\n" \
       "Change the owner and/or group of each FILE to OWNER and/or GROUP\n" \
     "\n	-R	Recurse" \
     "\n	-h	Affect symlinks instead of symlink targets" \
     "\n	-L	Traverse all symlinks to directories" \
     "\n	-H	Traverse symlinks on command line only" \
     "\n	-P	Don't traverse symlinks (default)" \
n	IF_DESKTOP( \
     "\n	-c	List changed files" \
     "\n	-v	List all files" \
     "\n	-f	Hide errors" \
n	) \
n#define chown_example_usage \
       "$ ls -l /tmp/foo\n" \
       "-r--r--r--    1 andersen andersen        0 Apr 12 18:25 /tmp/foo\n" \
       "$ chown root /tmp/foo\n" \
       "$ ls -l /tmp/foo\n" \
       "-r--r--r--    1 root     andersen        0 Apr 12 18:25 /tmp/foo\n" \
       "$ chown root.root /tmp/foo\n" \
       "ls -l /tmp/foo\n" \
       "-r--r--r--    1 root     root            0 Apr 12 18:25 /tmp/foo\n" \
n#define chroot_trivial_usage \
       "NEWROOT [PROG ARGS]" \
n#define chroot_full_usage "\n\n" \
       "Run PROG with root directory set to NEWROOT" \
n#define chroot_example_usage \
       "$ ls -l /bin/ls\n" \
       "lrwxrwxrwx    1 root     root          12 Apr 13 00:46 /bin/ls -> /BusyBox\n" \
       "# mount /dev/hdc1 /mnt -t minix\n" \
       "# chroot /mnt\n" \
       "# ls -l /bin/ls\n" \
       "-rwxr-xr-x    1 root     root        40816 Feb  5 07:45 /bin/ls*\n" \
n#define cksum_trivial_usage \
       "FILES..." \
n#define cksum_full_usage "\n\n" \
       "Calculate the CRC32 checksums of FILES" \
n#define comm_trivial_usage \
       "[-123] FILE1 FILE2" \
n#define comm_full_usage "\n\n" \
       "Compare FILE1 with FILE2\n" \
     "\n	-1	Suppress lines unique to FILE1" \
     "\n	-2	Suppress lines unique to FILE2" \
     "\n	-3	Suppress lines common to both files" \
n#define cp_trivial_usage \
       "[OPTIONS] SOURCE... DEST" \
n#define cp_full_usage "\n\n" \
       "Copy SOURCE(s) to DEST\n" \
     "\n	-a	Same as -dpR" \
n	IF_SELINUX( \
     "\n	-c	Preserve security context" \
n	) \
     "\n	-R,-r	Recurse" \
     "\n	-d,-P	Preserve symlinks (default if -R)" \
     "\n	-L	Follow all symlinks" \
     "\n	-H	Follow symlinks on command line" \
     "\n	-p	Preserve file attributes if possible" \
     "\n	-f	Overwrite" \
     "\n	-i	Prompt before overwrite" \
     "\n	-l,-s	Create (sym)links" \
n#define cut_trivial_usage \
       "[OPTIONS] [FILE]..." \
n#define cut_full_usage "\n\n" \
       "Print selected fields from each input FILE to stdout\n" \
     "\n	-b LIST	Output only bytes from LIST" \
     "\n	-c LIST	Output only characters from LIST" \
     "\n	-d CHAR	Use CHAR instead of tab as the field delimiter" \
     "\n	-s	Output only the lines containing delimiter" \
     "\n	-f N	Print only these fields" \
     "\n	-n	Ignored" \
n#define cut_example_usage \
       "$ echo \"Hello world\" | cut -f 1 -d ' '\n" \
       "Hello\n" \
       "$ echo \"Hello world\" | cut -f 2 -d ' '\n" \
       "world\n" \
n#define date_trivial_usage \
       "[OPTIONS] [+FMT] [TIME]" \
n#define date_full_usage "\n\n" \
       "Display time (using +FMT), or set time\n" \
n	IF_NOT_LONG_OPTS( \
     "\n	[-s] TIME	Set time to TIME" \
     "\n	-u		Work in UTC (don't convert to local time)" \
     "\n	-R		Output RFC-2822 compliant date string" \
n	) IF_LONG_OPTS( \
     "\n	[-s,--set] TIME	Set time to TIME" \
     "\n	-u,--utc	Work in UTC (don't convert to local time)" \
     "\n	-R,--rfc-2822	Output RFC-2822 compliant date string" \
n	) \
n	IF_FEATURE_DATE_ISOFMT( \
     "\n	-I[SPEC]	Output ISO-8601 compliant date string" \
     "\n			SPEC='date' (default) for date only," \
     "\n			'hours', 'minutes', or 'seconds' for date and" \
     "\n			time to the indicated precision" \
n	) \
n	IF_NOT_LONG_OPTS( \
     "\n	-r FILE		Display last modification time of FILE" \
     "\n	-d TIME		Display TIME, not 'now'" \
n	) IF_LONG_OPTS( \
     "\n	-r,--reference FILE	Display last modification time of FILE" \
     "\n	-d,--date TIME	Display TIME, not 'now'" \
n	) \
n	IF_FEATURE_DATE_ISOFMT( \
     "\n	-D FMT		Use FMT for -d TIME conversion" \
n	) \
     "\n" \
     "\nRecognized TIME formats:" \
     "\n	hh:mm[:ss]" \
     "\n	[YYYY.]MM.DD-hh:mm[:ss]" \
     "\n	YYYY-MM-DD hh:mm[:ss]" \
     "\n	[[[[[YY]YY]MM]DD]hh]mm[.ss]" \
n	IF_FEATURE_DATE_COMPAT( \
     "\n	'date TIME' form accepts MMDDhhmm[[YY]YY][.ss] instead" \
n	) \
n#define date_example_usage \
       "$ date\n" \
       "Wed Apr 12 18:52:41 MDT 2000\n" \
n#define dd_trivial_usage \
       "[if=FILE] [of=FILE] " IF_FEATURE_DD_IBS_OBS("[ibs=N] [obs=N] ") "[bs=N] [count=N] [skip=N]\n" \
       "	[seek=N]" IF_FEATURE_DD_IBS_OBS(" [conv=notrunc|noerror|sync|fsync]") \
n#define dd_full_usage "\n\n" \
       "Copy a file with converting and formatting\n" \
     "\n	if=FILE		Read from FILE instead of stdin" \
     "\n	of=FILE		Write to FILE instead of stdout" \
     "\n	bs=N		Read and write N bytes at a time" \
n	IF_FEATURE_DD_IBS_OBS( \
     "\n	ibs=N		Read N bytes at a time" \
n	) \
n	IF_FEATURE_DD_IBS_OBS( \
     "\n	obs=N		Write N bytes at a time" \
n	) \
     "\n	count=N		Copy only N input blocks" \
     "\n	skip=N		Skip N input blocks" \
     "\n	seek=N		Skip N output blocks" \
n	IF_FEATURE_DD_IBS_OBS( \
     "\n	conv=notrunc	Don't truncate output file" \
     "\n	conv=noerror	Continue after read errors" \
     "\n	conv=sync	Pad blocks with zeros" \
     "\n	conv=fsync	Physically write data out before finishing" \
     "\n	conv=swab	Swap every pair of bytes" \
n	) \
     "\n" \
     "\nN may be suffixed by c (1), w (2), b (512), kD (1000), k (1024), MD, M, GD, G" \
n#define dd_example_usage \
       "$ dd if=/dev/zero of=/dev/ram1 bs=1M count=4\n" \
       "4+0 records in\n" \
       "4+0 records out\n" \
n#define df_trivial_usage \
n	"[-Pk" \
n	IF_FEATURE_HUMAN_READABLE("mh") \
n	IF_FEATURE_DF_FANCY("ai] [-B SIZE") \
n	"] [FILESYSTEM]..." \
n#define df_full_usage "\n\n" \
       "Print filesystem usage statistics\n" \
     "\n	-P	POSIX output format" \
     "\n	-k	1024-byte blocks (default)" \
n	IF_FEATURE_HUMAN_READABLE( \
     "\n	-m	1M-byte blocks" \
     "\n	-h	Human readable (e.g. 1K 243M 2G)" \
n	) \
n	IF_FEATURE_DF_FANCY( \
     "\n	-a	Show all filesystems" \
     "\n	-i	Inodes" \
     "\n	-B SIZE	Blocksize" \
n	) \
n#define df_example_usage \
       "$ df\n" \
       "Filesystem           1K-blocks      Used Available Use% Mounted on\n" \
       "/dev/sda3              8690864   8553540    137324  98% /\n" \
       "/dev/sda1                64216     36364     27852  57% /boot\n" \
       "$ df /dev/sda3\n" \
       "Filesystem           1K-blocks      Used Available Use% Mounted on\n" \
       "/dev/sda3              8690864   8553540    137324  98% /\n" \
       "$ POSIXLY_CORRECT=sure df /dev/sda3\n" \
       "Filesystem         512B-blocks      Used Available Use% Mounted on\n" \
       "/dev/sda3             17381728  17107080    274648  98% /\n" \
       "$ POSIXLY_CORRECT=yep df -P /dev/sda3\n" \
       "Filesystem          512-blocks      Used Available Capacity Mounted on\n" \
       "/dev/sda3             17381728  17107080    274648      98% /\n" \
n#define dirname_trivial_usage \
       "FILENAME" \
n#define dirname_full_usage "\n\n" \
       "Strip non-directory suffix from FILENAME" \
n#define dirname_example_usage \
       "$ dirname /tmp/foo\n" \
       "/tmp\n" \
       "$ dirname /tmp/foo/\n" \
       "/tmp\n" \
n#define dos2unix_trivial_usage \
       "[-ud] [FILE]" \
n#define dos2unix_full_usage "\n\n" \
       "Convert FILE in-place from DOS to Unix format.\n" \
       "When no file is given, use stdin/stdout.\n" \
     "\n	-u	dos2unix" \
     "\n	-d	unix2dos" \
n#define unix2dos_trivial_usage \
       "[-ud] [FILE]" \
n#define unix2dos_full_usage "\n\n" \
       "Convert FILE in-place from Unix to DOS format.\n" \
       "When no file is given, use stdin/stdout.\n" \
     "\n	-u	dos2unix" \
     "\n	-d	unix2dos" \
n#define du_trivial_usage \
       "[-aHLdclsx" IF_FEATURE_HUMAN_READABLE("hm") "k] [FILE]..." \
n#define du_full_usage "\n\n" \
       "Summarize disk space used for each FILE and/or directory\n" \
     "\n	-a	Show file sizes too" \
     "\n	-L	Follow all symlinks" \
     "\n	-H	Follow symlinks on command line" \
     "\n	-d N	Limit output to directories (and files with -a) of depth < N" \
     "\n	-c	Show grand total" \
     "\n	-l	Count sizes many times if hard linked" \
     "\n	-s	Display only a total for each argument" \
     "\n	-x	Skip directories on different filesystems" \
n	IF_FEATURE_HUMAN_READABLE( \
     "\n	-h	Sizes in human readable format (e.g., 1K 243M 2G)" \
     "\n	-m	Sizes in megabytes" \
n	) \
     "\n	-k	Sizes in kilobytes" IF_FEATURE_DU_DEFAULT_BLOCKSIZE_1K(" (default)") \
n	IF_NOT_FEATURE_DU_DEFAULT_BLOCKSIZE_1K( \
     "\n		Default unit is 512 bytes" \
n	) \
n#define du_example_usage \
       "$ du\n" \
       "16      ./CVS\n" \
       "12      ./kernel-patches/CVS\n" \
       "80      ./kernel-patches\n" \
       "12      ./tests/CVS\n" \
       "36      ./tests\n" \
       "12      ./scripts/CVS\n" \
       "16      ./scripts\n" \
       "12      ./docs/CVS\n" \
       "104     ./docs\n" \
       "2417    .\n" \
n#define echo_trivial_usage \
n	IF_FEATURE_FANCY_ECHO("[-neE] ") "[ARG]..." \
n#define echo_full_usage "\n\n" \
       "Print the specified ARGs to stdout" \
n	IF_FEATURE_FANCY_ECHO( "\n" \
     "\n	-n	Suppress trailing newline" \
     "\n	-e	Interpret backslash escapes (i.e., \\t=tab)" \
     "\n	-E	Don't interpret backslash escapes (default)" \
n	) \
n#define echo_example_usage \
       "$ echo \"Erik is cool\"\n" \
       "Erik is cool\n" \
n	IF_FEATURE_FANCY_ECHO("$ echo -e \"Erik\\nis\\ncool\"\n" \
       "Erik\n" \
       "is\n" \
       "cool\n" \
       "$ echo \"Erik\\nis\\ncool\"\n" \
       "Erik\\nis\\ncool\n") \
n#define env_trivial_usage \
       "[-iu] [-] [name=value]... [PROG ARGS]" \
n#define env_full_usage "\n\n" \
       "Print the current environment or run PROG after setting up\n" \
       "the specified environment\n" \
     "\n	-, -i	Start with an empty environment" \
     "\n	-u	Remove variable from the environment" \
n#define expand_trivial_usage \
       "[-i] [-t N] [FILE]..." \
n#define expand_full_usage "\n\n" \
       "Convert tabs to spaces, writing to stdout\n" \
n	IF_FEATURE_EXPAND_LONG_OPTIONS( \
     "\n	-i,--initial	Don't convert tabs after non blanks" \
     "\n	-t,--tabs=N	Tabstops every N chars" \
n	) \
n	IF_NOT_FEATURE_EXPAND_LONG_OPTIONS( \
     "\n	-i	Don't convert tabs after non blanks" \
     "\n	-t	Tabstops every N chars" \
n	) \
n#define unexpand_trivial_usage \
       "[-fa][-t N] [FILE]..." \
n#define unexpand_full_usage "\n\n" \
       "Convert spaces to tabs, writing to stdout\n" \
n	IF_FEATURE_UNEXPAND_LONG_OPTIONS( \
     "\n	-a,--all	Convert all blanks" \
     "\n	-f,--first-only	Convert only leading blanks" \
     "\n	-t,--tabs=N	Tabstops every N chars" \
n	) \
n	IF_NOT_FEATURE_UNEXPAND_LONG_OPTIONS( \
     "\n	-a	Convert all blanks" \
     "\n	-f	Convert only leading blanks" \
     "\n	-t N	Tabstops every N chars" \
n	) \
n#define expr_trivial_usage \
       "EXPRESSION" \
n#define expr_full_usage "\n\n" \
       "Print the value of EXPRESSION to stdout\n" \
    "\n" \
       "EXPRESSION may be:\n" \
       "	ARG1 | ARG2	ARG1 if it is neither null nor 0, otherwise ARG2\n" \
       "	ARG1 & ARG2	ARG1 if neither argument is null or 0, otherwise 0\n" \
       "	ARG1 < ARG2	1 if ARG1 is less than ARG2, else 0. Similarly:\n" \
       "	ARG1 <= ARG2\n" \
       "	ARG1 = ARG2\n" \
       "	ARG1 != ARG2\n" \
       "	ARG1 >= ARG2\n" \
       "	ARG1 > ARG2\n" \
       "	ARG1 + ARG2	Sum of ARG1 and ARG2. Similarly:\n" \
       "	ARG1 - ARG2\n" \
       "	ARG1 * ARG2\n" \
       "	ARG1 / ARG2\n" \
       "	ARG1 % ARG2\n" \
       "	STRING : REGEXP		Anchored pattern match of REGEXP in STRING\n" \
       "	match STRING REGEXP	Same as STRING : REGEXP\n" \
       "	substr STRING POS LENGTH Substring of STRING, POS counted from 1\n" \
       "	index STRING CHARS	Index in STRING where any CHARS is found, or 0\n" \
       "	length STRING		Length of STRING\n" \
       "	quote TOKEN		Interpret TOKEN as a string, even if\n" \
       "				it is a keyword like 'match' or an\n" \
       "				operator like '/'\n" \
       "	(EXPRESSION)		Value of EXPRESSION\n" \
       "\n" \
       "Beware that many operators need to be escaped or quoted for shells.\n" \
       "Comparisons are arithmetic if both ARGs are numbers, else\n" \
       "lexicographical. Pattern matches return the string matched between\n" \
       "\\( and \\) or null; if \\( and \\) are not used, they return the number\n" \
       "of characters matched or 0." \
n#define false_trivial_usage \
       "" \
n#define false_full_usage "\n\n" \
       "Return an exit code of FALSE (1)" \
n#define false_example_usage \
       "$ false\n" \
       "$ echo $?\n" \
       "1\n" \
n#define fold_trivial_usage \
       "[-bs] [-w WIDTH] [FILE]..." \
n#define fold_full_usage "\n\n" \
       "Wrap input lines in each FILE (or stdin), writing to stdout\n" \
     "\n	-b	Count bytes rather than columns" \
     "\n	-s	Break at spaces" \
     "\n	-w	Use WIDTH columns instead of 80" \
n#define fsync_trivial_usage \
       "[-d] FILE..." \
n#define fsync_full_usage "\n\n" \
       "Write files' buffered blocks to disk\n" \
     "\n	-d	Avoid syncing metadata" \
n#define head_trivial_usage \
       "[OPTIONS] [FILE]..." \
n#define head_full_usage "\n\n" \
       "Print first 10 lines of each FILE (or stdin) to stdout.\n" \
       "With more than one FILE, precede each with a filename header.\n" \
     "\n	-n N[kbm]	Print first N lines" \
n	IF_FEATURE_FANCY_HEAD( \
     "\n	-n -N[kbm]	Print all except N last lines" \
     "\n	-c [-]N[kbm]	Print first N bytes" \
     "\n	-q		Never print headers" \
     "\n	-v		Always print headers" \
n	) \
     "\n" \
     "\nN may be suffixed by k (x1024), b (x512), or m (x1024^2)." \
n#define head_example_usage \
       "$ head -n 2 /etc/passwd\n" \
       "root:x:0:0:root:/root:/bin/bash\n" \
       "daemon:x:1:1:daemon:/usr/sbin:/bin/sh\n" \
n#define hostid_trivial_usage \
       "" \
n#define hostid_full_usage "\n\n" \
       "Print out a unique 32-bit identifier for the machine" \
n#define id_trivial_usage \
       "[OPTIONS] [USER]" \
n#define id_full_usage "\n\n" \
       "Print information about USER or the current user\n" \
n	IF_SELINUX( \
     "\n	-Z	Security context" \
n	) \
     "\n	-u	User ID" \
     "\n	-g	Group ID" \
     "\n	-G	Supplementary group IDs" \
     "\n	-n	Print names instead of numbers" \
     "\n	-r	Print real ID instead of effective ID" \
n#define id_example_usage \
       "$ id\n" \
       "uid=1000(andersen) gid=1000(andersen)\n" \
n#define groups_trivial_usage \
       "[USER]" \
n#define groups_full_usage "\n\n" \
       "Print the group memberships of USER or for the current process" \
n#define groups_example_usage \
       "$ groups\n" \
       "andersen lp dialout cdrom floppy\n" \
n#define install_trivial_usage \
n	"[-cdDsp] [-o USER] [-g GRP] [-m MODE] [SOURCE]... DEST" \
n#define install_full_usage "\n\n" \
       "Copy files and set attributes\n" \
     "\n	-c	Just copy (default)" \
     "\n	-d	Create directories" \
     "\n	-D	Create leading target directories" \
     "\n	-s	Strip symbol table" \
     "\n	-p	Preserve date" \
     "\n	-o USER	Set ownership" \
     "\n	-g GRP	Set group ownership" \
     "\n	-m MODE	Set permissions" \
n	IF_SELINUX( \
     "\n	-Z	Set security context" \
n	) \
n#define ln_trivial_usage \
       "[OPTIONS] TARGET... LINK|DIR" \
n#define ln_full_usage "\n\n" \
       "Create a link LINK or DIR/TARGET to the specified TARGET(s)\n" \
     "\n	-s	Make symlinks instead of hardlinks" \
     "\n	-f	Remove existing destinations" \
     "\n	-n	Don't dereference symlinks - treat like normal file" \
     "\n	-b	Make a backup of the target (if exists) before link operation" \
     "\n	-S suf	Use suffix instead of ~ when making backup files" \
     "\n	-T	2nd arg must be a DIR" \
     "\n	-v	Verbose" \
n#define ln_example_usage \
       "$ ln -s BusyBox /tmp/ls\n" \
       "$ ls -l /tmp/ls\n" \
       "lrwxrwxrwx    1 root     root            7 Apr 12 18:39 ls -> BusyBox*\n" \
n#define logname_trivial_usage \
       "" \
n#define logname_full_usage "\n\n" \
       "Print the name of the current user" \
n#define logname_example_usage \
       "$ logname\n" \
       "root\n" \
n#define ls_trivial_usage \
n	"[-1AaCxd" \
n	IF_FEATURE_LS_FOLLOWLINKS("LH") \
n	IF_FEATURE_LS_RECURSIVE("R") \
n	IF_FEATURE_LS_FILETYPES("Fp") "lins" \
n	IF_FEATURE_LS_TIMESTAMPS("e") \
n	IF_FEATURE_HUMAN_READABLE("h") \
n	IF_FEATURE_LS_SORTFILES("rSXv") \
n	IF_FEATURE_LS_TIMESTAMPS("ctu") \
n	IF_SELINUX("kKZ") "]" \
n	IF_FEATURE_AUTOWIDTH(" [-w WIDTH]") " [FILE]..." \
n#define ls_full_usage "\n\n" \
       "List directory contents\n" \
     "\n	-1	One column output" \
     "\n	-a	Include entries which start with ." \
     "\n	-A	Like -a, but exclude . and .." \
     "\n	-C	List by columns" \
     "\n	-x	List by lines" \
     "\n	-d	List directory entries instead of contents" \
n	IF_FEATURE_LS_FOLLOWLINKS( \
     "\n	-L	Follow symlinks" \
     "\n	-H	Follow symlinks on command line" \
n	) \
n	IF_FEATURE_LS_RECURSIVE( \
     "\n	-R	Recurse" \
n	) \
n	IF_FEATURE_LS_FILETYPES( \
     "\n	-p	Append / to dir entries" \
     "\n	-F	Append indicator (one of */=@|) to entries" \
n	) \
     "\n	-l	Long listing format" \
     "\n	-i	List inode numbers" \
     "\n	-n	List numeric UIDs and GIDs instead of names" \
     "\n	-s	List allocated blocks" \
n	IF_FEATURE_LS_TIMESTAMPS( \
     "\n	-e	List full date and time" \
n	) \
n	IF_FEATURE_HUMAN_READABLE( \
     "\n	-h	List sizes in human readable format (1K 243M 2G)" \
n	) \
n	IF_FEATURE_LS_SORTFILES( \
     "\n	-r	Sort in reverse order" \
     "\n	-S	Sort by size" \
     "\n	-X	Sort by extension" \
     "\n	-v	Sort by version" \
n	) \
n	IF_FEATURE_LS_TIMESTAMPS( \
     "\n	-c	With -l: sort by ctime" \
     "\n	-t	With -l: sort by mtime" \
     "\n	-u	With -l: sort by atime" \
n	) \
n	IF_SELINUX( \
     "\n	-k	List security context" \
     "\n	-K	List security context in long format" \
     "\n	-Z	List security context and permission" \
n	) \
n	IF_FEATURE_AUTOWIDTH( \
     "\n	-w N	Assume the terminal is N columns wide" \
n	) \
n	IF_FEATURE_LS_COLOR( \
     "\n	--color[={always,never,auto}]	Control coloring" \
n	) \
n#define md5sum_trivial_usage \
n	IF_FEATURE_MD5_SHA1_SUM_CHECK("[-c[sw]] ")"[FILE]..." \
n#define md5sum_full_usage "\n\n" \
       "Print" IF_FEATURE_MD5_SHA1_SUM_CHECK(" or check") " MD5 checksums" \
n	IF_FEATURE_MD5_SHA1_SUM_CHECK( "\n" \
     "\n	-c	Check sums against list in FILEs" \
     "\n	-s	Don't output anything, status code shows success" \
     "\n	-w	Warn about improperly formatted checksum lines" \
n	) \
n#define md5sum_example_usage \
       "$ md5sum < busybox\n" \
       "6fd11e98b98a58f64ff3398d7b324003\n" \
       "$ md5sum busybox\n" \
       "6fd11e98b98a58f64ff3398d7b324003  busybox\n" \
       "$ md5sum -c -\n" \
       "6fd11e98b98a58f64ff3398d7b324003  busybox\n" \
       "busybox: OK\n" \
       "^D\n" \
n#define sha1sum_trivial_usage \
n	IF_FEATURE_MD5_SHA1_SUM_CHECK("[-c[sw]] ")"[FILE]..." \
n#define sha1sum_full_usage "\n\n" \
       "Print" IF_FEATURE_MD5_SHA1_SUM_CHECK(" or check") " SHA1 checksums" \
n	IF_FEATURE_MD5_SHA1_SUM_CHECK( "\n" \
     "\n	-c	Check sums against list in FILEs" \
     "\n	-s	Don't output anything, status code shows success" \
     "\n	-w	Warn about improperly formatted checksum lines" \
n	) \
n#define sha256sum_trivial_usage \
n	IF_FEATURE_MD5_SHA1_SUM_CHECK("[-c[sw]] ")"[FILE]..." \
n#define sha256sum_full_usage "\n\n" \
       "Print" IF_FEATURE_MD5_SHA1_SUM_CHECK(" or check") " SHA256 checksums" \
n	IF_FEATURE_MD5_SHA1_SUM_CHECK( "\n" \
     "\n	-c	Check sums against list in FILEs" \
     "\n	-s	Don't output anything, status code shows success" \
     "\n	-w	Warn about improperly formatted checksum lines" \
n	) \
n#define sha512sum_trivial_usage \
n	IF_FEATURE_MD5_SHA1_SUM_CHECK("[-c[sw]] ")"[FILE]..." \
n#define sha512sum_full_usage "\n\n" \
       "Print" IF_FEATURE_MD5_SHA1_SUM_CHECK(" or check") " SHA512 checksums" \
n	IF_FEATURE_MD5_SHA1_SUM_CHECK( "\n" \
     "\n	-c	Check sums against list in FILEs" \
     "\n	-s	Don't output anything, status code shows success" \
     "\n	-w	Warn about improperly formatted checksum lines" \
n	) \
n#define sha3sum_trivial_usage \
n	IF_FEATURE_MD5_SHA1_SUM_CHECK("[-c[sw]] ")"[FILE]..." \
n#define sha3sum_full_usage "\n\n" \
       "Print" IF_FEATURE_MD5_SHA1_SUM_CHECK(" or check") " SHA3-512 checksums" \
n	IF_FEATURE_MD5_SHA1_SUM_CHECK( "\n" \
     "\n	-c	Check sums against list in FILEs" \
     "\n	-s	Don't output anything, status code shows success" \
     "\n	-w	Warn about improperly formatted checksum lines" \
n	) \
n#define mkdir_trivial_usage \
       "[OPTIONS] DIRECTORY..." \
n#define mkdir_full_usage "\n\n" \
       "Create DIRECTORY\n" \
     "\n	-m MODE	Mode" \
     "\n	-p	No error if exists; make parent directories as needed" \
n	IF_SELINUX( \
     "\n	-Z	Set security context" \
n	) \
n#define mkdir_example_usage \
       "$ mkdir /tmp/foo\n" \
       "$ mkdir /tmp/foo\n" \
       "/tmp/foo: File exists\n" \
       "$ mkdir /tmp/foo/bar/baz\n" \
       "/tmp/foo/bar/baz: No such file or directory\n" \
       "$ mkdir -p /tmp/foo/bar/baz\n" \
n#define mkfifo_trivial_usage \
       "[-m MODE] " IF_SELINUX("[-Z] ") "NAME" \
n#define mkfifo_full_usage "\n\n" \
       "Create named pipe\n" \
     "\n	-m MODE	Mode (default a=rw)" \
n	IF_SELINUX( \
     "\n	-Z	Set security context" \
n	) \
n#define mknod_trivial_usage \
       "[-m MODE] " IF_SELINUX("[-Z] ") "NAME TYPE MAJOR MINOR" \
n#define mknod_full_usage "\n\n" \
       "Create a special file (block, character, or pipe)\n" \
     "\n	-m MODE	Creation mode (default a=rw)" \
n	IF_SELINUX( \
     "\n	-Z	Set security context" \
n	) \
     "\nTYPE:" \
     "\n	b	Block device" \
     "\n	c or u	Character device" \
     "\n	p	Named pipe (MAJOR and MINOR are ignored)" \
n#define mknod_example_usage \
       "$ mknod /dev/fd0 b 2 0\n" \
       "$ mknod -m 644 /tmp/pipe p\n" \
n#define mv_trivial_usage \
       "[-fin] SOURCE DEST\n" \
       "or: mv [-fin] SOURCE... DIRECTORY" \
n#define mv_full_usage "\n\n" \
       "Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY\n" \
     "\n	-f	Don't prompt before overwriting" \
     "\n	-i	Interactive, prompt before overwrite" \
     "\n	-n	Don't overwrite an existing file" \
n#define mv_example_usage \
       "$ mv /tmp/foo /bin/bar\n" \
n#define nice_trivial_usage \
       "[-n ADJUST] [PROG ARGS]" \
n#define nice_full_usage "\n\n" \
       "Change scheduling priority, run PROG\n" \
     "\n	-n ADJUST	Adjust priority by ADJUST" \
n#define nohup_trivial_usage \
       "PROG ARGS" \
n#define nohup_full_usage "\n\n" \
       "Run PROG immune to hangups, with output to a non-tty" \
n#define nohup_example_usage \
       "$ nohup make &" \
n#if !ENABLE_DESKTOP \
n#define od_trivial_usage \
       "[-aBbcDdeFfHhIiLlOovXx] [FILE]" \
n#define od_full_usage "\n\n" \
       "Print FILE (or stdin) unambiguously, as octal bytes by default" \
n#endif \
n#if ENABLE_DESKTOP \
n#define od_trivial_usage \
       "[-abcdfhilovxs] [-t TYPE] [-A RADIX] [-N SIZE] [-j SKIP] [-S MINSTR] [-w WIDTH] [FILE]..." \
n#define od_full_usage "\n\n" \
       "Print FILEs (or stdin) unambiguously, as octal bytes by default" \
n#endif \
n#define printenv_trivial_usage \
       "[VARIABLE]..." \
n#define printenv_full_usage "\n\n" \
       "Print environment VARIABLEs.\n" \
       "If no VARIABLE specified, print all." \
n#define printf_trivial_usage \
       "FORMAT [ARG]..." \
n#define printf_full_usage "\n\n" \
       "Format and print ARG(s) according to FORMAT (a-la C printf)" \
n#define printf_example_usage \
       "$ printf \"Val=%d\\n\" 5\n" \
       "Val=5\n" \
n#define pwd_trivial_usage \
       "" \
n#define pwd_full_usage "\n\n" \
       "Print the full filename of the current working directory" \
n#define pwd_example_usage \
       "$ pwd\n" \
       "/root\n" \
n#define readlink_trivial_usage \
n	IF_FEATURE_READLINK_FOLLOW("[-fnv] ") "FILE" \
n#define readlink_full_usage "\n\n" \
       "Display the value of a symlink" \
n	IF_FEATURE_READLINK_FOLLOW( "\n" \
     "\n	-f	Canonicalize by following all symlinks" \
     "\n	-n	Don't add newline" \
     "\n	-v	Verbose" \
n	) \
n#define realpath_trivial_usage \
       "FILE..." \
n#define realpath_full_usage "\n\n" \
       "Return the absolute pathnames of given FILE" \
n#define rm_trivial_usage \
       "[-irf] FILE..." \
n#define rm_full_usage "\n\n" \
       "Remove (unlink) FILEs\n" \
     "\n	-i	Always prompt before removing" \
     "\n	-f	Never prompt" \
     "\n	-R,-r	Recurse" \
n#define rm_example_usage \
       "$ rm -rf /tmp/foo\n" \
n#define rmdir_trivial_usage \
       "[OPTIONS] DIRECTORY..." \
n#define rmdir_full_usage "\n\n" \
       "Remove DIRECTORY if it is empty\n" \
n	IF_FEATURE_RMDIR_LONG_OPTIONS( \
     "\n	-p|--parents	Include parents" \
     "\n	--ignore-fail-on-non-empty" \
n	) \
n	IF_NOT_FEATURE_RMDIR_LONG_OPTIONS( \
     "\n	-p	Include parents" \
n	) \
n#define rmdir_example_usage \
       "# rmdir /tmp/foo\n" \
n#define seq_trivial_usage \
       "[-w] [-s SEP] [FIRST [INC]] LAST" \
n#define seq_full_usage "\n\n" \
       "Print numbers from FIRST to LAST, in steps of INC.\n" \
       "FIRST, INC default to 1.\n" \
     "\n	-w	Pad to last with leading zeros" \
     "\n	-s SEP	String separator" \
n#define sleep_trivial_usage \
n	IF_FEATURE_FANCY_SLEEP("[") "N" IF_FEATURE_FANCY_SLEEP("]...") \
n#define sleep_full_usage "\n\n" \
n	IF_NOT_FEATURE_FANCY_SLEEP("Pause for N seconds") \
n	IF_FEATURE_FANCY_SLEEP( \
       "Pause for a time equal to the total of the args given, where each arg can\n" \
       "have an optional suffix of (s)econds, (m)inutes, (h)ours, or (d)ays") \
n#define sleep_example_usage \
       "$ sleep 2\n" \
       "[2 second delay results]\n" \
n	IF_FEATURE_FANCY_SLEEP( \
       "$ sleep 1d 3h 22m 8s\n" \
       "[98528 second delay results]\n") \
n#define sort_trivial_usage \
       "[-nru" \
n	IF_FEATURE_SORT_BIG("gMcszbdfimSTokt] [-o FILE] [-k start[.offset][opts][,end[.offset][opts]] [-t CHAR") \
       "] [FILE]..." \
n#define sort_full_usage "\n\n" \
       "Sort lines of text\n" \
n	IF_FEATURE_SORT_BIG( \
     "\n	-b	Ignore leading blanks" \
     "\n	-c	Check whether input is sorted" \
     "\n	-d	Dictionary order (blank or alphanumeric only)" \
     "\n	-f	Ignore case" \
     "\n	-g	General numerical sort" \
     "\n	-i	Ignore unprintable characters" \
     "\n	-k	Sort key" \
     "\n	-M	Sort month" \
n	) \
     "\n	-n	Sort numbers" \
n	IF_FEATURE_SORT_BIG( \
     "\n	-o	Output to file" \
     "\n	-k	Sort by key" \
     "\n	-t CHAR	Key separator" \
n	) \
     "\n	-r	Reverse sort order" \
n	IF_FEATURE_SORT_BIG( \
     "\n	-s	Stable (don't sort ties alphabetically)" \
n	) \
     "\n	-u	Suppress duplicate lines" \
n	IF_FEATURE_SORT_BIG( \
     "\n	-z	Lines are terminated by NUL, not newline" \
     "\n	-mST	Ignored for GNU compatibility") \
n#define sort_example_usage \
       "$ echo -e \"e\\nf\\nb\\nd\\nc\\na\" | sort\n" \
       "a\n" \
       "b\n" \
       "c\n" \
       "d\n" \
       "e\n" \
       "f\n" \
n	IF_FEATURE_SORT_BIG( \
n		"$ echo -e \"c 3\\nb 2\\nd 2\" | $SORT -k 2,2n -k 1,1r\n" \
n		"d 2\n" \
n		"b 2\n" \
n		"c 3\n" \
n	) \
       "" \
n#define split_trivial_usage \
       "[OPTIONS] [INPUT [PREFIX]]" \
n#define split_full_usage "\n\n" \
       "	-b N[k|m]	Split by N (kilo|mega)bytes" \
     "\n	-l N		Split by N lines" \
     "\n	-a N		Use N letters as suffix" \
n#define split_example_usage \
       "$ split TODO foo\n" \
       "$ cat TODO | split -a 2 -l 2 TODO_\n" \
n#define stat_trivial_usage \
       "[OPTIONS] FILE..." \
n#define stat_full_usage "\n\n" \
       "Display file (default) or filesystem status\n" \
n	IF_FEATURE_STAT_FORMAT( \
     "\n	-c fmt	Use the specified format" \
n	) \
     "\n	-f	Display filesystem status" \
     "\n	-L	Follow links" \
     "\n	-t	Display info in terse form" \
n	IF_SELINUX( \
     "\n	-Z	Print security context" \
n	) \
n	IF_FEATURE_STAT_FORMAT( \
       "\n\nValid format sequences for files:\n" \
       " %a	Access rights in octal\n" \
       " %A	Access rights in human readable form\n" \
       " %b	Number of blocks allocated (see %B)\n" \
       " %B	The size in bytes of each block reported by %b\n" \
       " %d	Device number in decimal\n" \
       " %D	Device number in hex\n" \
       " %f	Raw mode in hex\n" \
       " %F	File type\n" \
       " %g	Group ID of owner\n" \
       " %G	Group name of owner\n" \
       " %h	Number of hard links\n" \
       " %i	Inode number\n" \
       " %n	File name\n" \
       " %N	File name, with -> TARGET if symlink\n" \
       " %o	I/O block size\n" \
       " %s	Total size, in bytes\n" \
       " %t	Major device type in hex\n" \
       " %T	Minor device type in hex\n" \
       " %u	User ID of owner\n" \
       " %U	User name of owner\n" \
       " %x	Time of last access\n" \
       " %X	Time of last access as seconds since Epoch\n" \
       " %y	Time of last modification\n" \
       " %Y	Time of last modification as seconds since Epoch\n" \
       " %z	Time of last change\n" \
       " %Z	Time of last change as seconds since Epoch\n" \
       "\nValid format sequences for file systems:\n" \
       " %a	Free blocks available to non-superuser\n" \
       " %b	Total data blocks in file system\n" \
       " %c	Total file nodes in file system\n" \
       " %d	Free file nodes in file system\n" \
       " %f	Free blocks in file system\n" \
n	IF_SELINUX( \
       " %C	Security context in selinux\n" \
n	) \
       " %i	File System ID in hex\n" \
       " %l	Maximum length of filenames\n" \
       " %n	File name\n" \
       " %s	Block size (for faster transfer)\n" \
       " %S	Fundamental block size (for block counts)\n" \
       " %t	Type in hex\n" \
       " %T	Type in human readable form" \
n	) \
n#define stty_trivial_usage \
       "[-a|g] [-F DEVICE] [SETTING]..." \
n#define stty_full_usage "\n\n" \
       "Without arguments, prints baud rate, line discipline,\n" \
       "and deviations from stty sane\n" \
     "\n	-F DEVICE	Open device instead of stdin" \
     "\n	-a		Print all current settings in human-readable form" \
     "\n	-g		Print in stty-readable form" \
     "\n	[SETTING]	See manpage" \
n#define sum_trivial_usage \
       "[-rs] [FILE]..." \
n#define sum_full_usage "\n\n" \
       "Checksum and count the blocks in a file\n" \
     "\n	-r	Use BSD sum algorithm (1K blocks)" \
     "\n	-s	Use System V sum algorithm (512byte blocks)" \
n#define sync_trivial_usage \
       "" \
n#define sync_full_usage "\n\n" \
       "Write all buffered blocks to disk" \
n#define tac_trivial_usage \
n	"[FILE]..." \
n#define tac_full_usage "\n\n" \
n	"Concatenate FILEs and print them in reverse" \
n#define tail_trivial_usage \
       "[OPTIONS] [FILE]..." \
n#define tail_full_usage "\n\n" \
       "Print last 10 lines of each FILE (or stdin) to stdout.\n" \
       "With more than one FILE, precede each with a filename header.\n" \
     "\n	-f		Print data as file grows" \
n	IF_FEATURE_FANCY_TAIL( \
     "\n	-s SECONDS	Wait SECONDS between reads with -f" \
n	) \
     "\n	-n N[kbm]	Print last N lines" \
     "\n	-n +N[kbm]	Start on Nth line and print the rest" \
n	IF_FEATURE_FANCY_TAIL( \
     "\n	-c [+]N[kbm]	Print last N bytes" \
     "\n	-q		Never print headers" \
     "\n	-v		Always print headers" \
     "\n" \
     "\nN may be suffixed by k (x1024), b (x512), or m (x1024^2)." \
n	) \
n#define tail_example_usage \
       "$ tail -n 1 /etc/resolv.conf\n" \
       "nameserver 10.0.0.1\n" \
n#define tee_trivial_usage \
       "[-ai] [FILE]..." \
n#define tee_full_usage "\n\n" \
       "Copy stdin to each FILE, and also to stdout\n" \
     "\n	-a	Append to the given FILEs, don't overwrite" \
     "\n	-i	Ignore interrupt signals (SIGINT)" \
n#define tee_example_usage \
       "$ echo \"Hello\" | tee /tmp/foo\n" \
       "$ cat /tmp/foo\n" \
       "Hello\n" \
n#define test_trivial_usage \
       "EXPRESSION ]" \
n#define test_full_usage "\n\n" \
       "Check file types, compare values etc. Return a 0/1 exit code\n" \
       "depending on logical value of EXPRESSION" \
n#define test_example_usage \
       "$ test 1 -eq 2\n" \
       "$ echo $?\n" \
       "1\n" \
       "$ test 1 -eq 1\n" \
       "$ echo $?\n" \
       "0\n" \
       "$ [ -d /etc ]\n" \
       "$ echo $?\n" \
       "0\n" \
       "$ [ -d /junk ]\n" \
       "$ echo $?\n" \
       "1\n" \
n#define touch_trivial_usage \
       "[-c]" IF_FEATURE_TOUCH_SUSV3(" [-d DATE] [-t DATE] [-r FILE]") " FILE..." \
n#define touch_full_usage "\n\n" \
       "Update the last-modified date on the given FILE[s]\n" \
     "\n	-c	Don't create files" \
n	IF_FEATURE_TOUCH_NODEREF( \
     "\n	-h	Don't follow links" \
n	) \
n	IF_FEATURE_TOUCH_SUSV3( \
     "\n	-d DT	Date/time to use" \
     "\n	-t DT	Date/time to use" \
     "\n	-r FILE	Use FILE's date/time" \
n	) \
n#define touch_example_usage \
       "$ ls -l /tmp/foo\n" \
       "/bin/ls: /tmp/foo: No such file or directory\n" \
       "$ touch /tmp/foo\n" \
       "$ ls -l /tmp/foo\n" \
       "-rw-rw-r--    1 andersen andersen        0 Apr 15 01:11 /tmp/foo\n" \
n#define tr_trivial_usage \
       "[-cds] STRING1 [STRING2]" \
n#define tr_full_usage "\n\n" \
       "Translate, squeeze, or delete characters from stdin, writing to stdout\n" \
     "\n	-c	Take complement of STRING1" \
     "\n	-d	Delete input characters coded STRING1" \
     "\n	-s	Squeeze multiple output characters of STRING2 into one character" \
n#define tr_example_usage \
       "$ echo \"gdkkn vnqkc\" | tr [a-y] [b-z]\n" \
       "hello world\n" \
n#define true_trivial_usage \
       "" \
n#define true_full_usage "\n\n" \
       "Return an exit code of TRUE (0)" \
n#define true_example_usage \
       "$ true\n" \
       "$ echo $?\n" \
       "0\n" \
n#define tty_trivial_usage \
       "" \
n#define tty_full_usage "\n\n" \
       "Print file name of stdin's terminal" \
n	IF_INCLUDE_SUSv2( "\n" \
     "\n	-s	Print nothing, only return exit status" \
n	) \
n#define tty_example_usage \
       "$ tty\n" \
       "/dev/tty2\n" \
n#define uname_trivial_usage \
       "[-amnrspv]" \
n#define uname_full_usage "\n\n" \
       "Print system information\n" \
     "\n	-a	Print all" \
     "\n	-m	The machine (hardware) type" \
     "\n	-n	Hostname" \
     "\n	-r	OS release" \
     "\n	-s	OS name (default)" \
     "\n	-p	Processor type" \
     "\n	-v	OS version" \
n#define uname_example_usage \
       "$ uname -a\n" \
       "Linux debian 2.4.23 #2 Tue Dec 23 17:09:10 MST 2003 i686 GNU/Linux\n" \
n#define uniq_trivial_usage \
       "[-cdu][-f,s,w N] [INPUT [OUTPUT]]" \
n#define uniq_full_usage "\n\n" \
       "Discard duplicate lines\n" \
     "\n	-c	Prefix lines by the number of occurrences" \
     "\n	-d	Only print duplicate lines" \
     "\n	-u	Only print unique lines" \
     "\n	-f N	Skip first N fields" \
     "\n	-s N	Skip first N chars (after any skipped fields)" \
     "\n	-w N	Compare N characters in line" \
n#define uniq_example_usage \
       "$ echo -e \"a\\na\\nb\\nc\\nc\\na\" | sort | uniq\n" \
       "a\n" \
       "b\n" \
       "c\n" \
n#define usleep_trivial_usage \
       "N" \
n#define usleep_full_usage "\n\n" \
       "Pause for N microseconds" \
n#define usleep_example_usage \
       "$ usleep 1000000\n" \
       "[pauses for 1 second]\n" \
n#define uudecode_trivial_usage \
       "[-o OUTFILE] [INFILE]" \
n#define uudecode_full_usage "\n\n" \
       "Uudecode a file\n" \
       "Finds OUTFILE in uuencoded source unless -o is given" \
n#define uudecode_example_usage \
       "$ uudecode -o busybox busybox.uu\n" \
       "$ ls -l busybox\n" \
       "-rwxr-xr-x   1 ams      ams        245264 Jun  7 21:35 busybox\n" \
n#define base64_trivial_usage \
n	"[-d] [FILE]" \
n#define base64_full_usage "\n\n" \
       "Base64 encode or decode FILE to standard output" \
     "\n	-d	Decode data" \
n#define uuencode_trivial_usage \
       "[-m] [FILE] STORED_FILENAME" \
n#define uuencode_full_usage "\n\n" \
       "Uuencode FILE (or stdin) to stdout\n" \
     "\n	-m	Use base64 encoding per RFC1521" \
n#define uuencode_example_usage \
       "$ uuencode busybox busybox\n" \
       "begin 755 busybox\n" \
       "<encoded file snipped>\n" \
       "$ uudecode busybox busybox > busybox.uu\n" \
       "$\n" \
n#define wc_trivial_usage \
       "[-c"IF_UNICODE_SUPPORT("m")"lwL] [FILE]..." \
n#define wc_full_usage "\n\n" \
       "Count lines, words, and bytes for each FILE (or stdin)\n" \
     "\n	-c	Count bytes" \
n	IF_UNICODE_SUPPORT( \
     "\n	-m	Count characters" \
n	) \
     "\n	-l	Count newlines" \
     "\n	-w	Count words" \
     "\n	-L	Print longest line length" \
n#define wc_example_usage \
       "$ wc /etc/passwd\n" \
       "     31      46    1365 /etc/passwd\n" \
n#define users_trivial_usage \
       "" \
n#define users_full_usage "\n\n" \
       "Print the users currently logged on" \
n#define who_trivial_usage \
       "[-a]" \
n#define who_full_usage "\n\n" \
       "Show who is logged on\n" \
     "\n	-a	Show all" \
     "\n	-H	Print column headers" \
n#define whoami_trivial_usage \
       "" \
n#define whoami_full_usage "\n\n" \
       "Print the user name associated with the current effective user id" \
n#define yes_trivial_usage \
       "[STRING]" \
n#define yes_full_usage "\n\n" \
       "Repeatedly output a line with STRING, or 'y'" \
n#define mktemp_trivial_usage \
       "[-dt] [-p DIR] [TEMPLATE]" \
n#define mktemp_full_usage "\n\n" \
       "Create a temporary file with name based on TEMPLATE and print its name.\n" \
       "TEMPLATE must end with XXXXXX (e.g. [/dir/]nameXXXXXX).\n" \
       "Without TEMPLATE, -t tmp.XXXXXX is assumed.\n" \
     "\n	-d	Make directory, not file" \
     "\n	-q	Fail silently on errors" \
     "\n	-t	Prepend base directory name to TEMPLATE" \
     "\n	-p DIR	Use DIR as a base directory (implies -t)" \
     "\n	-u	Do not create anything; print a name" \
     "\n" \
     "\nBase directory is: -p DIR, else $TMPDIR, else /tmp" \
n#define mktemp_example_usage \
       "$ mktemp /tmp/temp.XXXXXX\n" \
       "/tmp/temp.mWiLjM\n" \
       "$ ls -la /tmp/temp.mWiLjM\n" \
       "-rw-------    1 andersen andersen        0 Apr 25 17:10 /tmp/temp.mWiLjM\n" \
n#define pipe_progress_trivial_usage NOUSAGE_STR \
n#define pipe_progress_full_usage "" \
n#define run_parts_trivial_usage \
       "[-a ARG]... [-u UMASK] " \
       IF_FEATURE_RUN_PARTS_LONG_OPTIONS("[--reverse] [--test] [--exit-on-error] "IF_FEATURE_RUN_PARTS_FANCY("[--list] ")) \
       "DIRECTORY" \
n#define run_parts_full_usage "\n\n" \
       "Run a bunch of scripts in DIRECTORY\n" \
     "\n	-a ARG		Pass ARG as argument to scripts" \
     "\n	-u UMASK	Set UMASK before running scripts" \
n	IF_FEATURE_RUN_PARTS_LONG_OPTIONS( \
     "\n	--reverse	Reverse execution order" \
     "\n	--test		Dry run" \
     "\n	--exit-on-error	Exit if a script exits with non-zero" \
n	IF_FEATURE_RUN_PARTS_FANCY( \
     "\n	--list		Print names of matching files even if they are not executable" \
n	) \
n	) \
n#define run_parts_example_usage \
       "$ run-parts -a start /etc/init.d\n" \
       "$ run-parts -a stop=now /etc/init.d\n\n" \
       "Let's assume you have a script foo/dosomething:\n" \
       "#!/bin/sh\n" \
       "for i in $*; do eval $i; done; unset i\n" \
       "case \"$1\" in\n" \
       "start*) echo starting something;;\n" \
       "stop*) set -x; shutdown -h $stop;;\n" \
       "esac\n\n" \
       "Running this yields:\n" \
       "$run-parts -a stop=+4m foo/\n" \
       "+ shutdown -h +4m" \
n#define start_stop_daemon_trivial_usage \
       "[OPTIONS] [-S|-K] ... [-- ARGS...]" \
n#define start_stop_daemon_full_usage "\n\n" \
       "Search for matching processes, and then\n" \
       "-K: stop all matching processes.\n" \
       "-S: start a process unless a matching process is found.\n" \
n	IF_FEATURE_START_STOP_DAEMON_LONG_OPTIONS( \
     "\nProcess matching:" \
     "\n	-u,--user USERNAME|UID	Match only this user's processes" \
     "\n	-n,--name NAME		Match processes with NAME" \
     "\n				in comm field in /proc/PID/stat" \
     "\n	-x,--exec EXECUTABLE	Match processes with this command" \
     "\n				in /proc/PID/{exe,cmdline}" \
     "\n	-p,--pidfile FILE	Match a process with PID from the file" \
     "\n	All specified conditions must match" \
     "\n-S only:" \
     "\n	-x,--exec EXECUTABLE	Program to run" \
     "\n	-a,--startas NAME	Zeroth argument" \
     "\n	-b,--background		Background" \
n	IF_FEATURE_START_STOP_DAEMON_FANCY( \
     "\n	-N,--nicelevel N	Change nice level" \
n	) \
     "\n	-c,--chuid USER[:[GRP]]	Change to user/group" \
     "\n	-m,--make-pidfile	Write PID to the pidfile specified by -p" \
     "\n-K only:" \
     "\n	-s,--signal SIG		Signal to send" \
     "\n	-t,--test		Match only, exit with 0 if a process is found" \
     "\nOther:" \
n	IF_FEATURE_START_STOP_DAEMON_FANCY( \
     "\n	-o,--oknodo		Exit with status 0 if nothing is done" \
     "\n	-v,--verbose		Verbose" \
n	) \
     "\n	-q,--quiet		Quiet" \
n	) \
n	IF_NOT_FEATURE_START_STOP_DAEMON_LONG_OPTIONS( \
     "\nProcess matching:" \
     "\n	-u USERNAME|UID	Match only this user's processes" \
     "\n	-n NAME		Match processes with NAME" \
     "\n			in comm field in /proc/PID/stat" \
     "\n	-x EXECUTABLE	Match processes with this command" \
     "\n			command in /proc/PID/cmdline" \
     "\n	-p FILE		Match a process with PID from the file" \
     "\n	All specified conditions must match" \
     "\n-S only:" \
     "\n	-x EXECUTABLE	Program to run" \
     "\n	-a NAME		Zeroth argument" \
     "\n	-b		Background" \
n	IF_FEATURE_START_STOP_DAEMON_FANCY( \
     "\n	-N N		Change nice level" \
n	) \
     "\n	-c USER[:[GRP]]	Change to user/group" \
     "\n	-m		Write PID to the pidfile specified by -p" \
     "\n-K only:" \
     "\n	-s SIG		Signal to send" \
     "\n	-t		Match only, exit with 0 if a process is found" \
     "\nOther:" \
n	IF_FEATURE_START_STOP_DAEMON_FANCY( \
     "\n	-o		Exit with status 0 if nothing is done" \
     "\n	-v		Verbose" \
n	) \
     "\n	-q		Quiet" \
n	) \
n#define which_trivial_usage \
       "[COMMAND]..." \
n#define which_full_usage "\n\n" \
       "Locate a COMMAND" \
n#define which_example_usage \
       "$ which login\n" \
       "/bin/login\n" \
n#define chattr_trivial_usage \
       "[-R] [-+=AacDdijsStTu] [-v VERSION] [FILE]..." \
n#define chattr_full_usage "\n\n" \
       "Change file attributes on an ext2 fs\n" \
     "\nModifiers:" \
     "\n	-	Remove attributes" \
     "\n	+	Add attributes" \
     "\n	=	Set attributes" \
     "\nAttributes:" \
     "\n	A	Don't track atime" \
     "\n	a	Append mode only" \
     "\n	c	Enable compress" \
     "\n	D	Write dir contents synchronously" \
     "\n	d	Don't backup with dump" \
     "\n	i	Cannot be modified (immutable)" \
     "\n	j	Write all data to journal first" \
     "\n	s	Zero disk storage when deleted" \
     "\n	S	Write file contents synchronously" \
     "\n	t	Disable tail-merging of partial blocks with other files" \
     "\n	u	Allow file to be undeleted" \
     "\n	-R	Recurse" \
     "\n	-v	Set the file's version/generation number" \
n#define fsck_trivial_usage \
       "[-ANPRTV] [-C FD] [-t FSTYPE] [FS_OPTS] [BLOCKDEV]..." \
n#define fsck_full_usage "\n\n" \
       "Check and repair filesystems\n" \
     "\n	-A	Walk /etc/fstab and check all filesystems" \
     "\n	-N	Don't execute, just show what would be done" \
     "\n	-P	With -A, check filesystems in parallel" \
     "\n	-R	With -A, skip the root filesystem" \
     "\n	-T	Don't show title on startup" \
     "\n	-V	Verbose" \
     "\n	-C n	Write status information to specified filedescriptor" \
     "\n	-t TYPE	List of filesystem types to check" \
n#define lsattr_trivial_usage \
       "[-Radlv] [FILE]..." \
n#define lsattr_full_usage "\n\n" \
       "List file attributes on an ext2 fs\n" \
     "\n	-R	Recurse" \
     "\n	-a	Don't hide entries starting with ." \
     "\n	-d	List directory entries instead of contents" \
     "\n	-l	List long flag names" \
     "\n	-v	List the file's version/generation number" \
n#define tune2fs_trivial_usage \
       "[-c MAX_MOUNT_COUNT] " \
       "[-i DAYS] " \
       "[-C MOUNT_COUNT] " \
       "[-L LABEL] " \
       "BLOCKDEV" \
n#define tune2fs_full_usage "\n\n" \
       "Adjust filesystem options on ext[23] filesystems" \
n#define awk_trivial_usage \
       "[OPTIONS] [AWK_PROGRAM] [FILE]..." \
n#define awk_full_usage "\n\n" \
       "	-v VAR=VAL	Set variable" \
     "\n	-F SEP		Use SEP as field separator" \
     "\n	-f FILE		Read program from FILE" \
n	IF_FEATURE_AWK_GNU_EXTENSIONS( \
     "\n	-e AWK_PROGRAM" \
n	) \
n#define cmp_trivial_usage \
       "[-l] [-s] FILE1 [FILE2" IF_DESKTOP(" [SKIP1 [SKIP2]]") "]" \
n#define cmp_full_usage "\n\n" \
       "Compare FILE1 with FILE2 (or stdin)\n" \
     "\n	-l	Write the byte numbers (decimal) and values (octal)" \
     "\n		for all differing bytes" \
     "\n	-s	Quiet" \
n#define diff_trivial_usage \
       "[-abBdiNqrTstw] [-L LABEL] [-S FILE] [-U LINES] FILE1 FILE2" \
n#define diff_full_usage "\n\n" \
       "Compare files line by line and output the differences between them.\n" \
       "This implementation supports unified diffs only.\n" \
     "\n	-a	Treat all files as text" \
     "\n	-b	Ignore changes in the amount of whitespace" \
     "\n	-B	Ignore changes whose lines are all blank" \
     "\n	-d	Try hard to find a smaller set of changes" \
     "\n	-i	Ignore case differences" \
     "\n	-L	Use LABEL instead of the filename in the unified header" \
     "\n	-N	Treat absent files as empty" \
     "\n	-q	Output only whether files differ" \
     "\n	-r	Recurse" \
     "\n	-S	Start with FILE when comparing directories" \
     "\n	-T	Make tabs line up by prefixing a tab when necessary" \
     "\n	-s	Report when two files are the same" \
     "\n	-t	Expand tabs to spaces in output" \
     "\n	-U	Output LINES lines of context" \
     "\n	-w	Ignore all whitespace" \
n#define ed_trivial_usage "" \
n#define ed_full_usage "" \
n#define patch_trivial_usage \
       "[OPTIONS] [ORIGFILE [PATCHFILE]]" \
n#define patch_full_usage "\n\n" \
n	IF_LONG_OPTS( \
       "	-p,--strip N		Strip N leading components from file names" \
     "\n	-i,--input DIFF		Read DIFF instead of stdin" \
     "\n	-R,--reverse		Reverse patch" \
     "\n	-N,--forward		Ignore already applied patches" \
     "\n	-E,--remove-empty-files	Remove output files if they become empty" \
n	) \
n	IF_NOT_LONG_OPTS( \
       "	-p N	Strip N leading components from file names" \
     "\n	-i DIFF	Read DIFF instead of stdin" \
     "\n	-R	Reverse patch" \
     "\n	-N	Ignore already applied patches" \
     "\n	-E	Remove output files if they become empty" \
n	) \
n#define patch_example_usage \
       "$ patch -p1 < example.diff\n" \
       "$ patch -p0 -i example.diff" \
n#define sed_trivial_usage \
       "[-inrE] [-f FILE]... [-e CMD]... [FILE]...\n" \
       "or: sed [-inrE] CMD [FILE]..." \
n#define sed_full_usage "\n\n" \
       "	-e CMD	Add CMD to sed commands to be executed" \
     "\n	-f FILE	Add FILE contents to sed commands to be executed" \
     "\n	-i[SFX]	Edit files in-place (otherwise sends to stdout)" \
     "\n		Optionally back files up, appending SFX" \
     "\n	-n	Suppress automatic printing of pattern space" \
     "\n	-r,-E	Use extended regex syntax" \
     "\n" \
     "\nIf no -e or -f, the first non-option argument is the sed command string." \
     "\nRemaining arguments are input files (stdin if none)." \
n#define sed_example_usage \
       "$ echo \"foo\" | sed -e 's/f[a-zA-Z]o/bar/g'\n" \
       "bar\n" \
n#define vi_trivial_usage \
       "[OPTIONS] [FILE]..." \
n#define vi_full_usage "\n\n" \
       "Edit FILE\n" \
n	IF_FEATURE_VI_COLON( \
     "\n	-c CMD	Initial command to run ($EXINIT also available)" \
n	) \
n	IF_FEATURE_VI_READONLY( \
     "\n	-R	Read-only" \
n	) \
     "\n	-H	List available features" \
n#define find_trivial_usage \
       "[-HL] [PATH]... [OPTIONS] [ACTIONS]" \
n#define find_full_usage "\n\n" \
       "Search for files and perform actions on them.\n" \
       "First failed action stops processing of current file.\n" \
       "Defaults: PATH is current directory, action is '-print'\n" \
     "\n	-L,-follow	Follow symlinks" \
     "\n	-H		...on command line only" \
n	IF_FEATURE_FIND_XDEV( \
     "\n	-xdev		Don't descend directories on other filesystems" \
n	) \
n	IF_FEATURE_FIND_MAXDEPTH( \
     "\n	-maxdepth N	Descend at most N levels. -maxdepth 0 applies" \
     "\n			actions to command line arguments only" \
     "\n	-mindepth N	Don't act on first N levels" \
n	) \
n	IF_FEATURE_FIND_DEPTH( \
     "\n	-depth		Act on directory *after* traversing it" \
n	) \
     "\n" \
     "\nActions:" \
n	IF_FEATURE_FIND_PAREN( \
     "\n	( ACTIONS )	Group actions for -o / -a" \
n	) \
n	IF_FEATURE_FIND_NOT( \
     "\n	! ACT		Invert ACT's success/failure" \
n	) \
     "\n	ACT1 [-a] ACT2	If ACT1 fails, stop, else do ACT2" \
     "\n	ACT1 -o ACT2	If ACT1 succeeds, stop, else do ACT2" \
     "\n			Note: -a has higher priority than -o" \
     "\n	-name PATTERN	Match file name (w/o directory name) to PATTERN" \
     "\n	-iname PATTERN	Case insensitive -name" \
n	IF_FEATURE_FIND_PATH( \
     "\n	-path PATTERN	Match path to PATTERN" \
     "\n	-ipath PATTERN	Case insensitive -path" \
n	) \
n	IF_FEATURE_FIND_REGEX( \
     "\n	-regex PATTERN	Match path to regex PATTERN" \
n	) \
n	IF_FEATURE_FIND_TYPE( \
     "\n	-type X		File type is X (one of: f,d,l,b,c,...)" \
n	) \
n	IF_FEATURE_FIND_PERM( \
     "\n	-perm MASK	At least one mask bit (+MASK), all bits (-MASK)," \
     "\n			or exactly MASK bits are set in file's mode" \
n	) \
n	IF_FEATURE_FIND_MTIME( \
     "\n	-mtime DAYS	mtime is greater than (+N), less than (-N)," \
     "\n			or exactly N days in the past" \
n	) \
n	IF_FEATURE_FIND_MMIN( \
     "\n	-mmin MINS	mtime is greater than (+N), less than (-N)," \
     "\n			or exactly N minutes in the past" \
n	) \
n	IF_FEATURE_FIND_NEWER( \
     "\n	-newer FILE	mtime is more recent than FILE's" \
n	) \
n	IF_FEATURE_FIND_INUM( \
     "\n	-inum N		File has inode number N" \
n	) \
n	IF_FEATURE_FIND_USER( \
     "\n	-user NAME/ID	File is owned by given user" \
n	) \
n	IF_FEATURE_FIND_GROUP( \
     "\n	-group NAME/ID	File is owned by given group" \
n	) \
n	IF_FEATURE_FIND_SIZE( \
     "\n	-size N[bck]	File size is N (c:bytes,k:kbytes,b:512 bytes(def.))" \
     "\n			+/-N: file size is bigger/smaller than N" \
n	) \
n	IF_FEATURE_FIND_LINKS( \
     "\n	-links N	Number of links is greater than (+N), less than (-N)," \
     "\n			or exactly N" \
n	) \
n	IF_FEATURE_FIND_CONTEXT( \
     "\n	-context CTX	File has specified security context" \
n	) \
n	IF_FEATURE_FIND_PRUNE( \
     "\n	-prune		If current file is directory, don't descend into it" \
n	) \
     "\nIf none of the following actions is specified, -print is assumed" \
     "\n	-print		Print file name" \
n	IF_FEATURE_FIND_PRINT0( \
     "\n	-print0		Print file name, NUL terminated" \
n	) \
n	IF_FEATURE_FIND_EXEC( \
     "\n	-exec CMD ARG ;	Run CMD with all instances of {} replaced by" \
     "\n			file name. Fails if CMD exits with nonzero" \
n	) \
n	IF_FEATURE_FIND_DELETE( \
     "\n	-delete		Delete current file/directory. Turns on -depth option" \
n	) \
n#define find_example_usage \
       "$ find / -name passwd\n" \
       "/etc/passwd\n" \
n#define grep_trivial_usage \
       "[-HhnlLoqvsriw" \
       "F" \
n	IF_FEATURE_GREP_EGREP_ALIAS("E") \
n	IF_EXTRA_COMPAT("z") \
       "] [-m N] " \
n	IF_FEATURE_GREP_CONTEXT("[-A/B/C N] ") \
       "PATTERN/-e PATTERN.../-f FILE [FILE]..." \
n#define grep_full_usage "\n\n" \
       "Search for PATTERN in FILEs (or stdin)\n" \
     "\n	-H	Add 'filename:' prefix" \
     "\n	-h	Do not add 'filename:' prefix" \
     "\n	-n	Add 'line_no:' prefix" \
     "\n	-l	Show only names of files that match" \
     "\n	-L	Show only names of files that don't match" \
     "\n	-c	Show only count of matching lines" \
     "\n	-o	Show only the matching part of line" \
     "\n	-q	Quiet. Return 0 if PATTERN is found, 1 otherwise" \
     "\n	-v	Select non-matching lines" \
     "\n	-s	Suppress open and read errors" \
     "\n	-r	Recurse" \
     "\n	-i	Ignore case" \
     "\n	-w	Match whole words only" \
     "\n	-x	Match whole lines only" \
     "\n	-F	PATTERN is a literal (not regexp)" \
n	IF_FEATURE_GREP_EGREP_ALIAS( \
     "\n	-E	PATTERN is an extended regexp" \
n	) \
n	IF_EXTRA_COMPAT( \
     "\n	-z	Input is NUL terminated" \
n	) \
     "\n	-m N	Match up to N times per file" \
n	IF_FEATURE_GREP_CONTEXT( \
     "\n	-A N	Print N lines of trailing context" \
     "\n	-B N	Print N lines of leading context" \
     "\n	-C N	Same as '-A N -B N'" \
n	) \
     "\n	-e PTRN	Pattern to match" \
     "\n	-f FILE	Read pattern from file" \
n#define grep_example_usage \
       "$ grep root /etc/passwd\n" \
       "root:x:0:0:root:/root:/bin/bash\n" \
       "$ grep ^[rR]oo. /etc/passwd\n" \
       "root:x:0:0:root:/root:/bin/bash\n" \
n#define egrep_trivial_usage NOUSAGE_STR \
n#define egrep_full_usage "" \
n#define fgrep_trivial_usage NOUSAGE_STR \
n#define fgrep_full_usage "" \
n#define xargs_trivial_usage \
       "[OPTIONS] [PROG ARGS]" \
n#define xargs_full_usage "\n\n" \
       "Run PROG on every item given by stdin\n" \
n	IF_FEATURE_XARGS_SUPPORT_CONFIRMATION( \
     "\n	-p	Ask user whether to run each command" \
n	) \
     "\n	-r	Don't run command if input is empty" \
n	IF_FEATURE_XARGS_SUPPORT_ZERO_TERM( \
     "\n	-0	Input is separated by NUL characters" \
n	) \
     "\n	-t	Print the command on stderr before execution" \
     "\n	-e[STR]	STR stops input processing" \
     "\n	-n N	Pass no more than N args to PROG" \
     "\n	-s N	Pass command line of no more than N bytes" \
n	IF_FEATURE_XARGS_SUPPORT_TERMOPT( \
     "\n	-x	Exit if size is exceeded" \
n	) \
n#define xargs_example_usage \
       "$ ls | xargs gzip\n" \
       "$ find . -name '*.c' -print | xargs rm\n" \
n#define bootchartd_trivial_usage \
       "start [PROG ARGS]|stop|init" \
n#define bootchartd_full_usage "\n\n" \
       "Create /var/log/bootchart.tgz with boot chart data\n" \
     "\nstart: start background logging; with PROG, run PROG, then kill logging with USR1" \
     "\nstop: send USR1 to all bootchartd processes" \
     "\ninit: start background logging; stop when getty/xdm is seen (for init scripts)" \
     "\nUnder PID 1: as init, then exec $bootchart_init, /init, /sbin/init" \
n#define halt_trivial_usage \
       "[-d DELAY] [-n] [-f]" IF_FEATURE_WTMP(" [-w]") \
n#define halt_full_usage "\n\n" \
       "Halt the system\n" \
     "\n	-d SEC	Delay interval" \
     "\n	-n	Do not sync" \
     "\n	-f	Force (don't go through init)" \
n	IF_FEATURE_WTMP( \
     "\n	-w	Only write a wtmp record" \
n	) \
n#define poweroff_trivial_usage \
       "[-d DELAY] [-n] [-f]" \
n#define poweroff_full_usage "\n\n" \
       "Halt and shut off power\n" \
     "\n	-d SEC	Delay interval" \
     "\n	-n	Do not sync" \
     "\n	-f	Force (don't go through init)" \
n#define reboot_trivial_usage \
       "[-d DELAY] [-n] [-f]" \
n#define reboot_full_usage "\n\n" \
       "Reboot the system\n" \
     "\n	-d SEC	Delay interval" \
     "\n	-n	Do not sync" \
     "\n	-f	Force (don't go through init)" \
n#define linuxrc_trivial_usage NOUSAGE_STR \
n#define linuxrc_full_usage "" \
n#define init_trivial_usage \
       "" \
n#define init_full_usage "\n\n" \
       "Init is the first process started during boot. It never exits." \
n	IF_FEATURE_USE_INITTAB( \
   "\n""It (re)spawns children according to /etc/inittab." \
n	) \
n	IF_NOT_FEATURE_USE_INITTAB( \
   "\n""This version of init doesn't use /etc/inittab," \
   "\n""has fixed set of processed to run." \
n	) \
n#define init_notes_usage \
n	"This version of init is designed to be run only by the kernel.\n" \
n	"\n" \
n	"BusyBox init doesn't support multiple runlevels. The runlevels field of\n" \
n	"the /etc/inittab file is completely ignored by BusyBox init. If you want\n" \
n	"runlevels, use sysvinit.\n" \
n	"\n" \
n	"BusyBox init works just fine without an inittab. If no inittab is found,\n" \
n	"it has the following default behavior:\n" \
n	"\n" \
n	"	::sysinit:/etc/init.d/rcS\n" \
n	"	::askfirst:/bin/sh\n" \
n	"	::ctrlaltdel:/sbin/reboot\n" \
n	"	::shutdown:/sbin/swapoff -a\n" \
n	"	::shutdown:/bin/umount -a -r\n" \
n	"	::restart:/sbin/init\n" \
n	"	tty2::askfirst:/bin/sh\n" \
n	"	tty3::askfirst:/bin/sh\n" \
n	"	tty4::askfirst:/bin/sh\n" \
n	"\n" \
n	"If you choose to use an /etc/inittab file, the inittab entry format is as follows:\n" \
n	"\n" \
n	"	<id>:<runlevels>:<action>:<process>\n" \
n	"\n" \
n	"	<id>:\n" \
n	"\n" \
n	"		WARNING: This field has a non-traditional meaning for BusyBox init!\n" \
n	"		The id field is used by BusyBox init to specify the controlling tty for\n" \
n	"		the specified process to run on. The contents of this field are\n" \
n	"		appended to \"/dev/\" and used as-is. There is no need for this field to\n" \
n	"		be unique, although if it isn't you may have strange results. If this\n" \
n	"		field is left blank, then the init's stdin/out will be used.\n" \
n	"\n" \
n	"	<runlevels>:\n" \
n	"\n" \
n	"		The runlevels field is completely ignored.\n" \
n	"\n" \
n	"	<action>:\n" \
n	"\n" \
n	"		Valid actions include: sysinit, respawn, askfirst, wait,\n" \
n	"		once, restart, ctrlaltdel, and shutdown.\n" \
n	"\n" \
n	"		The available actions can be classified into two groups: actions\n" \
n	"		that are run only once, and actions that are re-run when the specified\n" \
n	"		process exits.\n" \
n	"\n" \
n	"		Run only-once actions:\n" \
n	"\n" \
n	"			'sysinit' is the first item run on boot. init waits until all\n" \
n	"			sysinit actions are completed before continuing. Following the\n" \
n	"			completion of all sysinit actions, all 'wait' actions are run.\n" \
n	"			'wait' actions, like 'sysinit' actions, cause init to wait until\n" \
n	"			the specified task completes. 'once' actions are asynchronous,\n" \
n	"			therefore, init does not wait for them to complete. 'restart' is\n" \
n	"			the action taken to restart the init process. By default this should\n" \
n	"			simply run /sbin/init, but can be a script which runs pivot_root or it\n" \
n	"			can do all sorts of other interesting things. The 'ctrlaltdel' init\n" \
n	"			actions are run when the system detects that someone on the system\n" \
n	"			console has pressed the CTRL-ALT-DEL key combination. Typically one\n" \
n	"			wants to run 'reboot' at this point to cause the system to reboot.\n" \
n	"			Finally the 'shutdown' action specifies the actions to taken when\n" \
n	"			init is told to reboot. Unmounting filesystems and disabling swap\n" \
n	"			is a very good here.\n" \
n	"\n" \
n	"		Run repeatedly actions:\n" \
n	"\n" \
n	"			'respawn' actions are run after the 'once' actions. When a process\n" \
n	"			started with a 'respawn' action exits, init automatically restarts\n" \
n	"			it. Unlike sysvinit, BusyBox init does not stop processes from\n" \
n	"			respawning out of control. The 'askfirst' actions acts just like\n" \
n	"			respawn, except that before running the specified process it\n" \
n	"			displays the line \"Please press Enter to activate this console.\"\n" \
n	"			and then waits for the user to press enter before starting the\n" \
n	"			specified process.\n" \
n	"\n" \
n	"		Unrecognized actions (like initdefault) will cause init to emit an\n" \
n	"		error message, and then go along with its business. All actions are\n" \
n	"		run in the order they appear in /etc/inittab.\n" \
n	"\n" \
n	"	<process>:\n" \
n	"\n" \
n	"		Specifies the process to be executed and its command line.\n" \
n	"\n" \
n	"Example /etc/inittab file:\n" \
n	"\n" \
n	"	# This is run first except when booting in single-user mode\n" \
n	"	#\n" \
n	"	::sysinit:/etc/init.d/rcS\n" \
n	"	\n" \
n	"	# /bin/sh invocations on selected ttys\n" \
n	"	#\n" \
n	"	# Start an \"askfirst\" shell on the console (whatever that may be)\n" \
n	"	::askfirst:-/bin/sh\n" \
n	"	# Start an \"askfirst\" shell on /dev/tty2-4\n" \
n	"	tty2::askfirst:-/bin/sh\n" \
n	"	tty3::askfirst:-/bin/sh\n" \
n	"	tty4::askfirst:-/bin/sh\n" \
n	"	\n" \
n	"	# /sbin/getty invocations for selected ttys\n" \
n	"	#\n" \
n	"	tty4::respawn:/sbin/getty 38400 tty4\n" \
n	"	tty5::respawn:/sbin/getty 38400 tty5\n" \
n	"	\n" \
n	"	\n" \
n	"	# Example of how to put a getty on a serial line (for a terminal)\n" \
n	"	#\n" \
n	"	#::respawn:/sbin/getty -L ttyS0 9600 vt100\n" \
n	"	#::respawn:/sbin/getty -L ttyS1 9600 vt100\n" \
n	"	#\n" \
n	"	# Example how to put a getty on a modem line\n" \
n	"	#::respawn:/sbin/getty 57600 ttyS2\n" \
n	"	\n" \
n	"	# Stuff to do when restarting the init process\n" \
n	"	::restart:/sbin/init\n" \
n	"	\n" \
n	"	# Stuff to do before rebooting\n" \
n	"	::ctrlaltdel:/sbin/reboot\n" \
n	"	::shutdown:/bin/umount -a -r\n" \
n	"	::shutdown:/sbin/swapoff -a\n" \
n#define mesg_trivial_usage \
       "[y|n]" \
n#define mesg_full_usage "\n\n" \
       "Control write access to your terminal\n" \
       "	y	Allow write access to your terminal\n" \
       "	n	Disallow write access to your terminal" \
n#define parse_trivial_usage \
       "[-x] [-n MAXTOKENS] [-m MINTOKENS] [-d DELIMS] [-f FLAGS] FILE..." \
n#define parse_full_usage "\n\n" \
       "	-x	Suppress output (for benchmarking)" \
n#define add_shell_trivial_usage \
       "SHELL..." \
n#define add_shell_full_usage "\n\n" \
       "Add SHELLs to /etc/shells" \
n#define remove_shell_trivial_usage \
       "SHELL..." \
n#define remove_shell_full_usage "\n\n" \
       "Remove SHELLs from /etc/shells" \
n#define addgroup_trivial_usage \
       "[-g GID] " IF_FEATURE_ADDUSER_TO_GROUP("[USER] ") "GROUP" \
n#define addgroup_full_usage "\n\n" \
       "Add a group " IF_FEATURE_ADDUSER_TO_GROUP("or add a user to a group") "\n" \
     "\n	-g GID	Group id" \
     "\n	-S	Create a system group" \
n#define adduser_trivial_usage \
       "[OPTIONS] USER [GROUP]" \
n#define adduser_full_usage "\n\n" \
       "Create new user, or add USER to GROUP\n" \
     "\n	-h DIR		Home directory" \
     "\n	-g GECOS	GECOS field" \
     "\n	-s SHELL	Login shell" \
     "\n	-G GRP		Add user to existing group" \
     "\n	-S		Create a system user" \
     "\n	-D		Don't assign a password" \
     "\n	-H		Don't create home directory" \
     "\n	-u UID		User id" \
n#define chpasswd_trivial_usage \
n	IF_LONG_OPTS("[--md5|--encrypted]") IF_NOT_LONG_OPTS("[-m|-e]") \
n#define chpasswd_full_usage "\n\n" \
       "Read user:password from stdin and update /etc/passwd\n" \
n	IF_LONG_OPTS( \
     "\n	-e,--encrypted	Supplied passwords are in encrypted form" \
     "\n	-m,--md5	Use MD5 encryption instead of DES" \
n	) \
n	IF_NOT_LONG_OPTS( \
     "\n	-e	Supplied passwords are in encrypted form" \
     "\n	-m	Use MD5 encryption instead of DES" \
n	) \
n#define cryptpw_trivial_usage \
       "[OPTIONS] [PASSWORD] [SALT]" \
n#define cryptpw_full_usage "\n\n" \
       "Crypt PASSWORD using crypt(3)\n" \
n	IF_LONG_OPTS( \
     "\n	-P,--password-fd=N	Read password from fd N" \
     "\n	-m,--method=TYPE	Encryption method" \
     "\n	-S,--salt=SALT" \
n	) \
n	IF_NOT_LONG_OPTS( \
     "\n	-P N	Read password from fd N" \
     "\n	-m TYPE	Encryption method TYPE" \
     "\n	-S SALT" \
n	) \
n#define mkpasswd_trivial_usage \
       "[OPTIONS] [PASSWORD] [SALT]" \
n#define mkpasswd_full_usage "\n\n" \
       "Crypt PASSWORD using crypt(3)\n" \
n	IF_LONG_OPTS( \
     "\n	-P,--password-fd=N	Read password from fd N" \
     "\n	-m,--method=TYPE	Encryption method" \
     "\n	-S,--salt=SALT" \
n	) \
n	IF_NOT_LONG_OPTS( \
     "\n	-P N	Read password from fd N" \
     "\n	-m TYPE	Encryption method TYPE" \
     "\n	-S SALT" \
n	) \
n#define deluser_trivial_usage \
       "USER" \
n#define deluser_full_usage "\n\n" \
       "Delete USER from the system" \
n#define delgroup_trivial_usage \
n	IF_FEATURE_DEL_USER_FROM_GROUP("[USER] ")"GROUP" \
n#define delgroup_full_usage "\n\n" \
       "Delete group GROUP from the system" \
n	IF_FEATURE_DEL_USER_FROM_GROUP(" or user USER from group GROUP") \
n#define getty_trivial_usage \
       "[OPTIONS] BAUD_RATE[,BAUD_RATE]... TTY [TERMTYPE]" \
n#define getty_full_usage "\n\n" \
       "Open TTY, prompt for login name, then invoke /bin/login\n" \
     "\n	-h		Enable hardware RTS/CTS flow control" \
     "\n	-L		Set CLOCAL (ignore Carrier Detect state)" \
     "\n	-m		Get baud rate from modem's CONNECT status message" \
     "\n	-n		Don't prompt for login name" \
     "\n	-w		Wait for CR or LF before sending /etc/issue" \
     "\n	-i		Don't display /etc/issue" \
     "\n	-f ISSUE_FILE	Display ISSUE_FILE instead of /etc/issue" \
     "\n	-l LOGIN	Invoke LOGIN instead of /bin/login" \
     "\n	-t SEC		Terminate after SEC if no login name is read" \
     "\n	-I INITSTR	Send INITSTR before anything else" \
     "\n	-H HOST		Log HOST into the utmp file as the hostname" \
     "\n" \
     "\nBAUD_RATE of 0 leaves it unchanged" \
n#define login_trivial_usage \
       "[-p] [-h HOST] [[-f] USER]" \
n#define login_full_usage "\n\n" \
       "Begin a new session on the system\n" \
     "\n	-f	Don't authenticate (user already authenticated)" \
     "\n	-h	Name of the remote host" \
     "\n	-p	Preserve environment" \
n#define passwd_trivial_usage \
       "[OPTIONS] [USER]" \
n#define passwd_full_usage "\n\n" \
       "Change USER's password (default: current user)" \
     "\n" \
     "\n	-a ALG	Encryption method" \
     "\n	-d	Set password to ''" \
     "\n	-l	Lock (disable) account" \
     "\n	-u	Unlock (enable) account" \
n#define su_trivial_usage \
       "[OPTIONS] [-] [USER]" \
n#define su_full_usage "\n\n" \
       "Run shell under USER (by default, root)\n" \
     "\n	-,-l	Clear environment, run shell as login shell" \
     "\n	-p,-m	Do not set new $HOME, $SHELL, $USER, $LOGNAME" \
     "\n	-c CMD	Command to pass to 'sh -c'" \
     "\n	-s SH	Shell to use instead of user's default" \
n#define sulogin_trivial_usage \
       "[-t N] [TTY]" \
n#define sulogin_full_usage "\n\n" \
       "Single user login\n" \
     "\n	-t N	Timeout" \
n#define vlock_trivial_usage \
       "[-a]" \
n#define vlock_full_usage "\n\n" \
       "Lock a virtual terminal. A password is required to unlock.\n" \
     "\n	-a	Lock all VTs" \
n#define makemime_trivial_usage \
       "[OPTIONS] [FILE]..." \
n#define makemime_full_usage "\n\n" \
       "Create multipart MIME-encoded message from FILEs\n" \
     "\n	-o FILE	Output. Default: stdout" \
     "\n	-a HDR	Add header(s). Examples:" \
     "\n		\"From: user@host.org\", \"Date: `date -R`\"" \
     "\n	-c CT	Content type. Default: application/octet-stream" \
     "\n	-C CS	Charset. Default: " CONFIG_FEATURE_MIME_CHARSET \
     "\n" \
     "\nOther options are silently ignored" \
n#define popmaildir_trivial_usage \
       "[OPTIONS] MAILDIR [CONN_HELPER ARGS]" \
n#define popmaildir_full_usage "\n\n" \
       "Fetch content of remote mailbox to local maildir\n" \
     "\n	-s		Skip authorization" \
     "\n	-T		Get messages with TOP instead of RETR" \
     "\n	-k		Keep retrieved messages on the server" \
     "\n	-t SEC		Network timeout" \
n	IF_FEATURE_POPMAILDIR_DELIVERY( \
     "\n	-F \"PROG ARGS\"	Filter program (may be repeated)" \
     "\n	-M \"PROG ARGS\"	Delivery program" \
n	) \
     "\n" \
     "\nFetch from plain POP3 server:" \
     "\npopmaildir -k DIR nc pop3.server.com 110 <user_and_pass.txt" \
     "\nFetch from SSLed POP3 server and delete fetched emails:" \
     "\npopmaildir DIR -- openssl s_client -quiet -connect pop3.server.com:995 <user_and_pass.txt" \
n#define popmaildir_example_usage \
       "$ popmaildir -k ~/Maildir -- nc pop.drvv.ru 110 [<password_file]\n" \
       "$ popmaildir ~/Maildir -- openssl s_client -quiet -connect pop.gmail.com:995 [<password_file]\n" \
n#define reformime_trivial_usage \
       "[OPTIONS]" \
n#define reformime_full_usage "\n\n" \
       "Parse MIME-encoded message on stdin\n" \
     "\n	-x PREFIX	Extract content of MIME sections to files" \
     "\n	-X PROG ARGS	Filter content of MIME sections through PROG" \
     "\n			Must be the last option" \
     "\n" \
     "\nOther options are silently ignored" \
n#define sendmail_trivial_usage \
       "[OPTIONS] [RECIPIENT_EMAIL]..." \
n#define sendmail_full_usage "\n\n" \
       "Read email from stdin and send it\n" \
     "\nStandard options:" \
     "\n	-t		Read additional recipients from message body" \
     "\n	-f SENDER	Sender (required)" \
     "\n	-o OPTIONS	Various options. -oi implied, others are ignored" \
     "\n	-i		-oi synonym. implied and ignored" \
     "\n" \
     "\nBusybox specific options:" \
     "\n	-v		Verbose" \
     "\n	-w SECS		Network timeout" \
     "\n	-H 'PROG ARGS'	Run connection helper" \
     "\n			Examples:" \
     "\n			-H 'exec openssl s_client -quiet -tls1 -starttls smtp" \
     "\n				-connect smtp.gmail.com:25' <email.txt" \
     "\n				[4<username_and_passwd.txt | -auUSER -apPASS]" \
     "\n			-H 'exec openssl s_client -quiet -tls1" \
     "\n				-connect smtp.gmail.com:465' <email.txt" \
     "\n				[4<username_and_passwd.txt | -auUSER -apPASS]" \
     "\n	-S HOST[:PORT]	Server" \
     "\n	-auUSER		Username for AUTH LOGIN" \
     "\n	-apPASS 	Password for AUTH LOGIN" \
     "\n" \
     "\nOther options are silently ignored; -oi -t is implied" \
n	IF_MAKEMIME( \
     "\nUse makemime to create emails with attachments" \
n	) \
n#define adjtimex_trivial_usage \
       "[-q] [-o OFF] [-f FREQ] [-p TCONST] [-t TICK]" \
n#define adjtimex_full_usage "\n\n" \
       "Read and optionally set system timebase parameters. See adjtimex(2)\n" \
     "\n	-q	Quiet" \
     "\n	-o OFF	Time offset, microseconds" \
     "\n	-f FREQ	Frequency adjust, integer kernel units (65536 is 1ppm)" \
     "\n		(positive values make clock run faster)" \
     "\n	-t TICK	Microseconds per tick, usually 10000" \
     "\n	-p TCONST" \
n#define bbconfig_trivial_usage \
       "" \
n#define bbconfig_full_usage "\n\n" \
       "Print the config file used by busybox build" \
n#define beep_trivial_usage \
       "-f FREQ -l LEN -d DELAY -r COUNT -n" \
n#define beep_full_usage "\n\n" \
       "	-f	Frequency in Hz" \
     "\n	-l	Length in ms" \
     "\n	-d	Delay in ms" \
     "\n	-r	Repetitions" \
     "\n	-n	Start new tone" \
n#define chat_trivial_usage \
       "EXPECT [SEND [EXPECT [SEND...]]]" \
n#define chat_full_usage "\n\n" \
       "Useful for interacting with a modem connected to stdin/stdout.\n" \
       "A script consists of one or more \"expect-send\" pairs of strings,\n" \
       "each pair is a pair of arguments. Example:\n" \
       "chat '' ATZ OK ATD123456 CONNECT '' ogin: pppuser word: ppppass '~'" \
n#define chrt_trivial_usage \
       "[-prfom] [PRIO] [PID | PROG ARGS]" \
n#define chrt_full_usage "\n\n" \
       "Change scheduling priority and class for a process\n" \
     "\n	-p	Operate on PID" \
     "\n	-r	Set SCHED_RR class" \
     "\n	-f	Set SCHED_FIFO class" \
     "\n	-o	Set SCHED_OTHER class" \
     "\n	-m	Show min/max priorities" \
n#define chrt_example_usage \
       "$ chrt -r 4 sleep 900; x=$!\n" \
       "$ chrt -f -p 3 $x\n" \
       "You need CAP_SYS_NICE privileges to set scheduling attributes of a process" \
n#define conspy_trivial_usage \
n	"[-vcsndfFQ] [-x COL] [-y LINE] [CONSOLE_NO]" \
n#define conspy_full_usage "\n\n" \
     "A text-mode VNC like program for Linux virtual consoles." \
     "\nTo exit, quickly press ESC 3 times." \
     "\n" \
     "\n	-v	Don't send keystrokes to the console" \
     "\n	-c	Create missing /dev/{tty,vcsa}N" \
     "\n	-s	Open a SHELL session" \
     "\n	-n	Black & white" \
     "\n	-d	Dump console to stdout" \
     "\n	-f	Follow cursor" \
     "\n	-F	Assume console is on a framebuffer device" \
     "\n	-Q	Disable exit on ESC-ESC-ESC" \
     "\n	-x COL	Starting column" \
     "\n	-y LINE	Starting line" \
n#define crond_trivial_usage \
       "-fbS -l N " IF_FEATURE_CROND_D("-d N ") "-L LOGFILE -c DIR" \
n#define crond_full_usage "\n\n" \
       "	-f	Foreground" \
     "\n	-b	Background (default)" \
     "\n	-S	Log to syslog (default)" \
     "\n	-l	Set log level. 0 is the most verbose, default 8" \
n	IF_FEATURE_CROND_D( \
     "\n	-d	Set log level, log to stderr" \
n	) \
     "\n	-L	Log to file" \
     "\n	-c	Working dir" \
n#define crontab_trivial_usage \
       "[-c DIR] [-u USER] [-ler]|[FILE]" \
n#define crontab_full_usage "\n\n" \
       "	-c	Crontab directory" \
     "\n	-u	User" \
     "\n	-l	List crontab" \
     "\n	-e	Edit crontab" \
     "\n	-r	Delete crontab" \
     "\n	FILE	Replace crontab by FILE ('-': stdin)" \
n#define dc_trivial_usage \
       "EXPRESSION..." \
n#define dc_full_usage "\n\n" \
       "Tiny RPN calculator. Operations:\n" \
       "+, add, -, sub, *, mul, /, div, %, mod, "IF_FEATURE_DC_LIBM("**, exp, ")"and, or, not, xor,\n" \
       "p - print top of the stack (without popping),\n" \
       "f - print entire stack,\n" \
       "o - pop the value and set output radix (must be 10, 16, 8 or 2).\n" \
       "Examples: 'dc 2 2 add p' -> 4, 'dc 8 8 mul 2 2 + / p' -> 16" \
n#define dc_example_usage \
       "$ dc 2 2 + p\n" \
       "4\n" \
       "$ dc 8 8 \\* 2 2 + / p\n" \
       "16\n" \
       "$ dc 0 1 and p\n" \
       "0\n" \
       "$ dc 0 1 or p\n" \
       "1\n" \
       "$ echo 72 9 div 8 mul p | dc\n" \
       "64\n" \
n#define devfsd_trivial_usage \
       "mntpnt [-v]" IF_DEVFSD_FG_NP("[-fg][-np]") \
n#define devfsd_full_usage "\n\n" \
       "Manage devfs permissions and old device name symlinks\n" \
     "\n	mntpnt	The mount point where devfs is mounted" \
     "\n	-v	Print the protocol version numbers for devfsd" \
     "\n		and the kernel-side protocol version and exit" \
n	IF_DEVFSD_FG_NP( \
     "\n	-fg	Run in foreground" \
     "\n	-np	Exit after parsing the configuration file" \
     "\n		and processing synthetic REGISTER events," \
     "\n		don't poll for events" \
n	) \
n#define devmem_trivial_usage \
n	"ADDRESS [WIDTH [VALUE]]" \
n#define devmem_full_usage "\n\n" \
       "Read/write from physical address\n" \
     "\n	ADDRESS	Address to act upon" \
     "\n	WIDTH	Width (8/16/...)" \
     "\n	VALUE	Data to be written" \
n#define eject_trivial_usage \
       "[-t] [-T] [DEVICE]" \
n#define eject_full_usage "\n\n" \
       "Eject DEVICE or default /dev/cdrom\n" \
n	IF_FEATURE_EJECT_SCSI( \
     "\n	-s	SCSI device" \
n	) \
     "\n	-t	Close tray" \
     "\n	-T	Open/close tray (toggle)" \
n#define fbsplash_trivial_usage \
       "-s IMGFILE [-c] [-d DEV] [-i INIFILE] [-f CMD]" \
n#define fbsplash_full_usage "\n\n" \
       "	-s	Image" \
     "\n	-c	Hide cursor" \
     "\n	-d	Framebuffer device (default /dev/fb0)" \
     "\n	-i	Config file (var=value):" \
     "\n			BAR_LEFT,BAR_TOP,BAR_WIDTH,BAR_HEIGHT" \
     "\n			BAR_R,BAR_G,BAR_B" \
     "\n	-f	Control pipe (else exit after drawing image)" \
     "\n			commands: 'NN' (% for progress bar) or 'exit'" \
n#define flash_eraseall_trivial_usage \
       "[-jNq] MTD_DEVICE" \
n#define flash_eraseall_full_usage "\n\n" \
       "Erase an MTD device\n" \
     "\n	-j	Format the device for jffs2" \
     "\n	-N	Don't skip bad blocks" \
     "\n	-q	Don't display progress messages" \
n#define flash_lock_trivial_usage \
       "MTD_DEVICE OFFSET SECTORS" \
n#define flash_lock_full_usage "\n\n" \
       "Lock part or all of an MTD device. If SECTORS is -1, then all sectors\n" \
       "will be locked, regardless of the value of OFFSET" \
n#define flash_unlock_trivial_usage \
       "MTD_DEVICE" \
n#define flash_unlock_full_usage "\n\n" \
       "Unlock an MTD device" \
n#define flashcp_trivial_usage \
       "-v FILE MTD_DEVICE" \
n#define flashcp_full_usage "\n\n" \
       "Copy an image to MTD device\n" \
     "\n	-v	Verbose" \
n#define hdparm_trivial_usage \
       "[OPTIONS] [DEVICE]" \
n#define hdparm_full_usage "\n\n" \
       "	-a	Get/set fs readahead" \
     "\n	-A	Set drive read-lookahead flag (0/1)" \
     "\n	-b	Get/set bus state (0 == off, 1 == on, 2 == tristate)" \
     "\n	-B	Set Advanced Power Management setting (1-255)" \
     "\n	-c	Get/set IDE 32-bit IO setting" \
     "\n	-C	Check IDE power mode status" \
n	IF_FEATURE_HDPARM_HDIO_GETSET_DMA( \
     "\n	-d	Get/set using_dma flag") \
     "\n	-D	Enable/disable drive defect-mgmt" \
     "\n	-f	Flush buffer cache for device on exit" \
     "\n	-g	Display drive geometry" \
     "\n	-h	Display terse usage information" \
n	IF_FEATURE_HDPARM_GET_IDENTITY( \
     "\n	-i	Display drive identification") \
n	IF_FEATURE_HDPARM_GET_IDENTITY( \
     "\n	-I	Detailed/current information directly from drive") \
     "\n	-k	Get/set keep_settings_over_reset flag (0/1)" \
     "\n	-K	Set drive keep_features_over_reset flag (0/1)" \
     "\n	-L	Set drive doorlock (0/1) (removable harddisks only)" \
     "\n	-m	Get/set multiple sector count" \
     "\n	-n	Get/set ignore-write-errors flag (0/1)" \
     "\n	-p	Set PIO mode on IDE interface chipset (0,1,2,3,4,...)" \
     "\n	-P	Set drive prefetch count" \
     "\n	-Q	Get/set DMA tagged-queuing depth (if supported)" \
     "\n	-r	Get/set readonly flag (DANGEROUS to set)" \
n	IF_FEATURE_HDPARM_HDIO_SCAN_HWIF( \
     "\n	-R	Register an IDE interface (DANGEROUS)") \
     "\n	-S	Set standby (spindown) timeout" \
     "\n	-t	Perform device read timings" \
     "\n	-T	Perform cache read timings" \
     "\n	-u	Get/set unmaskirq flag (0/1)" \
n	IF_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF( \
     "\n	-U	Unregister an IDE interface (DANGEROUS)") \
     "\n	-v	Defaults; same as -mcudkrag for IDE drives" \
     "\n	-V	Display program version and exit immediately" \
n	IF_FEATURE_HDPARM_HDIO_DRIVE_RESET( \
     "\n	-w	Perform device reset (DANGEROUS)") \
     "\n	-W	Set drive write-caching flag (0/1) (DANGEROUS)" \
n	IF_FEATURE_HDPARM_HDIO_TRISTATE_HWIF( \
     "\n	-x	Tristate device for hotswap (0/1) (DANGEROUS)") \
     "\n	-X	Set IDE xfer mode (DANGEROUS)" \
     "\n	-y	Put IDE drive in standby mode" \
     "\n	-Y	Put IDE drive to sleep" \
     "\n	-Z	Disable Seagate auto-powersaving mode" \
     "\n	-z	Reread partition table" \
n#define inotifyd_trivial_usage \
n	"PROG FILE1[:MASK]..." \
n#define inotifyd_full_usage "\n\n" \
       "Run PROG on filesystem changes." \
     "\nWhen a filesystem event matching MASK occurs on FILEn," \
     "\nPROG ACTUAL_EVENTS FILEn [SUBFILE] is run." \
     "\nIf PROG is -, events are sent to stdout." \
     "\nEvents:" \
     "\n	a	File is accessed" \
     "\n	c	File is modified" \
     "\n	e	Metadata changed" \
     "\n	w	Writable file is closed" \
     "\n	0	Unwritable file is closed" \
     "\n	r	File is opened" \
     "\n	D	File is deleted" \
     "\n	M	File is moved" \
     "\n	u	Backing fs is unmounted" \
     "\n	o	Event queue overflowed" \
     "\n	x	File can't be watched anymore" \
     "\nIf watching a directory:" \
     "\n	m	Subfile is moved into dir" \
     "\n	y	Subfile is moved out of dir" \
     "\n	n	Subfile is created" \
     "\n	d	Subfile is deleted" \
     "\n" \
     "\ninotifyd waits for PROG to exit." \
     "\nWhen x event happens for all FILEs, inotifyd exits." \
n#define ionice_trivial_usage \
n	"[-c 1-3] [-n 0-7] [-p PID] [PROG]" \
n#define ionice_full_usage "\n\n" \
       "Change I/O priority and class\n" \
     "\n	-c	Class. 1:realtime 2:best-effort 3:idle" \
     "\n	-n	Priority" \
n#define last_trivial_usage \
       ""IF_FEATURE_LAST_FANCY("[-HW] [-f FILE]") \
n#define last_full_usage "\n\n" \
       "Show listing of the last users that logged into the system" \
n	IF_FEATURE_LAST_FANCY( "\n" \
     "\n	-W	Display with no host column truncation" \
     "\n	-f FILE Read from FILE instead of /var/log/wtmp" \
n	) \
n#define less_trivial_usage \
       "[-E" IF_FEATURE_LESS_FLAGS("Mm") "Nh~I?] [FILE]..." \
n#define less_full_usage "\n\n" \
       "View FILE (or stdin) one screenful at a time\n" \
     "\n	-E	Quit once the end of a file is reached" \
n	IF_FEATURE_LESS_FLAGS( \
     "\n	-M,-m	Display status line with line numbers" \
     "\n		and percentage through the file" \
n	) \
     "\n	-N	Prefix line number to each line" \
     "\n	-I	Ignore case in all searches" \
     "\n	-~	Suppress ~s displayed past EOF" \
n#if ENABLE_FEATURE_MAKEDEVS_LEAF \
n#define makedevs_trivial_usage \
       "NAME TYPE MAJOR MINOR FIRST LAST [s]" \
n#define makedevs_full_usage "\n\n" \
       "Create a range of block or character special files" \
     "\n" \
     "\nTYPE is:" \
     "\n	b	Block device" \
     "\n	c	Character device" \
     "\n	f	FIFO, MAJOR and MINOR are ignored" \
     "\n" \
     "\nFIRST..LAST specify numbers appended to NAME." \
     "\nIf 's' is the last argument, the base device is created as well." \
     "\n" \
     "\nExamples:" \
     "\n	makedevs /dev/ttyS c 4 66 2 63   ->  ttyS2-ttyS63" \
     "\n	makedevs /dev/hda b 3 0 0 8 s    ->  hda,hda1-hda8" \
n#define makedevs_example_usage \
       "# makedevs /dev/ttyS c 4 66 2 63\n" \
       "[creates ttyS2-ttyS63]\n" \
       "# makedevs /dev/hda b 3 0 0 8 s\n" \
       "[creates hda,hda1-hda8]\n" \
n#endif \
n#if ENABLE_FEATURE_MAKEDEVS_TABLE \
n#define makedevs_trivial_usage \
       "[-d device_table] rootdir" \
n#define makedevs_full_usage "\n\n" \
       "Create a range of special files as specified in a device table.\n" \
       "Device table entries take the form of:\n" \
       "<name> <type> <mode> <uid> <gid> <major> <minor> <start> <inc> <count>\n" \
       "Where name is the file name, type can be one of:\n" \
       "	f	Regular file\n" \
       "	d	Directory\n" \
       "	c	Character device\n" \
       "	b	Block device\n" \
       "	p	Fifo (named pipe)\n" \
       "uid is the user id for the target file, gid is the group id for the\n" \
       "target file. The rest of the entries (major, minor, etc) apply to\n" \
       "to device special files. A '-' may be used for blank entries." \
n#define makedevs_example_usage \
       "For example:\n" \
       "<name>    <type> <mode><uid><gid><major><minor><start><inc><count>\n" \
       "/dev         d   755    0    0    -      -      -      -    -\n" \
       "/dev/console c   666    0    0    5      1      -      -    -\n" \
       "/dev/null    c   666    0    0    1      3      0      0    -\n" \
       "/dev/zero    c   666    0    0    1      5      0      0    -\n" \
       "/dev/hda     b   640    0    0    3      0      0      0    -\n" \
       "/dev/hda     b   640    0    0    3      1      1      1    15\n\n" \
       "Will Produce:\n" \
       "/dev\n" \
       "/dev/console\n" \
       "/dev/null\n" \
       "/dev/zero\n" \
       "/dev/hda\n" \
       "/dev/hda[0-15]\n" \
n#endif \
n#define man_trivial_usage \
       "[-aw] [MANPAGE]..." \
n#define man_full_usage "\n\n" \
       "Format and display manual page\n" \
     "\n	-a	Display all pages" \
     "\n	-w	Show page locations" \
n#define microcom_trivial_usage \
       "[-d DELAY] [-t TIMEOUT] [-s SPEED] [-X] TTY" \
n#define microcom_full_usage "\n\n" \
       "Copy bytes for stdin to TTY and from TTY to stdout\n" \
     "\n	-d	Wait up to DELAY ms for TTY output before sending every" \
     "\n		next byte to it" \
     "\n	-t	Exit if both stdin and TTY are silent for TIMEOUT ms" \
     "\n	-s	Set serial line to SPEED" \
     "\n	-X	Disable special meaning of NUL and Ctrl-X from stdin" \
n#define mountpoint_trivial_usage \
       "[-q] <[-dn] DIR | -x DEVICE>" \
n#define mountpoint_full_usage "\n\n" \
       "Check if the directory is a mountpoint\n" \
     "\n	-q	Quiet" \
     "\n	-d	Print major/minor device number of the filesystem" \
     "\n	-n	Print device name of the filesystem" \
     "\n	-x	Print major/minor device number of the blockdevice" \
n#define mountpoint_example_usage \
       "$ mountpoint /proc\n" \
       "/proc is not a mountpoint\n" \
       "$ mountpoint /sys\n" \
       "/sys is a mountpoint\n" \
n#define mt_trivial_usage \
       "[-f device] opcode value" \
n#define mt_full_usage "\n\n" \
       "Control magnetic tape drive operation\n" \
       "\n" \
       "Available Opcodes:\n" \
       "\n" \
       "bsf bsfm bsr bss datacompression drvbuffer eof eom erase\n" \
       "fsf fsfm fsr fss load lock mkpart nop offline ras1 ras2\n" \
       "ras3 reset retension rewind rewoffline seek setblk setdensity\n" \
       "setpart tell unload unlock weof wset" \
n#define nandwrite_trivial_usage \
n	"[-p] [-s ADDR] MTD_DEVICE [FILE]" \
n#define nandwrite_full_usage "\n\n" \
n	"Write to MTD_DEVICE\n" \
     "\n	-p	Pad to page size" \
     "\n	-s ADDR	Start address" \
n#define nanddump_trivial_usage \
n	"[-o] [-b] [-s ADDR] [-l LEN] [-f FILE] MTD_DEVICE" \
n#define nanddump_full_usage "\n\n" \
n	"Dump MTD_DEVICE\n" \
     "\n	-o	Dump oob data" \
     "\n	-b	Omit bad block from the dump" \
     "\n	-s ADDR	Start address" \
     "\n	-l LEN	Length" \
     "\n	-f FILE	Dump to file ('-' for stdout)" \
n#define raidautorun_trivial_usage \
       "DEVICE" \
n#define raidautorun_full_usage "\n\n" \
       "Tell the kernel to automatically search and start RAID arrays" \
n#define raidautorun_example_usage \
       "$ raidautorun /dev/md0" \
n#define readahead_trivial_usage \
       "[FILE]..." \
n#define readahead_full_usage "\n\n" \
       "Preload FILEs to RAM" \
n#define rfkill_trivial_usage \
       "COMMAND [INDEX|TYPE]" \
n#define rfkill_full_usage "\n\n" \
       "Enable/disable wireless devices\n" \
       "\nCommands:" \
     "\n	list [INDEX|TYPE]	List current state" \
     "\n	block INDEX|TYPE	Disable device" \
     "\n	unblock INDEX|TYPE	Enable device" \
     "\n" \
     "\n	TYPE: all, wlan(wifi), bluetooth, uwb(ultrawideband)," \
     "\n		wimax, wwan, gps, fm" \
n#define runlevel_trivial_usage \
       "[FILE]" \
n#define runlevel_full_usage "\n\n" \
       "Find the current and previous system runlevel\n" \
       "\n" \
       "If no utmp FILE exists or if no runlevel record can be found,\n" \
       "print \"unknown\"" \
n#define runlevel_example_usage \
       "$ runlevel /var/run/utmp\n" \
       "N 2" \
n#define rx_trivial_usage \
       "FILE" \
n#define rx_full_usage "\n\n" \
       "Receive a file using the xmodem protocol" \
n#define rx_example_usage \
       "$ rx /tmp/foo\n" \
n#define setserial_trivial_usage \
n	"[-gabGvzV] DEVICE [PARAMETER [ARG]]..." \
n#define setserial_full_usage "\n\n" \
n	"Request or set Linux serial port information\n" \
n	"\n" \
n	"	-g	Interpret parameters as list of devices for reporting\n" \
n	"	-a	Print all available information\n" \
n	"	-b	Print summary information\n" \
n	"	-G	Print in form which can be fed back\n" \
n	"		to setserial as command line parameters\n" \
n	"	-z	Zero out serial flags before setting\n" \
n	"	-v	Verbose\n" \
n	"\n" \
n	"Parameters: (* = takes an argument, ^ = can be turned off by preceding ^)\n" \
n	"	*port, *irq, *divisor, *uart, *baud_base, *close_delay, *closing_wait,\n" \
n	"	^fourport, ^auto_irq, ^skip_test, ^sak, ^session_lockout, ^pgrp_lockout,\n" \
n	"	^callout_nohup, ^split_termios, ^hup_notify, ^low_latency, autoconfig,\n" \
n	"	spd_normal, spd_hi, spd_vhi, spd_shi, spd_warp, spd_cust\n" \
n	"\n" \
n	"UART types:\n" \
n	"	unknown, 8250, 16450, 16550, 16550A, Cirrus, 16650, 16650V2, 16750,\n" \
n	"	16950, 16954, 16654, 16850, RSA, NS16550A, XSCALE, RM9000, OCTEON, AR7,\n" \
n	"	U6_16550A" \
n#define setsid_trivial_usage \
       "PROG ARGS" \
n#define setsid_full_usage "\n\n" \
       "Run PROG in a new session. PROG will have no controlling terminal\n" \
       "and will not be affected by keyboard signals (Ctrl-C etc).\n" \
       "See setsid(2) for details." \
n#define strings_trivial_usage \
       "[-afo] [-n LEN] [FILE]..." \
n#define strings_full_usage "\n\n" \
       "Display printable strings in a binary file\n" \
     "\n	-a	Scan whole file (default)" \
     "\n	-f	Precede strings with filenames" \
     "\n	-n LEN	At least LEN characters form a string (default 4)" \
     "\n	-o	Precede strings with decimal offsets" \
n#define taskset_trivial_usage \
       "[-p] [MASK] [PID | PROG ARGS]" \
n#define taskset_full_usage "\n\n" \
       "Set or get CPU affinity\n" \
     "\n	-p	Operate on an existing PID" \
n#define taskset_example_usage \
       "$ taskset 0x7 ./dgemm_test&\n" \
       "$ taskset -p 0x1 $!\n" \
       "pid 4790's current affinity mask: 7\n" \
       "pid 4790's new affinity mask: 1\n" \
       "$ taskset 0x7 /bin/sh -c './taskset -p 0x1 $$'\n" \
       "pid 6671's current affinity mask: 1\n" \
       "pid 6671's new affinity mask: 1\n" \
       "$ taskset -p 1\n" \
       "pid 1's current affinity mask: 3\n" \
n#define time_trivial_usage \
       "[-v] PROG ARGS" \
n#define time_full_usage "\n\n" \
       "Run PROG, display resource usage when it exits\n" \
     "\n	-v	Verbose" \
n#define timeout_trivial_usage \
       "[-t SECS] [-s SIG] PROG ARGS" \
n#define timeout_full_usage "\n\n" \
       "Runs PROG. Sends SIG to it if it is not gone in SECS seconds.\n" \
       "Defaults: SECS: 10, SIG: TERM." \
n#define ttysize_trivial_usage \
       "[w] [h]" \
n#define ttysize_full_usage "\n\n" \
       "Print dimension(s) of stdin's terminal, on error return 80x25" \
n#define ubiattach_trivial_usage \
       "-m MTD_NUM [-d UBI_NUM] UBI_CTRL_DEV" \
n#define ubiattach_full_usage "\n\n" \
       "Attach MTD device to UBI\n" \
     "\n	-m MTD_NUM	MTD device number to attach" \
     "\n	-d UBI_NUM	UBI device number to assign" \
n#define ubidetach_trivial_usage \
       "-d UBI_NUM UBI_CTRL_DEV" \
n#define ubidetach_full_usage "\n\n" \
       "Detach MTD device from UBI\n" \
     "\n	-d UBI_NUM	UBI device number" \
n#define ubimkvol_trivial_usage \
       "UBI_DEVICE -N NAME [-s SIZE | -m]" \
n#define ubimkvol_full_usage "\n\n" \
       "Create UBI volume\n" \
     "\n	-a ALIGNMENT	Volume alignment (default 1)" \
     "\n	-m		Set volume size to maximum available" \
     "\n	-n VOLID	Volume ID. If not specified," \
     "\n			assigned automatically" \
     "\n	-N NAME		Volume name" \
     "\n	-s SIZE		Size in bytes" \
     "\n	-t TYPE		Volume type (static|dynamic)" \
n#define ubirmvol_trivial_usage \
       "UBI_DEVICE -n VOLID" \
n#define ubirmvol_full_usage "\n\n" \
       "Remove UBI volume\n" \
     "\n	-n VOLID	Volume ID" \
n#define ubirsvol_trivial_usage \
       "UBI_DEVICE -n VOLID -s SIZE" \
n#define ubirsvol_full_usage "\n\n" \
       "Resize UBI volume\n" \
     "\n	-n VOLID	Volume ID" \
     "\n	-s SIZE		Size in bytes" \
n#define ubiupdatevol_trivial_usage \
       "UBI_DEVICE [-t | [-s SIZE] IMG_FILE]" \
n#define ubiupdatevol_full_usage "\n\n" \
       "Update UBI volume\n" \
     "\n	-t	Truncate to zero size" \
     "\n	-s SIZE	Size in bytes to resize to" \
n#define volname_trivial_usage \
       "[DEVICE]" \
n#define volname_full_usage "\n\n" \
       "Show CD volume name of the DEVICE (default /dev/cdrom)" \
n#define wall_trivial_usage \
n	"[FILE]" \
n#define wall_full_usage "\n\n" \
n	"Write content of FILE or stdin to all logged-in users" \
n#define wall_sample_usage \
n	"echo foo | wall\n" \
n	"wall ./mymessage" \
n#define watchdog_trivial_usage \
       "[-t N[ms]] [-T N[ms]] [-F] DEV" \
n#define watchdog_full_usage "\n\n" \
       "Periodically write to watchdog device DEV\n" \
     "\n	-T N	Reboot after N seconds if not reset (default 60)" \
     "\n	-t N	Reset every N seconds (default 30)" \
     "\n	-F	Run in foreground" \
     "\n" \
     "\nUse 500ms to specify period in milliseconds" \
n#if !ENABLE_MODPROBE_SMALL \
n#define depmod_trivial_usage "[-n] [-b BASE] [VERSION] [MODFILES]..." \
n#define depmod_full_usage "\n\n" \
       "Generate modules.dep, alias, and symbols files" \
     "\n" \
     "\n	-b BASE	Use BASE/lib/modules/VERSION" \
     "\n	-n	Dry run: print files to stdout" \
n#endif \
n#if !ENABLE_MODPROBE_SMALL \
n#define insmod_trivial_usage \
n	IF_FEATURE_2_4_MODULES("[OPTIONS] MODULE ") \
n	IF_NOT_FEATURE_2_4_MODULES("FILE ") \
n	"[SYMBOL=VALUE]..." \
n#define insmod_full_usage "\n\n" \
       "Load the specified kernel modules into the kernel" \
n	IF_FEATURE_2_4_MODULES( "\n" \
     "\n	-f	Force module to load into the wrong kernel version" \
     "\n	-k	Make module autoclean-able" \
     "\n	-v	Verbose" \
     "\n	-q	Quiet" \
     "\n	-L	Lock: prevent simultaneous loads" \
n	IF_FEATURE_INSMOD_LOAD_MAP( \
     "\n	-m	Output load map to stdout" \
n	) \
     "\n	-x	Don't export externs" \
n	) \
n#endif \
n#if !ENABLE_MODPROBE_SMALL \
n#define lsmod_trivial_usage \
       "" \
n#define lsmod_full_usage "\n\n" \
       "List the currently loaded kernel modules" \
n#endif \
n#define modinfo_trivial_usage \
       "[-adlp0] [-F keyword] MODULE" \
n#define modinfo_full_usage "\n\n" \
       "	-a		Shortcut for '-F author'" \
     "\n	-d		Shortcut for '-F description'" \
     "\n	-l		Shortcut for '-F license'" \
     "\n	-p		Shortcut for '-F parm'" \
     "\n	-F keyword	Keyword to look for" \
     "\n	-0		Separate output with NULs" \
n#define modinfo_example_usage \
       "$ modinfo -F vermagic loop\n" \
n#if ENABLE_MODPROBE_SMALL \
n#define depmod_trivial_usage NOUSAGE_STR \
n#define depmod_full_usage "" \
n#define lsmod_trivial_usage \
       "" \
n#define lsmod_full_usage "\n\n" \
       "List the currently loaded kernel modules" \
n#define insmod_trivial_usage \
n	IF_FEATURE_2_4_MODULES("[OPTIONS] MODULE ") \
n	IF_NOT_FEATURE_2_4_MODULES("FILE ") \
n	"[SYMBOL=VALUE]..." \
n#define insmod_full_usage "\n\n" \
       "Load the specified kernel modules into the kernel" \
n	IF_FEATURE_2_4_MODULES( "\n" \
     "\n	-f	Force module to load into the wrong kernel version" \
     "\n	-k	Make module autoclean-able" \
     "\n	-v	Verbose" \
     "\n	-q	Quiet" \
     "\n	-L	Lock: prevent simultaneous loads" \
n	IF_FEATURE_INSMOD_LOAD_MAP( \
     "\n	-m	Output load map to stdout" \
n	) \
     "\n	-x	Don't export externs" \
n	) \
n#define rmmod_trivial_usage \
       "[-wfa] [MODULE]..." \
n#define rmmod_full_usage "\n\n" \
       "Unload kernel modules\n" \
     "\n	-w	Wait until the module is no longer used" \
     "\n	-f	Force unload" \
     "\n	-a	Remove all unused modules (recursively)" \
n#define rmmod_example_usage \
       "$ rmmod tulip\n" \
n#define modprobe_trivial_usage \
n	"[-qfwrsv] MODULE [symbol=value]..." \
n#define modprobe_full_usage "\n\n" \
       "	-r	Remove MODULE (stacks) or do autoclean" \
     "\n	-q	Quiet" \
     "\n	-v	Verbose" \
     "\n	-f	Force" \
     "\n	-w	Wait for unload" \
     "\n	-s	Report via syslog instead of stderr" \
n#endif \
n#if !ENABLE_MODPROBE_SMALL \
n#define modprobe_notes_usage \
n	"modprobe can (un)load a stack of modules, passing each module options (when\n" \
n	"loading). modprobe uses a configuration file to determine what option(s) to\n" \
n	"pass each module it loads.\n" \
n	"\n" \
n	"The configuration file is searched (in this order):\n" \
n	"\n" \
n	"    /etc/modprobe.conf (2.6 only)\n" \
n	"    /etc/modules.conf\n" \
n	"    /etc/conf.modules (deprecated)\n" \
n	"\n" \
n	"They all have the same syntax (see below). If none is present, it is\n" \
n	"_not_ an error; each loaded module is then expected to load without\n" \
n	"options. Once a file is found, the others are tested for.\n" \
n	"\n" \
n	"/etc/modules.conf entry format:\n" \
n	"\n" \
n	"  alias <alias_name> <mod_name>\n" \
n	"    Makes it possible to modprobe alias_name, when there is no such module.\n" \
n	"    It makes sense if your mod_name is long, or you want a more representative\n" \
n	"    name for that module (eg. 'scsi' in place of 'aha7xxx').\n" \
n	"    This makes it also possible to use a different set of options (below) for\n" \
n	"    the module and the alias.\n" \
n	"    A module can be aliased more than once.\n" \
n	"\n" \
n	"  options <mod_name|alias_name> <symbol=value...>\n" \
n	"    When loading module mod_name (or the module aliased by alias_name), pass\n" \
n	"    the \"symbol=value\" pairs as option to that module.\n" \
n	"\n" \
n	"Sample /etc/modules.conf file:\n" \
n	"\n" \
n	"  options tulip irq=3\n" \
n	"  alias tulip tulip2\n" \
n	"  options tulip2 irq=4 io=0x308\n" \
n	"\n" \
n	"Other functionality offered by 'classic' modprobe is not available in\n" \
n	"this implementation.\n" \
n	"\n" \
n	"If module options are present both in the config file, and on the command line,\n" \
n	"then the options from the command line will be passed to the module _after_\n" \
n	"the options from the config file. That way, you can have defaults in the config\n" \
n	"file, and override them for a specific usage from the command line.\n" \
n#define modprobe_example_usage \
       "(with the above /etc/modules.conf):\n\n" \
       "$ modprobe tulip\n" \
       "   will load the module 'tulip' with default option 'irq=3'\n\n" \
       "$ modprobe tulip irq=5\n" \
       "   will load the module 'tulip' with option 'irq=5', thus overriding the default\n\n" \
       "$ modprobe tulip2\n" \
       "   will load the module 'tulip' with default options 'irq=4 io=0x308',\n" \
       "   which are the default for alias 'tulip2'\n\n" \
       "$ modprobe tulip2 irq=8\n" \
       "   will load the module 'tulip' with default options 'irq=4 io=0x308 irq=8',\n" \
       "   which are the default for alias 'tulip2' overridden by the option 'irq=8'\n\n" \
       "   from the command line\n\n" \
       "$ modprobe tulip2 irq=2 io=0x210\n" \
       "   will load the module 'tulip' with default options 'irq=4 io=0x308 irq=4 io=0x210',\n" \
       "   which are the default for alias 'tulip2' overridden by the options 'irq=2 io=0x210'\n\n" \
       "   from the command line\n" \
n#define modprobe_trivial_usage \
n	"[-alrqvsD" IF_FEATURE_MODPROBE_BLACKLIST("b") "]" \
n	" MODULE [symbol=value]..." \
n#define modprobe_full_usage "\n\n" \
       "	-a	Load multiple MODULEs" \
     "\n	-l	List (MODULE is a pattern)" \
     "\n	-r	Remove MODULE (stacks) or do autoclean" \
     "\n	-q	Quiet" \
     "\n	-v	Verbose" \
     "\n	-s	Log to syslog" \
     "\n	-D	Show dependencies" \
n	IF_FEATURE_MODPROBE_BLACKLIST( \
     "\n	-b	Apply blacklist to module names too" \
n	) \
n#endif /* !ENABLE_MODPROBE_SMALL */ \
