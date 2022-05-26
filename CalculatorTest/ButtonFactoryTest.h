#pragma once

#include "../Calculator - George LeMaster/ButtonFactory.h"
//#include "../Calculator - George LeMaster/ButtonFactory.cpp"


#include "wx/wx.h"

class ButtonFactoryTest
{
public:

	wxWindow* wxWindowPointer;
	ButtonFactory buttonFac;
	wxButton* newButton;

	void CreateButtonWithIDof100();
	void CreateButtonWithIDof200();
	void CreateButtonWithIDof300();
	void CreateButtonWithIDof400();
	void CreateButtonWithLabelof500();
	void CreateButtonWithLabelof600();
	void CreateButtonWithLabelof700();
	void CreateButtonWithLabelof800();
	void CreateButtonWithLabelof900();
	void CreateButtonWithLabelof1000();
};