#include "Main.h"
#include "ButtonFactory.h";
#include <vector>
#include <string>
#include "Processor.h"
#include <bitset>
#include <iostream>
#include <sstream>

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
Processor* _processor = Processor::GetInstance();
float result = 0;

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calcualtor", wxPoint(30, 30), wxSize(470, 800), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX))
{

	ButtonFactory factory;

	SetBackgroundColour(wxColour("#207d77"));

	wxFont newFont(32, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	SetFont(newFont);


	wxFont labelFont(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	num0Button = factory.newWxButton(this, 100, "0", wxPoint(230, 550), wxSize(100, 100));
	num1Button = factory.newWxButton(this, 101, "1", wxPoint(10, 440), wxSize(100, 100));
	num2Button = factory.newWxButton(this, 102, "2", wxPoint(120, 440), wxSize(100, 100));
	num3Button = factory.newWxButton(this, 103, "3", wxPoint(230, 440), wxSize(100, 100));
	num4Button = factory.newWxButton(this, 104, "4", wxPoint(10, 330), wxSize(100, 100));
	num5Button = factory.newWxButton(this, 105, "5", wxPoint(120, 330), wxSize(100, 100));
	num6Button = factory.newWxButton(this, 106, "6", wxPoint(230, 330), wxSize(100, 100));
	num7Button = factory.newWxButton(this, 107, "7", wxPoint(10, 220), wxSize(100, 100));
	num8Button = factory.newWxButton(this, 108, "8", wxPoint(120, 220), wxSize(100, 100));
	num9Button = factory.newWxButton(this, 109, "9", wxPoint(230, 220), wxSize(100, 100));

	cButton = factory.newWxButton(this, 120, "C", wxPoint(120, 550), wxSize(100, 100));
	modButton = factory.newWxButton(this, 130, "MOD", wxPoint(10, 550), wxSize(100, 100));

	plusButton = factory.newWxButton(this, 150, "+", wxPoint(340, 550), wxSize(100, 100));
	minusButton = factory.newWxButton(this, 160, "-", wxPoint(340, 440), wxSize(100, 100));
	multiplyButton = factory.newWxButton(this, 170, "X", wxPoint(340, 330), wxSize(100, 100));
	divideButton = factory.newWxButton(this, 180, "/", wxPoint(340, 220), wxSize(100, 100));

	outputWindow = new wxTextCtrl(this, 200, "", wxPoint(10, 10), wxSize(430, 150), wxTE_READONLY | wxTE_RIGHT);

	decButton = factory.newWxButton(this, 250, "DECIMAL", wxPoint(10, 170), wxSize(140, 40));
	binButton = factory.newWxButton(this, 260, "BINARY", wxPoint(155, 170), wxSize(140, 40));
	hexButton = factory.newWxButton(this, 270, "HEX", wxPoint(300, 170), wxSize(140, 40));

	equalsButton = factory.newWxButton(this, 300, "=", wxPoint(120, 660), wxSize(320, 90));
	negateButton = factory.newWxButton(this, 400, "+/-", wxPoint(10, 660), wxSize(100, 90));

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

	//if (id > 99 && id < 110 && _processor->hasOperator == false && outputWindow->GetLabel() != "" && _processor->numOne != 0)
	//{
	//	outputString = "";
	//	outputWindow->SetLabel(outputString);
	//	_processor->numOne = 0;
	//	_processor->numTwo = 0;
	//	_processor->hasOperator = false;
	//}

	switch (id)
	{
	case 100:
		outputString += "0";
		break;
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
		//outputString += "C";
		outputString = "";
		_processor->numOne = 0;
		_processor->numTwo = 0;
		_processor->hasOperator = false;
		break;
	case 130:
		//outputString += "MOD";
		ConvertToInt(1);
		_processor->SetOperator(5);
		break;
	case 150:
		//outputString += "+";
		ConvertToInt(1);
		_processor->SetOperator(1);
		break;
	case 160:
		//outputString += "-";
		ConvertToInt(1);
		_processor->SetOperator(2);
		break;
	case 170:
		//outputString += "X";
		ConvertToInt(1);
		_processor->SetOperator(3);
		break;
	case 180:
		//outputString += "/";
		ConvertToInt(1);
		_processor->SetOperator(4);
		break;
	case 250:
		outputMode = 1;
		break;
	case 260:
		if (outputMode != 2) {
			outputMode = 2;
		}
		break;
	case 270:
		outputMode = 3;
		break;
	case 300:
		if (_processor->hasOperator == true)
		{
			ConvertToInt(2);
			switch (_processor->operatorIndex)
			{
			case 1:
				result = _processor->commandVec[0]->Execute(_processor->numOne, _processor->numTwo);
				break;
			case 2:
				result = _processor->commandVec[1]->Execute(_processor->numOne, _processor->numTwo);
				break;
			case 3:
				result = _processor->commandVec[2]->Execute(_processor->numOne, _processor->numTwo);
				break;
			case 4:
				result = _processor->commandVec[3]->Execute(_processor->numOne, _processor->numTwo);
				break;
			case 5:
				result = _processor->MOD();

				break;
			default:
				result = 0;
				break;
			}

			outputString = _processor->returnFormattedResult(outputMode, result);

			//if (outputMode == 1)
			//{
			//	outputString = std::to_string(result);
			//}
			//else if (outputMode == 2)
			//{
			//	std::string string;
			//	string = std::bitset<32>(result).to_string();
			//	
			//	for (int i = 0; i < 32; i++)
			//	{
			//		if (stoi(string.substr(i)) != stoi(string))
			//		{
			//			string = string.substr(i-1);
			//			break;
			//		}
			//	}
			//	outputString = string;
			//}
			//else if (outputMode == 3)
			//{


			//	std::ostringstream ss;
			//	ss << std::hex << (int)result;
			//	std::string resultString = ss.str();

			//	outputString = resultString;

			//}

		}

	case 400:
		break;
	default:
		break;
	}

	outputWindow->SetLabel(outputString);

	evt.Skip();
}

void Main::ConvertToInt(int numToConvert = 2)
{
	if (outputString != "") {
		float tempNum = std::stof((std::string)outputWindow->GetLabel());

		if (numToConvert == 1)
		{
			_processor->numOne = tempNum;
		}
		else
		{
			_processor->numTwo = tempNum;
		}

		outputString = "";
	}
}