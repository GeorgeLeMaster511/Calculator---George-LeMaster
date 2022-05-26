#include "ProcessorTests.h"

void ProcessorTests::Add2Plus2()
{

	result = testProcessor->commandVec[0]->Execute(2, 2);

	std::cout << "Add2Plus2: ";
	if (result == 4)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ProcessorTests::Sub2Minus2()
{

	result = testProcessor->commandVec[1]->Execute(2, 2);

	std::cout << "Sub2Minus2: ";
	if (result == 0)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}
