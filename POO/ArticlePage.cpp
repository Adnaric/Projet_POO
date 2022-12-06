#include "ArticlePage.h"
#include "AdminPage.h"

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
	this->button5 = (gcnew System::Windows::Forms::Button());
	this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
	this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
	this->button4 = (gcnew System::Windows::Forms::Button());
	this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
	this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
	this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
	this->textBox1 = (gcnew System::Windows::Forms::TextBox());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
	this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
	this->textBox2 = (gcnew System::Windows::Forms::TextBox());
	this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
	this->label9 = (gcnew System::Windows::Forms::Label());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->textBox3 = (gcnew System::Windows::Forms::TextBox());
	this->label10 = (gcnew System::Windows::Forms::Label());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->tabControl1->SuspendLayout();
	this->tabPage1->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
	this->tabPage2->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
	this->tabPage3->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
	this->tabPage4->SuspendLayout();
	this->SuspendLayout();
	// 
	// tabControl1
	// 
	this->tabControl1->Controls->Add(this->tabPage1);
	this->tabControl1->Controls->Add(this->tabPage2);
	this->tabControl1->Controls->Add(this->tabPage3);
	this->tabControl1->Controls->Add(this->tabPage4);
	this->tabControl1->Cursor = System::Windows::Forms::Cursors::Default;
	this->tabControl1->Location = System::Drawing::Point(4, 9);
	this->tabControl1->Margin = System::Windows::Forms::Padding(2);
	this->tabControl1->Name = L"tabControl1";
	this->tabControl1->SelectedIndex = 0;
	this->tabControl1->Size = System::Drawing::Size(587, 373);
	this->tabControl1->TabIndex = 0;
	// 
	// tabPage1
	// 
	this->tabPage1->Controls->Add(this->button5);
	this->tabPage1->Controls->Add(this->dataGridView1);
	this->tabPage1->Location = System::Drawing::Point(4, 22);
	this->tabPage1->Margin = System::Windows::Forms::Padding(2);
	this->tabPage1->Name = L"tabPage1";
	this->tabPage1->Padding = System::Windows::Forms::Padding(2);
	this->tabPage1->Size = System::Drawing::Size(579, 347);
	this->tabPage1->TabIndex = 0;
	this->tabPage1->Text = L"Afficher les articles";
	this->tabPage1->UseVisualStyleBackColor = true;
	// 
	// button5
	// 
	this->button5->Location = System::Drawing::Point(509, 18);
	this->button5->Margin = System::Windows::Forms::Padding(2);
	this->button5->Name = L"button5";
	this->button5->Size = System::Drawing::Size(58, 302);
	this->button5->TabIndex = 1;
	this->button5->Text = L"Raffraichir";
	this->button5->UseVisualStyleBackColor = true;
	// 
	// dataGridView1
	// 
	this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	
	this->dataGridView1->Location = System::Drawing::Point(16, 18);
	this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
	this->dataGridView1->Name = L"dataGridView1";
	this->dataGridView1->RowHeadersWidth = 51;
	this->dataGridView1->RowTemplate->Height = 24;
	this->dataGridView1->Size = System::Drawing::Size(482, 310);
	this->dataGridView1->TabIndex = 0;
	this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ArticlePage::dataGridView1_CellContentClick);
	
	// 
	// tabPage2
	// 
	this->tabPage2->Controls->Add(this->button4);
	this->tabPage2->Controls->Add(this->richTextBox1);
	this->tabPage2->Controls->Add(this->numericUpDown2);
	this->tabPage2->Controls->Add(this->numericUpDown1);
	this->tabPage2->Controls->Add(this->textBox1);
	this->tabPage2->Controls->Add(this->label5);
	this->tabPage2->Controls->Add(this->label4);
	this->tabPage2->Controls->Add(this->label3);
	this->tabPage2->Controls->Add(this->label2);
	this->tabPage2->Controls->Add(this->label1);
	this->tabPage2->Location = System::Drawing::Point(4, 22);
	this->tabPage2->Margin = System::Windows::Forms::Padding(2);
	this->tabPage2->Name = L"tabPage2";
	this->tabPage2->Padding = System::Windows::Forms::Padding(2);
	this->tabPage2->Size = System::Drawing::Size(579, 347);
	this->tabPage2->TabIndex = 1;
	this->tabPage2->Text = L"Ajouter un article";
	this->tabPage2->UseVisualStyleBackColor = true;
	// 
	// button4
	// 
	this->button4->Location = System::Drawing::Point(19, 289);
	this->button4->Margin = System::Windows::Forms::Padding(2);
	this->button4->Name = L"button4";
	this->button4->Size = System::Drawing::Size(544, 44);
	this->button4->TabIndex = 10;
	this->button4->Text = L"Ajouter";
	this->button4->UseVisualStyleBackColor = true;
	// 
	// richTextBox1
	// 
	this->richTextBox1->Location = System::Drawing::Point(18, 112);
	this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
	this->richTextBox1->Name = L"richTextBox1";
	this->richTextBox1->Size = System::Drawing::Size(546, 161);
	this->richTextBox1->TabIndex = 9;
	this->richTextBox1->Text = L"";
	// 
	// numericUpDown2
	// 
	this->numericUpDown2->DecimalPlaces = 2;
	this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
	this->numericUpDown2->Location = System::Drawing::Point(386, 45);
	this->numericUpDown2->Margin = System::Windows::Forms::Padding(2);
	this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
	this->numericUpDown2->Name = L"numericUpDown2";
	this->numericUpDown2->Size = System::Drawing::Size(177, 20);
	this->numericUpDown2->TabIndex = 8;
	// 
	// numericUpDown1
	// 
	this->numericUpDown1->Location = System::Drawing::Point(284, 44);
	this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
	this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
	this->numericUpDown1->Name = L"numericUpDown1";
	this->numericUpDown1->Size = System::Drawing::Size(28, 20);
	this->numericUpDown1->TabIndex = 7;
	// 
	// textBox1
	// 
	this->textBox1->Location = System::Drawing::Point(18, 44);
	this->textBox1->Margin = System::Windows::Forms::Padding(2);
	this->textBox1->Name = L"textBox1";
	this->textBox1->Size = System::Drawing::Size(200, 20);
	this->textBox1->TabIndex = 5;
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Location = System::Drawing::Point(284, 20);
	this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(47, 13);
	this->label5->TabIndex = 4;
	this->label5->Text = L"Quantité";
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Location = System::Drawing::Point(386, 20);
	this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(61, 13);
	this->label4->TabIndex = 3;
	this->label4->Text = L"Prix unitaire";
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Location = System::Drawing::Point(20, 20);
	this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(79, 13);
	this->label3->TabIndex = 2;
	this->label3->Text = L"Nom de l\'article";
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Location = System::Drawing::Point(20, 87);
	this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(110, 13);
	this->label2->TabIndex = 1;
	this->label2->Text = L"Description de l\'article";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(20, 20);
	this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(0, 13);
	this->label1->TabIndex = 0;
	// 
	// tabPage3
	// 
	this->tabPage3->Controls->Add(this->button3);
	this->tabPage3->Controls->Add(this->numericUpDown4);
	this->tabPage3->Controls->Add(this->numericUpDown3);
	this->tabPage3->Controls->Add(this->textBox2);
	this->tabPage3->Controls->Add(this->richTextBox2);
	this->tabPage3->Controls->Add(this->label9);
	this->tabPage3->Controls->Add(this->label8);
	this->tabPage3->Controls->Add(this->label7);
	this->tabPage3->Controls->Add(this->label6);
	this->tabPage3->Location = System::Drawing::Point(4, 22);
	this->tabPage3->Margin = System::Windows::Forms::Padding(2);
	this->tabPage3->Name = L"tabPage3";
	this->tabPage3->Padding = System::Windows::Forms::Padding(2);
	this->tabPage3->Size = System::Drawing::Size(579, 347);
	this->tabPage3->TabIndex = 2;
	this->tabPage3->Text = L"Modifier un article";
	this->tabPage3->UseVisualStyleBackColor = true;
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(18, 296);
	this->button3->Margin = System::Windows::Forms::Padding(2);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(546, 41);
	this->button3->TabIndex = 8;
	this->button3->Text = L"Modifier";
	this->button3->UseVisualStyleBackColor = true;
	// 
	// numericUpDown4
	// 
	this->numericUpDown4->DecimalPlaces = 2;
	this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
	this->numericUpDown4->Location = System::Drawing::Point(408, 39);
	this->numericUpDown4->Margin = System::Windows::Forms::Padding(2);
	this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
	this->numericUpDown4->Name = L"numericUpDown4";
	this->numericUpDown4->Size = System::Drawing::Size(157, 20);
	this->numericUpDown4->TabIndex = 7;
	// 
	// numericUpDown3
	// 
	this->numericUpDown3->Location = System::Drawing::Point(278, 39);
	this->numericUpDown3->Margin = System::Windows::Forms::Padding(2);
	this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
	this->numericUpDown3->Name = L"numericUpDown3";
	this->numericUpDown3->Size = System::Drawing::Size(36, 20);
	this->numericUpDown3->TabIndex = 6;
	// 
	// textBox2
	// 
	this->textBox2->Location = System::Drawing::Point(14, 39);
	this->textBox2->Margin = System::Windows::Forms::Padding(2);
	this->textBox2->Name = L"textBox2";
	this->textBox2->Size = System::Drawing::Size(237, 20);
	this->textBox2->TabIndex = 5;
	// 
	// richTextBox2
	// 
	this->richTextBox2->Location = System::Drawing::Point(18, 109);
	this->richTextBox2->Margin = System::Windows::Forms::Padding(2);
	this->richTextBox2->Name = L"richTextBox2";
	this->richTextBox2->Size = System::Drawing::Size(549, 172);
	this->richTextBox2->TabIndex = 4;
	this->richTextBox2->Text = L"";
	// 
	// label9
	// 
	this->label9->AutoSize = true;
	this->label9->Location = System::Drawing::Point(18, 80);
	this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
	this->label9->Name = L"label9";
	this->label9->Size = System::Drawing::Size(110, 13);
	this->label9->TabIndex = 3;
	this->label9->Text = L"Description de l\'article";
	// 
	// label8
	// 
	this->label8->AutoSize = true;
	this->label8->Location = System::Drawing::Point(408, 18);
	this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
	this->label8->Name = L"label8";
	this->label8->Size = System::Drawing::Size(61, 13);
	this->label8->TabIndex = 2;
	this->label8->Text = L"Prix unitaire";
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->Location = System::Drawing::Point(278, 18);
	this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(47, 13);
	this->label7->TabIndex = 1;
	this->label7->Text = L"Quantité";
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Location = System::Drawing::Point(18, 19);
	this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(29, 13);
	this->label6->TabIndex = 0;
	this->label6->Text = L"Nom";
	// 
	// tabPage4
	// 
	this->tabPage4->Controls->Add(this->button1);
	this->tabPage4->Controls->Add(this->textBox3);
	this->tabPage4->Controls->Add(this->label10);
	this->tabPage4->Location = System::Drawing::Point(4, 22);
	this->tabPage4->Margin = System::Windows::Forms::Padding(2);
	this->tabPage4->Name = L"tabPage4";
	this->tabPage4->Padding = System::Windows::Forms::Padding(2);
	this->tabPage4->Size = System::Drawing::Size(579, 347);
	this->tabPage4->TabIndex = 3;
	this->tabPage4->Text = L"Supprimer Article";
	this->tabPage4->UseVisualStyleBackColor = true;
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(359, 23);
	this->button1->Margin = System::Windows::Forms::Padding(2);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(189, 39);
	this->button1->TabIndex = 2;
	this->button1->Text = L"Supprimer";
	this->button1->UseVisualStyleBackColor = true;
	// 
	// textBox3
	// 
	this->textBox3->Location = System::Drawing::Point(14, 45);
	this->textBox3->Margin = System::Windows::Forms::Padding(2);
	this->textBox3->Name = L"textBox3";
	this->textBox3->Size = System::Drawing::Size(236, 20);
	this->textBox3->TabIndex = 1;
	// 
	// label10
	// 
	this->label10->AutoSize = true;
	this->label10->Location = System::Drawing::Point(14, 20);
	this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
	this->label10->Name = L"label10";
	this->label10->Size = System::Drawing::Size(123, 13);
	this->label10->TabIndex = 0;
	this->label10->Text = L"Id de l\'article à supprimer";
	// 
	// button2
	// 
	this->button2->BackColor = System::Drawing::SystemColors::Control;
	this->button2->Location = System::Drawing::Point(456, 7);
	this->button2->Margin = System::Windows::Forms::Padding(2);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(128, 20);
	this->button2->TabIndex = 1;
	this->button2->Text = L"Retour";
	this->button2->UseVisualStyleBackColor = false;
	this->button2->Click += gcnew System::EventHandler(this, &ArticlePage::button2_Click);
	// 
	// ArticlePage
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(600, 406);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->tabControl1);
	this->Margin = System::Windows::Forms::Padding(2);
	this->Name = L"ArticlePage";
	this->Text = L"ArticlePage";
	this->Load += gcnew System::EventHandler(this, &ArticlePage::ArticlePage_Load);
	this->tabControl1->ResumeLayout(false);
	this->tabPage1->ResumeLayout(false);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
	this->tabPage2->ResumeLayout(false);
	this->tabPage2->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
	this->tabPage3->ResumeLayout(false);
	this->tabPage3->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
	this->tabPage4->ResumeLayout(false);
	this->tabPage4->PerformLayout();
	this->ResumeLayout(false);

}

System::Void POO::ArticlePage::ArticlePage_Load(System::Object^ sender, System::EventArgs^ e){}

System::Void POO::ArticlePage::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	AdminPage^ adminPage = gcnew AdminPage();
	adminPage->ShowDialog();
	this->Close();
}

System::Void POO::ArticlePage::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oDs = this->oSvc->selection_tout_article("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
	this->dataGridView1->Refresh();
}
