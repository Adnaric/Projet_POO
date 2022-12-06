#pragma once

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CommandePage
	/// </summary>
	public ref class CommandePage : public System::Windows::Forms::Form
	{
	public:
		CommandePage(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~CommandePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(11, 21);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(601, 382);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(593, 356);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Afficher les commandes";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->numericUpDown1);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(593, 356);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ajouter la commande";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(18, 20);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(556, 313);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(25, 21);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(527, 142);
			this->dataGridView2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Id de l\'articles";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 233);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Prix de l\'articles";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 191);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &CommandePage::textBox1_TextChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(116, 231);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(79, 20);
			this->numericUpDown1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(267, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(284, 57);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(267, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(284, 58);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// CommandePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 419);
			this->Controls->Add(this->tabControl1);
			this->Name = L"CommandePage";
			this->Text = L"CommandePage";
			this->Load += gcnew System::EventHandler(this, &CommandePage::CommandePage_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CommandePage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
