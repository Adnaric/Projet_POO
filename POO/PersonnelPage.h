#include "CLservices.h"

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class PersonnelPage : public System::Windows::Forms::Form
	{
	public:
		PersonnelPage(void);

	protected:
		~PersonnelPage();
		
	private: 
		NS_Comp_Svc::CLservices^ oSvc;
		System::Data::DataSet^ oDs;
		System::Windows::Forms::TabControl^ tabControl1;
		System::Windows::Forms::TabPage^ tabPage1;
		System::Windows::Forms::DataGridView^ dataGridView1;
		System::Windows::Forms::TabPage^ tabPage2;
		System::Windows::Forms::TabPage^ tabPage3;
		System::Windows::Forms::TabPage^ tabPage4;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
		System::Windows::Forms::MonthCalendar^ monthCalendar1;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::TextBox^ textBox7;
		System::Windows::Forms::TextBox^ textBox6;
		System::Windows::Forms::TextBox^ textBox5;
		System::Windows::Forms::TextBox^ textBox4;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::TextBox^ textBox8;
		System::Windows::Forms::Label^ label10;
		System::Windows::Forms::TextBox^ textBox9;
		System::Windows::Forms::Label^ label11;
		System::Windows::Forms::TextBox^ textBox10;
		System::Windows::Forms::Label^ label12;
		System::Windows::Forms::TextBox^ textBox11;
		System::Windows::Forms::Label^ label13;
		System::Windows::Forms::TextBox^ textBox12;
		System::Windows::Forms::Label^ label14;
		System::Windows::Forms::TextBox^ textBox13;
		System::Windows::Forms::Label^ label15;
		System::Windows::Forms::TextBox^ textBox14;
		System::Windows::Forms::Label^ label16;
		System::Windows::Forms::TextBox^ textBox15;
		System::Windows::Forms::Label^ label17;
		System::Windows::Forms::Label^ label18;
		System::Windows::Forms::Label^ label19;
		System::Windows::Forms::MonthCalendar^ monthCalendar2;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::TextBox^ textBox16;
		System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;


		System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
		#pragma endregion
		System::Void PersonnelPage_Load(System::Object^ sender, System::EventArgs^ e);		
		System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
		
		System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e);
		System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	};
}
