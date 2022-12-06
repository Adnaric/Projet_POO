#include "AdminPage.h"
#include "AuthentificationPage.h"
#include "PersonnelPage.h"
#include "ArticlePage.h"
#include "ClientPage.h"
#include "StatsPage.h"
#include "CommandePage.h"

void POO::AdminPage::InitializeComponent(void)
{
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->button4 = (gcnew System::Windows::Forms::Button());
	this->button5 = (gcnew System::Windows::Forms::Button());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->button6 = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(93, 101);
	this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(179, 71);
	this->button1->TabIndex = 0;
	this->button1->Text = L"Gerer le personnel";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &AdminPage::button1_Click);
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(491, 101);
	this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(179, 71);
	this->button2->TabIndex = 1;
	this->button2->Text = L"Gerer les articles";
	this->button2->UseVisualStyleBackColor = true;
	this->button2->Click += gcnew System::EventHandler(this, &AdminPage::button2_Click);
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(93, 282);
	this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(179, 70);
	this->button3->TabIndex = 2;
	this->button3->Text = L"Gerer les clients";
	this->button3->UseVisualStyleBackColor = true;
	this->button3->Click += gcnew System::EventHandler(this, &AdminPage::button3_Click);
	// 
	// button4
	// 
	this->button4->Location = System::Drawing::Point(491, 282);
	this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
	this->button4->Name = L"button4";
	this->button4->Size = System::Drawing::Size(176, 70);
	this->button4->TabIndex = 3;
	this->button4->Text = L"Gerer les commandes";
	this->button4->UseVisualStyleBackColor = true;
	this->button4->Click += gcnew System::EventHandler(this, &AdminPage::button4_Click);
	// 
	// button5
	// 
	this->button5->Location = System::Drawing::Point(589, 15);
	this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
	this->button5->Name = L"button5";
	this->button5->Size = System::Drawing::Size(177, 50);
	this->button5->TabIndex = 5;
	this->button5->Text = L"Déconnexion";
	this->button5->UseVisualStyleBackColor = true;
	this->button5->Click += gcnew System::EventHandler(this, &AdminPage::button5_Click);
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(319, 38);
	this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(140, 16);
	this->label1->TabIndex = 4;
	this->label1->Text = L"Bonjour administrateur";
	// 
	// button6
	// 
	this->button6->Location = System::Drawing::Point(293, 397);
	this->button6->Name = L"button6";
	this->button6->Size = System::Drawing::Size(179, 70);
	this->button6->TabIndex = 6;
	this->button6->Text = L"Statistiques";
	this->button6->UseVisualStyleBackColor = true;
	this->button6->Click += gcnew System::EventHandler(this, &AdminPage::button6_Click);
	// 
	// AdminPage
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(800, 500);
	this->Controls->Add(this->button6);
	this->Controls->Add(this->button1);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->button3);
	this->Controls->Add(this->button4);
	this->Controls->Add(this->button5);
	this->Controls->Add(this->label1);
	this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
	this->Name = L"AdminPage";
	this->Text = L"s";
	this->Load += gcnew System::EventHandler(this, &AdminPage::AdminPage_Load);
	this->ResumeLayout(false);
	this->PerformLayout();

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
	this->Hide();

	CommandePage^ commandePage = gcnew CommandePage();
	commandePage->ShowDialog();

	this->Close();
}

System::Void POO::AdminPage::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	
	ClientPage^ clientPage = gcnew ClientPage();
	clientPage->ShowDialog();
	
	this->Close();
}

System::Void POO::AdminPage::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();

	StatsPage^ statsPage = gcnew StatsPage();
	statsPage->ShowDialog();

	this->Close();
}


