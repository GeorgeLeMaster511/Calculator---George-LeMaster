// CalculatorTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "ProcessorTests.h"
#include "ButtonFactoryTest.h"

int main()
{
	ButtonFactoryTest* buttonFacTest  = new ButtonFactoryTest();
	ProcessorTests* processorTest = new ProcessorTests();

	buttonFacTest->CreateButtonWithIDof100();
	buttonFacTest->CreateButtonWithIDof200();
	buttonFacTest->CreateButtonWithIDof300();
	buttonFacTest->CreateButtonWithIDof400();
	buttonFacTest->CreateButtonWithLabelof500();
	buttonFacTest->CreateButtonWithLabelof600();
	buttonFacTest->CreateButtonWithLabelof700();
	buttonFacTest->CreateButtonWithLabelof800();
	buttonFacTest->CreateButtonWithLabelof900();
	buttonFacTest->CreateButtonWithLabelof1000();

	processorTest->Add2Plus2();
	processorTest->Sub2Minus2();
}
