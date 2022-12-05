#pragma once

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ArticlePage : public System::Windows::Forms::Form
	{
	public:
		ArticlePage(void);


	protected:
		~ArticlePage();
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button2;

	private:
		System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
		#pragma endregion
		System::Void ArticlePage_Load(System::Object^ sender, System::EventArgs^ e);
		
	};
}
