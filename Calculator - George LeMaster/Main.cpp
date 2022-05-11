#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
	
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calcualtor", wxPoint(30, 30), wxSize(470, 800), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER|wxMAXIMIZE_BOX))
{
	wxFont newFont(32, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	SetFont(newFont);

	wxFont labelFont(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	num0Button = new wxButton(this, 100, "0", wxPoint(230, 550), wxSize(100, 100));
	num1Button = new wxButton(this, 101, "1", wxPoint(10, 440), wxSize(100, 100));
	num2Button = new wxButton(this, 102, "2", wxPoint(120, 440), wxSize(100, 100));
	num3Button = new wxButton(this, 103, "3", wxPoint(230, 440), wxSize(100, 100));
	num4Button = new wxButton(this, 104, "4", wxPoint(10, 330), wxSize(100, 100));
	num5Button = new wxButton(this, 105, "5", wxPoint(120, 330), wxSize(100, 100));
	num6Button = new wxButton(this, 106, "6", wxPoint(230, 330), wxSize(100, 100));
	num7Button = new wxButton(this, 107, "7", wxPoint(10, 220), wxSize(100, 100));
	num8Button = new wxButton(this, 108, "8", wxPoint(120, 220), wxSize(100, 100));
	num9Button = new wxButton(this, 109, "9", wxPoint(230, 220), wxSize(100, 100));



	cButton = new wxButton(this, 120, "C", wxPoint(120, 550), wxSize(100, 100));
	modButton = new wxButton(this, 130, "MOD", wxPoint(10, 550), wxSize(100, 100));

	plusButton = new wxButton(this, 150, "+", wxPoint(340, 550), wxSize(100, 100));
	minusButton = new wxButton(this, 160, "-", wxPoint(340, 440), wxSize(100, 100));
	multiplyButton = new wxButton(this, 170, "X", wxPoint(340, 330), wxSize(100, 100));
	divideButton = new wxButton(this, 180, "/", wxPoint(340, 220), wxSize(100, 100));

	outputWindow = new wxTextCtrl(this, 200, "", wxPoint(10, 10), wxSize(430, 150));

	decButton = new wxButton(this, 250, "DECIMAL", wxPoint(10, 170), wxSize(140, 40));
	binButton = new wxButton(this, 260, "BINARY", wxPoint(155, 170), wxSize(140, 40));
	hexButton = new wxButton(this, 270, "HEX", wxPoint(300, 170), wxSize(140, 40));

	equalsButton = new wxButton(this, 270, "=", wxPoint(120, 660), wxSize(320, 90));
	negateButton = new wxButton(this, 270, "+/-", wxPoint(10, 660), wxSize(100, 90));

	modButton->SetFont(labelFont);
	decButton->SetFont(labelFont);
	binButton->SetFont(labelFont);
	hexButton->SetFont(labelFont);

}

void OnButtonClick(wxCommandEvent& evt)
{
	evt.Skip();
}