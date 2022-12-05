#include "ClientPage.h"
#include "AdminPage.h"

POO::ClientPage::ClientPage(void)
{
    InitializeComponent();
}

POO::ClientPage::~ClientPage()
{
	if (components)
	{
		delete components;
	}
}

void POO::ClientPage::InitializeComponent(void)
{
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
	this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
	this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
	this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
	this->textBox1 = (gcnew System::Windows::Forms::TextBox());
	this->textBox2 = (gcnew System::Windows::Forms::TextBox());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->label9 = (gcnew System::Windows::Forms::Label());
	this->label10 = (gcnew System::Windows::Forms::Label());
	this->label11 = (gcnew System::Windows::Forms::Label());
	this->label12 = (gcnew System::Windows::Forms::Label());
	this->label13 = (gcnew System::Windows::Forms::Label());
	this->textBox3 = (gcnew System::Windows::Forms::TextBox());
	this->textBox4 = (gcnew System::Windows::Forms::TextBox());
	this->textBox5 = (gcnew System::Windows::Forms::TextBox());
	this->textBox6 = (gcnew System::Windows::Forms::TextBox());
	this->textBox7 = (gcnew System::Windows::Forms::TextBox());
	this->textBox8 = (gcnew System::Windows::Forms::TextBox());
	this->textBox9 = (gcnew System::Windows::Forms::TextBox());
	this->textBox10 = (gcnew System::Windows::Forms::TextBox());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
	this->label14 = (gcnew System::Windows::Forms::Label());
	this->label15 = (gcnew System::Windows::Forms::Label());
	this->label16 = (gcnew System::Windows::Forms::Label());
	this->label17 = (gcnew System::Windows::Forms::Label());
	this->label18 = (gcnew System::Windows::Forms::Label());
	this->label19 = (gcnew System::Windows::Forms::Label());
	this->label20 = (gcnew System::Windows::Forms::Label());
	this->label21 = (gcnew System::Windows::Forms::Label());
	this->label22 = (gcnew System::Windows::Forms::Label());
	this->label23 = (gcnew System::Windows::Forms::Label());
	this->label24 = (gcnew System::Windows::Forms::Label());
	this->label25 = (gcnew System::Windows::Forms::Label());
	this->label26 = (gcnew System::Windows::Forms::Label());
	this->label27 = (gcnew System::Windows::Forms::Label());
	this->button4 = (gcnew System::Windows::Forms::Button());
	this->button5 = (gcnew System::Windows::Forms::Button());
	this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
	this->textBox11 = (gcnew System::Windows::Forms::TextBox());
	this->textBox12 = (gcnew System::Windows::Forms::TextBox());
	this->textBox13 = (gcnew System::Windows::Forms::TextBox());
	this->textBox14 = (gcnew System::Windows::Forms::TextBox());
	this->textBox15 = (gcnew System::Windows::Forms::TextBox());
	this->textBox16 = (gcnew System::Windows::Forms::TextBox());
	this->textBox17 = (gcnew System::Windows::Forms::TextBox());
	this->textBox18 = (gcnew System::Windows::Forms::TextBox());
	this->textBox19 = (gcnew System::Windows::Forms::TextBox());
	this->textBox20 = (gcnew System::Windows::Forms::TextBox());
	this->textBox21 = (gcnew System::Windows::Forms::TextBox());
	this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
	this->label28 = (gcnew System::Windows::Forms::Label());
	this->textBox22 = (gcnew System::Windows::Forms::TextBox());
	this->button6 = (gcnew System::Windows::Forms::Button());
	this->tabControl1->SuspendLayout();
	this->tabPage1->SuspendLayout();
	this->tabPage2->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
	this->tabPage3->SuspendLayout();
	this->tabPage4->SuspendLayout();
	this->SuspendLayout();
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(691, 10);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(87, 30);
	this->button1->TabIndex = 0;
	this->button1->Text = L"Retour";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &ClientPage::button1_Click);
	// 
	// tabControl1
	// 
	this->tabControl1->Controls->Add(this->tabPage1);
	this->tabControl1->Controls->Add(this->tabPage2);
	this->tabControl1->Controls->Add(this->tabPage3);
	this->tabControl1->Controls->Add(this->tabPage4);
	this->tabControl1->Location = System::Drawing::Point(26, 24);
	this->tabControl1->Name = L"tabControl1";
	this->tabControl1->SelectedIndex = 0;
	this->tabControl1->Size = System::Drawing::Size(752, 451);
	this->tabControl1->TabIndex = 1;
	// 
	// tabPage1
	// 
	this->tabPage1->Controls->Add(this->button2);
	this->tabPage1->Controls->Add(this->dataGridView1);
	this->tabPage1->Location = System::Drawing::Point(4, 22);
	this->tabPage1->Name = L"tabPage1";
	this->tabPage1->Padding = System::Windows::Forms::Padding(3);
	this->tabPage1->Size = System::Drawing::Size(744, 425);
	this->tabPage1->TabIndex = 0;
	this->tabPage1->Text = L"Afficher les clients";
	this->tabPage1->UseVisualStyleBackColor = true;
	// 
	// tabPage2
	// 
	this->tabPage2->Controls->Add(this->button3);
	this->tabPage2->Controls->Add(this->textBox10);
	this->tabPage2->Controls->Add(this->textBox9);
	this->tabPage2->Controls->Add(this->textBox8);
	this->tabPage2->Controls->Add(this->textBox7);
	this->tabPage2->Controls->Add(this->textBox6);
	this->tabPage2->Controls->Add(this->textBox5);
	this->tabPage2->Controls->Add(this->textBox4);
	this->tabPage2->Controls->Add(this->textBox3);
	this->tabPage2->Controls->Add(this->label13);
	this->tabPage2->Controls->Add(this->label12);
	this->tabPage2->Controls->Add(this->label11);
	this->tabPage2->Controls->Add(this->label10);
	this->tabPage2->Controls->Add(this->label9);
	this->tabPage2->Controls->Add(this->label8);
	this->tabPage2->Controls->Add(this->label7);
	this->tabPage2->Controls->Add(this->label6);
	this->tabPage2->Controls->Add(this->label5);
	this->tabPage2->Controls->Add(this->label4);
	this->tabPage2->Controls->Add(this->textBox2);
	this->tabPage2->Controls->Add(this->textBox1);
	this->tabPage2->Controls->Add(this->monthCalendar1);
	this->tabPage2->Controls->Add(this->label3);
	this->tabPage2->Controls->Add(this->label2);
	this->tabPage2->Controls->Add(this->label1);
	this->tabPage2->Location = System::Drawing::Point(4, 22);
	this->tabPage2->Name = L"tabPage2";
	this->tabPage2->Padding = System::Windows::Forms::Padding(3);
	this->tabPage2->Size = System::Drawing::Size(744, 425);
	this->tabPage2->TabIndex = 1;
	this->tabPage2->Text = L"Ajouter un client";
	this->tabPage2->UseVisualStyleBackColor = true;
	// 
	// dataGridView1
	// 
	this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
		this->Column1,
			this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
	});
	this->dataGridView1->Location = System::Drawing::Point(12, 16);
	this->dataGridView1->Name = L"dataGridView1";
	this->dataGridView1->Size = System::Drawing::Size(618, 392);
	this->dataGridView1->TabIndex = 0;
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(648, 19);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(80, 388);
	this->button2->TabIndex = 1;
	this->button2->Text = L"Raffraichir";
	this->button2->UseVisualStyleBackColor = true;
	// 
	// Column1
	// 
	this->Column1->HeaderText = L"Id";
	this->Column1->Name = L"Column1";
	// 
	// Column2
	// 
	this->Column2->HeaderText = L"Nom";
	this->Column2->Name = L"Column2";
	// 
	// Column3
	// 
	this->Column3->HeaderText = L"Prenom";
	this->Column3->Name = L"Column3";
	// 
	// Column4
	// 
	this->Column4->HeaderText = L"Date de naissance";
	this->Column4->Name = L"Column4";
	// 
	// Column5
	// 
	this->Column5->HeaderText = L"Adresse de facturation";
	this->Column5->Name = L"Column5";
	// 
	// Column6
	// 
	this->Column6->HeaderText = L"Adresse de livraison";
	this->Column6->Name = L"Column6";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(19, 15);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(29, 13);
	this->label1->TabIndex = 0;
	this->label1->Text = L"Nom";
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Location = System::Drawing::Point(19, 86);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(43, 13);
	this->label2->TabIndex = 1;
	this->label2->Text = L"Prénom";
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Location = System::Drawing::Point(19, 175);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(96, 13);
	this->label3->TabIndex = 2;
	this->label3->Text = L"Date de naissance";
	// 
	// monthCalendar1
	// 
	this->monthCalendar1->Location = System::Drawing::Point(20, 218);
	this->monthCalendar1->Name = L"monthCalendar1";
	this->monthCalendar1->TabIndex = 3;
	// 
	// textBox1
	// 
	this->textBox1->Location = System::Drawing::Point(20, 45);
	this->textBox1->Name = L"textBox1";
	this->textBox1->Size = System::Drawing::Size(229, 20);
	this->textBox1->TabIndex = 4;
	// 
	// textBox2
	// 
	this->textBox2->Location = System::Drawing::Point(22, 116);
	this->textBox2->Name = L"textBox2";
	this->textBox2->Size = System::Drawing::Size(227, 20);
	this->textBox2->TabIndex = 5;
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Location = System::Drawing::Point(533, 15);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(113, 13);
	this->label4->TabIndex = 6;
	this->label4->Text = L"Adresse de facturation";
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Location = System::Drawing::Point(533, 200);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(101, 13);
	this->label5->TabIndex = 7;
	this->label5->Text = L"Adresse de livraison";
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Location = System::Drawing::Point(376, 52);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(44, 13);
	this->label6->TabIndex = 8;
	this->label6->Text = L"Numéro";
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->Location = System::Drawing::Point(393, 86);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(27, 13);
	this->label7->TabIndex = 9;
	this->label7->Text = L"Rue";
	// 
	// label8
	// 
	this->label8->AutoSize = true;
	this->label8->Location = System::Drawing::Point(394, 123);
	this->label8->Name = L"label8";
	this->label8->Size = System::Drawing::Size(26, 13);
	this->label8->TabIndex = 10;
	this->label8->Text = L"Ville";
	// 
	// label9
	// 
	this->label9->AutoSize = true;
	this->label9->Location = System::Drawing::Point(357, 156);
	this->label9->Name = L"label9";
	this->label9->Size = System::Drawing::Size(63, 13);
	this->label9->TabIndex = 11;
	this->label9->Text = L"Code postal";
	// 
	// label10
	// 
	this->label10->AutoSize = true;
	this->label10->Location = System::Drawing::Point(376, 232);
	this->label10->Name = L"label10";
	this->label10->Size = System::Drawing::Size(44, 13);
	this->label10->TabIndex = 12;
	this->label10->Text = L"Numéro";
	// 
	// label11
	// 
	this->label11->AutoSize = true;
	this->label11->Location = System::Drawing::Point(393, 267);
	this->label11->Name = L"label11";
	this->label11->Size = System::Drawing::Size(27, 13);
	this->label11->TabIndex = 13;
	this->label11->Text = L"Rue";
	// 
	// label12
	// 
	this->label12->AutoSize = true;
	this->label12->Location = System::Drawing::Point(394, 303);
	this->label12->Name = L"label12";
	this->label12->Size = System::Drawing::Size(26, 13);
	this->label12->TabIndex = 14;
	this->label12->Text = L"Ville";
	// 
	// label13
	// 
	this->label13->AutoSize = true;
	this->label13->Location = System::Drawing::Point(357, 335);
	this->label13->Name = L"label13";
	this->label13->Size = System::Drawing::Size(63, 13);
	this->label13->TabIndex = 15;
	this->label13->Text = L"Code postal";
	// 
	// textBox3
	// 
	this->textBox3->Location = System::Drawing::Point(446, 45);
	this->textBox3->Name = L"textBox3";
	this->textBox3->Size = System::Drawing::Size(268, 20);
	this->textBox3->TabIndex = 16;
	// 
	// textBox4
	// 
	this->textBox4->Location = System::Drawing::Point(446, 79);
	this->textBox4->Name = L"textBox4";
	this->textBox4->Size = System::Drawing::Size(268, 20);
	this->textBox4->TabIndex = 17;
	// 
	// textBox5
	// 
	this->textBox5->Location = System::Drawing::Point(446, 116);
	this->textBox5->Name = L"textBox5";
	this->textBox5->Size = System::Drawing::Size(268, 20);
	this->textBox5->TabIndex = 18;
	// 
	// textBox6
	// 
	this->textBox6->Location = System::Drawing::Point(446, 149);
	this->textBox6->Name = L"textBox6";
	this->textBox6->Size = System::Drawing::Size(268, 20);
	this->textBox6->TabIndex = 19;
	// 
	// textBox7
	// 
	this->textBox7->Location = System::Drawing::Point(440, 225);
	this->textBox7->Name = L"textBox7";
	this->textBox7->Size = System::Drawing::Size(268, 20);
	this->textBox7->TabIndex = 20;
	// 
	// textBox8
	// 
	this->textBox8->Location = System::Drawing::Point(440, 260);
	this->textBox8->Name = L"textBox8";
	this->textBox8->Size = System::Drawing::Size(268, 20);
	this->textBox8->TabIndex = 21;
	// 
	// textBox9
	// 
	this->textBox9->Location = System::Drawing::Point(440, 296);
	this->textBox9->Name = L"textBox9";
	this->textBox9->Size = System::Drawing::Size(268, 20);
	this->textBox9->TabIndex = 22;
	// 
	// textBox10
	// 
	this->textBox10->Location = System::Drawing::Point(440, 328);
	this->textBox10->Name = L"textBox10";
	this->textBox10->Size = System::Drawing::Size(268, 20);
	this->textBox10->TabIndex = 23;
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(269, 367);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(438, 41);
	this->button3->TabIndex = 24;
	this->button3->Text = L"Ajouter le client";
	this->button3->UseVisualStyleBackColor = true;
	// 
	// tabPage3
	// 
	this->tabPage3->Controls->Add(this->textBox21);
	this->tabPage3->Controls->Add(this->textBox20);
	this->tabPage3->Controls->Add(this->textBox19);
	this->tabPage3->Controls->Add(this->textBox18);
	this->tabPage3->Controls->Add(this->textBox17);
	this->tabPage3->Controls->Add(this->textBox16);
	this->tabPage3->Controls->Add(this->textBox15);
	this->tabPage3->Controls->Add(this->textBox14);
	this->tabPage3->Controls->Add(this->textBox13);
	this->tabPage3->Controls->Add(this->textBox12);
	this->tabPage3->Controls->Add(this->textBox11);
	this->tabPage3->Controls->Add(this->monthCalendar2);
	this->tabPage3->Controls->Add(this->button5);
	this->tabPage3->Controls->Add(this->button4);
	this->tabPage3->Controls->Add(this->label27);
	this->tabPage3->Controls->Add(this->label26);
	this->tabPage3->Controls->Add(this->label25);
	this->tabPage3->Controls->Add(this->label24);
	this->tabPage3->Controls->Add(this->label23);
	this->tabPage3->Controls->Add(this->label22);
	this->tabPage3->Controls->Add(this->label21);
	this->tabPage3->Controls->Add(this->label20);
	this->tabPage3->Controls->Add(this->label19);
	this->tabPage3->Controls->Add(this->label18);
	this->tabPage3->Controls->Add(this->label17);
	this->tabPage3->Controls->Add(this->label16);
	this->tabPage3->Controls->Add(this->label15);
	this->tabPage3->Controls->Add(this->label14);
	this->tabPage3->Location = System::Drawing::Point(4, 22);
	this->tabPage3->Name = L"tabPage3";
	this->tabPage3->Padding = System::Windows::Forms::Padding(3);
	this->tabPage3->Size = System::Drawing::Size(744, 425);
	this->tabPage3->TabIndex = 2;
	this->tabPage3->Text = L"Modifier un client";
	this->tabPage3->UseVisualStyleBackColor = true;
	// 
	// label14
	// 
	this->label14->AutoSize = true;
	this->label14->Location = System::Drawing::Point(16, 23);
	this->label14->Name = L"label14";
	this->label14->Size = System::Drawing::Size(107, 13);
	this->label14->TabIndex = 0;
	this->label14->Text = L"Id du client à modifier";
	// 
	// label15
	// 
	this->label15->AutoSize = true;
	this->label15->Location = System::Drawing::Point(16, 58);
	this->label15->Name = L"label15";
	this->label15->Size = System::Drawing::Size(29, 13);
	this->label15->TabIndex = 1;
	this->label15->Text = L"Nom";
	// 
	// label16
	// 
	this->label16->AutoSize = true;
	this->label16->Location = System::Drawing::Point(16, 114);
	this->label16->Name = L"label16";
	this->label16->Size = System::Drawing::Size(43, 13);
	this->label16->TabIndex = 2;
	this->label16->Text = L"Prenom";
	// 
	// label17
	// 
	this->label17->AutoSize = true;
	this->label17->Location = System::Drawing::Point(16, 179);
	this->label17->Name = L"label17";
	this->label17->Size = System::Drawing::Size(96, 13);
	this->label17->TabIndex = 3;
	this->label17->Text = L"Date de naissance";
	// 
	// label18
	// 
	this->label18->AutoSize = true;
	this->label18->Location = System::Drawing::Point(547, 23);
	this->label18->Name = L"label18";
	this->label18->Size = System::Drawing::Size(113, 13);
	this->label18->TabIndex = 4;
	this->label18->Text = L"Adresse de facturation";
	// 
	// label19
	// 
	this->label19->AutoSize = true;
	this->label19->Location = System::Drawing::Point(416, 55);
	this->label19->Name = L"label19";
	this->label19->Size = System::Drawing::Size(44, 13);
	this->label19->TabIndex = 5;
	this->label19->Text = L"Numero";
	// 
	// label20
	// 
	this->label20->AutoSize = true;
	this->label20->Location = System::Drawing::Point(433, 81);
	this->label20->Name = L"label20";
	this->label20->Size = System::Drawing::Size(27, 13);
	this->label20->TabIndex = 6;
	this->label20->Text = L"Rue";
	// 
	// label21
	// 
	this->label21->AutoSize = true;
	this->label21->Location = System::Drawing::Point(434, 114);
	this->label21->Name = L"label21";
	this->label21->Size = System::Drawing::Size(26, 13);
	this->label21->TabIndex = 7;
	this->label21->Text = L"Ville";
	// 
	// label22
	// 
	this->label22->AutoSize = true;
	this->label22->Location = System::Drawing::Point(397, 151);
	this->label22->Name = L"label22";
	this->label22->Size = System::Drawing::Size(63, 13);
	this->label22->TabIndex = 8;
	this->label22->Text = L"Code postal";
	// 
	// label23
	// 
	this->label23->AutoSize = true;
	this->label23->Location = System::Drawing::Point(547, 188);
	this->label23->Name = L"label23";
	this->label23->Size = System::Drawing::Size(101, 13);
	this->label23->TabIndex = 9;
	this->label23->Text = L"Adresse de livraison";
	// 
	// label24
	// 
	this->label24->AutoSize = true;
	this->label24->Location = System::Drawing::Point(421, 224);
	this->label24->Name = L"label24";
	this->label24->Size = System::Drawing::Size(44, 13);
	this->label24->TabIndex = 10;
	this->label24->Text = L"Numero";
	// 
	// label25
	// 
	this->label25->AutoSize = true;
	this->label25->Location = System::Drawing::Point(433, 256);
	this->label25->Name = L"label25";
	this->label25->Size = System::Drawing::Size(27, 13);
	this->label25->TabIndex = 11;
	this->label25->Text = L"Rue";
	// 
	// label26
	// 
	this->label26->AutoSize = true;
	this->label26->Location = System::Drawing::Point(433, 291);
	this->label26->Name = L"label26";
	this->label26->Size = System::Drawing::Size(26, 13);
	this->label26->TabIndex = 12;
	this->label26->Text = L"Ville";
	// 
	// label27
	// 
	this->label27->AutoSize = true;
	this->label27->Location = System::Drawing::Point(397, 328);
	this->label27->Name = L"label27";
	this->label27->Size = System::Drawing::Size(63, 13);
	this->label27->TabIndex = 13;
	this->label27->Text = L"Code postal";
	// 
	// button4
	// 
	this->button4->Location = System::Drawing::Point(229, 11);
	this->button4->Name = L"button4";
	this->button4->Size = System::Drawing::Size(78, 29);
	this->button4->TabIndex = 14;
	this->button4->Text = L"Valider";
	this->button4->UseVisualStyleBackColor = true;
	// 
	// button5
	// 
	this->button5->Location = System::Drawing::Point(299, 357);
	this->button5->Name = L"button5";
	this->button5->Size = System::Drawing::Size(414, 48);
	this->button5->TabIndex = 15;
	this->button5->Text = L"Modifer le client";
	this->button5->UseVisualStyleBackColor = true;
	// 
	// monthCalendar2
	// 
	this->monthCalendar2->Location = System::Drawing::Point(19, 207);
	this->monthCalendar2->Name = L"monthCalendar2";
	this->monthCalendar2->TabIndex = 16;
	// 
	// textBox11
	// 
	this->textBox11->Location = System::Drawing::Point(129, 16);
	this->textBox11->Name = L"textBox11";
	this->textBox11->Size = System::Drawing::Size(63, 20);
	this->textBox11->TabIndex = 17;
	// 
	// textBox12
	// 
	this->textBox12->Location = System::Drawing::Point(19, 78);
	this->textBox12->Name = L"textBox12";
	this->textBox12->Size = System::Drawing::Size(165, 20);
	this->textBox12->TabIndex = 18;
	// 
	// textBox13
	// 
	this->textBox13->Location = System::Drawing::Point(19, 144);
	this->textBox13->Name = L"textBox13";
	this->textBox13->Size = System::Drawing::Size(152, 20);
	this->textBox13->TabIndex = 19;
	// 
	// textBox14
	// 
	this->textBox14->Location = System::Drawing::Point(482, 48);
	this->textBox14->Name = L"textBox14";
	this->textBox14->Size = System::Drawing::Size(231, 20);
	this->textBox14->TabIndex = 20;
	// 
	// textBox15
	// 
	this->textBox15->Location = System::Drawing::Point(480, 78);
	this->textBox15->Name = L"textBox15";
	this->textBox15->Size = System::Drawing::Size(233, 20);
	this->textBox15->TabIndex = 21;
	// 
	// textBox16
	// 
	this->textBox16->Location = System::Drawing::Point(480, 111);
	this->textBox16->Name = L"textBox16";
	this->textBox16->Size = System::Drawing::Size(233, 20);
	this->textBox16->TabIndex = 22;
	// 
	// textBox17
	// 
	this->textBox17->Location = System::Drawing::Point(482, 144);
	this->textBox17->Name = L"textBox17";
	this->textBox17->Size = System::Drawing::Size(231, 20);
	this->textBox17->TabIndex = 23;
	// 
	// textBox18
	// 
	this->textBox18->Location = System::Drawing::Point(478, 217);
	this->textBox18->Name = L"textBox18";
	this->textBox18->Size = System::Drawing::Size(235, 20);
	this->textBox18->TabIndex = 24;
	// 
	// textBox19
	// 
	this->textBox19->Location = System::Drawing::Point(478, 249);
	this->textBox19->Name = L"textBox19";
	this->textBox19->Size = System::Drawing::Size(235, 20);
	this->textBox19->TabIndex = 25;
	// 
	// textBox20
	// 
	this->textBox20->Location = System::Drawing::Point(478, 284);
	this->textBox20->Name = L"textBox20";
	this->textBox20->Size = System::Drawing::Size(235, 20);
	this->textBox20->TabIndex = 26;
	// 
	// textBox21
	// 
	this->textBox21->Location = System::Drawing::Point(478, 321);
	this->textBox21->Name = L"textBox21";
	this->textBox21->Size = System::Drawing::Size(235, 20);
	this->textBox21->TabIndex = 27;
	// 
	// tabPage4
	// 
	this->tabPage4->Controls->Add(this->button6);
	this->tabPage4->Controls->Add(this->textBox22);
	this->tabPage4->Controls->Add(this->label28);
	this->tabPage4->Location = System::Drawing::Point(4, 22);
	this->tabPage4->Name = L"tabPage4";
	this->tabPage4->Padding = System::Windows::Forms::Padding(3);
	this->tabPage4->Size = System::Drawing::Size(744, 425);
	this->tabPage4->TabIndex = 3;
	this->tabPage4->Text = L"Supprimer un client";
	this->tabPage4->UseVisualStyleBackColor = true;
	// 
	// label28
	// 
	this->label28->AutoSize = true;
	this->label28->Location = System::Drawing::Point(348, 110);
	this->label28->Name = L"label28";
	this->label28->Size = System::Drawing::Size(116, 13);
	this->label28->TabIndex = 0;
	this->label28->Text = L"Id du client à supprimer";
	// 
	// textBox22
	// 
	this->textBox22->Location = System::Drawing::Point(295, 148);
	this->textBox22->Name = L"textBox22";
	this->textBox22->Size = System::Drawing::Size(220, 20);
	this->textBox22->TabIndex = 1;
	// 
	// button6
	// 
	this->button6->Location = System::Drawing::Point(147, 205);
	this->button6->Name = L"button6";
	this->button6->Size = System::Drawing::Size(488, 63);
	this->button6->TabIndex = 2;
	this->button6->Text = L"Supprimer le client";
	this->button6->UseVisualStyleBackColor = true;
	// 
	// ClientPage
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(800, 500);
	this->Controls->Add(this->button1);
	this->Controls->Add(this->tabControl1);
	this->Name = L"ClientPage";
	this->Text = L"ClientPage";
	this->tabControl1->ResumeLayout(false);
	this->tabPage1->ResumeLayout(false);
	this->tabPage2->ResumeLayout(false);
	this->tabPage2->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
	this->tabPage3->ResumeLayout(false);
	this->tabPage3->PerformLayout();
	this->tabPage4->ResumeLayout(false);
	this->tabPage4->PerformLayout();
	this->ResumeLayout(false);
	
}

void  POO::ClientPage::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	
	AdminPage^ adminPage = gcnew AdminPage();
	adminPage->ShowDialog();
	
	this->Close();
}
