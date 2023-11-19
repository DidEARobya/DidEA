#pragma once

#ifdef DEA_PLATFORM_WINDOWS

extern DidEA::Application* DidEA::CreateApplication();

int main(int argc, char** argv)
{
	auto app = DidEA::CreateApplication();
	app->Run();

	delete app;
}

#endif