#pragma once

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AuthentificationPage : public System::Windows::Forms::Form
	{
	public:
		AuthentificationPage(void);

	protected:
		~AuthentificationPage();
		
	private: 
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Label^ label1;
		System::ComponentModel::IContainer^ components;		
		
		#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
		#pragma endregion

		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	
		System::Void AuthentificationPage_Load(System::Object^ sender, System::EventArgs^ e);

		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
