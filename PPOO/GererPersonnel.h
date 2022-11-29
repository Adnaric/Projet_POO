#pragma once

namespace PPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class GererPersonnel : public System::Windows::Forms::Form
	{
	public:
		GererPersonnel(void);

	protected:
		~GererPersonnel();
		
	private:
		System::ComponentModel::Container ^components;
		
		System::Windows::Forms::TabControl^ tabControl1;
		
		System::Windows::Forms::TabPage^ tabPage1;
		System::Windows::Forms::TabPage^ tabPage2;
		System::Windows::Forms::TabPage^ tabPage3;
		System::Windows::Forms::TabPage^ tabPage4;
		
		#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
		#pragma endregion
		System::Void GererPersonnel_Load(System::Object^ sender, System::EventArgs^ e);	
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	};
}
