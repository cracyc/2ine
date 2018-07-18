/**
 * 2ine; an OS/2 emulator for Linux.
 *
 * Please see the file LICENSE.txt in the source's root directory.
 */

/* THIS FILE IS AUTOGENERATED. DO NOT EDIT BY HAND. see lxapigen.pl */

/* This is glue code for OS/2 binaries. Native binaries don't need this. */
#if LX_LEGACY

static APIRET16 bridge16to32_VioScrollUp(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PBYTE, pCell);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, cbLines);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usRightCol);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usBotRow);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usLeftCol);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usTopRow);
    return VioScrollUp(usTopRow, usLeftCol, usBotRow, usRightCol, cbLines, pCell, hvio);
}

static APIRET16 bridge16to32_VioGetCurPos(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PUSHORT, pusColumn);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PUSHORT, pusRow);
    return VioGetCurPos(pusRow, pusColumn, hvio);
}

static APIRET16 bridge16to32_VioWrtCellStr(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usColumn);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usRow);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, cb);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PCH, pchCellStr);
    return VioWrtCellStr(pchCellStr, cb, usRow, usColumn, hvio);
}

static APIRET16 bridge16to32_VioSetCurPos(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usColumn);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usRow);
    return VioSetCurPos(usRow, usColumn, hvio);
}

static APIRET16 bridge16to32_VioGetMode(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PVIOMODEINFO, pvioModeInfo);
    return VioGetMode(pvioModeInfo, hvio);
}

static APIRET16 bridge16to32_VioReadCellStr(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usColumn);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usRow);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PUSHORT, pcb);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PCH, pchCellStr);
    return VioReadCellStr(pchCellStr, pcb, usRow, usColumn, hvio);
}

static APIRET16 bridge16to32_VioGetCurType(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PVIOCURSORINFO, pvioCursorInfo);
    return VioGetCurType(pvioCursorInfo, hvio);
}

static APIRET16 bridge16to32_VioGetBuf(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PUSHORT, pcbLVB);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PULONG, pLVB);
    return VioGetBuf(pLVB, pcbLVB, hvio);
}

static APIRET16 bridge16to32_VioSetCurType(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PVIOCURSORINFO, pvioCursorInfo);
    return VioSetCurType(pvioCursorInfo, hvio);
}

static APIRET16 bridge16to32_VioWrtCharStrAtt(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PBYTE, pAttr);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usColumn);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usRow);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, cb);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PCH, pch);
    return VioWrtCharStrAtt(pch, cb, usRow, usColumn, pAttr, hvio);
}

static APIRET16 bridge16to32_VioWrtNCell(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usColumn);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, usRow);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, cb);
    LX_NATIVE_MODULE_16BIT_BRIDGE_PTRARG(PBYTE, pCell);
    return VioWrtNCell(pCell, cb, usRow, usColumn, hvio);
}

static APIRET16 bridge16to32_VioSetAnsi(uint8 *args) {
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(HVIO, hvio);
    LX_NATIVE_MODULE_16BIT_BRIDGE_ARG(USHORT, indic);
    return VioSetAnsi(indic, hvio);
}

LX_NATIVE_MODULE_16BIT_SUPPORT()
    LX_NATIVE_MODULE_16BIT_API(VioScrollUp)
    LX_NATIVE_MODULE_16BIT_API(VioGetCurPos)
    LX_NATIVE_MODULE_16BIT_API(VioWrtCellStr)
    LX_NATIVE_MODULE_16BIT_API(VioSetCurPos)
    LX_NATIVE_MODULE_16BIT_API(VioGetMode)
    LX_NATIVE_MODULE_16BIT_API(VioReadCellStr)
    LX_NATIVE_MODULE_16BIT_API(VioGetCurType)
    LX_NATIVE_MODULE_16BIT_API(VioGetBuf)
    LX_NATIVE_MODULE_16BIT_API(VioSetCurType)
    LX_NATIVE_MODULE_16BIT_API(VioWrtCharStrAtt)
    LX_NATIVE_MODULE_16BIT_API(VioWrtNCell)
    LX_NATIVE_MODULE_16BIT_API(VioSetAnsi)
LX_NATIVE_MODULE_16BIT_SUPPORT_END()

LX_NATIVE_MODULE_DEINIT({
    LX_NATIVE_MODULE_DEINIT_16BIT_SUPPORT();
})

static int init16_viocalls(void) {
    LX_NATIVE_MODULE_INIT_16BIT_SUPPORT()
        LX_NATIVE_INIT_16BIT_BRIDGE(VioScrollUp, 16, 0)
        LX_NATIVE_INIT_16BIT_BRIDGE(VioGetCurPos, 10, 0)
        LX_NATIVE_INIT_16BIT_BRIDGE(VioWrtCellStr, 12, 0)
        LX_NATIVE_INIT_16BIT_BRIDGE(VioSetCurPos, 6, 0)
        LX_NATIVE_INIT_16BIT_BRIDGE(VioGetMode, 6, 0)
        LX_NATIVE_INIT_16BIT_BRIDGE(VioReadCellStr, 14, 0)
        LX_NATIVE_INIT_16BIT_BRIDGE(VioGetCurType, 6, 0)
        LX_NATIVE_INIT_16BIT_BRIDGE(VioGetBuf, 10, 0)
        LX_NATIVE_INIT_16BIT_BRIDGE(VioSetCurType, 6, 0)
        LX_NATIVE_INIT_16BIT_BRIDGE(VioWrtCharStrAtt, 16, 0)
        LX_NATIVE_INIT_16BIT_BRIDGE(VioWrtNCell, 12, 0)
        LX_NATIVE_INIT_16BIT_BRIDGE(VioSetAnsi, 4, 0)
    LX_NATIVE_MODULE_INIT_16BIT_SUPPORT_END()
    return 1;
}

LX_NATIVE_MODULE_INIT({ if (!init16_viocalls()) return 0; })
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioScrollUp, "VIOSCROLLUP", 7),
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioGetCurPos, "VIOGETCURPOS", 9),
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioWrtCellStr, "VIOWRTCELLSTR", 10),
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioSetCurPos, "VIOSETCURPOS", 15),
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioGetMode, "VIOGETMODE", 21),
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioReadCellStr, "VIOREADCELLSTR", 24),
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioGetCurType, "VIOGETCURTYPE", 27),
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioGetBuf, "VIOGETBUF", 31),
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioSetCurType, "VIOSETCURTYPE", 32),
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioWrtCharStrAtt, "VIOWRTCHARSTRATT", 48),
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioWrtNCell, "VIOWRTNCELL", 52),
    LX_NATIVE_EXPORT16_DIFFERENT_NAME(VioSetAnsi, "VIOSETANSI", 774)
LX_NATIVE_MODULE_INIT_END()

#endif /* LX_LEGACY */

/* end of viocalls-lx.h ... */

