#include "ArticlePage.h"

POO::ArticlePage::ArticlePage(void)
{
    InitializeComponent();
}

POO::ArticlePage::~ArticlePage()
{
	if (components)
	{
		delete components;
	}
}

void POO::ArticlePage::InitializeComponent(void)
{
	this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
	this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
	this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->tabControl1->SuspendLayout();
	this->tabPage1->SuspendLayout();
	this->SuspendLayout();
	// 
	// tabControl1
	// 
	this->tabControl1->Controls->Add(this->tabPage1);
	this->tabControl1->Controls->Add(this->tabPage2);
	this->tabControl1->Location = System::Drawing::Point(11, 33);
	this->tabControl1->Name = L"tabControl1";
	this->tabControl1->SelectedIndex = 0;
	this->tabControl1->Size = System::Drawing::Size(783, 459);
	this->tabControl1->TabIndex = 0;
	// 
	// tabPage1
	// 
	this->tabPage1->Controls->Add(this->button1);
	this->tabPage1->Location = System::Drawing::Point(4, 25);
	this->tabPage1->Name = L"tabPage1";
	this->tabPage1->Padding = System::Windows::Forms::Padding(3);
	this->tabPage1->Size = System::Drawing::Size(775, 430);
	this->tabPage1->TabIndex = 0;
	this->tabPage1->Text = L"tabPage1";
	this->tabPage1->UseVisualStyleBackColor = true;
	// 
	// tabPage2
	// 
	this->tabPage2->Location = System::Drawing::Point(4, 25);
	this->tabPage2->Name = L"tabPage2";
	this->tabPage2->Padding = System::Windows::Forms::Padding(3);
	this->tabPage2->Size = System::Drawing::Size(775, 430);
	this->tabPage2->TabIndex = 1;
	this->tabPage2->Text = L"tabPage2";
	this->tabPage2->UseVisualStyleBackColor = true;
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(19, 41);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(75, 23);
	this->button1->TabIndex = 0;
	this->button1->Text = L"button1";
	this->button1->UseVisualStyleBackColor = true;
	// 
	// button2
	// 
	this->button2->BackColor = System::Drawing::SystemColors::Control;
	this->button2->Location = System::Drawing::Point(608, 9);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(170, 24);
	this->button2->TabIndex = 1;
	this->button2->Text = L"Retour";
	this->button2->UseVisualStyleBackColor = false;
	// 
	// ArticlePage
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(800, 500);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->tabControl1);
	this->Name = L"ArticlePage";
	this->Text = L"ArticlePage";
	this->Load += gcnew System::EventHandler(this, &ArticlePage::ArticlePage_Load);
	this->tabControl1->ResumeLayout(false);
	this->tabPage1->ResumeLayout(false);
	this->ResumeLayout(false);

}

System::Void POO::ArticlePage::ArticlePage_Load(System::Object^ sender, System::EventArgs^ e){}
