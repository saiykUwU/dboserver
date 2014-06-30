#ifndef _DEF_H
#define _DEF_H

#define SAFE_DELETE_ARRAY(p)	if(p) { delete[] p; p = 0; }
#define SAFE_FREE(p)			if(p) { free(p); p = 0; }

typedef char SBYTE;
typedef unsigned char BYTE;
typedef short SWORD;
typedef unsigned short WORD;
typedef long SDWORD;
typedef unsigned long DWORD;
typedef long long SQWORD;
typedef unsigned long long QWORD;
#define pi 3.1415926535897932384626433832795
#define r2d pi/180

#define SERVER_PORT 50200
#define MAX_BUFFER_SIZE 7048

#define MAX_USERNAME_SIZE (12)
#define MAX_PASSWORD_SIZE (12)
#define MAX_AUTHKEY_SIZE (16)
#define MAX_SRVADDR_SIZE (64)
#define MAX_CHARSRV_COUNT (10)
#define MAX_MAC_ADDR_SIZE (6)
#define INVALID_SERVERID (0xFF)
#define INVALID_SLOTID (0xFF)
#define MAX_SERVERNAME_SIZE (32)
#define MAX_CHANNEL_COUNT (10)

enum ResultCodes
{
	// BASE
	RESULT_SUCCESS = 0,
	RESULT_FAIL,
	// AUTHSERVER
	AUTH_SUCCESS = 100,
	AUTH_FAIL,
	AUTH_VERSION_FAIL,
	AUTH_TOO_LONG_ACCOUNT,
	AUTH_TOO_LONG_PASSWORD,
	AUTH_AUTHKEY_FAIL,
	AUTH_USER_SAMENAME_EXIST,
	AUTH_WRONG_PASSWORD,
	AUTH_USER_NOT_FOUND,
	AUTH_USER_EXIST,
	AUTH_USER_EXIST_IN_CHARACTER_SERVER,
	AUTH_DB_FAIL,
	AUTH_NO_AVAILABLE_CHARACTER_SERVER,
	AUTH_USER_BLOCK,
	AUTH_USER_TEMPORARY_BLOCK,
	AUTH_SERVER_LOCKED,
	AUTH_COMMON_CANT_DO_THAT_FOR_SOME_REASON,
	AUTH_INVALID_CJI_KOR_COOKIE,
	AUTH_IP_BLOCK,
	AUTH_USER_KICKOUT_WAIT_PLZ,
	// CHARSERVER
	CHARACTER_SUCCESS = 200,
	CHARACTER_FAIL,
	CHARACTER_AUTHKEY_FAIL,
	CHARACTER_TOO_LONG_NAME,
	CHARACTER_TOO_SHORT_NAME,
	CHARACTER_SAMENAME_EXIST,
	CHARACTER_COUNT_OVER,
	CHARACTER_NAME_NOT_EXIST,
	CHARACTER_CREATE_VALUE_FAIL,
	CHARACTER_USER_EXIST,
	CHARACTER_USER_EXIST_IN_GAME_SERVER,
	CHARACTER_USER_ITEM_CREATE_FAIL,
	CHARACTER_USER_SKILL_CREATE_FAIL,
	CHARACTER_USER_QUICK_SLOT_CREATE_FAIL,
	CHARACTER_DB_QUERY_FAIL,
	CHARACTER_WRONG_SERVER_FARM_SELECTED,
	CHARACTER_USER_BLOCK,
	CHARACTER_BLOCK_STRING_INCLUDED,
	CHARACTER_TEMPORARY_BLOCK,
	CHARACTER_AUTHKEY_MISMATCH,
	CHARACTER_AUTHKEY_CREATE_FAIL,
	CHARACTER_AUTHKEY_NOT_FOUND,
	CHARACTER_DELETE_GUILD_LEADER_FAIL,
	CHARACTER_DELETE_BUDOKAI_REGISTER_FAIL,
	CHARACTER_SERVER_LOCKED,
	CHARACTER_DISCONNECTED_FORCEDLY,
	CHARACTER_DISCONNECTED_TEMPORARILY,
	CHARACTER_RACE_NOT_ALLOWED,
	CHARACTER_COMMON_CANT_DO_THAT_FOR_SOME_REASON,
	CHARACTER_USER_SHOULD_WAIT_FOR_CONNECT,
	CHARACTER_SERVER_IS_UNDER_CONSTRUCTION,
	CHARACTER_DELETE_CHAR_FAIL,
};

#endif