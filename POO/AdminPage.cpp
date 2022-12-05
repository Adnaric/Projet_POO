#include "AdminPage.h"
#include "AuthentificationPage.h"
#include "PersonnelPage.h"
#include "ArticlePage.h"
#include "ClientPage.h"

void POO::AdminPage::InitializeComponent(void)
{
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->button4 = (gcnew System::Windows::Forms::Button());
	this->button5 = (gcnew System::Windows::Forms::Button());
	this->label1 = (gcnew System::Windows::Forms::Label());
	
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(70, 82);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(134, 58);
	this->button1->TabIndex = 0;
	this->button1->Text = L"Gerer le personnel";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &AdminPage::button1_Click);
	this->Controls->Add(this->button1);
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(368, 82);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(134, 58);
	this->button2->TabIndex = 1;
	this->button2->Text = L"Gerer les articles";
	this->button2->UseVisualStyleBackColor = true;
	this->button2->Click += gcnew System::EventHandler(this, &AdminPage::button2_Click);
	this->Controls->Add(this->button2);
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(70, 229);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(134, 57);
	this->button3->TabIndex = 2;
	this->button3->Text = L"Gerer les clients";
	this->button3->UseVisualStyleBackColor = true;
	this->button3->Click += gcnew System::EventHandler(this, &AdminPage::button3_Click);
	this->Controls->Add(this->button3);
	// 
	// button4
	// 
	this->button4->Location = System::Drawing::Point(368, 229);
	this->button4->Name = L"button4";
	this->button4->Size = System::Drawing::Size(132, 57);
	this->button4->TabIndex = 3;
	this->button4->Text = L"Gerer les commandes";
	this->button4->UseVisualStyleBackColor = true;
	this->button4->Click += gcnew System::EventHandler(this, &AdminPage::button4_Click);
	this->Controls->Add(this->button4);
	// 
	// button5
	// 
	this->button5->Location = System::Drawing::Point(442, 12);
	this->button5->Name = L"button6";
	this->button5->Size = System::Drawing::Size(133, 41);
	this->button5->TabIndex = 5;
	this->button5->Text = L"Déconnexion";
	this->button5->UseVisualStyleBackColor = true;
	this->button5->Click += gcnew System::EventHandler(this, &AdminPage::button5_Click);
	this->Controls->Add(this->button5);
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(239, 31);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(111, 13);
	this->label1->TabIndex = 4;
	this->label1->Text = L"Bonjour administrateur";
	this->Controls->Add(this->label1);
	// 
	// AdminPage
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(600, 406);
	this->Margin = System::Windows::Forms::Padding(2);
	this->Name = L"AdminPage";
	this->Text = L"s";
	this->Load += gcnew System::EventHandler(this, &AdminPage::AdminPage_Load);
}

System::Void POO::AdminPage::AdminPage_Load(System::Object^ sender, System::EventArgs^ e){}

POO::AdminPage::AdminPage(void)
{
	InitializeComponent();
		
}

POO::AdminPage::~AdminPage()
{
	if (components)
	{
		delete components;
	}
}

System::Void POO::AdminPage::button5_Click(System::Object^ sender, System::EventArgs^ e) {
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

System::Void POO::AdminPage::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	ArticlePage^ articlePage = gcnew ArticlePage();
	articlePage->ShowDialog();

	this->Close();
}

System::Void POO::AdminPage::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void POO::AdminPage::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	
	ClientPage^ clientPage = gcnew ClientPage();
	clientPage->ShowDialog();
	
	this->Close();
}