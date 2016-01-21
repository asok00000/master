#ifndef FREYALIB_GLOBAL_H
#define FREYALIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FREYALIB_LIBRARY)
#  define FREYALIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define FREYALIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#define FREYALIB_KEY_LIBCONFIG          "FreyaLib_Config"
#define FREYALIB_KEY_SUPVER             "FreyaLib_Cfg_SupportVer"
#define FREYALIB_KEY_CMDDEF             "FreyaLib_Cfg_Commands"

#define FREYALIB_CMD_PLUGINREQUEST      0x0000000010000000//"FreyaLib_Cmd_Plug-inRequest"
#define FREYALIB_CMD_PLUGINRESULT       0x0000000020000000//"FreyaLib_Cmd_Plug-inResult"
#define FREYALIB_CMD_CONNECTREQUEST     0x0000000030000000//"FreyaLib_Cmd_ConnectRequest"
#define FREYALIB_CMD_CONNECTRESULT      0x0000000040000000//"FreyaLib_Cmd_ConnectResult"
#define FREYALIB_CMD_MSGAUTHREQUEST     0x0000000050000000//"FreyaLib_Cmd_MessageAuthRequest"
#define FREYALIB_CMD_CMDAUTHREQUEST     0x0000000060000000//"FreyaLib_Cmd_CommandAuthRequest"

#define FREYALIB_TYP_CMD                "FreyaLib_Type_Command"
#define FREYALIB_TYP_ARG                "FreyaLib_Type_Arguments"

#define FREYALIB_TYP_PLUGINID           "FreyaLib_Type_PluginId"
#define FREYALIB_TYP_PLUGINNAME         "FreyaLib_Type_PluginName"
#define FREYALIB_TYP_PLUGINPATH         "FreyaLib_Type_PluginPath"
#define FREYALIB_TYP_PLUGINCFGMD5       "FreyaLib_Type_PluginCfgMd5"
#define FREYALIB_TYP_PLUGINAUTH         "FreyaLib_Type_PluginAuth"

#endif // FREYALIB_GLOBAL_H