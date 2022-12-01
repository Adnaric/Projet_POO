#include "PersonnelPage.h"

POO::PersonnelPage::PersonnelPage(void)
{
	InitializeComponent();

	this->tabControl1 = gcnew System::Windows::Forms::TabControl();
	this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
	this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
	this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
	this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
	this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
	this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->textBox1 = (gcnew System::Windows::Forms::TextBox());
	this->textBox2 = (gcnew System::Windows::Forms::TextBox());
	this->textBox3 = (gcnew System::Windows::Forms::TextBox());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->textBox4 = (gcnew System::Windows::Forms::TextBox());
	this->textBox5 = (gcnew System::Windows::Forms::TextBox());
	this->textBox6 = (gcnew System::Windows::Forms::TextBox());
	this->textBox7 = (gcnew System::Windows::Forms::TextBox());
	this->label9 = (gcnew System::Windows::Forms::Label());
	this->label10 = (gcnew System::Windows::Forms::Label());
	this->label11 = (gcnew System::Windows::Forms::Label());
	this->label12 = (gcnew System::Windows::Forms::Label());
	this->label13 = (gcnew System::Windows::Forms::Label());
	this->label14 = (gcnew System::Windows::Forms::Label());
	this->label15 = (gcnew System::Windows::Forms::Label());
	this->label16 = (gcnew System::Windows::Forms::Label());
	this->label17 = (gcnew System::Windows::Forms::Label());
	this->textBox8 = (gcnew System::Windows::Forms::TextBox());
	this->textBox9 = (gcnew System::Windows::Forms::TextBox());
	this->textBox10 = (gcnew System::Windows::Forms::TextBox());
	this->textBox11 = (gcnew System::Windows::Forms::TextBox());
	this->textBox12 = (gcnew System::Windows::Forms::TextBox());
	this->textBox13 = (gcnew System::Windows::Forms::TextBox());
	this->textBox14 = (gcnew System::Windows::Forms::TextBox());
	this->textBox15 = (gcnew System::Windows::Forms::TextBox());
	this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->button4 = (gcnew System::Windows::Forms::Button());
	this->textBox16 = (gcnew System::Windows::Forms::TextBox());
	this->label18 = (gcnew System::Windows::Forms::Label());



	
	

	// 
	// tabControl1
	// 
	this->tabControl1->Controls->Add(this->tabPage1);
	this->tabControl1->Controls->Add(this->tabPage2);
	this->tabControl1->Controls->Add(this->tabPage3);
	this->tabControl1->Controls->Add(this->tabPage4);
	this->tabControl1->Location = System::Drawing::Point(12, 3);
	this->tabControl1->Name = L"tabControl1";
	this->tabControl1->SelectedIndex = 0;
	this->tabControl1->Size = System::Drawing::Size(776, 499);
	this->tabControl1->TabIndex = 0;
	this->Controls->Add(this->tabControl1);
	// 
	// tabPage1
	// 
	this->tabPage1->Controls->Add(this->dataGridView1);
	this->tabPage1->Location = System::Drawing::Point(4, 25);
	this->tabPage1->Name = L"tabPage1";
	this->tabPage1->Padding = System::Windows::Forms::Padding(3);
	this->tabPage1->Size = System::Drawing::Size(768, 470);
	this->tabPage1->TabIndex = 0;
	this->tabPage1->Text = L"Liste du personnel";
	this->tabPage1->UseVisualStyleBackColor = true;
	// 
	// dataGridView1
	// 
	this->dataGridView1->AllowUserToOrderColumns = true;
	this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
	this->Column6,this->Column1, this->Column2, this->Column4, this->Column3, this->Column5
	});
	this->dataGridView1->ReadOnly = true;
	this->dataGridView1->Location = System::Drawing::Point(0, 0);
	this->dataGridView1->Name = L"dataGridView1";
	this->dataGridView1->RowHeadersWidth = 51;
	this->dataGridView1->RowTemplate->Height = 24;
	this->dataGridView1->Size = System::Drawing::Size(this->Width - 50, this->Height - 80);
	this->dataGridView1->TabIndex = 0;
	this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonnelPage::dataGridView1_CellContentClick);
	// 
	// tabPage2
	// 
	this->tabPage2->Location = System::Drawing::Point(4, 25);
	this->tabPage2->Name = L"tabPage2";
	this->tabPage2->Padding = System::Windows::Forms::Padding(3);
	this->tabPage2->Size = System::Drawing::Size(768, 470);
	this->tabPage2->TabIndex = 1;
	this->tabPage2->Text = "Ajouter un personnel";
	this->tabPage2->UseVisualStyleBackColor = true;
	// 
	// tabPage3
	// 
	this->tabPage3->Location = System::Drawing::Point(4, 25);
	this->tabPage3->Name = L"tabPage3";
	this->tabPage3->Padding = System::Windows::Forms::Padding(3);
	this->tabPage3->Size = System::Drawing::Size(768, 470);
	this->tabPage3->TabIndex = 2;
	this->tabPage3->Text = L"Modifier un personnel";
	this->tabPage3->UseVisualStyleBackColor = true;
	// 
	// tabPage4
	// 
	this->tabPage4->Location = System::Drawing::Point(4, 25);
	this->tabPage4->Name = L"tabPage4";
	this->tabPage4->Padding = System::Windows::Forms::Padding(3);
	this->tabPage4->Size = System::Drawing::Size(768, 470);
	this->tabPage4->TabIndex = 3;
	this->tabPage4->Text = L"Supprimer un personnel";
	this->tabPage4->UseVisualStyleBackColor = true;
	// 
	// Column6
	// 
	this->Column6->HeaderText = L"Id";
	this->Column6->MinimumWidth = 6;
	this->Column6->Name = L"Column6";
	this->Column6->Width = 125;
	// 
	// Column1
	// 
	this->Column1->HeaderText = L"Nom";
	this->Column1->MinimumWidth = 6;
	this->Column1->Name = L"Column1";
	this->Column1->Width = 125;
	// 
	// Column2
	// 
	this->Column2->HeaderText = L"Prenom";
	this->Column2->MinimumWidth = 6;
	this->Column2->Name = L"Column2";
	this->Column2->Width = 125;
	// 
	// Column4
	// 
	this->Column4->HeaderText = L"Sup�rieur";
	this->Column4->MinimumWidth = 6;
	this->Column4->Name = L"Column4";
	this->Column4->Width = 125;
	// 
	// Column3
	// 
	this->Column3->HeaderText = L"Date Embauche";
	this->Column3->MinimumWidth = 6;
	this->Column3->Name = L"Column3";
	this->Column3->Width = 125;
	// 
	// Column5
	// 
	this->Column5->HeaderText = L"Adresse";
	this->Column5->MinimumWidth = 6;
	this->Column5->Name = L"Column5";
	this->Column5->Width = 125;
	// 
	// tabPage2
	// 
	this->tabPage2->Controls->Add(this->textBox7);
	this->tabPage2->Controls->Add(this->textBox6);
	this->tabPage2->Controls->Add(this->textBox5);
	this->tabPage2->Controls->Add(this->textBox4);
	this->tabPage2->Controls->Add(this->label8);
	this->tabPage2->Controls->Add(this->label7);
	this->tabPage2->Controls->Add(this->label6);
	this->tabPage2->Controls->Add(this->label5);
	this->tabPage2->Controls->Add(this->monthCalendar1);
	this->tabPage2->Controls->Add(this->label4);
	this->tabPage2->Controls->Add(this->label3);
	this->tabPage2->Controls->Add(this->textBox3);
	this->tabPage2->Controls->Add(this->textBox2);
	this->tabPage2->Controls->Add(this->textBox1);
	this->tabPage2->Controls->Add(this->label2);
	this->tabPage2->Controls->Add(this->label1);
	this->tabPage2->Controls->Add(this->button1);
	
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(373, 328);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(349, 109);
	this->button1->TabIndex = 0;
	this->button1->Text = L"Ajouter le personnel";
	this->button1->UseVisualStyleBackColor = true;
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(14, 21);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(44, 16);
	this->label1->TabIndex = 1;
	this->label1->Text = L"Nom";
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Location = System::Drawing::Point(193, 21);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(44, 16);
	this->label2->TabIndex = 2;
	this->label2->Text = L"Prenom";
	//
	// 
	// textBox1
	// 
	this->textBox1->Location = System::Drawing::Point(17, 53);
	this->textBox1->Name = L"textBox1";
	this->textBox1->Size = System::Drawing::Size(155, 22);
	this->textBox1->TabIndex = 3;	
	// 
	// textBox2
	// 
	this->textBox2->Location = System::Drawing::Point(196, 53);
	this->textBox2->Name = L"textBox2";
	this->textBox2->Size = System::Drawing::Size(155, 22);
	this->textBox2->TabIndex = 4;
	// 
	// textBox3
	// 
	this->textBox3->Location = System::Drawing::Point(17, 134);
	this->textBox3->Name = L"textBox3";
	this->textBox3->Size = System::Drawing::Size(334, 22);
	this->textBox3->TabIndex = 5;
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Location = System::Drawing::Point(14, 100);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(44, 16);
	this->label3->TabIndex = 6;
	this->label3->Text = L"label3";
	this->label3->Text = L"Sup�rieur";
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Location = System::Drawing::Point(14, 195);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(44, 16);
	this->label4->TabIndex = 7;
	this->label4->Text = L"label4";
	this->label4->Text = L"Date Embauche";
	// 
	// monthCalendar1
	// 
	this->monthCalendar1->Location = System::Drawing::Point(17, 230);
	this->monthCalendar1->Name = L"monthCalendar1";
	this->monthCalendar1->TabIndex = 8;
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Location = System::Drawing::Point(467, 21);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(44, 16);
	this->label5->TabIndex = 9;
	this->label5->Text = L"label5";
	this->label5->Text = L"Num�ro";
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Location = System::Drawing::Point(467, 94);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(44, 16);
	this->label6->TabIndex = 10;
	this->label6->Text = L"label6";
	this->label6->Text = L"Rue";
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->Location = System::Drawing::Point(466, 172);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(44, 16);
	this->label7->TabIndex = 11;
	this->label7->Text = L"label7";
	this->label7->Text = L"Ville";
	// 
	// label8
	// 
	this->label8->AutoSize = true;
	this->label8->Location = System::Drawing::Point(466, 247);
	this->label8->Name = L"label8";
	this->label8->Size = System::Drawing::Size(44, 16);
	this->label8->TabIndex = 12;
	this->label8->Text = L"label8";
	this->label8->Text = L"Code Postal";
	// 
	// textBox4
	// 
	this->textBox4->Location = System::Drawing::Point(469, 52);
	this->textBox4->Name = L"textBox4";
	this->textBox4->Size = System::Drawing::Size(252, 22);
	this->textBox4->TabIndex = 13;
	// 
	// textBox5
	// 
	this->textBox5->Location = System::Drawing::Point(469, 125);
	this->textBox5->Name = L"textBox5";
	this->textBox5->Size = System::Drawing::Size(252, 22);
	this->textBox5->TabIndex = 14;
	// 
	// textBox6
	// 
	this->textBox6->Location = System::Drawing::Point(469, 205);
	this->textBox6->Name = L"textBox6";
	this->textBox6->Size = System::Drawing::Size(251, 22);
	this->textBox6->TabIndex = 15;
	// 
	// textBox7
	// 
	this->textBox7->Location = System::Drawing::Point(468, 280);
	this->textBox7->Name = L"textBox7";
	this->textBox7->Size = System::Drawing::Size(252, 22);
	this->textBox7->TabIndex = 16;

	// make the tabpage3 
	
	this->tabPage3->Controls->Add(this->label9);
	this->tabPage3->Controls->Add(this->label10);
	this->tabPage3->Controls->Add(this->label11);
	this->tabPage3->Controls->Add(this->label12);
	this->tabPage3->Controls->Add(this->label13);
	this->tabPage3->Controls->Add(this->label14);
	this->tabPage3->Controls->Add(this->label15);
	this->tabPage3->Controls->Add(this->label16);
	this->tabPage3->Controls->Add(this->label17);
	this->tabPage3->Controls->Add(this->textBox8);
	this->tabPage3->Controls->Add(this->textBox9);
	this->tabPage3->Controls->Add(this->textBox10);
	this->tabPage3->Controls->Add(this->textBox11);
	this->tabPage3->Controls->Add(this->textBox12);
	this->tabPage3->Controls->Add(this->textBox13);
	this->tabPage3->Controls->Add(this->textBox14);
	this->tabPage3->Controls->Add(this->textBox15);
	this->tabPage3->Controls->Add(this->monthCalendar2);
	this->tabPage3->Controls->Add(this->button2);
	this->tabPage3->Controls->Add(this->button3);	
	this->tabPage3->Controls->Add(this->button4);
	this->tabPage3->Controls->Add(this->textBox16);
	//
	// label9
	//
	this->label9->AutoSize = true;
	this->label9->Location = System::Drawing::Point(14, 16);
	this->label9->Name = L"label9";
	this->label9->Size = System::Drawing::Size(44, 16);
	this->label9->TabIndex = 0;
	this->label9->Text = L"Id du personnel a modifier";
	//
	// label10
	//
	this->label10->AutoSize = true;
	this->label10->Location = System::Drawing::Point(14, 94);
	this->label10->Name = L"label10";
	this->label10->Size = System::Drawing::Size(44, 16);
	this->label10->TabIndex = 1;
	this->label10->Text = L"Nom";
	//
	// label11
	//
	this->label11->AutoSize = true;
	this->label11->Location = System::Drawing::Point(193, 94);
	this->label11->Name = L"label11";
	this->label11->Size = System::Drawing::Size(44, 16);
	this->label11->TabIndex = 2;
	this->label11->Text = L"Pr�nom";
	//
	// label12
	//
	this->label12->AutoSize = true;
	this->label12->Location = System::Drawing::Point(16, 160);
	this->label12->Name = L"label12";
	this->label12->Size = System::Drawing::Size(44, 16);
	this->label12->TabIndex = 3;
	this->label12->Text = L"Sup�rieur";
	//
	// label13
	//
	this->label13->AutoSize = true;
	this->label13->Location = System::Drawing::Point(16, 220);
	this->label13->Name = L"label13";
	this->label13->Size = System::Drawing::Size(44, 16);
	this->label13->TabIndex = 4;
	this->label13->Text = L"Date d'embauche";
	//
	// label14
	//
	this->label14->AutoSize = true;
	this->label14->Location = System::Drawing::Point(460, 94);
	this->label14->Name = L"label14";
	this->label14->Size = System::Drawing::Size(44, 16);
	this->label14->TabIndex = 5;
	this->label14->Text = L"Num�ro";
	//
	// label15
	//
	this->label15->AutoSize = true;
	this->label15->Location = System::Drawing::Point(460, 150);
	this->label15->Name = L"label15";
	this->label15->Size = System::Drawing::Size(44, 16);
	this->label15->TabIndex = 6;
	this->label15->Text = L"Rue";
	//
	// label16
	//
	this->label16->AutoSize = true;
	this->label16->Location = System::Drawing::Point(460, 220);
	this->label16->Name = L"label16";
	this->label16->Size = System::Drawing::Size(44, 16);
	this->label16->TabIndex = 7;
	this->label16->Text = L"Ville";
	//
	// label17
	//
	this->label17->AutoSize = true;
	this->label17->Location = System::Drawing::Point(460, 280);
	this->label17->Name = L"label17";
	this->label17->Size = System::Drawing::Size(44, 16);
	this->label17->TabIndex = 8;
	this->label17->Text = L"Code postal";
	//
	// textBox8
	//
	this->textBox8->Location = System::Drawing::Point(16, 47);
	this->textBox8->Name = L"textBox8";
	this->textBox8->Size = System::Drawing::Size(251, 22);
	this->textBox8->TabIndex = 9;
	//
	// textBox9
	//
	this->textBox9->Location = System::Drawing::Point(16,120);
	this->textBox9->Name = L"textBox9";
	this->textBox9->Size = System::Drawing::Size(150, 22);
	this->textBox9->TabIndex = 10;
	//
	// textBox10
	//
	this->textBox10->Location = System::Drawing::Point(193, 120);
	this->textBox10->Name = L"textBox10";
	this->textBox10->Size = System::Drawing::Size(150, 22);
	this->textBox10->TabIndex = 11;
	//
	// textBox11
	//
	this->textBox11->Location = System::Drawing::Point(16, 190);
	this->textBox11->Name = L"textBox11";
	this->textBox11->Size = System::Drawing::Size(251, 22);
	this->textBox11->TabIndex = 12;
	//
	// textBox12
	//
	this->textBox12->Location = System::Drawing::Point(460, 120);
	this->textBox12->Name = L"textBox12";
	this->textBox12->Size = System::Drawing::Size(251, 22);
	this->textBox12->TabIndex = 13;
	//
	// textBox13
	//
	this->textBox13->Location = System::Drawing::Point(460, 190);
	this->textBox13->Name = L"textBox13";
	this->textBox13->Size = System::Drawing::Size(251, 22);
	this->textBox13->TabIndex = 14;
	//
	// textBox14
	//
	this->textBox14->Location = System::Drawing::Point(460, 250);
	this->textBox14->Name = L"textBox14";
	this->textBox14->Size = System::Drawing::Size(251, 22);
	this->textBox14->TabIndex = 15;
	//
	// textBox15
	//
	this->textBox15->Location = System::Drawing::Point(460, 310);
	this->textBox15->Name = L"textBox15";
	this->textBox15->Size = System::Drawing::Size(251, 22);
	this->textBox15->TabIndex = 16;
	//
	// calendar2
	//
	this->monthCalendar2->Location = System::Drawing::Point(16, 250);
	this->monthCalendar2->Name = L"monthCalendar1";
	this->monthCalendar2->TabIndex = 18;

	// bouton valider id personnel 
	this->button2->Location = System::Drawing::Point(460, 47);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(75, 23);
	this->button2->TabIndex = 19;
	this->button2->Text = L"Valider";
	this->button2->UseVisualStyleBackColor = true;
	//this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);

	// bouton modifier personne
	this->button3->Location = System::Drawing::Point(460, 360);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(200, 60);
	this->button3->TabIndex = 20;
	this->button3->Text = L"Modifier";
	this->button3->UseVisualStyleBackColor = true;
	//this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
	
	// tabpage4 supprimer en fonction d'un id
	this->tabPage4->Controls->Add(this->button4);
	this->tabPage4->Controls->Add(this->label18);
	this->tabPage4->Controls->Add(this->textBox16);
	//
	// label18
	//
	this->label18->AutoSize = true;
	this->label18->Location = System::Drawing::Point(16, 16);
	this->label18->Name = L"label18";
	this->label18->Size = System::Drawing::Size(44, 16);
	this->label18->TabIndex = 0;
	this->label18->Text = L"ID";
	//
	// textBox16
	//
	this->textBox16->Location = System::Drawing::Point(16, 47);
	this->textBox16->Name = L"textBox16";
	this->textBox16->Size = System::Drawing::Size(251, 22);
	this->textBox16->TabIndex = 1;
	//
	// button4
	//
	this->button4->Location = System::Drawing::Point(460, 47);
	this->button4->Name = L"button4";
	this->button4->Size = System::Drawing::Size(75, 23);
	this->button4->TabIndex = 2;
	this->button4->Text = L"Supprimer";
	this->button4->UseVisualStyleBackColor = true;
	//this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
		
}

POO::PersonnelPage::~PersonnelPage()
{
	if (components)
	{
		delete components;
	}
}

void POO::PersonnelPage::InitializeComponent(void)
{
	// 
	// PersonnelPage
	// 
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(800, 500);
	this->Controls->Add(this->tabControl1);
	this->Name = L"PersonnelPage";
	this->Text = L"PersonnelPage";
	this->Load += gcnew System::EventHandler(this, &PersonnelPage::PersonnelPage_Load);
}

System::Void POO::PersonnelPage::PersonnelPage_Load(System::Object^ sender, System::EventArgs^ e){}

System::Void POO::PersonnelPage::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e){}