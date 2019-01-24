#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <time.h>
#include <stdlib.h>
static inline int add(int a, int b)
{
	return a+b;
}

static int mylib_add(lua_State *L)
{
	int f, s, r;
	f = lua_tonumber(L,1);
	s = lua_tonumber(L,2);
	r = add(f, s);
	lua_pushnumber(L, r);
	return 1;
}
static int mylib_rand(lua_State *L)
{
	lua_pushnumber(L, rand());
	return 1;
}
static int mylib_time(lua_State *L)
{
	time_t t; 
	time(&t); 
	
	lua_pushstring(L, ctime(&t));
	return 1;
}
static const luaL_Reg R[] = 
{
	{"add", mylib_add},
	{"time", mylib_time},
	{"rand", mylib_rand},
	{NULL, NULL}

};
LUALIB_API int luaopen_mylib(lua_State *L)
{
	luaL_openlib(L, "mylib", R, 0);
	srand(time(NULL));
	return 1;
}
