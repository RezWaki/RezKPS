#include <Windows.h>
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace RezKPS;

INT WINAPI WinMain(HINSTANCE,
				   HINSTANCE,
						LPSTR,
							INT){
	MyForm^ kps_Form = gcnew MyForm();
	Application::EnableVisualStyles();
	Application::Run(kps_Form);
	delete(kps_Form);
	return true;
}