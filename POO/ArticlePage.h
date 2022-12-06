#pragma once
#include "CLservices.h"
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
		
	private: 
		System::Windows::Forms::TabControl^ tabControl1;
		
		System::Windows::Forms::TabPage^ tabPage1;
		System::Windows::Forms::TabPage^ tabPage2;
		System::Windows::Forms::TabPage^ tabPage3;
		System::Windows::Forms::TabPage^ tabPage4;

		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button5;
		System::Windows::Forms::Button^ button4;
		
		System::Windows::Forms::DataGridView^ dataGridView1;

		System::Windows::Forms::RichTextBox^ richTextBox1;
		System::Windows::Forms::RichTextBox^ richTextBox2;
		
		System::Windows::Forms::NumericUpDown^ numericUpDown1;
		System::Windows::Forms::NumericUpDown^ numericUpDown2;
		System::Windows::Forms::NumericUpDown^ numericUpDown4;
		System::Windows::Forms::NumericUpDown^ numericUpDown3;
		
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::TextBox^ textBox3;

		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::Label^ label9;		
		System::Windows::Forms::Label^ label10;
		
		System::ComponentModel::Container ^components;
	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;

		
		#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
		#pragma endregion
		System::Void ArticlePage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
