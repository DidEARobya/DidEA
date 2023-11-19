#pragma once

#ifdef DEA_PLATFORM_WINDOWS
	#ifdef DEA_BUILD_DLL
		#define DIDEA_API _declspec(dllexport)
	#else
		#define DIDEA_API _declspec(dllimport)
	#endif
#endif // DEA_BUILD_DLL


