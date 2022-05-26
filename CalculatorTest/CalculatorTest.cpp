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
	processorTest->Multi2By2();
	processorTest->Div2By2();
	processorTest->Add4Plus4();
	processorTest->Sub4Minus4();
	processorTest->Multi4By4();
	processorTest->Div4By4();
	processorTest->Test16asBin();

}
