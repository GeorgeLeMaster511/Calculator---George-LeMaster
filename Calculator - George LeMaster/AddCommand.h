#pragma once
#include "IBaseCommand.h"
class AddCommand : public IBaseCommand
{
public:
	virtual float Execute(float numOne, float numTwo);
};

