#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TAZodiak::MyForm form;
	Application::Run(% form);
}

/*
Modul yang digunakan:
- Variable,tipe data, dan array (Modul 1)
- Pengkondisian (Modul 2)
- OOP
- Method dan Fungsi
- OOP2 (Encapsulation)
- GUI
*/