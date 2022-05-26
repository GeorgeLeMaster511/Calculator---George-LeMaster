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
};

