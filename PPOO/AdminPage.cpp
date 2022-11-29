#include "AdminPage.h"
#include "MyForm.h"
#include "GererPersonnel.h"

PPOO::AdminPage::AdminPage(void)
{
	InitializeComponent();	
	Label^ label1 = gcnew Label();
	label1->Text = "Bonjour Admin";
	label1->Location = Point(this->Width / 2 - 50, 10);
	label1->Size = System::Drawing::Size(100, 50);
	this->Controls->Add(label1);
	
	Button^ bouton1 = gcnew Button();
	bouton1->Text = "Deconnexion";
	bouton1->Location = Point(this->Width - 150,10);
	bouton1->Size = System::Drawing::Size(100, 50);
	bouton1->Click += gcnew EventHandler(this, &AdminPage::button1_Click);
	this->Controls->Add(bouton1);

	Button^ Personnel = gcnew Button();
	Personnel->Text = "Gerer Personnel";
	Personnel->Location = Point(this->Width / 2 - 50, 100);
	Personnel->Size = System::Drawing::Size(100, 50);
	Personnel->Click += gcnew EventHandler(this, &AdminPage::button2_Click);
	this->Controls->Add(Personnel);
	
	
}

PPOO::AdminPage::~AdminPage()
{
	if (components)
	{
		delete components;
	}
}

void PPOO::AdminPage::InitializeComponent(void)
{
	this->SuspendLayout();
	this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	this->BackColor = System::Drawing::Color::Gray;
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(1000, 800);
	this->Name = L"AdminPage";
	this->Text = L"AdminPage";
	this->Load += gcnew System::EventHandler(this, &AdminPage::AdminPage_Load);
	this->ResumeLayout(false);
}

System::Void PPOO::AdminPage::AdminPage_Load(System::Object^ sender, System::EventArgs^ e){}


void PPOO::AdminPage::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminPage::Hide();

	PPOO::MyForm^ myForm = gcnew PPOO::MyForm();
	myForm->ShowDialog();

	AdminPage::Close();
	
}

void PPOO::AdminPage::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminPage::Hide();

	PPOO::GererPersonnel^ myForm = gcnew PPOO::GererPersonnel();
	myForm->ShowDialog();

	AdminPage::Close();
}