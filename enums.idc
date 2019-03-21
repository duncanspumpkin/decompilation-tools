#include <idc.idc>

static init_enum_vk(void)
{
    auto id;

    id = add_enum(-1, "MACRO_VK", 0x1100000);
    add_enum_member(id, "VK_LBUTTON", 0X1, -1);
    add_enum_member(id, "VK_RBUTTON", 0X2, -1);
    add_enum_member(id, "VK_CANCEL", 0X3, -1);
    add_enum_member(id, "VK_MBUTTON", 0X4, -1);
    add_enum_member(id, "VK_XBUTTON1", 0X5, -1);
    add_enum_member(id, "VK_XBUTTON2", 0X6, -1);
    add_enum_member(id, "VK_BACK", 0X8, -1);
    add_enum_member(id, "VK_TAB", 0X9, -1);
    add_enum_member(id, "VK_CLEAR", 0XC, -1);
    add_enum_member(id, "VK_RETURN", 0XD, -1);
    add_enum_member(id, "VK_SHIFT", 0X10, -1);
    add_enum_member(id, "VK_CONTROL", 0X11, -1);
    add_enum_member(id, "VK_MENU", 0X12, -1);
    add_enum_member(id, "VK_PAUSE", 0X13, -1);
    add_enum_member(id, "VK_CAPITAL", 0X14, -1);
    add_enum_member(id, "VK_KANA", 0X15, -1);
    add_enum_member(id, "VK_HANGEUL", 0X15, -1);
    add_enum_member(id, "VK_HANGUL", 0X15, -1);
    add_enum_member(id, "VK_JUNJA", 0X17, -1);
    add_enum_member(id, "VK_FINAL", 0X18, -1);
    add_enum_member(id, "VK_HANJA", 0X19, -1);
    add_enum_member(id, "VK_KANJI", 0X19, -1);
    add_enum_member(id, "VK_ESCAPE", 0X1B, -1);
    add_enum_member(id, "VK_CONVERT", 0X1C, -1);
    add_enum_member(id, "VK_NONCONVERT", 0X1D, -1);
    add_enum_member(id, "VK_ACCEPT", 0X1E, -1);
    add_enum_member(id, "VK_MODECHANGE", 0X1F, -1);
    add_enum_member(id, "handle_space", 0X20, -1);
    add_enum_member(id, "VK_PRIOR", 0X21, -1);
    add_enum_member(id, "VK_NEXT", 0X22, -1);
    add_enum_member(id, "VK_END", 0X23, -1);
    add_enum_member(id, "VK_HOME", 0X24, -1);
    add_enum_member(id, "VK_LEFT", 0X25, -1);
    add_enum_member(id, "VK_UP", 0X26, -1);
    add_enum_member(id, "VK_RIGHT", 0X27, -1);
    add_enum_member(id, "VK_DOWN", 0X28, -1);
    add_enum_member(id, "VK_SELECT", 0X29, -1);
    add_enum_member(id, "VK_PRINT", 0X2A, -1);
    add_enum_member(id, "VK_EXECUTE", 0X2B, -1);
    add_enum_member(id, "VK_SNAPSHOT", 0X2C, -1);
    add_enum_member(id, "VK_INSERT", 0X2D, -1);
    add_enum_member(id, "VK_DELETE", 0X2E, -1);
    add_enum_member(id, "VK_HELP", 0X2F, -1);
    add_enum_member(id, "VK_LWIN", 0X5B, -1);
    add_enum_member(id, "VK_RWIN", 0X5C, -1);
    add_enum_member(id, "VK_APPS", 0X5D, -1);
    add_enum_member(id, "VK_SLEEP", 0X5F, -1);
    add_enum_member(id, "VK_NUMPAD0", 0X60, -1);
    add_enum_member(id, "VK_NUMPAD1", 0X61, -1);
    add_enum_member(id, "VK_NUMPAD2", 0X62, -1);
    add_enum_member(id, "VK_NUMPAD3", 0X63, -1);
    add_enum_member(id, "VK_NUMPAD4", 0X64, -1);
    add_enum_member(id, "VK_NUMPAD5", 0X65, -1);
    add_enum_member(id, "VK_NUMPAD6", 0X66, -1);
    add_enum_member(id, "VK_NUMPAD7", 0X67, -1);
    add_enum_member(id, "VK_NUMPAD8", 0X68, -1);
    add_enum_member(id, "VK_NUMPAD9", 0X69, -1);
    add_enum_member(id, "VK_MULTIPLY", 0X6A, -1);
    add_enum_member(id, "VK_ADD", 0X6B, -1);
    add_enum_member(id, "VK_SEPARATOR", 0X6C, -1);
    add_enum_member(id, "VK_SUBTRACT", 0X6D, -1);
    add_enum_member(id, "VK_DECIMAL", 0X6E, -1);
    add_enum_member(id, "VK_DIVIDE", 0X6F, -1);
    add_enum_member(id, "VK_F1", 0X70, -1);
    add_enum_member(id, "VK_F2", 0X71, -1);
    add_enum_member(id, "VK_F3", 0X72, -1);
    add_enum_member(id, "VK_F4", 0X73, -1);
    add_enum_member(id, "VK_F5", 0X74, -1);
    add_enum_member(id, "VK_F6", 0X75, -1);
    add_enum_member(id, "VK_F7", 0X76, -1);
    add_enum_member(id, "VK_F8", 0X77, -1);
    add_enum_member(id, "VK_F9", 0X78, -1);
    add_enum_member(id, "VK_F10", 0X79, -1);
    add_enum_member(id, "VK_F11", 0X7A, -1);
    add_enum_member(id, "VK_F12", 0X7B, -1);
    add_enum_member(id, "VK_F13", 0X7C, -1);
    add_enum_member(id, "VK_F14", 0X7D, -1);
    add_enum_member(id, "VK_F15", 0X7E, -1);
    add_enum_member(id, "VK_F16", 0X7F, -1);
    add_enum_member(id, "VK_F17", 0X80, -1);
    add_enum_member(id, "VK_F18", 0X81, -1);
    add_enum_member(id, "VK_F19", 0X82, -1);
    add_enum_member(id, "VK_F20", 0X83, -1);
    add_enum_member(id, "VK_F21", 0X84, -1);
    add_enum_member(id, "VK_F22", 0X85, -1);
    add_enum_member(id, "VK_F23", 0X86, -1);
    add_enum_member(id, "VK_F24", 0X87, -1);
    add_enum_member(id, "VK_NUMLOCK", 0X90, -1);
    add_enum_member(id, "VK_SCROLL", 0X91, -1);
    add_enum_member(id, "VK_OEM_NEC_EQUAL", 0X92, -1);
    add_enum_member(id, "VK_OEM_FJ_JISHO", 0X92, -1);
    add_enum_member(id, "VK_OEM_FJ_MASSHOU", 0X93, -1);
    add_enum_member(id, "VK_OEM_FJ_TOUROKU", 0X94, -1);
    add_enum_member(id, "VK_OEM_FJ_LOYA", 0X95, -1);
    add_enum_member(id, "VK_OEM_FJ_ROYA", 0X96, -1);
    add_enum_member(id, "VK_LSHIFT", 0XA0, -1);
    add_enum_member(id, "VK_RSHIFT", 0XA1, -1);
    add_enum_member(id, "VK_LCONTROL", 0XA2, -1);
    add_enum_member(id, "VK_RCONTROL", 0XA3, -1);
    add_enum_member(id, "VK_LMENU", 0XA4, -1);
    add_enum_member(id, "VK_RMENU", 0XA5, -1);
    add_enum_member(id, "VK_BROWSER_BACK", 0XA6, -1);
    add_enum_member(id, "VK_BROWSER_FORWARD", 0XA7, -1);
    add_enum_member(id, "VK_BROWSER_REFRESH", 0XA8, -1);
    add_enum_member(id, "VK_BROWSER_STOP", 0XA9, -1);
    add_enum_member(id, "VK_BROWSER_SEARCH", 0XAA, -1);
    add_enum_member(id, "VK_BROWSER_FAVORITES", 0XAB, -1);
    add_enum_member(id, "VK_BROWSER_HOME", 0XAC, -1);
    add_enum_member(id, "VK_VOLUME_MUTE", 0XAD, -1);
    add_enum_member(id, "VK_VOLUME_DOWN", 0XAE, -1);
    add_enum_member(id, "VK_VOLUME_UP", 0XAF, -1);
    add_enum_member(id, "VK_MEDIA_NEXT_TRACK", 0XB0, -1);
    add_enum_member(id, "VK_MEDIA_PREV_TRACK", 0XB1, -1);
    add_enum_member(id, "VK_MEDIA_STOP", 0XB2, -1);
    add_enum_member(id, "VK_MEDIA_PLAY_PAUSE", 0XB3, -1);
    add_enum_member(id, "VK_LAUNCH_MAIL", 0XB4, -1);
    add_enum_member(id, "VK_LAUNCH_MEDIA_SELECT", 0XB5, -1);
    add_enum_member(id, "VK_LAUNCH_APP1", 0XB6, -1);
    add_enum_member(id, "VK_LAUNCH_APP2", 0XB7, -1);
    add_enum_member(id, "VK_OEM_1", 0XBA, -1);
    add_enum_member(id, "VK_OEM_PLUS", 0XBB, -1);
    add_enum_member(id, "VK_OEM_COMMA", 0XBC, -1);
    add_enum_member(id, "VK_OEM_MINUS", 0XBD, -1);
    add_enum_member(id, "VK_OEM_PERIOD", 0XBE, -1);
    add_enum_member(id, "VK_OEM_2", 0XBF, -1);
    add_enum_member(id, "VK_OEM_3", 0XC0, -1);
    add_enum_member(id, "VK_OEM_4", 0XDB, -1);
    add_enum_member(id, "VK_OEM_5", 0XDC, -1);
    add_enum_member(id, "VK_OEM_6", 0XDD, -1);
    add_enum_member(id, "VK_OEM_7", 0XDE, -1);
    add_enum_member(id, "VK_OEM_8", 0XDF, -1);
    add_enum_member(id, "VK_OEM_AX", 0XE1, -1);
    add_enum_member(id, "VK_OEM_102", 0XE2, -1);
    add_enum_member(id, "VK_ICO_HELP", 0XE3, -1);
    add_enum_member(id, "VK_ICO_00", 0XE4, -1);
    add_enum_member(id, "VK_PROCESSKEY", 0XE5, -1);
    add_enum_member(id, "VK_ICO_CLEAR", 0XE6, -1);
    add_enum_member(id, "VK_PACKET", 0XE7, -1);
    add_enum_member(id, "VK_OEM_RESET", 0XE9, -1);
    add_enum_member(id, "VK_OEM_JUMP", 0XEA, -1);
    add_enum_member(id, "VK_OEM_PA1", 0XEB, -1);
    add_enum_member(id, "VK_OEM_PA2", 0XEC, -1);
    add_enum_member(id, "VK_OEM_PA3", 0XED, -1);
    add_enum_member(id, "VK_OEM_WSCTRL", 0XEE, -1);
    add_enum_member(id, "VK_OEM_CUSEL", 0XEF, -1);
    add_enum_member(id, "VK_OEM_ATTN", 0XF0, -1);
    add_enum_member(id, "VK_OEM_FINISH", 0XF1, -1);
    add_enum_member(id, "VK_OEM_COPY", 0XF2, -1);
    add_enum_member(id, "VK_OEM_AUTO", 0XF3, -1);
    add_enum_member(id, "VK_OEM_ENLW", 0XF4, -1);
    add_enum_member(id, "VK_OEM_BACKTAB", 0XF5, -1);
    add_enum_member(id, "VK_ATTN", 0XF6, -1);
    add_enum_member(id, "VK_CRSEL", 0XF7, -1);
    add_enum_member(id, "VK_EXSEL", 0XF8, -1);
    add_enum_member(id, "VK_EREOF", 0XF9, -1);
    add_enum_member(id, "VK_PLAY", 0XFA, -1);
    add_enum_member(id, "VK_ZOOM", 0XFB, -1);
    add_enum_member(id, "VK_NONAME", 0XFC, -1);
    add_enum_member(id, "VK_PA1", 0XFD, -1);
    add_enum_member(id, "VK_OEM_CLEAR", 0XFE, -1);

    // sort on
    op_enum(0x004BE3F3, 1, id, 0);
    op_enum(0x004BE401, 1, id, 0);
    op_enum(0x004BE40F, 1, id, 0);
    op_enum(0x004BE41D, 1, id, 0);
    op_enum(0x004BE42B, 1, id, 0);
    op_enum(0x004BE439, 1, id, 0);
    op_enum(0x004BE447, 1, id, 0);
    op_enum(0x004BE5C1, 1, id, 0);
    op_enum(0x004BE5CF, 1, id, 0);
    op_enum(0x004BEDCB, 1, id, 0);
    op_enum(0x004BEDCF, 1, id, 0);
    op_enum(0x004BEDDF, 1, id, 0);
    op_enum(0x004BEDE4, 1, id, 0);
    op_enum(0x004BEF67, 1, id, 0);
    op_enum(0x004BEF6F, 1, id, 0);
    op_enum(0x004BEF77, 1, id, 0);
    op_enum(0x004BEF7F, 1, id, 0);
    op_enum(0x004BEF87, 1, id, 0);
    op_enum(0x004BEF8F, 1, id, 0);
    op_enum(0x004BEF97, 1, id, 0);
    op_enum(0x004CE91C, 1, id, 0);
    op_enum(0x004CE921, 1, id, 0);
    op_enum(0x004CE93C, 1, id, 0);
    op_enum(0x004CE945, 1, id, 0);
    op_enum(0x004CE94E, 1, id, 0);
    op_enum(0x004CE953, 1, id, 0);
    op_enum(0x004CE958, 1, id, 0);
    op_enum(0x004CE95D, 1, id, 0);
    op_enum(0x004CE962, 1, id, 0);
    op_enum(0x004CE967, 1, id, 0);
    // sort off
}

static initEnums(void)
{
    init_enum_vk();
}