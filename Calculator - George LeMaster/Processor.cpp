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

std::string Processor::returnFormattedResult(int resultType, float input)
{
	std::string result;
	std::string string;
	std::ostringstream ss;
	std::string resultString;
	
	switch (resultType) {
	case 1:
		result = std::to_string(input);
		break;
	case 2:
		string = std::bitset<32>(input).to_string();

		for (int i = 0; i < 32; i++)
		{
			if (stoi(string.substr(i)) != stoi(string))
			{
				string = string.substr(i - 1);
				break;
			}
		}
		result = string;
		break;
	case 3:
		ss << std::hex << (int)input;
		resultString = ss.str();

		result = resultString;
		break;
	default:
		result = "";
		break;
	}

	return result;
}

void Processor::SetOperator(int input)
{
	operatorIndex = input;

	hasOperator = true;	
}


Processor*::Processor::_processor = nullptr;