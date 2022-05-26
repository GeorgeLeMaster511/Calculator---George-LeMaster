#pragma once
#include "ButtonFactoryTest.h"

void ButtonFactoryTest::CreateButtonWithIDof100()
{
	wxWindowPointer = new wxWindow();
	newButton = buttonFac.newWxButton(wxWindowPointer, 100, "100", wxPoint(1, 1), wxSize(1, 1));

	std::cout << "CreateButtonWithIDof100: ";
	if (newButton->GetId() == 100)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ButtonFactoryTest::CreateButtonWithIDof200()
{
	wxWindowPointer = new wxWindow();
	newButton = buttonFac.newWxButton(wxWindowPointer, 200, "200", wxPoint(1, 1), wxSize(1, 1));

	std::cout << "CreateButtonWithIDof200: ";
	if (newButton->GetId() == 200)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ButtonFactoryTest::CreateButtonWithIDof300()
{
	wxWindowPointer = new wxWindow();
	newButton = buttonFac.newWxButton(wxWindowPointer, 300, "300", wxPoint(1, 1), wxSize(1, 1));

	std::cout << "CreateButtonWithIDof300: ";
	if (newButton->GetId() == 300)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ButtonFactoryTest::CreateButtonWithIDof400()
{
	wxWindowPointer = new wxWindow();
	newButton = buttonFac.newWxButton(wxWindowPointer, 400, "400", wxPoint(1, 1), wxSize(1, 1));

	std::cout << "CreateButtonWithIDof400: ";
	if (newButton->GetId() == 400)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ButtonFactoryTest::CreateButtonWithLabelof500()
{
	wxWindowPointer = new wxWindow();
	newButton = buttonFac.newWxButton(wxWindowPointer, 500, "500", wxPoint(1, 1), wxSize(1, 1));

	std::cout << "CreateButtonWithIDof500: ";
	if (newButton->GetId() == 500)
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ButtonFactoryTest::CreateButtonWithLabelof600()
{
	wxWindowPointer = new wxWindow();
	newButton = buttonFac.newWxButton(wxWindowPointer, 600, "600", wxPoint(1, 1), wxSize(1, 1));

	std::cout << "CreateButtonWithLabelof600: ";
	wxString newString = "600";
	if (newButton->GetLabel().CompareTo(newString))
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ButtonFactoryTest::CreateButtonWithLabelof700()
{
	wxWindowPointer = new wxWindow();
	newButton = buttonFac.newWxButton(wxWindowPointer, 700, "700", wxPoint(1, 1), wxSize(1, 1));

	std::cout << "CreateButtonWithLabelof700: ";
	wxString newString = "700";
	if (newButton->GetLabel().CompareTo(newString))
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ButtonFactoryTest::CreateButtonWithLabelof800()
{
	wxWindowPointer = new wxWindow();
	newButton = buttonFac.newWxButton(wxWindowPointer, 800, "800", wxPoint(1, 1), wxSize(1, 1));

	std::cout << "CreateButtonWithLabelof800: ";
	wxString newString = "800";
	if (newButton->GetLabel().CompareTo(newString))
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ButtonFactoryTest::CreateButtonWithLabelof900()
{
	wxWindowPointer = new wxWindow();
	newButton = buttonFac.newWxButton(wxWindowPointer, 900, "900", wxPoint(1, 1), wxSize(1, 1));

	std::cout << "CreateButtonWithLabelof900: ";
	wxString newString = "900";
	if (newButton->GetLabel().CompareTo(newString))
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}

void ButtonFactoryTest::CreateButtonWithLabelof1000()
{
	wxWindowPointer = new wxWindow();
	newButton = buttonFac.newWxButton(wxWindowPointer, 1000, "1000", wxPoint(1, 1), wxSize(1, 1));

	std::cout << "CreateButtonWithLabelof1000: ";
	wxString newString = "1000";
	if (newButton->GetLabel().CompareTo(newString))
	{
		std::cout << "\ttrue\n";
	}
	else
	{
		std::cout << "\tfalse\n";
	}
}