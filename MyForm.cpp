#include "MyForm.h"
#include <Windows.h>
using namespace Travel;
//using namespace System::Windows::Forms;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE,LPSTR,int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Travel::MyForm form;
	//Application::Run(% form);
	Application::Run(gcnew MyForm());
	return 0;
}
