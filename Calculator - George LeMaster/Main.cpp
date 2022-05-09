#include "Main.h"

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calcualtor", wxPoint(30, 30), wxSize(470, 700))
{
	num0Button = new wxButton(this, 100, "0", wxPoint(230, 550), wxSize(100, 100));
	num1Button = new wxButton(this, 101, "1", wxPoint(10, 440), wxSize(100, 100));
	num2Button = new wxButton(this, 102, "2", wxPoint(120,440), wxSize(100, 100));
	num3Button = new wxButton(this, 103, "3", wxPoint(230, 440), wxSize(100, 100));
	num4Button = new wxButton(this, 104, "4", wxPoint(10, 330), wxSize(100, 100));
	num5Button = new wxButton(this, 105, "5", wxPoint(120, 330), wxSize(100, 100));
	num6Button = new wxButton(this, 106, "6", wxPoint(230, 330), wxSize(100, 100));
	num7Button = new wxButton(this, 107, "7", wxPoint(10, 220), wxSize(100, 100));
	num8Button = new wxButton(this, 108, "8", wxPoint(120, 220), wxSize(100, 100));
	num9Button = new wxButton(this, 109, "9", wxPoint(230, 220), wxSize(100, 100));
}