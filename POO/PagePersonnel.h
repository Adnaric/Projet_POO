#pragma once

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PagePersonnel
	/// </summary>
	public ref class PagePersonnel : public System::Windows::Forms::Form
	{
	public:
		PagePersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PagePersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(246, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 58);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Gerer les articles";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(104, 234);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 57);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Gerer les clients";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(402, 234);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 57);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Gerer les commandes";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(476, 17);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 41);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Déconnexion";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// PagePersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 337);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Name = L"PagePersonnel";
			this->Text = L"PagePersonnel";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
