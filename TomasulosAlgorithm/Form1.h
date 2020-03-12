#pragma once
#include <time.h>
#include <iostream>
#include "InstObj.cpp"
#include <vector>
#include <string>



namespace TomasulosAlgorithm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		std::vector<instObj>* instList = new std::vector<instObj>;

		int MAX_ADD_UNIT = 2;
		std::vector<instObj>* addUnit = new std::vector<instObj>;
		int MAX_MUL_UNIT = 2;
		std::vector<instObj>* mulUnit = new std::vector<instObj>;

		int curClockCycle = 0;
	


		Form1(void)
		{
			
			InitializeComponent();
			InstBox->Items->Add("ADD");
			InstBox->Items->Add("SUB");
			InstBox->Items->Add("MUL");
			InstBox->Items->Add("DIV");


			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ AddInstBtn;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RichTextBox^ InstBank;
	private: System::Windows::Forms::ComboBox^ InstBox;
	private: System::Windows::Forms::NumericUpDown^ reg1UD;

	private: System::Windows::Forms::NumericUpDown^ reg2UD;
	private: System::Windows::Forms::NumericUpDown^ reg3UD;




	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ QuickAddBtn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ RegF0;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ RF_r6;

	private: System::Windows::Forms::TextBox^ RF_r5;

	private: System::Windows::Forms::TextBox^ RF_r4;

	private: System::Windows::Forms::TextBox^ RF_r3;

	private: System::Windows::Forms::TextBox^ RF_r2;

	private: System::Windows::Forms::TextBox^ RF_r1;

	private: System::Windows::Forms::TextBox^ RF_r0;
	private: System::Windows::Forms::TextBox^ RF_r8;



	private: System::Windows::Forms::TextBox^ RF_r7;
	private: System::Windows::Forms::TextBox^ RF_r9;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ Rat_r9;

	private: System::Windows::Forms::TextBox^ Rat_r7;
	private: System::Windows::Forms::TextBox^ Rat_r8;


	private: System::Windows::Forms::TextBox^ Rat_r0;
	private: System::Windows::Forms::TextBox^ Rat_r1;
	private: System::Windows::Forms::TextBox^ Rat_r2;
	private: System::Windows::Forms::TextBox^ Rat_r3;
	private: System::Windows::Forms::TextBox^ Rat_r4;
	private: System::Windows::Forms::TextBox^ Rat_r5;
	private: System::Windows::Forms::TextBox^ Rat_r6;
	private: System::Windows::Forms::Label^ RS1;
	private: System::Windows::Forms::Label^ RS2;
	private: System::Windows::Forms::Label^ RS3;
	private: System::Windows::Forms::Label^ RS4;
	private: System::Windows::Forms::Label^ Op_code;
	private: System::Windows::Forms::Label^ Temp1;
	private: System::Windows::Forms::Label^ Temp_2;
	private: System::Windows::Forms::Label^ Value_1;
	private: System::Windows::Forms::Label^ V2;
	private: System::Windows::Forms::Label^ Busy;
	private: System::Windows::Forms::Label^ Dest_tag;
	private: System::Windows::Forms::TextBox^ RS1_op;
	private: System::Windows::Forms::TextBox^ RS1_t1;

	private: System::Windows::Forms::TextBox^ RS1_t2;
	private: System::Windows::Forms::TextBox^ RS1_V1;
	private: System::Windows::Forms::TextBox^ RS1_v2;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ RS1_tag;
	private: System::Windows::Forms::TextBox^ RS2_op;
	private: System::Windows::Forms::TextBox^ RS2_t1;
	private: System::Windows::Forms::TextBox^ RS2_t2;
	private: System::Windows::Forms::TextBox^ RS2_v1;
	private: System::Windows::Forms::TextBox^ RS2_v2;
	private: System::Windows::Forms::TextBox^ RS2_busy;
	private: System::Windows::Forms::TextBox^ RS2_tag;
	private: System::Windows::Forms::TextBox^ RS3_op;
	private: System::Windows::Forms::TextBox^ RS3_t1;
	private: System::Windows::Forms::TextBox^ RS3_t2;
	private: System::Windows::Forms::TextBox^ RS3_v1;
	private: System::Windows::Forms::TextBox^ RS3_v2;
	private: System::Windows::Forms::TextBox^ RS3_busy;
	private: System::Windows::Forms::TextBox^ RS3_tag;
	private: System::Windows::Forms::TextBox^ RS4_op;
	private: System::Windows::Forms::TextBox^ RS4_t1;
	private: System::Windows::Forms::TextBox^ RS4_t2;
	private: System::Windows::Forms::TextBox^ RS4_v1;
	private: System::Windows::Forms::TextBox^ RS4_v2;
	private: System::Windows::Forms::TextBox^ RS4_busy;
	private: System::Windows::Forms::TextBox^ RS4_tag;
	private: System::Windows::Forms::Label^ Current_clock_cycle;
	private: System::Windows::Forms::TextBox^ current_clock;
	private: System::Windows::Forms::Label^ Rob;
	private: System::Windows::Forms::TextBox^ Dest9;

	private: System::Windows::Forms::TextBox^ Dest7;
	private: System::Windows::Forms::TextBox^ Dest8;


	private: System::Windows::Forms::TextBox^ Dest0;
	private: System::Windows::Forms::TextBox^ Dest1;
	private: System::Windows::Forms::TextBox^ Dest2;
	private: System::Windows::Forms::TextBox^ Dest3;
	private: System::Windows::Forms::TextBox^ Dest4;
	private: System::Windows::Forms::TextBox^ Dest5;
	private: System::Windows::Forms::TextBox^ Dest6;







	private: System::Windows::Forms::Label^ Rob9;

	private: System::Windows::Forms::Label^ Rob8;

	private: System::Windows::Forms::Label^ Rob7;

	private: System::Windows::Forms::Label^ Rob6;

	private: System::Windows::Forms::Label^ Rob5;

	private: System::Windows::Forms::Label^ Rob4;

	private: System::Windows::Forms::Label^ Rob3;

	private: System::Windows::Forms::Label^ Rob2;
	private: System::Windows::Forms::Label^ Rob1;
	private: System::Windows::Forms::Label^ Rob0;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;

	private: System::Windows::Forms::TextBox^ Val9;

	private: System::Windows::Forms::TextBox^ Val7;
	private: System::Windows::Forms::TextBox^ Val8;


	private: System::Windows::Forms::TextBox^ Val0;
	private: System::Windows::Forms::TextBox^ Val1;
	private: System::Windows::Forms::TextBox^ Val2;
	private: System::Windows::Forms::TextBox^ Val3;
	private: System::Windows::Forms::TextBox^ Val4;
	private: System::Windows::Forms::TextBox^ Val5;
	private: System::Windows::Forms::TextBox^ Val6;
	private: System::Windows::Forms::TextBox^ Done9;








	private: System::Windows::Forms::TextBox^ Done7;
	private: System::Windows::Forms::TextBox^ Done8;


	private: System::Windows::Forms::TextBox^ Done0;
	private: System::Windows::Forms::TextBox^ Done1;
	private: System::Windows::Forms::TextBox^ Done2;
	private: System::Windows::Forms::TextBox^ Done3;
	private: System::Windows::Forms::TextBox^ Done4;
	private: System::Windows::Forms::TextBox^ Done5;
	private: System::Windows::Forms::TextBox^ Done6;







	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ Output;


















	





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->AddInstBtn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->InstBank = (gcnew System::Windows::Forms::RichTextBox());
			this->InstBox = (gcnew System::Windows::Forms::ComboBox());
			this->reg1UD = (gcnew System::Windows::Forms::NumericUpDown());
			this->reg2UD = (gcnew System::Windows::Forms::NumericUpDown());
			this->reg3UD = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->QuickAddBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->RegF0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->RF_r6 = (gcnew System::Windows::Forms::TextBox());
			this->RF_r5 = (gcnew System::Windows::Forms::TextBox());
			this->RF_r4 = (gcnew System::Windows::Forms::TextBox());
			this->RF_r3 = (gcnew System::Windows::Forms::TextBox());
			this->RF_r2 = (gcnew System::Windows::Forms::TextBox());
			this->RF_r1 = (gcnew System::Windows::Forms::TextBox());
			this->RF_r0 = (gcnew System::Windows::Forms::TextBox());
			this->RF_r8 = (gcnew System::Windows::Forms::TextBox());
			this->RF_r7 = (gcnew System::Windows::Forms::TextBox());
			this->RF_r9 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Rat_r9 = (gcnew System::Windows::Forms::TextBox());
			this->Rat_r7 = (gcnew System::Windows::Forms::TextBox());
			this->Rat_r8 = (gcnew System::Windows::Forms::TextBox());
			this->Rat_r0 = (gcnew System::Windows::Forms::TextBox());
			this->Rat_r1 = (gcnew System::Windows::Forms::TextBox());
			this->Rat_r2 = (gcnew System::Windows::Forms::TextBox());
			this->Rat_r3 = (gcnew System::Windows::Forms::TextBox());
			this->Rat_r4 = (gcnew System::Windows::Forms::TextBox());
			this->Rat_r5 = (gcnew System::Windows::Forms::TextBox());
			this->Rat_r6 = (gcnew System::Windows::Forms::TextBox());
			this->RS1 = (gcnew System::Windows::Forms::Label());
			this->RS2 = (gcnew System::Windows::Forms::Label());
			this->RS3 = (gcnew System::Windows::Forms::Label());
			this->RS4 = (gcnew System::Windows::Forms::Label());
			this->Op_code = (gcnew System::Windows::Forms::Label());
			this->Temp1 = (gcnew System::Windows::Forms::Label());
			this->Temp_2 = (gcnew System::Windows::Forms::Label());
			this->Value_1 = (gcnew System::Windows::Forms::Label());
			this->V2 = (gcnew System::Windows::Forms::Label());
			this->Busy = (gcnew System::Windows::Forms::Label());
			this->Dest_tag = (gcnew System::Windows::Forms::Label());
			this->RS1_op = (gcnew System::Windows::Forms::TextBox());
			this->RS1_t1 = (gcnew System::Windows::Forms::TextBox());
			this->RS1_t2 = (gcnew System::Windows::Forms::TextBox());
			this->RS1_V1 = (gcnew System::Windows::Forms::TextBox());
			this->RS1_v2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->RS1_tag = (gcnew System::Windows::Forms::TextBox());
			this->RS2_op = (gcnew System::Windows::Forms::TextBox());
			this->RS2_t1 = (gcnew System::Windows::Forms::TextBox());
			this->RS2_t2 = (gcnew System::Windows::Forms::TextBox());
			this->RS2_v1 = (gcnew System::Windows::Forms::TextBox());
			this->RS2_v2 = (gcnew System::Windows::Forms::TextBox());
			this->RS2_busy = (gcnew System::Windows::Forms::TextBox());
			this->RS2_tag = (gcnew System::Windows::Forms::TextBox());
			this->RS3_op = (gcnew System::Windows::Forms::TextBox());
			this->RS3_t1 = (gcnew System::Windows::Forms::TextBox());
			this->RS3_t2 = (gcnew System::Windows::Forms::TextBox());
			this->RS3_v1 = (gcnew System::Windows::Forms::TextBox());
			this->RS3_v2 = (gcnew System::Windows::Forms::TextBox());
			this->RS3_busy = (gcnew System::Windows::Forms::TextBox());
			this->RS3_tag = (gcnew System::Windows::Forms::TextBox());
			this->RS4_op = (gcnew System::Windows::Forms::TextBox());
			this->RS4_t1 = (gcnew System::Windows::Forms::TextBox());
			this->RS4_t2 = (gcnew System::Windows::Forms::TextBox());
			this->RS4_v1 = (gcnew System::Windows::Forms::TextBox());
			this->RS4_v2 = (gcnew System::Windows::Forms::TextBox());
			this->RS4_busy = (gcnew System::Windows::Forms::TextBox());
			this->RS4_tag = (gcnew System::Windows::Forms::TextBox());
			this->Current_clock_cycle = (gcnew System::Windows::Forms::Label());
			this->current_clock = (gcnew System::Windows::Forms::TextBox());
			this->Rob = (gcnew System::Windows::Forms::Label());
			this->Dest9 = (gcnew System::Windows::Forms::TextBox());
			this->Dest7 = (gcnew System::Windows::Forms::TextBox());
			this->Dest8 = (gcnew System::Windows::Forms::TextBox());
			this->Dest0 = (gcnew System::Windows::Forms::TextBox());
			this->Dest1 = (gcnew System::Windows::Forms::TextBox());
			this->Dest2 = (gcnew System::Windows::Forms::TextBox());
			this->Dest3 = (gcnew System::Windows::Forms::TextBox());
			this->Dest4 = (gcnew System::Windows::Forms::TextBox());
			this->Dest5 = (gcnew System::Windows::Forms::TextBox());
			this->Dest6 = (gcnew System::Windows::Forms::TextBox());
			this->Rob9 = (gcnew System::Windows::Forms::Label());
			this->Rob8 = (gcnew System::Windows::Forms::Label());
			this->Rob7 = (gcnew System::Windows::Forms::Label());
			this->Rob6 = (gcnew System::Windows::Forms::Label());
			this->Rob5 = (gcnew System::Windows::Forms::Label());
			this->Rob4 = (gcnew System::Windows::Forms::Label());
			this->Rob3 = (gcnew System::Windows::Forms::Label());
			this->Rob2 = (gcnew System::Windows::Forms::Label());
			this->Rob1 = (gcnew System::Windows::Forms::Label());
			this->Rob0 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Val9 = (gcnew System::Windows::Forms::TextBox());
			this->Val7 = (gcnew System::Windows::Forms::TextBox());
			this->Val8 = (gcnew System::Windows::Forms::TextBox());
			this->Val0 = (gcnew System::Windows::Forms::TextBox());
			this->Val1 = (gcnew System::Windows::Forms::TextBox());
			this->Val2 = (gcnew System::Windows::Forms::TextBox());
			this->Val3 = (gcnew System::Windows::Forms::TextBox());
			this->Val4 = (gcnew System::Windows::Forms::TextBox());
			this->Val5 = (gcnew System::Windows::Forms::TextBox());
			this->Val6 = (gcnew System::Windows::Forms::TextBox());
			this->Done9 = (gcnew System::Windows::Forms::TextBox());
			this->Done7 = (gcnew System::Windows::Forms::TextBox());
			this->Done8 = (gcnew System::Windows::Forms::TextBox());
			this->Done0 = (gcnew System::Windows::Forms::TextBox());
			this->Done1 = (gcnew System::Windows::Forms::TextBox());
			this->Done2 = (gcnew System::Windows::Forms::TextBox());
			this->Done3 = (gcnew System::Windows::Forms::TextBox());
			this->Done4 = (gcnew System::Windows::Forms::TextBox());
			this->Done5 = (gcnew System::Windows::Forms::TextBox());
			this->Done6 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Output = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg1UD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg2UD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg3UD))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(769, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(144, 179);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Instruction Queue:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(28, 262);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Memory:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(473, 12);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Processor Units";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(437, 39);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Reservation Stations:";
			// 
			// AddInstBtn
			// 
			this->AddInstBtn->Location = System::Drawing::Point(45, 227);
			this->AddInstBtn->Name = L"AddInstBtn";
			this->AddInstBtn->Size = System::Drawing::Size(75, 23);
			this->AddInstBtn->TabIndex = 14;
			this->AddInstBtn->Text = L"Add Inst";
			this->AddInstBtn->UseVisualStyleBackColor = true;
			this->AddInstBtn->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(14, 629);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Run";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(106, 628);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Next Cycle";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// InstBank
			// 
			this->InstBank->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InstBank->Location = System::Drawing::Point(12, 58);
			this->InstBank->Name = L"InstBank";
			this->InstBank->ReadOnly = true;
			this->InstBank->Size = System::Drawing::Size(229, 167);
			this->InstBank->TabIndex = 17;
			this->InstBank->Text = L"";
			// 
			// InstBox
			// 
			this->InstBox->FormattingEnabled = true;
			this->InstBox->Location = System::Drawing::Point(13, 31);
			this->InstBox->Name = L"InstBox";
			this->InstBox->Size = System::Drawing::Size(46, 21);
			this->InstBox->TabIndex = 18;
			// 
			// reg1UD
			// 
			this->reg1UD->Location = System::Drawing::Point(86, 31);
			this->reg1UD->Name = L"reg1UD";
			this->reg1UD->Size = System::Drawing::Size(34, 20);
			this->reg1UD->TabIndex = 19;
			// 
			// reg2UD
			// 
			this->reg2UD->Location = System::Drawing::Point(147, 32);
			this->reg2UD->Name = L"reg2UD";
			this->reg2UD->Size = System::Drawing::Size(34, 20);
			this->reg2UD->TabIndex = 20;
			// 
			// reg3UD
			// 
			this->reg3UD->Location = System::Drawing::Point(207, 32);
			this->reg3UD->Name = L"reg3UD";
			this->reg3UD->Size = System::Drawing::Size(34, 20);
			this->reg3UD->TabIndex = 21;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(65, 34);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(15, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"R";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(126, 34);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(15, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"R";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(186, 34);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(15, 13);
			this->label14->TabIndex = 24;
			this->label14->Text = L"R";
			// 
			// QuickAddBtn
			// 
			this->QuickAddBtn->Location = System::Drawing::Point(129, 227);
			this->QuickAddBtn->Name = L"QuickAddBtn";
			this->QuickAddBtn->Size = System::Drawing::Size(75, 23);
			this->QuickAddBtn->TabIndex = 25;
			this->QuickAddBtn->Text = L"Quick Add";
			this->QuickAddBtn->UseVisualStyleBackColor = true;
			this->QuickAddBtn->Click += gcnew System::EventHandler(this, &Form1::QuickAddBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 287);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 26;
			this->label1->Text = L"R0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 313);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"R1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 339);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"R2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 365);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"R3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 391);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 30;
			this->label5->Text = L"R4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 414);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 31;
			this->label6->Text = L"R5";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 440);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 32;
			this->label7->Text = L"R6";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 468);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(21, 13);
			this->label15->TabIndex = 33;
			this->label15->Text = L"R7";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 492);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(21, 13);
			this->label16->TabIndex = 34;
			this->label16->Text = L"R8";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(12, 521);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(21, 13);
			this->label17->TabIndex = 35;
			this->label17->Text = L"R9";
			// 
			// RegF0
			// 
			this->RegF0->Location = System::Drawing::Point(39, 284);
			this->RegF0->Name = L"RegF0";
			this->RegF0->ReadOnly = true;
			this->RegF0->Size = System::Drawing::Size(33, 20);
			this->RegF0->TabIndex = 36;
			this->RegF0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(39, 310);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(33, 20);
			this->textBox2->TabIndex = 37;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(39, 336);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(33, 20);
			this->textBox3->TabIndex = 38;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(39, 362);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(33, 20);
			this->textBox4->TabIndex = 39;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(39, 388);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(33, 20);
			this->textBox5->TabIndex = 40;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(39, 414);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(33, 20);
			this->textBox6->TabIndex = 41;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(39, 440);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(33, 20);
			this->textBox7->TabIndex = 42;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(39, 466);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(33, 20);
			this->textBox8->TabIndex = 43;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(39, 492);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(33, 20);
			this->textBox9->TabIndex = 44;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(39, 518);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(33, 20);
			this->textBox10->TabIndex = 45;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(79, 262);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(24, 13);
			this->label18->TabIndex = 46;
			this->label18->Text = L"RF:";
			// 
			// RF_r6
			// 
			this->RF_r6->Location = System::Drawing::Point(82, 440);
			this->RF_r6->Name = L"RF_r6";
			this->RF_r6->ReadOnly = true;
			this->RF_r6->Size = System::Drawing::Size(33, 20);
			this->RF_r6->TabIndex = 47;
			this->RF_r6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RF_r5
			// 
			this->RF_r5->Location = System::Drawing::Point(82, 414);
			this->RF_r5->Name = L"RF_r5";
			this->RF_r5->ReadOnly = true;
			this->RF_r5->Size = System::Drawing::Size(33, 20);
			this->RF_r5->TabIndex = 48;
			this->RF_r5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RF_r4
			// 
			this->RF_r4->Location = System::Drawing::Point(82, 388);
			this->RF_r4->Name = L"RF_r4";
			this->RF_r4->ReadOnly = true;
			this->RF_r4->Size = System::Drawing::Size(33, 20);
			this->RF_r4->TabIndex = 49;
			this->RF_r4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RF_r3
			// 
			this->RF_r3->Location = System::Drawing::Point(82, 362);
			this->RF_r3->Name = L"RF_r3";
			this->RF_r3->ReadOnly = true;
			this->RF_r3->Size = System::Drawing::Size(33, 20);
			this->RF_r3->TabIndex = 50;
			this->RF_r3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RF_r2
			// 
			this->RF_r2->Location = System::Drawing::Point(82, 336);
			this->RF_r2->Name = L"RF_r2";
			this->RF_r2->ReadOnly = true;
			this->RF_r2->Size = System::Drawing::Size(33, 20);
			this->RF_r2->TabIndex = 51;
			this->RF_r2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RF_r1
			// 
			this->RF_r1->Location = System::Drawing::Point(82, 310);
			this->RF_r1->Name = L"RF_r1";
			this->RF_r1->ReadOnly = true;
			this->RF_r1->Size = System::Drawing::Size(33, 20);
			this->RF_r1->TabIndex = 52;
			this->RF_r1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RF_r0
			// 
			this->RF_r0->Location = System::Drawing::Point(82, 284);
			this->RF_r0->Name = L"RF_r0";
			this->RF_r0->ReadOnly = true;
			this->RF_r0->Size = System::Drawing::Size(33, 20);
			this->RF_r0->TabIndex = 53;
			this->RF_r0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RF_r8
			// 
			this->RF_r8->Location = System::Drawing::Point(82, 492);
			this->RF_r8->Name = L"RF_r8";
			this->RF_r8->ReadOnly = true;
			this->RF_r8->Size = System::Drawing::Size(33, 20);
			this->RF_r8->TabIndex = 54;
			this->RF_r8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RF_r7
			// 
			this->RF_r7->Location = System::Drawing::Point(82, 466);
			this->RF_r7->Name = L"RF_r7";
			this->RF_r7->ReadOnly = true;
			this->RF_r7->Size = System::Drawing::Size(33, 20);
			this->RF_r7->TabIndex = 55;
			this->RF_r7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RF_r9
			// 
			this->RF_r9->Location = System::Drawing::Point(82, 518);
			this->RF_r9->Name = L"RF_r9";
			this->RF_r9->ReadOnly = true;
			this->RF_r9->Size = System::Drawing::Size(33, 20);
			this->RF_r9->TabIndex = 56;
			this->RF_r9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(123, 262);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(32, 13);
			this->label19->TabIndex = 57;
			this->label19->Text = L"RAT:";
			// 
			// Rat_r9
			// 
			this->Rat_r9->Location = System::Drawing::Point(126, 518);
			this->Rat_r9->Name = L"Rat_r9";
			this->Rat_r9->ReadOnly = true;
			this->Rat_r9->Size = System::Drawing::Size(33, 20);
			this->Rat_r9->TabIndex = 67;
			this->Rat_r9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r7
			// 
			this->Rat_r7->Location = System::Drawing::Point(126, 465);
			this->Rat_r7->Name = L"Rat_r7";
			this->Rat_r7->ReadOnly = true;
			this->Rat_r7->Size = System::Drawing::Size(33, 20);
			this->Rat_r7->TabIndex = 66;
			this->Rat_r7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r8
			// 
			this->Rat_r8->Location = System::Drawing::Point(126, 492);
			this->Rat_r8->Name = L"Rat_r8";
			this->Rat_r8->ReadOnly = true;
			this->Rat_r8->Size = System::Drawing::Size(33, 20);
			this->Rat_r8->TabIndex = 65;
			this->Rat_r8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r0
			// 
			this->Rat_r0->Location = System::Drawing::Point(126, 284);
			this->Rat_r0->Name = L"Rat_r0";
			this->Rat_r0->ReadOnly = true;
			this->Rat_r0->Size = System::Drawing::Size(33, 20);
			this->Rat_r0->TabIndex = 64;
			this->Rat_r0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r1
			// 
			this->Rat_r1->Location = System::Drawing::Point(126, 310);
			this->Rat_r1->Name = L"Rat_r1";
			this->Rat_r1->ReadOnly = true;
			this->Rat_r1->Size = System::Drawing::Size(33, 20);
			this->Rat_r1->TabIndex = 63;
			this->Rat_r1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r2
			// 
			this->Rat_r2->Location = System::Drawing::Point(126, 336);
			this->Rat_r2->Name = L"Rat_r2";
			this->Rat_r2->ReadOnly = true;
			this->Rat_r2->Size = System::Drawing::Size(33, 20);
			this->Rat_r2->TabIndex = 62;
			this->Rat_r2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r3
			// 
			this->Rat_r3->Location = System::Drawing::Point(126, 362);
			this->Rat_r3->Name = L"Rat_r3";
			this->Rat_r3->ReadOnly = true;
			this->Rat_r3->Size = System::Drawing::Size(33, 20);
			this->Rat_r3->TabIndex = 61;
			this->Rat_r3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r4
			// 
			this->Rat_r4->Location = System::Drawing::Point(126, 388);
			this->Rat_r4->Name = L"Rat_r4";
			this->Rat_r4->ReadOnly = true;
			this->Rat_r4->Size = System::Drawing::Size(33, 20);
			this->Rat_r4->TabIndex = 60;
			this->Rat_r4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r5
			// 
			this->Rat_r5->Location = System::Drawing::Point(126, 414);
			this->Rat_r5->Name = L"Rat_r5";
			this->Rat_r5->ReadOnly = true;
			this->Rat_r5->Size = System::Drawing::Size(33, 20);
			this->Rat_r5->TabIndex = 59;
			this->Rat_r5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r6
			// 
			this->Rat_r6->Location = System::Drawing::Point(126, 440);
			this->Rat_r6->Name = L"Rat_r6";
			this->Rat_r6->ReadOnly = true;
			this->Rat_r6->Size = System::Drawing::Size(33, 20);
			this->Rat_r6->TabIndex = 58;
			this->Rat_r6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1
			// 
			this->RS1->AutoSize = true;
			this->RS1->Location = System::Drawing::Point(269, 86);
			this->RS1->Name = L"RS1";
			this->RS1->Size = System::Drawing::Size(28, 13);
			this->RS1->TabIndex = 68;
			this->RS1->Text = L"RS1";
			// 
			// RS2
			// 
			this->RS2->AutoSize = true;
			this->RS2->Location = System::Drawing::Point(269, 114);
			this->RS2->Name = L"RS2";
			this->RS2->Size = System::Drawing::Size(28, 13);
			this->RS2->TabIndex = 69;
			this->RS2->Text = L"RS2";
			// 
			// RS3
			// 
			this->RS3->AutoSize = true;
			this->RS3->Location = System::Drawing::Point(269, 143);
			this->RS3->Name = L"RS3";
			this->RS3->Size = System::Drawing::Size(28, 13);
			this->RS3->TabIndex = 70;
			this->RS3->Text = L"RS3";
			// 
			// RS4
			// 
			this->RS4->AutoSize = true;
			this->RS4->Location = System::Drawing::Point(269, 172);
			this->RS4->Name = L"RS4";
			this->RS4->Size = System::Drawing::Size(28, 13);
			this->RS4->TabIndex = 71;
			this->RS4->Text = L"RS4";
			// 
			// Op_code
			// 
			this->Op_code->AutoSize = true;
			this->Op_code->Location = System::Drawing::Point(300, 57);
			this->Op_code->Name = L"Op_code";
			this->Op_code->Size = System::Drawing::Size(22, 13);
			this->Op_code->TabIndex = 72;
			this->Op_code->Text = L"OP";
			// 
			// Temp1
			// 
			this->Temp1->AutoSize = true;
			this->Temp1->Location = System::Drawing::Point(371, 57);
			this->Temp1->Name = L"Temp1";
			this->Temp1->Size = System::Drawing::Size(20, 13);
			this->Temp1->TabIndex = 73;
			this->Temp1->Text = L"T1";
			// 
			// Temp_2
			// 
			this->Temp_2->AutoSize = true;
			this->Temp_2->Location = System::Drawing::Point(434, 57);
			this->Temp_2->Name = L"Temp_2";
			this->Temp_2->Size = System::Drawing::Size(20, 13);
			this->Temp_2->TabIndex = 74;
			this->Temp_2->Text = L"T2";
			// 
			// Value_1
			// 
			this->Value_1->AutoSize = true;
			this->Value_1->Location = System::Drawing::Point(496, 57);
			this->Value_1->Name = L"Value_1";
			this->Value_1->Size = System::Drawing::Size(20, 13);
			this->Value_1->TabIndex = 75;
			this->Value_1->Text = L"V1";
			// 
			// V2
			// 
			this->V2->AutoSize = true;
			this->V2->Location = System::Drawing::Point(557, 57);
			this->V2->Name = L"V2";
			this->V2->Size = System::Drawing::Size(20, 13);
			this->V2->TabIndex = 76;
			this->V2->Text = L"V2";
			// 
			// Busy
			// 
			this->Busy->AutoSize = true;
			this->Busy->Location = System::Drawing::Point(627, 57);
			this->Busy->Name = L"Busy";
			this->Busy->Size = System::Drawing::Size(30, 13);
			this->Busy->TabIndex = 77;
			this->Busy->Text = L"Busy";
			// 
			// Dest_tag
			// 
			this->Dest_tag->AutoSize = true;
			this->Dest_tag->Location = System::Drawing::Point(699, 57);
			this->Dest_tag->Name = L"Dest_tag";
			this->Dest_tag->Size = System::Drawing::Size(26, 13);
			this->Dest_tag->TabIndex = 78;
			this->Dest_tag->Text = L"Tag";
			// 
			// RS1_op
			// 
			this->RS1_op->Location = System::Drawing::Point(303, 79);
			this->RS1_op->Name = L"RS1_op";
			this->RS1_op->ReadOnly = true;
			this->RS1_op->Size = System::Drawing::Size(46, 20);
			this->RS1_op->TabIndex = 79;
			this->RS1_op->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1_t1
			// 
			this->RS1_t1->Location = System::Drawing::Point(374, 79);
			this->RS1_t1->Name = L"RS1_t1";
			this->RS1_t1->ReadOnly = true;
			this->RS1_t1->Size = System::Drawing::Size(46, 20);
			this->RS1_t1->TabIndex = 80;
			this->RS1_t1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1_t2
			// 
			this->RS1_t2->Location = System::Drawing::Point(437, 79);
			this->RS1_t2->Name = L"RS1_t2";
			this->RS1_t2->ReadOnly = true;
			this->RS1_t2->Size = System::Drawing::Size(46, 20);
			this->RS1_t2->TabIndex = 81;
			this->RS1_t2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1_V1
			// 
			this->RS1_V1->Location = System::Drawing::Point(499, 79);
			this->RS1_V1->Name = L"RS1_V1";
			this->RS1_V1->ReadOnly = true;
			this->RS1_V1->Size = System::Drawing::Size(46, 20);
			this->RS1_V1->TabIndex = 82;
			this->RS1_V1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1_v2
			// 
			this->RS1_v2->Location = System::Drawing::Point(560, 79);
			this->RS1_v2->Name = L"RS1_v2";
			this->RS1_v2->ReadOnly = true;
			this->RS1_v2->Size = System::Drawing::Size(46, 20);
			this->RS1_v2->TabIndex = 83;
			this->RS1_v2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(630, 79);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(46, 20);
			this->textBox15->TabIndex = 84;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1_tag
			// 
			this->RS1_tag->Location = System::Drawing::Point(702, 79);
			this->RS1_tag->Name = L"RS1_tag";
			this->RS1_tag->ReadOnly = true;
			this->RS1_tag->Size = System::Drawing::Size(46, 20);
			this->RS1_tag->TabIndex = 85;
			this->RS1_tag->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_op
			// 
			this->RS2_op->Location = System::Drawing::Point(303, 107);
			this->RS2_op->Name = L"RS2_op";
			this->RS2_op->ReadOnly = true;
			this->RS2_op->Size = System::Drawing::Size(46, 20);
			this->RS2_op->TabIndex = 86;
			this->RS2_op->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_t1
			// 
			this->RS2_t1->Location = System::Drawing::Point(374, 107);
			this->RS2_t1->Name = L"RS2_t1";
			this->RS2_t1->ReadOnly = true;
			this->RS2_t1->Size = System::Drawing::Size(46, 20);
			this->RS2_t1->TabIndex = 87;
			this->RS2_t1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_t2
			// 
			this->RS2_t2->Location = System::Drawing::Point(437, 107);
			this->RS2_t2->Name = L"RS2_t2";
			this->RS2_t2->ReadOnly = true;
			this->RS2_t2->Size = System::Drawing::Size(46, 20);
			this->RS2_t2->TabIndex = 88;
			this->RS2_t2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_v1
			// 
			this->RS2_v1->Location = System::Drawing::Point(499, 107);
			this->RS2_v1->Name = L"RS2_v1";
			this->RS2_v1->ReadOnly = true;
			this->RS2_v1->Size = System::Drawing::Size(46, 20);
			this->RS2_v1->TabIndex = 89;
			this->RS2_v1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_v2
			// 
			this->RS2_v2->Location = System::Drawing::Point(560, 107);
			this->RS2_v2->Name = L"RS2_v2";
			this->RS2_v2->ReadOnly = true;
			this->RS2_v2->Size = System::Drawing::Size(46, 20);
			this->RS2_v2->TabIndex = 90;
			this->RS2_v2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_busy
			// 
			this->RS2_busy->Location = System::Drawing::Point(630, 107);
			this->RS2_busy->Name = L"RS2_busy";
			this->RS2_busy->ReadOnly = true;
			this->RS2_busy->Size = System::Drawing::Size(46, 20);
			this->RS2_busy->TabIndex = 91;
			this->RS2_busy->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_tag
			// 
			this->RS2_tag->Location = System::Drawing::Point(702, 107);
			this->RS2_tag->Name = L"RS2_tag";
			this->RS2_tag->ReadOnly = true;
			this->RS2_tag->Size = System::Drawing::Size(46, 20);
			this->RS2_tag->TabIndex = 92;
			this->RS2_tag->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_op
			// 
			this->RS3_op->Location = System::Drawing::Point(303, 136);
			this->RS3_op->Name = L"RS3_op";
			this->RS3_op->ReadOnly = true;
			this->RS3_op->Size = System::Drawing::Size(46, 20);
			this->RS3_op->TabIndex = 93;
			this->RS3_op->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_t1
			// 
			this->RS3_t1->Location = System::Drawing::Point(374, 136);
			this->RS3_t1->Name = L"RS3_t1";
			this->RS3_t1->ReadOnly = true;
			this->RS3_t1->Size = System::Drawing::Size(46, 20);
			this->RS3_t1->TabIndex = 94;
			this->RS3_t1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_t2
			// 
			this->RS3_t2->Location = System::Drawing::Point(437, 136);
			this->RS3_t2->Name = L"RS3_t2";
			this->RS3_t2->ReadOnly = true;
			this->RS3_t2->Size = System::Drawing::Size(46, 20);
			this->RS3_t2->TabIndex = 95;
			this->RS3_t2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_v1
			// 
			this->RS3_v1->Location = System::Drawing::Point(499, 136);
			this->RS3_v1->Name = L"RS3_v1";
			this->RS3_v1->ReadOnly = true;
			this->RS3_v1->Size = System::Drawing::Size(46, 20);
			this->RS3_v1->TabIndex = 96;
			this->RS3_v1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_v2
			// 
			this->RS3_v2->Location = System::Drawing::Point(560, 136);
			this->RS3_v2->Name = L"RS3_v2";
			this->RS3_v2->ReadOnly = true;
			this->RS3_v2->Size = System::Drawing::Size(46, 20);
			this->RS3_v2->TabIndex = 97;
			this->RS3_v2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_busy
			// 
			this->RS3_busy->Location = System::Drawing::Point(630, 136);
			this->RS3_busy->Name = L"RS3_busy";
			this->RS3_busy->ReadOnly = true;
			this->RS3_busy->Size = System::Drawing::Size(46, 20);
			this->RS3_busy->TabIndex = 98;
			this->RS3_busy->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_tag
			// 
			this->RS3_tag->Location = System::Drawing::Point(702, 136);
			this->RS3_tag->Name = L"RS3_tag";
			this->RS3_tag->ReadOnly = true;
			this->RS3_tag->Size = System::Drawing::Size(46, 20);
			this->RS3_tag->TabIndex = 99;
			this->RS3_tag->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_op
			// 
			this->RS4_op->Location = System::Drawing::Point(303, 165);
			this->RS4_op->Name = L"RS4_op";
			this->RS4_op->ReadOnly = true;
			this->RS4_op->Size = System::Drawing::Size(46, 20);
			this->RS4_op->TabIndex = 100;
			this->RS4_op->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_t1
			// 
			this->RS4_t1->Location = System::Drawing::Point(374, 165);
			this->RS4_t1->Name = L"RS4_t1";
			this->RS4_t1->ReadOnly = true;
			this->RS4_t1->Size = System::Drawing::Size(46, 20);
			this->RS4_t1->TabIndex = 101;
			this->RS4_t1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_t2
			// 
			this->RS4_t2->Location = System::Drawing::Point(437, 165);
			this->RS4_t2->Name = L"RS4_t2";
			this->RS4_t2->ReadOnly = true;
			this->RS4_t2->Size = System::Drawing::Size(46, 20);
			this->RS4_t2->TabIndex = 102;
			this->RS4_t2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_v1
			// 
			this->RS4_v1->Location = System::Drawing::Point(499, 165);
			this->RS4_v1->Name = L"RS4_v1";
			this->RS4_v1->ReadOnly = true;
			this->RS4_v1->Size = System::Drawing::Size(46, 20);
			this->RS4_v1->TabIndex = 103;
			this->RS4_v1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_v2
			// 
			this->RS4_v2->Location = System::Drawing::Point(560, 165);
			this->RS4_v2->Name = L"RS4_v2";
			this->RS4_v2->ReadOnly = true;
			this->RS4_v2->Size = System::Drawing::Size(46, 20);
			this->RS4_v2->TabIndex = 104;
			this->RS4_v2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_busy
			// 
			this->RS4_busy->Location = System::Drawing::Point(630, 165);
			this->RS4_busy->Name = L"RS4_busy";
			this->RS4_busy->ReadOnly = true;
			this->RS4_busy->Size = System::Drawing::Size(46, 20);
			this->RS4_busy->TabIndex = 105;
			this->RS4_busy->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_tag
			// 
			this->RS4_tag->Location = System::Drawing::Point(702, 165);
			this->RS4_tag->Name = L"RS4_tag";
			this->RS4_tag->ReadOnly = true;
			this->RS4_tag->Size = System::Drawing::Size(46, 20);
			this->RS4_tag->TabIndex = 106;
			this->RS4_tag->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Current_clock_cycle
			// 
			this->Current_clock_cycle->AutoSize = true;
			this->Current_clock_cycle->Location = System::Drawing::Point(20, 569);
			this->Current_clock_cycle->Name = L"Current_clock_cycle";
			this->Current_clock_cycle->Size = System::Drawing::Size(100, 13);
			this->Current_clock_cycle->TabIndex = 108;
			this->Current_clock_cycle->Text = L"Current Clock Cycle";
			// 
			// current_clock
			// 
			this->current_clock->AcceptsReturn = true;
			this->current_clock->Location = System::Drawing::Point(126, 562);
			this->current_clock->Name = L"current_clock";
			this->current_clock->ReadOnly = true;
			this->current_clock->Size = System::Drawing::Size(46, 20);
			this->current_clock->TabIndex = 109;
			this->current_clock->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rob
			// 
			this->Rob->AutoSize = true;
			this->Rob->Location = System::Drawing::Point(262, 246);
			this->Rob->Name = L"Rob";
			this->Rob->Size = System::Drawing::Size(30, 13);
			this->Rob->TabIndex = 110;
			this->Rob->Text = L"Rob:";
			// 
			// Dest9
			// 
			this->Dest9->Location = System::Drawing::Point(219, 518);
			this->Dest9->Name = L"Dest9";
			this->Dest9->ReadOnly = true;
			this->Dest9->Size = System::Drawing::Size(33, 20);
			this->Dest9->TabIndex = 120;
			this->Dest9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest7
			// 
			this->Dest7->Location = System::Drawing::Point(219, 465);
			this->Dest7->Name = L"Dest7";
			this->Dest7->ReadOnly = true;
			this->Dest7->Size = System::Drawing::Size(33, 20);
			this->Dest7->TabIndex = 119;
			this->Dest7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest8
			// 
			this->Dest8->Location = System::Drawing::Point(219, 492);
			this->Dest8->Name = L"Dest8";
			this->Dest8->ReadOnly = true;
			this->Dest8->Size = System::Drawing::Size(33, 20);
			this->Dest8->TabIndex = 118;
			this->Dest8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest0
			// 
			this->Dest0->Location = System::Drawing::Point(219, 284);
			this->Dest0->Name = L"Dest0";
			this->Dest0->ReadOnly = true;
			this->Dest0->Size = System::Drawing::Size(33, 20);
			this->Dest0->TabIndex = 117;
			this->Dest0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest1
			// 
			this->Dest1->Location = System::Drawing::Point(219, 310);
			this->Dest1->Name = L"Dest1";
			this->Dest1->ReadOnly = true;
			this->Dest1->Size = System::Drawing::Size(33, 20);
			this->Dest1->TabIndex = 116;
			this->Dest1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest2
			// 
			this->Dest2->Location = System::Drawing::Point(219, 336);
			this->Dest2->Name = L"Dest2";
			this->Dest2->ReadOnly = true;
			this->Dest2->Size = System::Drawing::Size(33, 20);
			this->Dest2->TabIndex = 115;
			this->Dest2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest3
			// 
			this->Dest3->Location = System::Drawing::Point(219, 362);
			this->Dest3->Name = L"Dest3";
			this->Dest3->ReadOnly = true;
			this->Dest3->Size = System::Drawing::Size(33, 20);
			this->Dest3->TabIndex = 114;
			this->Dest3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest4
			// 
			this->Dest4->Location = System::Drawing::Point(219, 388);
			this->Dest4->Name = L"Dest4";
			this->Dest4->ReadOnly = true;
			this->Dest4->Size = System::Drawing::Size(33, 20);
			this->Dest4->TabIndex = 113;
			this->Dest4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest5
			// 
			this->Dest5->Location = System::Drawing::Point(219, 414);
			this->Dest5->Name = L"Dest5";
			this->Dest5->ReadOnly = true;
			this->Dest5->Size = System::Drawing::Size(33, 20);
			this->Dest5->TabIndex = 112;
			this->Dest5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest6
			// 
			this->Dest6->Location = System::Drawing::Point(219, 440);
			this->Dest6->Name = L"Dest6";
			this->Dest6->ReadOnly = true;
			this->Dest6->Size = System::Drawing::Size(33, 20);
			this->Dest6->TabIndex = 111;
			this->Dest6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rob9
			// 
			this->Rob9->AutoSize = true;
			this->Rob9->Location = System::Drawing::Point(180, 521);
			this->Rob9->Name = L"Rob9";
			this->Rob9->Size = System::Drawing::Size(33, 13);
			this->Rob9->TabIndex = 130;
			this->Rob9->Text = L"Rob9";
			// 
			// Rob8
			// 
			this->Rob8->AutoSize = true;
			this->Rob8->Location = System::Drawing::Point(180, 492);
			this->Rob8->Name = L"Rob8";
			this->Rob8->Size = System::Drawing::Size(33, 13);
			this->Rob8->TabIndex = 129;
			this->Rob8->Text = L"Rob8";
			// 
			// Rob7
			// 
			this->Rob7->AutoSize = true;
			this->Rob7->Location = System::Drawing::Point(180, 468);
			this->Rob7->Name = L"Rob7";
			this->Rob7->Size = System::Drawing::Size(33, 13);
			this->Rob7->TabIndex = 128;
			this->Rob7->Text = L"Rob7";
			// 
			// Rob6
			// 
			this->Rob6->AutoSize = true;
			this->Rob6->Location = System::Drawing::Point(180, 440);
			this->Rob6->Name = L"Rob6";
			this->Rob6->Size = System::Drawing::Size(33, 13);
			this->Rob6->TabIndex = 127;
			this->Rob6->Text = L"Rob6";
			// 
			// Rob5
			// 
			this->Rob5->AutoSize = true;
			this->Rob5->Location = System::Drawing::Point(180, 414);
			this->Rob5->Name = L"Rob5";
			this->Rob5->Size = System::Drawing::Size(33, 13);
			this->Rob5->TabIndex = 126;
			this->Rob5->Text = L"Rob5";
			// 
			// Rob4
			// 
			this->Rob4->AutoSize = true;
			this->Rob4->Location = System::Drawing::Point(180, 391);
			this->Rob4->Name = L"Rob4";
			this->Rob4->Size = System::Drawing::Size(33, 13);
			this->Rob4->TabIndex = 125;
			this->Rob4->Text = L"Rob4";
			// 
			// Rob3
			// 
			this->Rob3->AutoSize = true;
			this->Rob3->Location = System::Drawing::Point(180, 365);
			this->Rob3->Name = L"Rob3";
			this->Rob3->Size = System::Drawing::Size(33, 13);
			this->Rob3->TabIndex = 124;
			this->Rob3->Text = L"Rob3";
			// 
			// Rob2
			// 
			this->Rob2->AutoSize = true;
			this->Rob2->Location = System::Drawing::Point(180, 339);
			this->Rob2->Name = L"Rob2";
			this->Rob2->Size = System::Drawing::Size(33, 13);
			this->Rob2->TabIndex = 123;
			this->Rob2->Text = L"Rob2";
			// 
			// Rob1
			// 
			this->Rob1->AutoSize = true;
			this->Rob1->Location = System::Drawing::Point(180, 313);
			this->Rob1->Name = L"Rob1";
			this->Rob1->Size = System::Drawing::Size(33, 13);
			this->Rob1->TabIndex = 122;
			this->Rob1->Text = L"Rob1";
			// 
			// Rob0
			// 
			this->Rob0->AutoSize = true;
			this->Rob0->Location = System::Drawing::Point(180, 287);
			this->Rob0->Name = L"Rob0";
			this->Rob0->Size = System::Drawing::Size(33, 13);
			this->Rob0->TabIndex = 121;
			this->Rob0->Text = L"Rob0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(779, 194);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(122, 13);
			this->label20->TabIndex = 131;
			this->label20->Text = L"Computer Arch ECE 474";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(814, 207);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(58, 13);
			this->label21->TabIndex = 132;
			this->label21->Text = L"Taught by:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(770, 220);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(143, 13);
			this->label22->TabIndex = 133;
			this->label22->Text = L"Sudarshan Srinivasan, Ph.D.";
			// 
			// Val9
			// 
			this->Val9->Location = System::Drawing::Point(264, 518);
			this->Val9->Name = L"Val9";
			this->Val9->ReadOnly = true;
			this->Val9->Size = System::Drawing::Size(33, 20);
			this->Val9->TabIndex = 144;
			this->Val9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val7
			// 
			this->Val7->Location = System::Drawing::Point(264, 465);
			this->Val7->Name = L"Val7";
			this->Val7->ReadOnly = true;
			this->Val7->Size = System::Drawing::Size(33, 20);
			this->Val7->TabIndex = 143;
			this->Val7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val8
			// 
			this->Val8->Location = System::Drawing::Point(264, 492);
			this->Val8->Name = L"Val8";
			this->Val8->ReadOnly = true;
			this->Val8->Size = System::Drawing::Size(33, 20);
			this->Val8->TabIndex = 142;
			this->Val8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val0
			// 
			this->Val0->Location = System::Drawing::Point(264, 284);
			this->Val0->Name = L"Val0";
			this->Val0->ReadOnly = true;
			this->Val0->Size = System::Drawing::Size(33, 20);
			this->Val0->TabIndex = 141;
			this->Val0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val1
			// 
			this->Val1->Location = System::Drawing::Point(264, 310);
			this->Val1->Name = L"Val1";
			this->Val1->ReadOnly = true;
			this->Val1->Size = System::Drawing::Size(33, 20);
			this->Val1->TabIndex = 140;
			this->Val1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val2
			// 
			this->Val2->Location = System::Drawing::Point(264, 336);
			this->Val2->Name = L"Val2";
			this->Val2->ReadOnly = true;
			this->Val2->Size = System::Drawing::Size(33, 20);
			this->Val2->TabIndex = 139;
			this->Val2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val3
			// 
			this->Val3->Location = System::Drawing::Point(264, 362);
			this->Val3->Name = L"Val3";
			this->Val3->ReadOnly = true;
			this->Val3->Size = System::Drawing::Size(33, 20);
			this->Val3->TabIndex = 138;
			this->Val3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val4
			// 
			this->Val4->Location = System::Drawing::Point(264, 388);
			this->Val4->Name = L"Val4";
			this->Val4->ReadOnly = true;
			this->Val4->Size = System::Drawing::Size(33, 20);
			this->Val4->TabIndex = 137;
			this->Val4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val5
			// 
			this->Val5->Location = System::Drawing::Point(264, 414);
			this->Val5->Name = L"Val5";
			this->Val5->ReadOnly = true;
			this->Val5->Size = System::Drawing::Size(33, 20);
			this->Val5->TabIndex = 136;
			this->Val5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val6
			// 
			this->Val6->Location = System::Drawing::Point(264, 440);
			this->Val6->Name = L"Val6";
			this->Val6->ReadOnly = true;
			this->Val6->Size = System::Drawing::Size(33, 20);
			this->Val6->TabIndex = 135;
			this->Val6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done9
			// 
			this->Done9->Location = System::Drawing::Point(308, 518);
			this->Done9->Name = L"Done9";
			this->Done9->ReadOnly = true;
			this->Done9->Size = System::Drawing::Size(33, 20);
			this->Done9->TabIndex = 154;
			this->Done9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done7
			// 
			this->Done7->Location = System::Drawing::Point(308, 465);
			this->Done7->Name = L"Done7";
			this->Done7->ReadOnly = true;
			this->Done7->Size = System::Drawing::Size(33, 20);
			this->Done7->TabIndex = 153;
			this->Done7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done8
			// 
			this->Done8->Location = System::Drawing::Point(308, 492);
			this->Done8->Name = L"Done8";
			this->Done8->ReadOnly = true;
			this->Done8->Size = System::Drawing::Size(33, 20);
			this->Done8->TabIndex = 152;
			this->Done8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done0
			// 
			this->Done0->Location = System::Drawing::Point(308, 284);
			this->Done0->Name = L"Done0";
			this->Done0->ReadOnly = true;
			this->Done0->Size = System::Drawing::Size(33, 20);
			this->Done0->TabIndex = 151;
			this->Done0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done1
			// 
			this->Done1->Location = System::Drawing::Point(308, 310);
			this->Done1->Name = L"Done1";
			this->Done1->ReadOnly = true;
			this->Done1->Size = System::Drawing::Size(33, 20);
			this->Done1->TabIndex = 150;
			this->Done1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done2
			// 
			this->Done2->Location = System::Drawing::Point(308, 336);
			this->Done2->Name = L"Done2";
			this->Done2->ReadOnly = true;
			this->Done2->Size = System::Drawing::Size(33, 20);
			this->Done2->TabIndex = 149;
			this->Done2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done3
			// 
			this->Done3->Location = System::Drawing::Point(308, 362);
			this->Done3->Name = L"Done3";
			this->Done3->ReadOnly = true;
			this->Done3->Size = System::Drawing::Size(33, 20);
			this->Done3->TabIndex = 148;
			this->Done3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done4
			// 
			this->Done4->Location = System::Drawing::Point(308, 388);
			this->Done4->Name = L"Done4";
			this->Done4->ReadOnly = true;
			this->Done4->Size = System::Drawing::Size(33, 20);
			this->Done4->TabIndex = 147;
			this->Done4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done5
			// 
			this->Done5->Location = System::Drawing::Point(308, 414);
			this->Done5->Name = L"Done5";
			this->Done5->ReadOnly = true;
			this->Done5->Size = System::Drawing::Size(33, 20);
			this->Done5->TabIndex = 146;
			this->Done5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done6
			// 
			this->Done6->Location = System::Drawing::Point(308, 440);
			this->Done6->Name = L"Done6";
			this->Done6->ReadOnly = true;
			this->Done6->Size = System::Drawing::Size(33, 20);
			this->Done6->TabIndex = 145;
			this->Done6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(216, 262);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(29, 13);
			this->label24->TabIndex = 155;
			this->label24->Text = L"Dest";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(262, 262);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(22, 13);
			this->label25->TabIndex = 156;
			this->label25->Text = L"Val";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(305, 262);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(33, 13);
			this->label26->TabIndex = 157;
			this->label26->Text = L"Done";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(700, 468);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(229, 167);
			this->richTextBox1->TabIndex = 158;
			this->richTextBox1->Text = L"";
			// 
			// Output
			// 
			this->Output->AutoSize = true;
			this->Output->Location = System::Drawing::Point(697, 447);
			this->Output->Name = L"Output";
			this->Output->Size = System::Drawing::Size(42, 13);
			this->Output->TabIndex = 159;
			this->Output->Text = L"Output:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(941, 685);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->Done9);
			this->Controls->Add(this->Done7);
			this->Controls->Add(this->Done8);
			this->Controls->Add(this->Done0);
			this->Controls->Add(this->Done1);
			this->Controls->Add(this->Done2);
			this->Controls->Add(this->Done3);
			this->Controls->Add(this->Done4);
			this->Controls->Add(this->Done5);
			this->Controls->Add(this->Done6);
			this->Controls->Add(this->Val9);
			this->Controls->Add(this->Val7);
			this->Controls->Add(this->Val8);
			this->Controls->Add(this->Val0);
			this->Controls->Add(this->Val1);
			this->Controls->Add(this->Val2);
			this->Controls->Add(this->Val3);
			this->Controls->Add(this->Val4);
			this->Controls->Add(this->Val5);
			this->Controls->Add(this->Val6);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->Rob9);
			this->Controls->Add(this->Rob8);
			this->Controls->Add(this->Rob7);
			this->Controls->Add(this->Rob6);
			this->Controls->Add(this->Rob5);
			this->Controls->Add(this->Rob4);
			this->Controls->Add(this->Rob3);
			this->Controls->Add(this->Rob2);
			this->Controls->Add(this->Rob1);
			this->Controls->Add(this->Rob0);
			this->Controls->Add(this->Dest9);
			this->Controls->Add(this->Dest7);
			this->Controls->Add(this->Dest8);
			this->Controls->Add(this->Dest0);
			this->Controls->Add(this->Dest1);
			this->Controls->Add(this->Dest2);
			this->Controls->Add(this->Dest3);
			this->Controls->Add(this->Dest4);
			this->Controls->Add(this->Dest5);
			this->Controls->Add(this->Dest6);
			this->Controls->Add(this->Rob);
			this->Controls->Add(this->current_clock);
			this->Controls->Add(this->Current_clock_cycle);
			this->Controls->Add(this->RS4_tag);
			this->Controls->Add(this->RS4_busy);
			this->Controls->Add(this->RS4_v2);
			this->Controls->Add(this->RS4_v1);
			this->Controls->Add(this->RS4_t2);
			this->Controls->Add(this->RS4_t1);
			this->Controls->Add(this->RS4_op);
			this->Controls->Add(this->RS3_tag);
			this->Controls->Add(this->RS3_busy);
			this->Controls->Add(this->RS3_v2);
			this->Controls->Add(this->RS3_v1);
			this->Controls->Add(this->RS3_t2);
			this->Controls->Add(this->RS3_t1);
			this->Controls->Add(this->RS3_op);
			this->Controls->Add(this->RS2_tag);
			this->Controls->Add(this->RS2_busy);
			this->Controls->Add(this->RS2_v2);
			this->Controls->Add(this->RS2_v1);
			this->Controls->Add(this->RS2_t2);
			this->Controls->Add(this->RS2_t1);
			this->Controls->Add(this->RS2_op);
			this->Controls->Add(this->RS1_tag);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->RS1_v2);
			this->Controls->Add(this->RS1_V1);
			this->Controls->Add(this->RS1_t2);
			this->Controls->Add(this->RS1_t1);
			this->Controls->Add(this->RS1_op);
			this->Controls->Add(this->Dest_tag);
			this->Controls->Add(this->Busy);
			this->Controls->Add(this->V2);
			this->Controls->Add(this->Value_1);
			this->Controls->Add(this->Temp_2);
			this->Controls->Add(this->Temp1);
			this->Controls->Add(this->Op_code);
			this->Controls->Add(this->RS4);
			this->Controls->Add(this->RS3);
			this->Controls->Add(this->RS2);
			this->Controls->Add(this->RS1);
			this->Controls->Add(this->Rat_r9);
			this->Controls->Add(this->Rat_r7);
			this->Controls->Add(this->Rat_r8);
			this->Controls->Add(this->Rat_r0);
			this->Controls->Add(this->Rat_r1);
			this->Controls->Add(this->Rat_r2);
			this->Controls->Add(this->Rat_r3);
			this->Controls->Add(this->Rat_r4);
			this->Controls->Add(this->Rat_r5);
			this->Controls->Add(this->Rat_r6);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->RF_r9);
			this->Controls->Add(this->RF_r7);
			this->Controls->Add(this->RF_r8);
			this->Controls->Add(this->RF_r0);
			this->Controls->Add(this->RF_r1);
			this->Controls->Add(this->RF_r2);
			this->Controls->Add(this->RF_r3);
			this->Controls->Add(this->RF_r4);
			this->Controls->Add(this->RF_r5);
			this->Controls->Add(this->RF_r6);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->RegF0);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->QuickAddBtn);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->reg3UD);
			this->Controls->Add(this->reg2UD);
			this->Controls->Add(this->reg1UD);
			this->Controls->Add(this->InstBox);
			this->Controls->Add(this->InstBank);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->AddInstBtn);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Tomasulos Algorithm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg1UD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg2UD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg3UD))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	

	int index = this->InstBox->SelectedIndex;
	std::string instNameList[] = { "ADD", "SUB", "MUL", "DIV" };
	if (index != -1) {
		this->instList->push_back(instObj(instNameList[index], (int)this->reg1UD->Value, (int)this->reg2UD->Value, (int)this->reg3UD->Value));
		int end = instList->size() - 1;
		this->InstBank->Text += gcnew String(instList->at(end).print().c_str()) + "\n";
	}



}

private: System::Void QuickAddBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	this->instList->push_back(instObj("ADD", 1, 2, 3));
	this->instList->push_back(instObj("SUB", 4, 5, 6));
	this->instList->push_back(instObj("DIV", 3, 4, 5));
	this->instList->push_back(instObj("MUL", 2, 2, 3));
	this->instList->push_back(instObj("ADD", 8, 9, 4));
	this->instList->push_back(instObj("ADD", 4, 5, 6));
	this->instList->push_back(instObj("SUB", 3, 2, 3));
	int end = instList->size();

	for (int i = end - 7; i < end; i++) {
		this->InstBank->Text += gcnew String(instList->at(i).print().c_str()) + "\n";
	}

}


private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Check if instr can be loaded
	this->updateClockCycle();
		
	if (this->instList->size() != 0) {
		int end = instList->size();
		instObj curObj = this->instList->at(0);
		this->instList->erase(instList->begin());
		this->updateInstBank();
		
		
		if (curObj.inst.compare("ADD") == 0 || curObj.inst.compare("SUB") == 0) {
			if ( this->addUnit->size() < MAX_ADD_UNIT ) {
				this->addUnit->push_back(curObj);
			}
			else {
				this->instList->insert(instList->begin(), curObj);
				this->updateInstBank();
			}

		}
		else {
			if (this->mulUnit->size() < MAX_MUL_UNIT) {
				this->mulUnit->push_back(curObj);
			}
			else {
				this->instList->insert(instList->begin(), curObj);
				this->updateInstBank();
			}

		}

		//std::cout << curObj.inst;
	}

}

private: System::Void updateClockCycle() {
	curClockCycle = curClockCycle + 1;
}


private: System::Void updateInstBank() {
	this->InstBank->Clear();
	int end = instList->size();
	for (int i = 0; i < end; i++) {
		this->InstBank->Text += gcnew String(instList->at(i).print().c_str()) + "\n";
	}
}


};
}
