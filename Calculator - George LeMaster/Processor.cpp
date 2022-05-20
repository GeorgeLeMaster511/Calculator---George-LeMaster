#include "Processor.h"
#include "Main.h"
Processor::Processor()
{
	
}

void Processor::SetOperator(int input)
{
	operatorIndex = input;


	hasOperator = true;
	
}


Processor*::Processor::_processor = nullptr;