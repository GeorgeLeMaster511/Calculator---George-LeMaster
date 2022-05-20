#pragma once
#include "IBaseCommand.h"
#include "AddCommand.h"
#include "SubCommand.h"
#include "MultiCommand.h"
#include "DivCommand.h"
#include <iostream>
#include <vector>

class Processor
{

public:

	Processor(const Processor& _copy) = delete;
	Processor& operator=(const Processor& _assign) = delete;

	static Processor* GetInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new Processor();
		}

		return _processor;
	}

	float numOne;
	float numTwo;
	int operatorIndex;

	std::vector<IBaseCommand*> commandVec;

	AddCommand* addCommand;
	SubCommand* subCommand;
	MultiCommand* multiCommand;
	DivCommand* divCommand;


	bool hasOperator = false;


	float Multiply() { return numOne * numTwo; }
	float Divide() { return numOne / numTwo; }
	int MOD() { return (int)numOne % (int)numTwo; }

	void SetOperator(int input);

	~Processor() { if (_processor != nullptr) { delete _processor; } }

private:
	Processor();
	static Processor* _processor;
};

