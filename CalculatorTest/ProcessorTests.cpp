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

void ProcessorTests::Multi2By2()
{

	result = testProcessor->commandVec[2]->Execute(2, 2);

	std::cout << "Multi2By2: ";
	if (result == 4)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ProcessorTests::Div2By2()
{

	result = testProcessor->commandVec[3]->Execute(2, 2);

	std::cout << "Div2By2: ";
	if (result == 1)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ProcessorTests::Add4Plus4()
{

	result = testProcessor->commandVec[0]->Execute(4, 4);

	std::cout << "Add4Plus4: ";
	if (result == 8)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ProcessorTests::Sub4Minus4()
{

	result = testProcessor->commandVec[1]->Execute(4, 4);

	std::cout << "Sub4Minus4: ";
	if (result == 0)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ProcessorTests::Multi4By4()
{

	result = testProcessor->commandVec[2]->Execute(4, 4);

	std::cout << "Multi4By4: ";
	if (result == 16)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ProcessorTests::Div4By4()
{

	result = testProcessor->commandVec[3]->Execute(4, 4);

	std::cout << "Div4By4: ";
	if (result == 1)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}