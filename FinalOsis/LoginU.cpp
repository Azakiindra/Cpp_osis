#include "LoginU.h"

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FinalOsis::LoginU japp;
	Application::Run(%japp);
}