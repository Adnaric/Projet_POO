#include "MyForm.h"
#include "AdminPage.h"

namespace PPOO {

	MyForm::MyForm(void)
	{
		InitializeComponent();

		Button^ bouton1 = gcnew Button();
		bouton1->Text = "Admin";	
		bouton1->Location = Point( this->Width / 2 - 50, this->Height / 3 );
		bouton1->Size = System::Drawing::Size(100, 50);
		bouton1->Click += gcnew EventHandler(this, &MyForm::button1_Click);
		this->Controls->Add(bouton1);

		Button^ bouton2 = gcnew Button();
		bouton2->Text = "User";
		bouton2->Location = Point(this->Width / 2 - 50, this->Height / 3 * 2);
		bouton2->Size = System::Drawing::Size(100, 50);
		bouton2->Click += gcnew EventHandler(this, &MyForm::button2_Click);
		this->Controls->Add(bouton2);


	}

	MyForm::~MyForm()
	{
		if (components)
		{
			delete components;
		}
	}

	void MyForm::InitializeComponent()
	{
		this->SuspendLayout();
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::Gray;
		this->ClientSize = System::Drawing::Size(800, 800);
		this->Name = L"Application";
		this->Text = L"Application";
		this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
		this->ResumeLayout(false);
	}

	Void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}

	Void MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {		
		MyForm::Hide();
		
		AdminPage^ adminPage = gcnew AdminPage();
		adminPage->ShowDialog();
		
		MyForm::Close();
	}

	Void MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("You're nobody");
	}

}