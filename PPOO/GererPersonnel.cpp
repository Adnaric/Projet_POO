#include "GererPersonnel.h"
#include "AdminPage.h"

PPOO::GererPersonnel::GererPersonnel(void)
{
	InitializeComponent();

	Button^ bouton1 = gcnew Button();
	bouton1->Text = "Retour Page Admin";
	bouton1->Location = Point(this->Width - 150, 10);
	bouton1->Size = System::Drawing::Size(100, 50);
	bouton1->Click += gcnew EventHandler(this, &GererPersonnel::button1_Click);
	this->Controls->Add(bouton1);
	
	tabControl1 = gcnew System::Windows::Forms::TabControl();
	tabControl1->Location = System::Drawing::Point(0, 0);
	tabControl1->Size = System::Drawing::Size(800, 600);
	tabControl1->TabIndex = 0;
	tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
	this->Controls->Add(tabControl1);
	
	
	tabPage1 = gcnew System::Windows::Forms::TabPage();
	tabPage1->Text = "Afficher";
	tabPage1->Location = System::Drawing::Point(4, 22);
	tabPage1->Size = System::Drawing::Size(792, 574);
	tabPage1->TabIndex = 0;
	tabPage1->UseVisualStyleBackColor = true;
	tabControl1->Controls->Add(tabPage1);
	
	tabPage2 = gcnew System::Windows::Forms::TabPage();
	tabPage2->Text = "Ajouter";
	tabPage2->Location = System::Drawing::Point(4, 22);
	tabPage2->Size = System::Drawing::Size(792, 574);
	tabPage2->TabIndex = 1;
	tabPage2->UseVisualStyleBackColor = true;
	tabControl1->Controls->Add(tabPage2);
	
	tabPage3 = gcnew System::Windows::Forms::TabPage();
	tabPage3->Text = "Modifier";
	tabPage3->Location = System::Drawing::Point(4, 22);
	tabPage3->Size = System::Drawing::Size(792, 574);
	tabPage3->TabIndex = 2;
	tabPage3->UseVisualStyleBackColor = true;
	tabControl1->Controls->Add(tabPage3);
		
	tabPage4 = gcnew System::Windows::Forms::TabPage();
	tabPage4->Text = "Supprimer";
	tabPage4->Location = System::Drawing::Point(4, 22);
	tabPage4->Size = System::Drawing::Size(792, 574);
	tabPage4->TabIndex = 3;
	tabPage4->UseVisualStyleBackColor = true;
	tabControl1->Controls->Add(tabPage4);

	System::Windows::Forms::Label^ label1 = gcnew System::Windows::Forms::Label();
	label1->Location = System::Drawing::Point(0, 0);
	label1->Size = System::Drawing::Size(792, 50);
	label1->Text = "Liste de tout les personnels";
	label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	tabPage1->Controls->Add(label1);
	
	System::Windows::Forms::DataGridView^ dataGridView1 = gcnew System::Windows::Forms::DataGridView();
	dataGridView1->Location = Point(0, 50);
	dataGridView1->Width = tabPage1->Width;
	dataGridView1->Height = tabPage1->Height - 150;
	dataGridView1->ReadOnly = true;
	dataGridView1->ColumnCount = 4;
	dataGridView1->Columns[0]->Name = "Id";
	dataGridView1->Columns[1]->Name = "Nom";
	dataGridView1->Columns[2]->Name = "Prenom";
	dataGridView1->Columns[3]->Name = "Age";
	dataGridView1->Rows->Add(0,"Doe", "John", "42");
	dataGridView1->Rows->Add(1,"Smith", "Mary", "43");
	dataGridView1->Rows->Add(2,"Fillmore", "Millard", "50");
	dataGridView1->Rows->Add(3,"Adams", "Abraham", "55");
	dataGridView1->Rows->Add(4,"Bush", "George", "60");
	dataGridView1->Rows->Add(5,"Clinton", "Bill", "65");
	dataGridView1->Rows->Add(6,"Bush", "George", "70");
	tabPage1->Controls->Add(dataGridView1);
	
	System::Windows::Forms::Label^ label2 = gcnew System::Windows::Forms::Label();
	label2->Location = System::Drawing::Point(0, 0);
	label2->Size = System::Drawing::Size(792, 50);
	label2->Text = "Ajouter un personnel";
	label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	tabPage2->Controls->Add(label2);
	
	System::Windows::Forms::Label^ label3 = gcnew System::Windows::Forms::Label();
	label3->Location = System::Drawing::Point(0, 50);
	label3->Size = System::Drawing::Size(100, 50);
	label3->Text = "Nom";
	label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	tabPage2->Controls->Add(label3);
	
	System::Windows::Forms::TextBox^ textBox1 = gcnew System::Windows::Forms::TextBox();
	textBox1->Location = System::Drawing::Point(100, 50);
	textBox1->Size = System::Drawing::Size(100, 50);
	tabPage2->Controls->Add(textBox1);
	
	System::Windows::Forms::Label^ label4 = gcnew System::Windows::Forms::Label();
	label4->Location = System::Drawing::Point(0, 100);
	label4->Size = System::Drawing::Size(100, 50);
	label4->Text = "Prenom";
	label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	tabPage2->Controls->Add(label4);
	
	System::Windows::Forms::TextBox^ textBox2 = gcnew System::Windows::Forms::TextBox();
	textBox2->Location = System::Drawing::Point(100, 100);
	textBox2->Size = System::Drawing::Size(100, 50);
	tabPage2->Controls->Add(textBox2);
	
	System::Windows::Forms::Label^ label5 = gcnew System::Windows::Forms::Label();
	label5->Location = System::Drawing::Point(0, 150);
	label5->Size = System::Drawing::Size(100, 50);
	label5->Text = "Age";
	label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	tabPage2->Controls->Add(label5);
		
	System::Windows::Forms::TextBox^ textBox3 = gcnew System::Windows::Forms::TextBox();
	textBox3->Location = System::Drawing::Point(100, 150);
	textBox3->Size = System::Drawing::Size(100, 50);
	tabPage2->Controls->Add(textBox3);
	
	System::Windows::Forms::Button^ button1 = gcnew System::Windows::Forms::Button();
	button1->Location = System::Drawing::Point(0, 200);
	button1->Size = System::Drawing::Size(100, 50);
	button1->Text = "Ajouter";
	tabPage2->Controls->Add(button1);
		
	System::Windows::Forms::Label^ label6 = gcnew System::Windows::Forms::Label();
	label6->Location = System::Drawing::Point(0, 0);
	label6->Size = System::Drawing::Size(792, 50);
	label6->Text = "Modifier un personnel";
	label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	tabPage3->Controls->Add(label6);
	
	System::Windows::Forms::Label^ label7 = gcnew System::Windows::Forms::Label();
	label7->Location = System::Drawing::Point(0, 50);
	label7->Size = System::Drawing::Size(100, 50);
	label7->Text = "Nom";
	label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	tabPage3->Controls->Add(label7);
	
	System::Windows::Forms::TextBox^ textBox4 = gcnew System::Windows::Forms::TextBox();
	textBox4->Location = System::Drawing::Point(100, 50);
	textBox4->Size = System::Drawing::Size(100, 50);
	tabPage3->Controls->Add(textBox4);
	
	System::Windows::Forms::Label^ label8 = gcnew System::Windows::Forms::Label();
	label8->Location = System::Drawing::Point(0, 100);
	label8->Size = System::Drawing::Size(100, 50);
	label8->Text = "Prenom";
	label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	tabPage3->Controls->Add(label8);
	
	System::Windows::Forms::TextBox^ textBox5 = gcnew System::Windows::Forms::TextBox();
	textBox5->Location = System::Drawing::Point(100, 100);
	textBox5->Size = System::Drawing::Size(100, 50);
	tabPage3->Controls->Add(textBox5);
	
	System::Windows::Forms::Label^ label9 = gcnew System::Windows::Forms::Label();
	label9->Location = System::Drawing::Point(0, 150);
	label9->Size = System::Drawing::Size(100, 50);
	label9->Text = "Age";
	label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	tabPage3->Controls->Add(label9);
	
	System::Windows::Forms::TextBox^ textBox6 = gcnew System::Windows::Forms::TextBox();
	textBox6->Location = System::Drawing::Point(100, 150);
	textBox6->Size = System::Drawing::Size(100, 50);
	tabPage3->Controls->Add(textBox6);
	
	System::Windows::Forms::Button^ button2 = gcnew System::Windows::Forms::Button();
	button2->Location = System::Drawing::Point(0, 200);
	button2->Size = System::Drawing::Size(100, 50);
	button2->Text = "Modifier";
	tabPage3->Controls->Add(button2);
	
	System::Windows::Forms::Label^ label10 = gcnew System::Windows::Forms::Label();
	label10->Location = System::Drawing::Point(0, 0);
	label10->Size = System::Drawing::Size(792, 50);
	label10->Text = "Supprimer un personnel";
	label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	tabPage4->Controls->Add(label10);
	
	System::Windows::Forms::Label^ label11 = gcnew System::Windows::Forms::Label();
	label11->Location = System::Drawing::Point(0, 50);
	label11->Size = System::Drawing::Size(100, 50);
	label11->Text = "Id";
	label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	tabPage4->Controls->Add(label11);
	
	System::Windows::Forms::TextBox^ textBox7 = gcnew System::Windows::Forms::TextBox();
	textBox7->Location = System::Drawing::Point(100, 50);
	textBox7->Size = System::Drawing::Size(100, 50);
	tabPage4->Controls->Add(textBox7);
		
	System::Windows::Forms::Button^ button3 = gcnew System::Windows::Forms::Button();
	button3->Location = System::Drawing::Point(0, 100);
	button3->Size = System::Drawing::Size(100, 50);
	button3->Text = "Supprimer";
	tabPage4->Controls->Add(button3);	
}

PPOO::GererPersonnel::~GererPersonnel()
{
	if (components)
	{
		delete components;
	}
}

void PPOO::GererPersonnel::InitializeComponent(void)
{
	this->SuspendLayout();
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::Color::Gray;
	this->ClientSize = System::Drawing::Size(800, 500);
	this->Name = L"GererPersonnel";
	this->Text = L"GererPersonnel";
	this->Load += gcnew System::EventHandler(this, &GererPersonnel::GererPersonnel_Load);
	this->ResumeLayout(false);

}

System::Void PPOO::GererPersonnel::GererPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {}

System::Void PPOO::GererPersonnel::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	GererPersonnel::Hide();

	PPOO::AdminPage^ adminPage = gcnew PPOO::AdminPage();
	adminPage->ShowDialog();

	GererPersonnel::Close();
}



	
