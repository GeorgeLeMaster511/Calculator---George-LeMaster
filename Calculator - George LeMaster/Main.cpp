#include "Main.h"
#include <vector>

wxBEGIN_EVENT_TABLE(Main, wxFrame)
	EVT_BUTTON(100, Main::OnButtonClick)
	EVT_BUTTON(101, Main::OnButtonClick)
	EVT_BUTTON(102, Main::OnButtonClick)
	EVT_BUTTON(103, Main::OnButtonClick)
	EVT_BUTTON(104, Main::OnButtonClick)
	EVT_BUTTON(105, Main::OnButtonClick)
	EVT_BUTTON(106, Main::OnButtonClick)
	EVT_BUTTON(107, Main::OnButtonClick)
	EVT_BUTTON(108, Main::OnButtonClick)
	EVT_BUTTON(109, Main::OnButtonClick)

	EVT_BUTTON(120, Main::OnButtonClick)
	EVT_BUTTON(130, Main::OnButtonClick)

	EVT_BUTTON(150, Main::OnButtonClick)
	EVT_BUTTON(160, Main::OnButtonClick)
	EVT_BUTTON(170, Main::OnButtonClick)
	EVT_BUTTON(180, Main::OnButtonClick)

	EVT_BUTTON(200, Main::OnButtonClick)

	EVT_BUTTON(250, Main::OnButtonClick)
	EVT_BUTTON(260, Main::OnButtonClick)
	EVT_BUTTON(270, Main::OnButtonClick)

	EVT_BUTTON(300, Main::OnButtonClick)
	EVT_BUTTON(400, Main::OnButtonClick)

wxEND_EVENT_TABLE()

wxString outputString = "";

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calcualtor", wxPoint(30, 30), wxSize(470, 800), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX))
{

	SetBackgroundColour(wxColour("#207d77"));

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

	outputWindow = new wxTextCtrl(this, 200, "", wxPoint(10, 10), wxSize(430, 150), wxTE_READONLY | wxTE_RIGHT);

	decButton = new wxButton(this, 250, "DECIMAL", wxPoint(10, 170), wxSize(140, 40));
	binButton = new wxButton(this, 260, "BINARY", wxPoint(155, 170), wxSize(140, 40));
	hexButton = new wxButton(this, 270, "HEX", wxPoint(300, 170), wxSize(140, 40));

	equalsButton = new wxButton(this, 300, "=", wxPoint(120, 660), wxSize(320, 90));
	negateButton = new wxButton(this, 400, "+/-", wxPoint(10, 660), wxSize(100, 90));

	modButton->SetFont(labelFont);
	decButton->SetFont(labelFont);
	binButton->SetFont(labelFont);
	hexButton->SetFont(labelFont);

	num0Button->SetBackgroundColour(wxColour("#68e3b4"));
	num1Button->SetBackgroundColour(wxColour("#68e3b4"));
	num2Button->SetBackgroundColour(wxColour("#68e3b4"));
	num3Button->SetBackgroundColour(wxColour("#68e3b4"));
	num4Button->SetBackgroundColour(wxColour("#68e3b4"));
	num5Button->SetBackgroundColour(wxColour("#68e3b4"));
	num6Button->SetBackgroundColour(wxColour("#68e3b4"));
	num7Button->SetBackgroundColour(wxColour("#68e3b4"));
	num8Button->SetBackgroundColour(wxColour("#68e3b4"));
	num9Button->SetBackgroundColour(wxColour("#68e3b4"));
	cButton->SetBackgroundColour(wxColour("#99f7d3"));
	modButton->SetBackgroundColour(wxColour("#99f7d3"));
	negateButton->SetBackgroundColour(wxColour("#00baff"));
	equalsButton->SetBackgroundColour(wxColour("#ffffff"));

	outputWindow->SetBackgroundColour(wxColour("#99f7d3"));
}

void Main::OnButtonClick(wxCommandEvent& evt)
{
	int id = evt.GetId();

	switch (id)
	{
	case 101:
		outputString += "1";
		break;
	case 102:
		outputString += "2";
		break;
	case 103:
		outputString += "3";
		break;
	case 104:
		outputString += "4";
		break;
	case 105:
		outputString += "5";
		break;
	case 106:
		outputString += "6";
		break;
	case 107:
		outputString += "7";
		break;
	case 108:
		outputString += "8";
		break;
	case 109:
		outputString += "9";
		break;
	case 120:
		outputString += "C";
		break;
	case 130:
		outputString += "MOD";
		break;
	case 150:
		outputString += "+";
		break;
	case 160:
		outputString += "-";
		break;
	case 170:
		outputString += "X";
		break;
	case 180:
		outputString += "/";
		break;
	case 250:

		break;
	case 260:

		break;
	case 270:

		break;
	case 300:

		break;
	case 400:

		break;
	default:
		break;
	}

	outputWindow->SetLabel(outputString);

	evt.Skip();
}