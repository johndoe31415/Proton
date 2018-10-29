#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_102/steam_api.h"
#include "steamworks_sdk_102/isteamgameserver.h"
extern "C" {
#pragma pack( push, 8 )
struct winCallbackMsg_t_102 {
    HSteamUser m_hSteamUser;
    int m_iCallback;
    uint8 * m_pubParam;
    int m_cubParam;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_CallbackMsg_t_102(void *w, void *l)
{
    CallbackMsg_t *lin = (CallbackMsg_t *)l;
    struct winCallbackMsg_t_102 *win = (struct winCallbackMsg_t_102 *)w;
    lin->m_hSteamUser = win->m_hSteamUser;
    lin->m_iCallback = win->m_iCallback;
    lin->m_pubParam = win->m_pubParam;
    lin->m_cubParam = win->m_cubParam;
}

void lin_to_win_struct_CallbackMsg_t_102(void *l, void *w)
{
    CallbackMsg_t *lin = (CallbackMsg_t *)l;
    struct winCallbackMsg_t_102 *win = (struct winCallbackMsg_t_102 *)w;
    win->m_hSteamUser = lin->m_hSteamUser;
    win->m_iCallback = lin->m_iCallback;
    win->m_pubParam = lin->m_pubParam;
    win->m_cubParam = lin->m_cubParam;
}

#pragma pack( push, 8 )
struct winMatchMakingKeyValuePair_t_102 {
    char m_szKey[256];
    char m_szValue[256];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_MatchMakingKeyValuePair_t_102(void *w, void *l)
{
    MatchMakingKeyValuePair_t *lin = (MatchMakingKeyValuePair_t *)l;
    struct winMatchMakingKeyValuePair_t_102 *win = (struct winMatchMakingKeyValuePair_t_102 *)w;
    memcpy(lin->m_szKey, win->m_szKey, sizeof(lin->m_szKey));
    memcpy(lin->m_szValue, win->m_szValue, sizeof(lin->m_szValue));
}

void lin_to_win_struct_MatchMakingKeyValuePair_t_102(void *l, void *w)
{
    MatchMakingKeyValuePair_t *lin = (MatchMakingKeyValuePair_t *)l;
    struct winMatchMakingKeyValuePair_t_102 *win = (struct winMatchMakingKeyValuePair_t_102 *)w;
    memcpy(win->m_szKey, lin->m_szKey, sizeof(win->m_szKey));
    memcpy(win->m_szValue, lin->m_szValue, sizeof(win->m_szValue));
}

#pragma pack( push, 8 )
struct winservernetadr_t_102 {
    uint16 m_usConnectionPort;
    uint16 m_usQueryPort;
    uint32 m_unIP;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_servernetadr_t_102(void *w, void *l)
{
    servernetadr_t *lin = (servernetadr_t *)l;
    struct winservernetadr_t_102 *win = (struct winservernetadr_t_102 *)w;
    lin->m_usConnectionPort = win->m_usConnectionPort;
    lin->m_usQueryPort = win->m_usQueryPort;
    lin->m_unIP = win->m_unIP;
}

void lin_to_win_struct_servernetadr_t_102(void *l, void *w)
{
    servernetadr_t *lin = (servernetadr_t *)l;
    struct winservernetadr_t_102 *win = (struct winservernetadr_t_102 *)w;
    win->m_usConnectionPort = lin->m_usConnectionPort;
    win->m_usQueryPort = lin->m_usQueryPort;
    win->m_unIP = lin->m_unIP;
}

#pragma pack( push, 8 )
struct wingameserveritem_t_102 {
    servernetadr_t m_NetAdr;
    int m_nPing;
    bool m_bHadSuccessfulResponse;
    bool m_bDoNotRefresh;
    char m_szGameDir[32];
    char m_szMap[32];
    char m_szGameDescription[64];
    int m_nAppID;
    int m_nPlayers;
    int m_nMaxPlayers;
    int m_nBotPlayers;
    bool m_bPassword;
    bool m_bSecure;
    uint32 m_ulTimeLastPlayed;
    int m_nServerVersion;
    char m_szServerName[64];
    char m_szGameTags[128];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_gameserveritem_t_102(void *w, void *l)
{
    gameserveritem_t *lin = (gameserveritem_t *)l;
    struct wingameserveritem_t_102 *win = (struct wingameserveritem_t_102 *)w;
    win_to_lin_struct_servernetadr_t_102(&win->m_NetAdr, &lin->m_NetAdr);
    lin->m_nPing = win->m_nPing;
    lin->m_bHadSuccessfulResponse = win->m_bHadSuccessfulResponse;
    lin->m_bDoNotRefresh = win->m_bDoNotRefresh;
    memcpy(lin->m_szGameDir, win->m_szGameDir, sizeof(lin->m_szGameDir));
    memcpy(lin->m_szMap, win->m_szMap, sizeof(lin->m_szMap));
    memcpy(lin->m_szGameDescription, win->m_szGameDescription, sizeof(lin->m_szGameDescription));
    lin->m_nAppID = win->m_nAppID;
    lin->m_nPlayers = win->m_nPlayers;
    lin->m_nMaxPlayers = win->m_nMaxPlayers;
    lin->m_nBotPlayers = win->m_nBotPlayers;
    lin->m_bPassword = win->m_bPassword;
    lin->m_bSecure = win->m_bSecure;
    lin->m_ulTimeLastPlayed = win->m_ulTimeLastPlayed;
    lin->m_nServerVersion = win->m_nServerVersion;
    memcpy(lin->m_szServerName, win->m_szServerName, sizeof(lin->m_szServerName));
    memcpy(lin->m_szGameTags, win->m_szGameTags, sizeof(lin->m_szGameTags));
}

void lin_to_win_struct_gameserveritem_t_102(void *l, void *w)
{
    gameserveritem_t *lin = (gameserveritem_t *)l;
    struct wingameserveritem_t_102 *win = (struct wingameserveritem_t_102 *)w;
    lin_to_win_struct_servernetadr_t_102(&lin->m_NetAdr, &win->m_NetAdr);
    win->m_nPing = lin->m_nPing;
    win->m_bHadSuccessfulResponse = lin->m_bHadSuccessfulResponse;
    win->m_bDoNotRefresh = lin->m_bDoNotRefresh;
    memcpy(win->m_szGameDir, lin->m_szGameDir, sizeof(win->m_szGameDir));
    memcpy(win->m_szMap, lin->m_szMap, sizeof(win->m_szMap));
    memcpy(win->m_szGameDescription, lin->m_szGameDescription, sizeof(win->m_szGameDescription));
    win->m_nAppID = lin->m_nAppID;
    win->m_nPlayers = lin->m_nPlayers;
    win->m_nMaxPlayers = lin->m_nMaxPlayers;
    win->m_nBotPlayers = lin->m_nBotPlayers;
    win->m_bPassword = lin->m_bPassword;
    win->m_bSecure = lin->m_bSecure;
    win->m_ulTimeLastPlayed = lin->m_ulTimeLastPlayed;
    win->m_nServerVersion = lin->m_nServerVersion;
    memcpy(win->m_szServerName, lin->m_szServerName, sizeof(win->m_szServerName));
    memcpy(win->m_szGameTags, lin->m_szGameTags, sizeof(win->m_szGameTags));
}

#pragma pack( push, 8 )
struct winRequestFriendsLobbiesResponse_t_24 {
    uint64 m_ulSteamIDFriend;
    uint64 m_ulSteamIDLobby;
    int m_cResultIndex;
    int m_cResultsTotal;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RequestFriendsLobbiesResponse_t_24(void *l, void *w)
{
    RequestFriendsLobbiesResponse_t *lin = (RequestFriendsLobbiesResponse_t *)l;
    struct winRequestFriendsLobbiesResponse_t_24 *win = (struct winRequestFriendsLobbiesResponse_t_24 *)w;
    win->m_ulSteamIDFriend = lin->m_ulSteamIDFriend;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
    win->m_cResultIndex = lin->m_cResultIndex;
    win->m_cResultsTotal = lin->m_cResultsTotal;
}

#pragma pack( push, 8 )
struct winUserStatsReceived_t_12 {
    uint64 m_nGameID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_UserStatsReceived_t_12(void *l, void *w)
{
    UserStatsReceived_t *lin = (UserStatsReceived_t *)l;
    struct winUserStatsReceived_t_12 *win = (struct winUserStatsReceived_t_12 *)w;
    win->m_nGameID = lin->m_nGameID;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winCCallbackBase_102 {
    uint8 m_nCallbackFlags;
    int m_iCallback;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_CCallbackBase_102(void *w, void *l)
{
    CCallbackBase *lin = (CCallbackBase *)l;
    struct winCCallbackBase_102 *win = (struct winCCallbackBase_102 *)w;
    lin->m_nCallbackFlags = win->m_nCallbackFlags;
    lin->m_iCallback = win->m_iCallback;
}

void lin_to_win_struct_CCallbackBase_102(void *l, void *w)
{
    CCallbackBase *lin = (CCallbackBase *)l;
    struct winCCallbackBase_102 *win = (struct winCCallbackBase_102 *)w;
    win->m_nCallbackFlags = lin->m_nCallbackFlags;
    win->m_iCallback = lin->m_iCallback;
}


}