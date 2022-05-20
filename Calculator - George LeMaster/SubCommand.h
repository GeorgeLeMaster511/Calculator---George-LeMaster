#pragma once
#include "IBaseCommand.h"
class SubCommand : public IBaseCommand
{
public:
	virtual float Execute(float numOne, float numTwo);
};

