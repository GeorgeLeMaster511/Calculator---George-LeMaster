#pragma once

#include "../Calculator - George LeMaster/Processor.h"

#include "wx/wx.h"

class ProcessorTests
{

public:

	Processor* testProcessor = Processor::GetInstance();
	float result;

	void Add2Plus2();
	void Sub2Minus2();
	void Multi2By2();
	void Div2By2();
	void Add4Plus4();
	void Sub4Minus4();
	void Multi4By4();
	void Div4By4();
	void Test16asBin();


};

