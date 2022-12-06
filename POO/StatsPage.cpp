#include "StatsPage.h"
#include "AdminPage.h"

POO::StatsPage::StatsPage(void)
{
    InitializeComponent();
}

POO::StatsPage::~StatsPage()
{
	if (components)
	{
		delete components;
	}
}

void POO::StatsPage::InitializeComponent(void)
{
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
	this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->textBox1 = (gcnew System::Windows::Forms::TextBox());
	this->label9 = (gcnew System::Windows::Forms::Label());
	this->label10 = (gcnew System::Windows::Forms::Label());
	this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
	this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->label11 = (gcnew System::Windows::Forms::Label());
	this->label12 = (gcnew System::Windows::Forms::Label());
	this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
	this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
	this->label13 = (gcnew System::Windows::Forms::Label());
	this->label14 = (gcnew System::Windows::Forms::Label());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->label15 = (gcnew System::Windows::Forms::Label());
	this->label16 = (gcnew System::Windows::Forms::Label());
	this->label17 = (gcnew System::Windows::Forms::Label());
	this->button4 = (gcnew System::Windows::Forms::Button());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
	this->SuspendLayout();
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(490, 25);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(76, 16);
	this->label1->TabIndex = 0;
	this->label1->Text = L"Statistiques";
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Location = System::Drawing::Point(69, 86);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(180, 16);
	this->label2->TabIndex = 1;
	this->label2->Text = L"Panier moyen (apr�s remise)";
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Location = System::Drawing::Point(286, 86);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(27, 16);
	this->label3->TabIndex = 2;
	this->label3->Text = L"text";
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Location = System::Drawing::Point(69, 127);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(98, 16);
	this->label4->TabIndex = 3;
	this->label4->Text = L"Chiffre d\'affaire ";
	// 
	// comboBox1
	// 
	this->comboBox1->FormattingEnabled = true;
	this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
		L"Janvier", L"F�vrier", L"Mars", L"Avril", L"Mai ",
			L"Juin", L"Juillet", L"Ao�t", L"Septembre", L"Octobre", L"Novembre", L"Decembre"
	});
	this->comboBox1->Location = System::Drawing::Point(187, 124);
	this->comboBox1->Name = L"comboBox1";
	this->comboBox1->Size = System::Drawing::Size(177, 24);
	this->comboBox1->TabIndex = 4;
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Location = System::Drawing::Point(184, 161);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(102, 16);
	this->label5->TabIndex = 5;
	this->label5->Text = L"1200 � en #mois";
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(383, 121);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(120, 29);
	this->button1->TabIndex = 6;
	this->button1->Text = L"Validate";
	this->button1->UseVisualStyleBackColor = true;
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Location = System::Drawing::Point(69, 193);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(253, 16);
	this->label6->TabIndex = 7;
	this->label6->Text = L"Produit sous seuil de r�aprovisionnement";
	// 
	// dataGridView1
	// 
	this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
		this->Column1,
			this->Column2, this->Column3
	});
	this->dataGridView1->Location = System::Drawing::Point(71, 222);
	this->dataGridView1->Name = L"dataGridView1";
	this->dataGridView1->RowHeadersWidth = 51;
	this->dataGridView1->RowTemplate->Height = 24;
	this->dataGridView1->Size = System::Drawing::Size(432, 136);
	this->dataGridView1->TabIndex = 8;
	// 
	// Column1
	// 
	this->Column1->HeaderText = L"Id";
	this->Column1->MinimumWidth = 6;
	this->Column1->Name = L"Column1";
	this->Column1->Width = 125;
	// 
	// Column2
	// 
	this->Column2->HeaderText = L"Nom";
	this->Column2->MinimumWidth = 6;
	this->Column2->Name = L"Column2";
	this->Column2->Width = 125;
	// 
	// Column3
	// 
	this->Column3->HeaderText = L"Quantit�";
	this->Column3->MinimumWidth = 6;
	this->Column3->Name = L"Column3";
	this->Column3->Width = 125;
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->Location = System::Drawing::Point(69, 388);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(285, 16);
	this->label7->TabIndex = 9;
	this->label7->Text = L"Calculer la somme totale des achats d\'un client";
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(232, 418);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(90, 38);
	this->button2->TabIndex = 10;
	this->button2->Text = L"Validate";
	this->button2->UseVisualStyleBackColor = true;
	// 
	// textBox1
	// 
	this->textBox1->Location = System::Drawing::Point(72, 426);
	this->textBox1->Name = L"textBox1";
	this->textBox1->Size = System::Drawing::Size(134, 22);
	this->textBox1->TabIndex = 11;
	// 
	// label9
	// 
	this->label9->AutoSize = true;
	this->label9->Location = System::Drawing::Point(346, 432);
	this->label9->Name = L"label9";
	this->label9->Size = System::Drawing::Size(64, 16);
	this->label9->TabIndex = 13;
	this->label9->Text = L"ARGENT";
	// 
	// label10
	// 
	this->label10->AutoSize = true;
	this->label10->Location = System::Drawing::Point(817, 77);
	this->label10->Name = L"label10";
	this->label10->Size = System::Drawing::Size(49, 16);
	this->label10->TabIndex = 14;
	this->label10->Text = L"Top 10";
	// 
	// dataGridView2
	// 
	this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
		this->Column4,
			this->Column5
	});
	this->dataGridView2->Location = System::Drawing::Point(683, 105);
	this->dataGridView2->Name = L"dataGridView2";
	this->dataGridView2->RowHeadersWidth = 51;
	this->dataGridView2->RowTemplate->Height = 24;
	this->dataGridView2->Size = System::Drawing::Size(317, 178);
	this->dataGridView2->TabIndex = 15;
	// 
	// Column4
	// 
	this->Column4->HeaderText = L"Plus vendus";
	this->Column4->MinimumWidth = 6;
	this->Column4->Name = L"Column4";
	this->Column4->Width = 125;
	// 
	// Column5
	// 
	this->Column5->HeaderText = L"Moins vendus";
	this->Column5->MinimumWidth = 6;
	this->Column5->Name = L"Column5";
	this->Column5->Width = 125;
	// 
	// label11
	// 
	this->label11->AutoSize = true;
	this->label11->Location = System::Drawing::Point(680, 316);
	this->label11->Name = L"label11";
	this->label11->Size = System::Drawing::Size(99, 16);
	this->label11->TabIndex = 16;
	this->label11->Text = L"Valeur du stock";
	// 
	// label12
	// 
	this->label12->AutoSize = true;
	this->label12->Location = System::Drawing::Point(705, 530);
	this->label12->Name = L"label12";
	this->label12->Size = System::Drawing::Size(74, 16);
	this->label12->TabIndex = 17;
	this->label12->Text = L"ARGENT �";
	// 
	// comboBox2
	// 
	this->comboBox2->FormattingEnabled = true;
	this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"TVA 1", L"TVA 2", L"TVA 3" });
	this->comboBox2->Location = System::Drawing::Point(683, 380);
	this->comboBox2->Name = L"comboBox2";
	this->comboBox2->Size = System::Drawing::Size(137, 24);
	this->comboBox2->TabIndex = 18;
	// 
	// comboBox3
	// 
	this->comboBox3->FormattingEnabled = true;
	this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
		L"Marge Commerciale 1", L"Marge Commerciale 2",
			L"Marge Commerciale 3"
	});
	this->comboBox3->Location = System::Drawing::Point(849, 380);
	this->comboBox3->Name = L"comboBox3";
	this->comboBox3->Size = System::Drawing::Size(151, 24);
	this->comboBox3->TabIndex = 19;
	// 
	// label13
	// 
	this->label13->AutoSize = true;
	this->label13->Location = System::Drawing::Point(680, 352);
	this->label13->Name = L"label13";
	this->label13->Size = System::Drawing::Size(34, 16);
	this->label13->TabIndex = 20;
	this->label13->Text = L"TVA";
	// 
	// label14
	// 
	this->label14->AutoSize = true;
	this->label14->Location = System::Drawing::Point(846, 352);
	this->label14->Name = L"label14";
	this->label14->Size = System::Drawing::Size(54, 16);
	this->label14->TabIndex = 21;
	this->label14->Text = L"Remise";
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(683, 426);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(317, 51);
	this->button3->TabIndex = 22;
	this->button3->Text = L"Validate";
	this->button3->UseVisualStyleBackColor = true;
	this->button3->Click += gcnew System::EventHandler(this, &StatsPage::button3_Click);
	// 
	// label15
	// 
	this->label15->AutoSize = true;
	this->label15->Location = System::Drawing::Point(705, 492);
	this->label15->Name = L"label15";
	this->label15->Size = System::Drawing::Size(41, 16);
	this->label15->TabIndex = 23;
	this->label15->Text = L"Achat";
	// 
	// label16
	// 
	this->label16->AutoSize = true;
	this->label16->Location = System::Drawing::Point(874, 492);
	this->label16->Name = L"label16";
	this->label16->Size = System::Drawing::Size(79, 16);
	this->label16->TabIndex = 24;
	this->label16->Text = L"Commercial";
	// 
	// label17
	// 
	this->label17->AutoSize = true;
	this->label17->Location = System::Drawing::Point(874, 530);
	this->label17->Name = L"label17";
	this->label17->Size = System::Drawing::Size(74, 16);
	this->label17->TabIndex = 25;
	this->label17->Text = L"ARGENT �";
	// 
	// button4
	// 
	this->button4->Location = System::Drawing::Point(845, 17);
	this->button4->Name = L"button4";
	this->button4->Size = System::Drawing::Size(155, 32);
	this->button4->TabIndex = 26;
	this->button4->Text = L"Retour";
	this->button4->UseVisualStyleBackColor = true;
	this->button4->Click += gcnew System::EventHandler(this, &StatsPage::button4_Click);
	// 
	// StatsPage
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(1067, 615);
	this->Controls->Add(this->button4);
	this->Controls->Add(this->label17);
	this->Controls->Add(this->label16);
	this->Controls->Add(this->label15);
	this->Controls->Add(this->button3);
	this->Controls->Add(this->label14);
	this->Controls->Add(this->label13);
	this->Controls->Add(this->comboBox3);
	this->Controls->Add(this->comboBox2);
	this->Controls->Add(this->label12);
	this->Controls->Add(this->label11);
	this->Controls->Add(this->dataGridView2);
	this->Controls->Add(this->label10);
	this->Controls->Add(this->label9);
	this->Controls->Add(this->textBox1);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->label7);
	this->Controls->Add(this->dataGridView1);
	this->Controls->Add(this->label6);
	this->Controls->Add(this->button1);
	this->Controls->Add(this->label5);
	this->Controls->Add(this->comboBox1);
	this->Controls->Add(this->label4);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->label1);
	this->Name = L"StatsPage";
	this->Text = L"StatsPage";
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();

}

void POO::StatsPage::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	
	AdminPage^ adminPage = gcnew AdminPage();
    adminPage->ShowDialog();
	
	this->Close();
	
}