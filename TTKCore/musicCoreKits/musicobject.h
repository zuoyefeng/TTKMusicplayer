#ifndef MUSICOBJECT_H
#define MUSICOBJECT_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QDir>
#include <QCoreApplication>
#if defined (Q_OS_ANDROID)
#include <QtAndroidExtras/QtAndroid>
#include <QtAndroidExtras/QAndroidJniEnvironment>
#endif
#include "musicglobal.h"

#define APPNAME                 "TTKMusicPlayer"
///////////////////////////////////////

#define DOT                     "."

#define APPDATA_DIR             "AppData/"
#define DOWNLOADS_DIR           "Downloads/"

#define LRC_DIR                 "MLrc/"
#define MUSIC_DIR               "Music/"
#define MOVIE_DIR               "Movie/"
#define THEME_DIR               "MTheme/"
#define CACHE_DIR               "MCached/"
#define ART_DIR                 "MArt/"
#define UPDATE_DIR              "MUpdate/"
#define RES_DIR                 "MRes/"
#define AVATAR_DIR              "avatar/"
#define USER_THEME_DIR          "theme/"
#define PLUGINS_DIR             "MPlugins/"
#define BACKGROUND_DIR          "MArt/background/"
#define LANGUAGE_DIR            "MLanguage/"
#define TEMPORARY_DIR           "temporary"

#define TTS_FILE_PREFIX         "ttks"
#define SKN_FILE_PREFIX         "skn"
#define JPG_FILE_PREFIX         "jpg"
#define BMP_FILE_PREFIX         "bmp"
#define PNG_FILE_PREFIX         "png"
#define LRC_FILE_PREFIX         "lrc"
#define KRC_FILE_PREFIX         "krc"
#define MP3_FILE_PREFIX         "mp3"
#define CFG_FILE_PREFIX         "ttk"
#define LST_FILE_PREFIX         "lis"
#define EXE_FILE_PREFIX         "exe"
#define XML_FILE_PREFIX         "xml"

#define MAKE_TRANSFORM_PREFIX   "avconv.dll"
#define MAKE_KRC2LRC_PREFIX     "avk2l.dll"
#define MAKE_PLAYER_PREFIX      "avplayer.dll"
#define MAKE_GAIN_PREFIX        "avgain.dll"
#define MAKE_SOUNDTOUCH_PREFIX  "avm2v.dll"

#define TTS_FILE                STRCAT(DOT, TTS_FILE_PREFIX)
#define SKN_FILE                STRCAT(DOT, SKN_FILE_PREFIX)
#define JPG_FILE                STRCAT(DOT, JPG_FILE_PREFIX)
#define BMP_FILE                STRCAT(DOT, BMP_FILE_PREFIX)
#define PNG_FILE                STRCAT(DOT, PNG_FILE_PREFIX)
#define LRC_FILE                STRCAT(DOT, LRC_FILE_PREFIX)
#define KRC_FILE                STRCAT(DOT, KRC_FILE_PREFIX)
#define MP3_FILE                STRCAT(DOT, MP3_FILE_PREFIX)
#define CFG_FILE                STRCAT(DOT, CFG_FILE_PREFIX)
#define LST_FILE                STRCAT(DOT, LST_FILE_PREFIX)
#define EXE_FILE                STRCAT(DOT, EXE_FILE_PREFIX)
#define XML_FILE                STRCAT(DOT, XML_FILE_PREFIX)

#define MAKE_CONFIG_DIR         STRCAT(PLUGINS_DIR, "config/")
#define MAKE_TRANSFORM          STRCAT(PLUGINS_DIR, MAKE_TRANSFORM_PREFIX)
#define MAKE_KRC2LRC            STRCAT(PLUGINS_DIR, MAKE_KRC2LRC_PREFIX)
#define MAKE_PLAYER             STRCAT(PLUGINS_DIR, MAKE_PLAYER_PREFIX)
#define MAKE_GAIN               STRCAT(PLUGINS_DIR, MAKE_GAIN_PREFIX)
#define MAKE_SOUNDTOUCH         STRCAT(PLUGINS_DIR, MAKE_SOUNDTOUCH_PREFIX)
#ifdef Q_OS_UNIX
#define MAKE_NETS               STRCAT(PLUGINS_DIR, "avnets.dll")
#endif

#define COFIGPATH               "musicconfig.xml"
#define MUSICPATH               "music.lis"
#define NORMALDOWNPATH          "musicdown.ttk"
#define CLOUDDOWNPATH           "musiccloud.ttk"
#define MUSICSEARCH             "musichistory.ttk"
#define DARABASEPATH            "musicuser.dll"
#define USERPATH                "musicuser.ttk"
#define BARRAGEPATH             "musicbarrage.ttk"

///////////////////////////////////////
#if defined (Q_OS_ANDROID)
#  define APPDATA_DIR_FULL      MusicObject::getAppDir() + APPDATA_DIR
#  define DOWNLOADS_DIR_FULL    MusicObject::getAppDir() + DOWNLOADS_DIR
#else
#  define APPDATA_DIR_FULL      MusicObject::getAppDir() + QString("../") + APPDATA_DIR
#  define DOWNLOADS_DIR_FULL    MusicObject::getAppDir() + QString("../") + DOWNLOADS_DIR
#endif

#define LRC_DIR_FULL            DOWNLOADS_DIR_FULL + LRC_DIR
#define MUSIC_DIR_FULL          DOWNLOADS_DIR_FULL + MUSIC_DIR
#define MOVIE_DIR_FULL          DOWNLOADS_DIR_FULL + MOVIE_DIR
#define TEMPORARY_DIR_FULL      DOWNLOADS_DIR_FULL + TEMPORARY_DIR
#define CACHE_DIR_FULL          DOWNLOADS_DIR_FULL + CACHE_DIR
#define ART_DIR_FULL            DOWNLOADS_DIR_FULL + ART_DIR
#define BACKGROUND_DIR_FULL     DOWNLOADS_DIR_FULL + BACKGROUND_DIR
#define UPDATE_DIR_FULL         DOWNLOADS_DIR_FULL + UPDATE_DIR

#define COFIGPATH_FULL          APPDATA_DIR_FULL + COFIGPATH
#define MUSICPATH_FULL          APPDATA_DIR_FULL + MUSICPATH
#define NORMALDOWNPATH_FULL     APPDATA_DIR_FULL + NORMALDOWNPATH
#define CLOUDDOWNPATH_FULL      APPDATA_DIR_FULL + CLOUDDOWNPATH
#define MUSICSEARCH_FULL        APPDATA_DIR_FULL + MUSICSEARCH
#define DARABASEPATH_FULL       APPDATA_DIR_FULL + DARABASEPATH
#define USERPATH_FULL           APPDATA_DIR_FULL + USERPATH
#define BARRAGEPATH_FULL        APPDATA_DIR_FULL + BARRAGEPATH
#define AVATAR_DIR_FULL         APPDATA_DIR_FULL + AVATAR_DIR
#define USER_THEME_DIR_FULL     APPDATA_DIR_FULL + USER_THEME_DIR

#define THEME_DIR_FULL          MusicObject::getAppDir() + THEME_DIR
#define PLUGINS_DIR_FULL        MusicObject::getAppDir() + PLUGINS_DIR
#define LANGUAGE_DIR_FULL       MusicObject::getAppDir() + LANGUAGE_DIR

#define MAKE_CONFIG_DIR_FULL    MusicObject::getAppDir() + MAKE_CONFIG_DIR
#define MAKE_TRANSFORM_FULL     MusicObject::getAppDir() + MAKE_TRANSFORM
#define MAKE_KRC2LRC_FULL       MusicObject::getAppDir() + MAKE_KRC2LRC
#define MAKE_PLAYER_FULL        MusicObject::getAppDir() + MAKE_PLAYER
#define MAKE_GAIN_FULL          MusicObject::getAppDir() + MAKE_GAIN
#define MAKE_SOUNDTOUCH_FULL    MusicObject::getAppDir() + MAKE_SOUNDTOUCH
#ifdef Q_OS_UNIX
#define MAKE_NETS_FULL          MusicObject::getAppDir() + MAKE_NETS
#endif

///////////////////////////////////////
#define WINDOW_WIDTH_MIN        1000
#define WINDOW_HEIGHT_MIN       690
///////////////////////////////////////
#define DEFAULT_INDEX_LEVEL0    -1
#define DEFAULT_INDEX_LEVEL1    -999
#define DEFAULT_INDEX_LEVEL2    -888
#define DEFAULT_INDEX_LEVEL3    -777
#define DEFAULT_INDEX_LEVEL4    -666
#define DEFAULT_INDEX_LEVEL5    -555
///////////////////////////////////////
#define STRING_SPLITER          "*|||*"
///////////////////////////////////////

/*! @brief The namespace of the application object.
 * @author Greedysky <greedysky@163.com>
 */
namespace MusicObject
{
    /*! @brief The class of the music song atrribute.
     * @author Greedysky <greedysky@163.com>
     */
    typedef struct MusicSongAttribute
    {
        int m_bitrate;
        QString m_format;
        QString m_url;
        QString m_size;
        QString m_duration;

        bool operator< (const MusicSongAttribute &other) const
        {
            return m_bitrate < other.m_bitrate;
        }
        bool operator== (const MusicSongAttribute &other) const
        {
            return m_bitrate == other.m_bitrate;
        }
    }MusicSongAttribute;
    TTK_DECLARE_LISTS(MusicSongAttribute)

    ///////////////////////////////////////

    /*! @brief The class of the music song information.
     * @author Greedysky <greedysky@163.com>
     */
    typedef struct MusicSongInformation
    {
        MusicSongAttributes m_songAttrs;
        QString m_songId;
        QString m_albumId;
        QString m_artistId;
        QString m_lrcUrl;
        QString m_smallPicUrl;
        QString m_singerName;
        QString m_songName;
        QString m_timeLength;
    }MusicSongInformation;
    TTK_DECLARE_LISTS(MusicSongInformation)
    ///////////////////////////////////////

    enum PlayState
    {
        PS_StoppedState,      ///*stop state*/
        PS_PlayingState,      ///*play state*/
        PS_PausedState        ///*pause state*/
    };

    enum PlayMode
    {
        PM_PlayOrder = 1,   ///*play order*/
        PM_PlayRandom,      ///*play random*/
        PM_PlayListLoop,    ///*play list loop*/
        PM_PlayOneLoop,     ///*play single loop*/
        PM_PlayOnce         ///*play just once*/
    };

    enum DownLoadMode
    {
        DW_Null,           ///*network null*/
        DW_DisConnection,  ///*network disable*/
        DW_DownLoading,    ///*network download*/
        DW_Buffing,        ///*network buffing*/
        DW_Waiting         ///*network waiting*/
    };

    enum FontStyleMode
    {
        FT_Bold =       0x00001,   ///*font bold*/
        FT_Italic =     0x00002,   ///*font italic*/
        FT_Underline =  0x00004,   ///*font underline*/
        FT_Overline =   0x00008,   ///*font overline*/
        FT_StrikeOut =  0x00010,   ///*font strikeOut*/
        FT_FixedPitch = 0x00020,   ///*font fixedPitch*/
        FT_Kerningt =   0x00040    ///*font kerningt*/
    };

    enum ToolsType
    {
        TT_LocalManager =   0x00001,   ///*Local Manager*/
        TT_AudioRecord =    0x00002,   ///*Audio Record*/
        TT_RingTone =       0x00004,   ///*Ring Tone*/
        TT_Timer =          0x00008,   ///*Timer*/
        TT_Transform =      0x00010,   ///*Transform*/
        TT_Spectrum =       0x00020,   ///*Spectrum*/
        TT_Wallpaper =      0x00040,   ///*Wallpaper*/
        TT_Mobile =         0x00080,   ///*Mobile*/
        TT_SpeedTest =      0x00100,   ///*Speed Test*/
        TT_ConnectionTest = 0x00200,   ///*Connection Test*/
        TT_SoundGain =      0x00400,   ///*Sound Gain*/
        TT_Identify =       0x00800,   ///*Identify*/
        TT_SoundTouch =     0x01000,   ///*Sound Touch*/
        TT_GrabWindow =     0x02000,   ///*Grab Window*/
        TT_SoundKMicro =    0x04000    ///*Sound KMicro*/
    };
    TTK_DECLARE_FLAGS(ToolsTypes, ToolsType)

    static QString getAppDir()
    {
#if defined (Q_OS_ANDROID)
        QAndroidJniObject mediaDir = QAndroidJniObject::callStaticObjectMethod("android/os/Environment",
                                                                           "getExternalStorageDirectory",
                                                                           "()Ljava/io/File;");
        QAndroidJniObject mediaPath = mediaDir.callObjectMethod( "getAbsolutePath", "()Ljava/lang/String;" );
        QString path = mediaPath.toString() + "/TTKMobile/";
        if(!QDir().exists(path))
        {
            QDir().mkpath(path);
        }
        return path;
#else
        return QCoreApplication::applicationDirPath() + "/";
#endif
    }
    /*!
     * Get application dir.
     */

}

#endif // MUSICOBJECT_H
