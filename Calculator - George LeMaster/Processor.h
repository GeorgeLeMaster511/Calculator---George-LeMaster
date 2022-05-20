#pragma once

#include <vector>
//#include "IBaseCommand.h"
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

	//std::vector<IBaseCommand> commandVec;

	bool hasOperator = false;

	float Add() { return numOne + numTwo; }
	float Subtract() { return numOne - numTwo; }
	float Multiply() { return numOne * numTwo; }
	float Divide() { return numOne / numTwo; }
	int MOD() { return (int)numOne % (int)numTwo; }

	void SetOperator(int input);

	~Processor() { if (_processor != nullptr) { delete _processor; } }

private:
	Processor();
	static Processor* _processor;
};

