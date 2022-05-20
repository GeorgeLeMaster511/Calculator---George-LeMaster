#include "Processor.h"
#include "IBaseCommand.h"
#include "AddCommand.h"
#include "SubCommand.h"
#include "Main.h"

#include <vector>
Processor::Processor()
{
	addCommand = new AddCommand;
	subCommand = new SubCommand;
	multiCommand = new MultiCommand;
	divCommand = new DivCommand;

	commandVec.push_back(addCommand);
	commandVec.push_back(subCommand);
	commandVec.push_back(multiCommand);
	commandVec.push_back(divCommand);

}

void Processor::SetOperator(int input)
{
	operatorIndex = input;

	hasOperator = true;	
}


Processor*::Processor::_processor = nullptr;