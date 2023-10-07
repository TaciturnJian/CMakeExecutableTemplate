#pragma once

#include <iostream>

class Application
{
public:
	static void PrintArguments(const int argumentCount, const char* const * const arguments)
	{
		std::cout << "Get" << argumentCount << " argument(s);\n";

		if (argumentCount > 0)
		{
			std::cout << "They are: \n";
			for (auto i = 0; i < argumentCount; i++)
			{
				std::cout << "\t[" << i << "]: " << arguments[i] << '\n';
			}
		}
	}

	static int ReadyToExit()
	{
		std::cout << "Input anything to exit\n>>> ";
		std::cin.get();
		return 0;
	}
};
