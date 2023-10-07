#include "Application.hpp"

int main(const int argumentCount, const char * const * const arguments)
{
	Application::PrintArguments(argumentCount, arguments);

	std::cout << "Hello World!\n";

	return Application::ReadyToExit();
}