#include "App.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	mFrame1 = new Main();
	mFrame1->Show();
	

	return true;
}
