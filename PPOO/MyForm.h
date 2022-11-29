#pragma once

namespace PPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	protected:
		~MyForm();

	private: 
		System::ComponentModel::IContainer^ components;

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
		#pragma endregion
		
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);

		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
