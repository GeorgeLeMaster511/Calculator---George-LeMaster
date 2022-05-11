#pragma once

#include "wx/wx.h"

class Main : public wxFrame
{

public:
	Main();
//	~Main();

	// Number Buttons
	wxButton* num0Button = nullptr;
	wxButton* num1Button = nullptr;
	wxButton* num2Button = nullptr;
	wxButton* num3Button = nullptr;
	wxButton* num4Button = nullptr;
	wxButton* num5Button = nullptr;
	wxButton* num6Button = nullptr;
	wxButton* num7Button = nullptr;
	wxButton* num8Button = nullptr;
	wxButton* num9Button = nullptr;

	// Operator Buttons
	wxButton* equalsButton = nullptr;
	wxButton* negateButton = nullptr;
	wxButton* cButton = nullptr;
	wxButton* modButton = nullptr;
	wxButton* plusButton = nullptr;
	wxButton* minusButton = nullptr;
	wxButton* divideButton = nullptr;
	wxButton* multiplyButton = nullptr;

	// Output Window
	wxTextCtrl* outputWindow = nullptr;

	// Output Format Buttons
	wxButton* hexButton = nullptr;
	wxButton* decButton = nullptr;
	wxButton* binButton = nullptr;

	void OnButtonClick(wxCommandEvent& evt);
};

