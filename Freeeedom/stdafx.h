// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "SDKDDKVer.h"

#pragma warning(disable:4099)
#define SFML_STATIC
#if defined(_DEBUG)
#pragma comment(lib, "sfml-window-s-d.lib")
#pragma comment(lib, "sfml-graphics-s-d.lib")
#pragma comment(lib, "sfml-system-s-d.lib")
#pragma comment(lib, "sfml-audio-s-d.lib")
#else
#pragma comment(lib, "sfml-window-s.lib")
#pragma comment(lib, "sfml-graphics-s.lib")
#pragma comment(lib, "sfml-system-s.lib")
#pragma comment(lib, "sfml-audio-s.lib")
#endif

#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Audio.hpp>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <tchar.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <iostream>
#include <string>





#include "StateManager.h"
#include "Types.h"
#include "Engine.h"


// TODO: reference additional headers your program requires here
