#include "AdminPage.h"
#include "AuthentificationPage.h"
#include "PersonnelPage.h"

void POO::AdminPage::InitializeComponent(void)
{
	// 
	// AdminPage
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(800, 500);
	this->Name = L"AdminPage";
	this->Text = L"AdminPage";
	this->Load += gcnew System::EventHandler(this, &AdminPage::AdminPage_Load);
	this->ResumeLayout(false);
	this->PerformLayout();

}

System::Void POO::AdminPage::AdminPage_Load(System::Object^ sender, System::EventArgs^ e){}

POO::AdminPage::AdminPage(void)
{
	InitializeComponent();
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(76, 97);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(253, 73);
	this->button1->TabIndex = 0;
	this->button1->Text = L"Gerer Personnel";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &AdminPage::button1_Click);
	this->Controls->Add(this->button1);
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(361, 27);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(44, 16);
	this->label1->TabIndex = 1;
	this->label1->Text = L"Bonjour Administrateur";
	this->Controls->Add(this->label1);
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(696, 19);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(92, 24);
	this->button2->TabIndex = 2;
	this->button2->Text = L"Deconnextion";
	this->button2->UseVisualStyleBackColor = true;
	this->button2->Click += gcnew System::EventHandler(this, &AdminPage::button2_Click);
	this->Controls->Add(this->button2);
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(441, 97);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(253, 73);
	this->button3->TabIndex = 3;
	this->button3->Text = L"Gerer Article";
	this->button3->UseVisualStyleBackColor = true;
	this->Controls->Add(this->button3);
}

POO::AdminPage::~AdminPage()
{
	if (components)
	{
		delete components;
	}
}

System::Void POO::AdminPage::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	
	AuthentificationPage^ authentificationPage = gcnew AuthentificationPage();
	authentificationPage->ShowDialog();

	this->Close();
}

System::Void POO::AdminPage::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	PersonnelPage^ personnelPage = gcnew PersonnelPage();
	personnelPage->ShowDialog();

	this->Close();
}