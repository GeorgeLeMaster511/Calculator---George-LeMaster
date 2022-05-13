#include "ButtonFactory.h"

#include "wx\wx.h"



wxButton* ButtonFactory::newWxButton(wxWindow* _parent, wxWindowID _id, wxString _label, wxPoint _point, wxSize _size, std::string color)
{
	wxButton* newButton = new wxButton(_parent, _id, _label, _point, _size);
	newButton->SetBackgroundColour(wxColour(color));
	return newButton;
}
