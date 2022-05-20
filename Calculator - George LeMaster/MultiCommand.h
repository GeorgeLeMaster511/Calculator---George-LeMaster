#pragma once
#include "IBaseCommand.h"
class MultiCommand : public IBaseCommand
{
	virtual float Execute(float numOne, float numTwo);
};

