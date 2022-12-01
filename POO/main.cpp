#include "AuthentificationPage.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // afficher hello world
    Application::Run(gcnew POO::AuthentificationPage());
    return 0;
}