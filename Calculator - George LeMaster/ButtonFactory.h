#pragma once

#include "wx\wx.h"
#include <string>

class ButtonFactory
{
public:
	wxButton* newWxButton(wxWindow* _parent, wxWindowID _id, wxString _label, wxPoint _point, wxSize _size, std::string color = "#ffffff");
};

