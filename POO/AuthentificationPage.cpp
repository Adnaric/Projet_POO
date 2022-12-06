#include "AuthentificationPage.h"
#include "AdminPage.h"

POO::AuthentificationPage::AuthentificationPage(void)
{
	InitializeComponent();
	
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->SuspendLayout();
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(76, 257);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(149, 72);
	this->button1->TabIndex = 0;
	this->button1->Text = L"Administrateur";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &AuthentificationPage::button1_Click);
	this->Controls->Add(this->button1);

	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(389, 257);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(149, 72);
	this->button2->TabIndex = 1;
	this->button2->Text = L"Personnel";
	this->button2->UseVisualStyleBackColor = true;
	this->Controls->Add(this->button2);
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(276, 117);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(44, 16);
	this->label1->TabIndex = 2;
	this->label1->Text = L"Connection";
	this->Controls->Add(this->label1);

}

POO::AuthentificationPage::~AuthentificationPage()
{
	if (components)
	{
		delete components;
	}
}

void POO::AuthentificationPage::InitializeComponent(void)
{
	this->SuspendLayout();
	// 
	// AuthentificationPage
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(800, 500);
	this->Name = L"AuthentificationPage";
	this->Text = L"AuthentificationPage";
	this->Load += gcnew System::EventHandler(this, &AuthentificationPage::AuthentificationPage_Load);
	this->ResumeLayout(false);

}

void POO::AuthentificationPage::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	AdminPage^ adminPage = gcnew AdminPage();
	adminPage->ShowDialog();
	this->Close();
}

System::Void POO::AuthentificationPage::AuthentificationPage_Load(System::Object^ sender, System::EventArgs^ e)
{}
