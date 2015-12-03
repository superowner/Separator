#ifndef _Nikaido_
#define _Nikaido_

#include <Windows.h>
#include "SeparatorArgs.h"
#include <string>
#include "Lua/lua.hpp"

using std::wstring;

class Nikaido
{
private:
	Nikaido();
	static Nikaido* Handle;
	
public:
	static Nikaido* getInstance();
	~Nikaido();
	
	HRESULT WINAPI Run(const wstring& ScriptName, SeparatorArgs* Client);
	HRESULT WINAPI Stop();
	HRESULT WINAPI SetCPUCore(ULONG Cores);
};

#endif
