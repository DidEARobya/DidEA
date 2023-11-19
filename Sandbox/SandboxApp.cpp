#include <DidEA.h>

class Sandbox : public DidEA::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

DidEA::Application* DidEA::CreateApplication()
{
	return new Sandbox();
}