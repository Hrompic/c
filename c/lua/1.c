#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

int main()
{
	lua_State *L =luaL_newstate();// lua_open();
	luaL_openlibs(L);
	luaL_dofile(L, "2.lua");
	luaL_dostring(L,"print(123\n)");
	lua_close(L);

}
