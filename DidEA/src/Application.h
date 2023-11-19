#pragma once

#include "Core.h"

namespace DidEA
{
	class DIDEA_API Application
	{
	public:

		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}


