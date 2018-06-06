/**
 * 2ine; an OS/2 emulator for Linux.
 *
 * Please see the file LICENSE.txt in the source's root directory.
 */

/* THIS FILE IS AUTOGENERATED. DO NOT EDIT BY HAND. see lxapigen.pl */

/* This is glue code for OS/2 binaries. Native binaries don't need this. */
#if LX_LEGACY

LX_NATIVE_MODULE_INIT()
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_accept, "accept", 1),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_bind, "bind", 2),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_connect, "connect", 3),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_getsockname, "getsockname", 6),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_recv, "recv", 10),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_os2_select, "os2_select", 12),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_send, "send", 13),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_setsockopt, "setsockopt", 15),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_socket, "socket", 16),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_soclose, "soclose", 17),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_sock_errno, "sock_errno", 20),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_shutdown, "shutdown", 25),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_sock_init, "sock_init", 26),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_select, "select", 32),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_gettimeofday, "gettimeofday", 102),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_inet_addr, "inet_addr", 105),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_inet_ntoa, "inet_ntoa", 110),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_gethostbyname, "gethostbyname", 111),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_getservbyname, "getservbyname", 124),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_Raccept, "Raccept", 156),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_Rbind, "Rbind", 157),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_Rconnect, "Rconnect", 158),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_Rgetsockname, "Rgetsockname", 159),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_Rlisten, "Rlisten", 160),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_Rgethostbyname, "Rgethostbyname", 161),
    LX_NATIVE_EXPORT_DIFFERENT_NAME(OS2_htons, "htons", 205)
LX_NATIVE_MODULE_INIT_END()

#endif /* LX_LEGACY */

/* end of tcpip32-lx.h ... */
