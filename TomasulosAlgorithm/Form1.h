#pragma once
#include <time.h>
#include <iostream>
#include "InstObj.cpp"
#include <vector>
#include <string>
#include <array>
#include <algorithm>
#include <windows.h>
#include <fstream>
#include <windows.h>
#include "AboutPopUp1.h"







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
		std::vector<instObj>* robVals = new std::vector<instObj>;
		int curROB = 0;
		// Initiate broadcast
		std::vector<instObj>* broadCastQ = new std::vector<instObj>;;

		int MAX_ADD_UNIT = 3;
		std::vector<instObj>* addUnit = new std::vector<instObj>;
		int MAX_MUL_UNIT = 2;
		std::vector<instObj>* mulUnit = new std::vector<instObj>;

		int curClockCycle = 0;
		std::vector<int>* regFilesA = new std::vector<int>;
		std::vector<int>* writeBackLines = new std::vector<int>;
		std::vector<int>* robsInUse = new std::vector<int>;
		std::vector<instObj>* writeQueue = new std::vector<instObj>;
		int curRob = -1;
		int curEatAdd = 0;
		int curEatMul = 0;
		int curID = -1;
		int lastID = 0;
		int cyclesOfSimulation = -1;
	
	public:



	public:

		bool isRunning = false;



		Form1(void)
		{
			
			InitializeComponent();
			InstBox->Items->Add("ADD");
			InstBox->Items->Add("SUB");
			InstBox->Items->Add("MUL");
			InstBox->Items->Add("DIV");
			
			RegF0->Text = "0";
			RegF1->Text = "1";
			RegF2->Text = "2";
			RegF3->Text = "3";
			RegF4->Text = "4";
			RegF5->Text = "5";
			RegF6->Text = "6";
			RegF7->Text = "7";
			RegF8->Text = "8";
			RegF9->Text = "9";
			Rat_r0->Text = "R0";
			Rat_r1->Text = "R1";
			Rat_r2->Text = "R2";
			Rat_r3->Text = "R3";
			Rat_r4->Text = "R4";
			Rat_r5->Text = "R5";
			Rat_r6->Text = "R6";
			Rat_r7->Text = "R7";
			Rat_r8->Text = "R8";
			Rat_r9->Text = "R9";
			for (int i = 0; i < 10; i++) {
				this->regFilesA->push_back(i);
				this->writeBackLines->push_back(i);
			}
			for (int i = 0; i < 10; i++) {
				this->robsInUse->push_back(-1);
			}
			current_clock->Text = "0";
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






	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ FilePickerBtn;

	private: System::Windows::Forms::Button^ aboutBtn;


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
	private: System::Windows::Forms::TextBox^ RegF1;
	private: System::Windows::Forms::TextBox^ RegF2;
	private: System::Windows::Forms::TextBox^ RegF3;
	private: System::Windows::Forms::TextBox^ RegF4;
	private: System::Windows::Forms::TextBox^ RegF5;
	private: System::Windows::Forms::TextBox^ RegF6;
	private: System::Windows::Forms::TextBox^ RegF7;
	private: System::Windows::Forms::TextBox^ RegF8;
private: System::Windows::Forms::TextBox^ RegF9;







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
private: System::Windows::Forms::TextBox^ RS1_v1;

	private: System::Windows::Forms::TextBox^ RS1_v2;
private: System::Windows::Forms::TextBox^ RS1_busy;

	private: System::Windows::Forms::TextBox^ RS0_tag;
	public:

	private: System::Windows::Forms::TextBox^ RS0_busy;

	public:

	private: System::Windows::Forms::TextBox^ RS0_v2;
	private: System::Windows::Forms::TextBox^ RS0_v1;
	private: System::Windows::Forms::TextBox^ RS0_t2;
	private: System::Windows::Forms::TextBox^ RS0_t1;
	private: System::Windows::Forms::TextBox^ RS0_op;
	private: System::Windows::Forms::Label^ label23;

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
			this->RegF1 = (gcnew System::Windows::Forms::TextBox());
			this->RegF2 = (gcnew System::Windows::Forms::TextBox());
			this->RegF3 = (gcnew System::Windows::Forms::TextBox());
			this->RegF4 = (gcnew System::Windows::Forms::TextBox());
			this->RegF5 = (gcnew System::Windows::Forms::TextBox());
			this->RegF6 = (gcnew System::Windows::Forms::TextBox());
			this->RegF7 = (gcnew System::Windows::Forms::TextBox());
			this->RegF8 = (gcnew System::Windows::Forms::TextBox());
			this->RegF9 = (gcnew System::Windows::Forms::TextBox());
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
			this->RS1_v1 = (gcnew System::Windows::Forms::TextBox());
			this->RS1_v2 = (gcnew System::Windows::Forms::TextBox());
			this->RS1_busy = (gcnew System::Windows::Forms::TextBox());
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
			this->RS0_tag = (gcnew System::Windows::Forms::TextBox());
			this->RS0_busy = (gcnew System::Windows::Forms::TextBox());
			this->RS0_v2 = (gcnew System::Windows::Forms::TextBox());
			this->RS0_v1 = (gcnew System::Windows::Forms::TextBox());
			this->RS0_t2 = (gcnew System::Windows::Forms::TextBox());
			this->RS0_t1 = (gcnew System::Windows::Forms::TextBox());
			this->RS0_op = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->FilePickerBtn = (gcnew System::Windows::Forms::Button());
			this->aboutBtn = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg1UD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg2UD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg3UD))->BeginInit();
			this->SuspendLayout();
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
			this->label9->Location = System::Drawing::Point(56, 253);
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
			this->AddInstBtn->Location = System::Drawing::Point(20, 227);
			this->AddInstBtn->Name = L"AddInstBtn";
			this->AddInstBtn->Size = System::Drawing::Size(75, 23);
			this->AddInstBtn->TabIndex = 14;
			this->AddInstBtn->Text = L"Add Inst";
			this->AddInstBtn->UseVisualStyleBackColor = true;
			this->AddInstBtn->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(350, 529);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Run";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(442, 528);
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
			this->QuickAddBtn->Location = System::Drawing::Point(106, 227);
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
			this->label1->Location = System::Drawing::Point(9, 300);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 26;
			this->label1->Text = L"R0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 326);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"R1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 352);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"R2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 378);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"R3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 404);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 30;
			this->label5->Text = L"R4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 427);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 31;
			this->label6->Text = L"R5";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 453);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 32;
			this->label7->Text = L"R6";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(9, 481);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(21, 13);
			this->label15->TabIndex = 33;
			this->label15->Text = L"R7";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(9, 505);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(21, 13);
			this->label16->TabIndex = 34;
			this->label16->Text = L"R8";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(9, 534);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(21, 13);
			this->label17->TabIndex = 35;
			this->label17->Text = L"R9";
			// 
			// RegF0
			// 
			this->RegF0->Location = System::Drawing::Point(36, 297);
			this->RegF0->Name = L"RegF0";
			this->RegF0->ReadOnly = true;
			this->RegF0->Size = System::Drawing::Size(41, 20);
			this->RegF0->TabIndex = 36;
			this->RegF0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RegF1
			// 
			this->RegF1->Location = System::Drawing::Point(36, 323);
			this->RegF1->Name = L"RegF1";
			this->RegF1->ReadOnly = true;
			this->RegF1->Size = System::Drawing::Size(41, 20);
			this->RegF1->TabIndex = 37;
			this->RegF1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RegF2
			// 
			this->RegF2->Location = System::Drawing::Point(36, 349);
			this->RegF2->Name = L"RegF2";
			this->RegF2->ReadOnly = true;
			this->RegF2->Size = System::Drawing::Size(41, 20);
			this->RegF2->TabIndex = 38;
			this->RegF2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RegF3
			// 
			this->RegF3->Location = System::Drawing::Point(36, 375);
			this->RegF3->Name = L"RegF3";
			this->RegF3->ReadOnly = true;
			this->RegF3->Size = System::Drawing::Size(41, 20);
			this->RegF3->TabIndex = 39;
			this->RegF3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RegF4
			// 
			this->RegF4->Location = System::Drawing::Point(36, 401);
			this->RegF4->Name = L"RegF4";
			this->RegF4->ReadOnly = true;
			this->RegF4->Size = System::Drawing::Size(41, 20);
			this->RegF4->TabIndex = 40;
			this->RegF4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RegF5
			// 
			this->RegF5->Location = System::Drawing::Point(36, 427);
			this->RegF5->Name = L"RegF5";
			this->RegF5->ReadOnly = true;
			this->RegF5->Size = System::Drawing::Size(41, 20);
			this->RegF5->TabIndex = 41;
			this->RegF5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RegF6
			// 
			this->RegF6->Location = System::Drawing::Point(36, 453);
			this->RegF6->Name = L"RegF6";
			this->RegF6->ReadOnly = true;
			this->RegF6->Size = System::Drawing::Size(41, 20);
			this->RegF6->TabIndex = 42;
			this->RegF6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RegF7
			// 
			this->RegF7->Location = System::Drawing::Point(36, 479);
			this->RegF7->Name = L"RegF7";
			this->RegF7->ReadOnly = true;
			this->RegF7->Size = System::Drawing::Size(41, 20);
			this->RegF7->TabIndex = 43;
			this->RegF7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RegF8
			// 
			this->RegF8->Location = System::Drawing::Point(36, 505);
			this->RegF8->Name = L"RegF8";
			this->RegF8->ReadOnly = true;
			this->RegF8->Size = System::Drawing::Size(41, 20);
			this->RegF8->TabIndex = 44;
			this->RegF8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RegF9
			// 
			this->RegF9->Location = System::Drawing::Point(36, 531);
			this->RegF9->Name = L"RegF9";
			this->RegF9->ReadOnly = true;
			this->RegF9->Size = System::Drawing::Size(41, 20);
			this->RegF9->TabIndex = 45;
			this->RegF9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(84, 275);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(32, 13);
			this->label19->TabIndex = 57;
			this->label19->Text = L"RAT:";
			// 
			// Rat_r9
			// 
			this->Rat_r9->Location = System::Drawing::Point(87, 531);
			this->Rat_r9->Name = L"Rat_r9";
			this->Rat_r9->ReadOnly = true;
			this->Rat_r9->Size = System::Drawing::Size(44, 20);
			this->Rat_r9->TabIndex = 67;
			this->Rat_r9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r7
			// 
			this->Rat_r7->Location = System::Drawing::Point(87, 478);
			this->Rat_r7->Name = L"Rat_r7";
			this->Rat_r7->ReadOnly = true;
			this->Rat_r7->Size = System::Drawing::Size(44, 20);
			this->Rat_r7->TabIndex = 66;
			this->Rat_r7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r8
			// 
			this->Rat_r8->Location = System::Drawing::Point(87, 505);
			this->Rat_r8->Name = L"Rat_r8";
			this->Rat_r8->ReadOnly = true;
			this->Rat_r8->Size = System::Drawing::Size(44, 20);
			this->Rat_r8->TabIndex = 65;
			this->Rat_r8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r0
			// 
			this->Rat_r0->Location = System::Drawing::Point(87, 297);
			this->Rat_r0->Name = L"Rat_r0";
			this->Rat_r0->ReadOnly = true;
			this->Rat_r0->Size = System::Drawing::Size(44, 20);
			this->Rat_r0->TabIndex = 64;
			this->Rat_r0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r1
			// 
			this->Rat_r1->Location = System::Drawing::Point(87, 323);
			this->Rat_r1->Name = L"Rat_r1";
			this->Rat_r1->ReadOnly = true;
			this->Rat_r1->Size = System::Drawing::Size(44, 20);
			this->Rat_r1->TabIndex = 63;
			this->Rat_r1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r2
			// 
			this->Rat_r2->Location = System::Drawing::Point(87, 349);
			this->Rat_r2->Name = L"Rat_r2";
			this->Rat_r2->ReadOnly = true;
			this->Rat_r2->Size = System::Drawing::Size(44, 20);
			this->Rat_r2->TabIndex = 62;
			this->Rat_r2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r3
			// 
			this->Rat_r3->Location = System::Drawing::Point(87, 375);
			this->Rat_r3->Name = L"Rat_r3";
			this->Rat_r3->ReadOnly = true;
			this->Rat_r3->Size = System::Drawing::Size(44, 20);
			this->Rat_r3->TabIndex = 61;
			this->Rat_r3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r4
			// 
			this->Rat_r4->Location = System::Drawing::Point(87, 401);
			this->Rat_r4->Name = L"Rat_r4";
			this->Rat_r4->ReadOnly = true;
			this->Rat_r4->Size = System::Drawing::Size(44, 20);
			this->Rat_r4->TabIndex = 60;
			this->Rat_r4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r5
			// 
			this->Rat_r5->Location = System::Drawing::Point(87, 427);
			this->Rat_r5->Name = L"Rat_r5";
			this->Rat_r5->ReadOnly = true;
			this->Rat_r5->Size = System::Drawing::Size(44, 20);
			this->Rat_r5->TabIndex = 59;
			this->Rat_r5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rat_r6
			// 
			this->Rat_r6->Location = System::Drawing::Point(87, 453);
			this->Rat_r6->Name = L"Rat_r6";
			this->Rat_r6->ReadOnly = true;
			this->Rat_r6->Size = System::Drawing::Size(44, 20);
			this->Rat_r6->TabIndex = 58;
			this->Rat_r6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1
			// 
			this->RS1->AutoSize = true;
			this->RS1->Location = System::Drawing::Point(274, 110);
			this->RS1->Name = L"RS1";
			this->RS1->Size = System::Drawing::Size(28, 13);
			this->RS1->TabIndex = 68;
			this->RS1->Text = L"RS1";
			// 
			// RS2
			// 
			this->RS2->AutoSize = true;
			this->RS2->Location = System::Drawing::Point(274, 138);
			this->RS2->Name = L"RS2";
			this->RS2->Size = System::Drawing::Size(28, 13);
			this->RS2->TabIndex = 69;
			this->RS2->Text = L"RS2";
			// 
			// RS3
			// 
			this->RS3->AutoSize = true;
			this->RS3->Location = System::Drawing::Point(274, 167);
			this->RS3->Name = L"RS3";
			this->RS3->Size = System::Drawing::Size(28, 13);
			this->RS3->TabIndex = 70;
			this->RS3->Text = L"RS3";
			// 
			// RS4
			// 
			this->RS4->AutoSize = true;
			this->RS4->Location = System::Drawing::Point(274, 196);
			this->RS4->Name = L"RS4";
			this->RS4->Size = System::Drawing::Size(28, 13);
			this->RS4->TabIndex = 71;
			this->RS4->Text = L"RS4";
			// 
			// Op_code
			// 
			this->Op_code->AutoSize = true;
			this->Op_code->Location = System::Drawing::Point(305, 57);
			this->Op_code->Name = L"Op_code";
			this->Op_code->Size = System::Drawing::Size(22, 13);
			this->Op_code->TabIndex = 72;
			this->Op_code->Text = L"OP";
			// 
			// Temp1
			// 
			this->Temp1->AutoSize = true;
			this->Temp1->Location = System::Drawing::Point(376, 57);
			this->Temp1->Name = L"Temp1";
			this->Temp1->Size = System::Drawing::Size(20, 13);
			this->Temp1->TabIndex = 73;
			this->Temp1->Text = L"T1";
			// 
			// Temp_2
			// 
			this->Temp_2->AutoSize = true;
			this->Temp_2->Location = System::Drawing::Point(439, 57);
			this->Temp_2->Name = L"Temp_2";
			this->Temp_2->Size = System::Drawing::Size(20, 13);
			this->Temp_2->TabIndex = 74;
			this->Temp_2->Text = L"T2";
			// 
			// Value_1
			// 
			this->Value_1->AutoSize = true;
			this->Value_1->Location = System::Drawing::Point(501, 57);
			this->Value_1->Name = L"Value_1";
			this->Value_1->Size = System::Drawing::Size(20, 13);
			this->Value_1->TabIndex = 75;
			this->Value_1->Text = L"V1";
			// 
			// V2
			// 
			this->V2->AutoSize = true;
			this->V2->Location = System::Drawing::Point(562, 57);
			this->V2->Name = L"V2";
			this->V2->Size = System::Drawing::Size(20, 13);
			this->V2->TabIndex = 76;
			this->V2->Text = L"V2";
			// 
			// Busy
			// 
			this->Busy->AutoSize = true;
			this->Busy->Location = System::Drawing::Point(632, 57);
			this->Busy->Name = L"Busy";
			this->Busy->Size = System::Drawing::Size(30, 13);
			this->Busy->TabIndex = 77;
			this->Busy->Text = L"Busy";
			// 
			// Dest_tag
			// 
			this->Dest_tag->AutoSize = true;
			this->Dest_tag->Location = System::Drawing::Point(704, 57);
			this->Dest_tag->Name = L"Dest_tag";
			this->Dest_tag->Size = System::Drawing::Size(26, 13);
			this->Dest_tag->TabIndex = 78;
			this->Dest_tag->Text = L"Tag";
			// 
			// RS1_op
			// 
			this->RS1_op->Location = System::Drawing::Point(308, 103);
			this->RS1_op->Name = L"RS1_op";
			this->RS1_op->ReadOnly = true;
			this->RS1_op->Size = System::Drawing::Size(46, 20);
			this->RS1_op->TabIndex = 79;
			this->RS1_op->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1_t1
			// 
			this->RS1_t1->Location = System::Drawing::Point(379, 103);
			this->RS1_t1->Name = L"RS1_t1";
			this->RS1_t1->ReadOnly = true;
			this->RS1_t1->Size = System::Drawing::Size(46, 20);
			this->RS1_t1->TabIndex = 80;
			this->RS1_t1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1_t2
			// 
			this->RS1_t2->Location = System::Drawing::Point(442, 103);
			this->RS1_t2->Name = L"RS1_t2";
			this->RS1_t2->ReadOnly = true;
			this->RS1_t2->Size = System::Drawing::Size(46, 20);
			this->RS1_t2->TabIndex = 81;
			this->RS1_t2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1_v1
			// 
			this->RS1_v1->Location = System::Drawing::Point(504, 103);
			this->RS1_v1->Name = L"RS1_v1";
			this->RS1_v1->ReadOnly = true;
			this->RS1_v1->Size = System::Drawing::Size(46, 20);
			this->RS1_v1->TabIndex = 82;
			this->RS1_v1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1_v2
			// 
			this->RS1_v2->Location = System::Drawing::Point(565, 103);
			this->RS1_v2->Name = L"RS1_v2";
			this->RS1_v2->ReadOnly = true;
			this->RS1_v2->Size = System::Drawing::Size(46, 20);
			this->RS1_v2->TabIndex = 83;
			this->RS1_v2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1_busy
			// 
			this->RS1_busy->Location = System::Drawing::Point(635, 103);
			this->RS1_busy->Name = L"RS1_busy";
			this->RS1_busy->ReadOnly = true;
			this->RS1_busy->Size = System::Drawing::Size(46, 20);
			this->RS1_busy->TabIndex = 84;
			this->RS1_busy->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS1_tag
			// 
			this->RS1_tag->Location = System::Drawing::Point(707, 103);
			this->RS1_tag->Name = L"RS1_tag";
			this->RS1_tag->ReadOnly = true;
			this->RS1_tag->Size = System::Drawing::Size(46, 20);
			this->RS1_tag->TabIndex = 85;
			this->RS1_tag->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_op
			// 
			this->RS2_op->Location = System::Drawing::Point(308, 131);
			this->RS2_op->Name = L"RS2_op";
			this->RS2_op->ReadOnly = true;
			this->RS2_op->Size = System::Drawing::Size(46, 20);
			this->RS2_op->TabIndex = 86;
			this->RS2_op->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_t1
			// 
			this->RS2_t1->Location = System::Drawing::Point(379, 131);
			this->RS2_t1->Name = L"RS2_t1";
			this->RS2_t1->ReadOnly = true;
			this->RS2_t1->Size = System::Drawing::Size(46, 20);
			this->RS2_t1->TabIndex = 87;
			this->RS2_t1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_t2
			// 
			this->RS2_t2->Location = System::Drawing::Point(442, 131);
			this->RS2_t2->Name = L"RS2_t2";
			this->RS2_t2->ReadOnly = true;
			this->RS2_t2->Size = System::Drawing::Size(46, 20);
			this->RS2_t2->TabIndex = 88;
			this->RS2_t2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_v1
			// 
			this->RS2_v1->Location = System::Drawing::Point(504, 131);
			this->RS2_v1->Name = L"RS2_v1";
			this->RS2_v1->ReadOnly = true;
			this->RS2_v1->Size = System::Drawing::Size(46, 20);
			this->RS2_v1->TabIndex = 89;
			this->RS2_v1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_v2
			// 
			this->RS2_v2->Location = System::Drawing::Point(565, 131);
			this->RS2_v2->Name = L"RS2_v2";
			this->RS2_v2->ReadOnly = true;
			this->RS2_v2->Size = System::Drawing::Size(46, 20);
			this->RS2_v2->TabIndex = 90;
			this->RS2_v2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_busy
			// 
			this->RS2_busy->Location = System::Drawing::Point(635, 131);
			this->RS2_busy->Name = L"RS2_busy";
			this->RS2_busy->ReadOnly = true;
			this->RS2_busy->Size = System::Drawing::Size(46, 20);
			this->RS2_busy->TabIndex = 91;
			this->RS2_busy->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS2_tag
			// 
			this->RS2_tag->Location = System::Drawing::Point(707, 131);
			this->RS2_tag->Name = L"RS2_tag";
			this->RS2_tag->ReadOnly = true;
			this->RS2_tag->Size = System::Drawing::Size(46, 20);
			this->RS2_tag->TabIndex = 92;
			this->RS2_tag->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_op
			// 
			this->RS3_op->Location = System::Drawing::Point(308, 160);
			this->RS3_op->Name = L"RS3_op";
			this->RS3_op->ReadOnly = true;
			this->RS3_op->Size = System::Drawing::Size(46, 20);
			this->RS3_op->TabIndex = 93;
			this->RS3_op->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_t1
			// 
			this->RS3_t1->Location = System::Drawing::Point(379, 160);
			this->RS3_t1->Name = L"RS3_t1";
			this->RS3_t1->ReadOnly = true;
			this->RS3_t1->Size = System::Drawing::Size(46, 20);
			this->RS3_t1->TabIndex = 94;
			this->RS3_t1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_t2
			// 
			this->RS3_t2->Location = System::Drawing::Point(442, 160);
			this->RS3_t2->Name = L"RS3_t2";
			this->RS3_t2->ReadOnly = true;
			this->RS3_t2->Size = System::Drawing::Size(46, 20);
			this->RS3_t2->TabIndex = 95;
			this->RS3_t2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_v1
			// 
			this->RS3_v1->Location = System::Drawing::Point(504, 160);
			this->RS3_v1->Name = L"RS3_v1";
			this->RS3_v1->ReadOnly = true;
			this->RS3_v1->Size = System::Drawing::Size(46, 20);
			this->RS3_v1->TabIndex = 96;
			this->RS3_v1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_v2
			// 
			this->RS3_v2->Location = System::Drawing::Point(565, 160);
			this->RS3_v2->Name = L"RS3_v2";
			this->RS3_v2->ReadOnly = true;
			this->RS3_v2->Size = System::Drawing::Size(46, 20);
			this->RS3_v2->TabIndex = 97;
			this->RS3_v2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_busy
			// 
			this->RS3_busy->Location = System::Drawing::Point(635, 160);
			this->RS3_busy->Name = L"RS3_busy";
			this->RS3_busy->ReadOnly = true;
			this->RS3_busy->Size = System::Drawing::Size(46, 20);
			this->RS3_busy->TabIndex = 98;
			this->RS3_busy->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS3_tag
			// 
			this->RS3_tag->Location = System::Drawing::Point(707, 160);
			this->RS3_tag->Name = L"RS3_tag";
			this->RS3_tag->ReadOnly = true;
			this->RS3_tag->Size = System::Drawing::Size(46, 20);
			this->RS3_tag->TabIndex = 99;
			this->RS3_tag->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_op
			// 
			this->RS4_op->Location = System::Drawing::Point(308, 189);
			this->RS4_op->Name = L"RS4_op";
			this->RS4_op->ReadOnly = true;
			this->RS4_op->Size = System::Drawing::Size(46, 20);
			this->RS4_op->TabIndex = 100;
			this->RS4_op->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_t1
			// 
			this->RS4_t1->Location = System::Drawing::Point(379, 189);
			this->RS4_t1->Name = L"RS4_t1";
			this->RS4_t1->ReadOnly = true;
			this->RS4_t1->Size = System::Drawing::Size(46, 20);
			this->RS4_t1->TabIndex = 101;
			this->RS4_t1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_t2
			// 
			this->RS4_t2->Location = System::Drawing::Point(442, 189);
			this->RS4_t2->Name = L"RS4_t2";
			this->RS4_t2->ReadOnly = true;
			this->RS4_t2->Size = System::Drawing::Size(46, 20);
			this->RS4_t2->TabIndex = 102;
			this->RS4_t2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_v1
			// 
			this->RS4_v1->Location = System::Drawing::Point(504, 189);
			this->RS4_v1->Name = L"RS4_v1";
			this->RS4_v1->ReadOnly = true;
			this->RS4_v1->Size = System::Drawing::Size(46, 20);
			this->RS4_v1->TabIndex = 103;
			this->RS4_v1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_v2
			// 
			this->RS4_v2->Location = System::Drawing::Point(565, 189);
			this->RS4_v2->Name = L"RS4_v2";
			this->RS4_v2->ReadOnly = true;
			this->RS4_v2->Size = System::Drawing::Size(46, 20);
			this->RS4_v2->TabIndex = 104;
			this->RS4_v2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_busy
			// 
			this->RS4_busy->Location = System::Drawing::Point(635, 189);
			this->RS4_busy->Name = L"RS4_busy";
			this->RS4_busy->ReadOnly = true;
			this->RS4_busy->Size = System::Drawing::Size(46, 20);
			this->RS4_busy->TabIndex = 105;
			this->RS4_busy->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS4_tag
			// 
			this->RS4_tag->Location = System::Drawing::Point(707, 189);
			this->RS4_tag->Name = L"RS4_tag";
			this->RS4_tag->ReadOnly = true;
			this->RS4_tag->Size = System::Drawing::Size(46, 20);
			this->RS4_tag->TabIndex = 106;
			this->RS4_tag->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Current_clock_cycle
			// 
			this->Current_clock_cycle->AutoSize = true;
			this->Current_clock_cycle->Location = System::Drawing::Point(353, 482);
			this->Current_clock_cycle->Name = L"Current_clock_cycle";
			this->Current_clock_cycle->Size = System::Drawing::Size(100, 13);
			this->Current_clock_cycle->TabIndex = 108;
			this->Current_clock_cycle->Text = L"Current Clock Cycle";
			// 
			// current_clock
			// 
			this->current_clock->AcceptsReturn = true;
			this->current_clock->Location = System::Drawing::Point(459, 475);
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
			this->Dest9->Location = System::Drawing::Point(216, 531);
			this->Dest9->Name = L"Dest9";
			this->Dest9->ReadOnly = true;
			this->Dest9->Size = System::Drawing::Size(33, 20);
			this->Dest9->TabIndex = 120;
			this->Dest9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest7
			// 
			this->Dest7->Location = System::Drawing::Point(216, 478);
			this->Dest7->Name = L"Dest7";
			this->Dest7->ReadOnly = true;
			this->Dest7->Size = System::Drawing::Size(33, 20);
			this->Dest7->TabIndex = 119;
			this->Dest7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest8
			// 
			this->Dest8->Location = System::Drawing::Point(216, 505);
			this->Dest8->Name = L"Dest8";
			this->Dest8->ReadOnly = true;
			this->Dest8->Size = System::Drawing::Size(33, 20);
			this->Dest8->TabIndex = 118;
			this->Dest8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest0
			// 
			this->Dest0->Location = System::Drawing::Point(216, 297);
			this->Dest0->Name = L"Dest0";
			this->Dest0->ReadOnly = true;
			this->Dest0->Size = System::Drawing::Size(33, 20);
			this->Dest0->TabIndex = 117;
			this->Dest0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest1
			// 
			this->Dest1->Location = System::Drawing::Point(216, 323);
			this->Dest1->Name = L"Dest1";
			this->Dest1->ReadOnly = true;
			this->Dest1->Size = System::Drawing::Size(33, 20);
			this->Dest1->TabIndex = 116;
			this->Dest1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest2
			// 
			this->Dest2->Location = System::Drawing::Point(216, 349);
			this->Dest2->Name = L"Dest2";
			this->Dest2->ReadOnly = true;
			this->Dest2->Size = System::Drawing::Size(33, 20);
			this->Dest2->TabIndex = 115;
			this->Dest2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest3
			// 
			this->Dest3->Location = System::Drawing::Point(216, 375);
			this->Dest3->Name = L"Dest3";
			this->Dest3->ReadOnly = true;
			this->Dest3->Size = System::Drawing::Size(33, 20);
			this->Dest3->TabIndex = 114;
			this->Dest3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest4
			// 
			this->Dest4->Location = System::Drawing::Point(216, 401);
			this->Dest4->Name = L"Dest4";
			this->Dest4->ReadOnly = true;
			this->Dest4->Size = System::Drawing::Size(33, 20);
			this->Dest4->TabIndex = 113;
			this->Dest4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest5
			// 
			this->Dest5->Location = System::Drawing::Point(216, 427);
			this->Dest5->Name = L"Dest5";
			this->Dest5->ReadOnly = true;
			this->Dest5->Size = System::Drawing::Size(33, 20);
			this->Dest5->TabIndex = 112;
			this->Dest5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dest6
			// 
			this->Dest6->Location = System::Drawing::Point(216, 453);
			this->Dest6->Name = L"Dest6";
			this->Dest6->ReadOnly = true;
			this->Dest6->Size = System::Drawing::Size(33, 20);
			this->Dest6->TabIndex = 111;
			this->Dest6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Rob9
			// 
			this->Rob9->AutoSize = true;
			this->Rob9->Location = System::Drawing::Point(177, 534);
			this->Rob9->Name = L"Rob9";
			this->Rob9->Size = System::Drawing::Size(33, 13);
			this->Rob9->TabIndex = 130;
			this->Rob9->Text = L"Rob9";
			// 
			// Rob8
			// 
			this->Rob8->AutoSize = true;
			this->Rob8->Location = System::Drawing::Point(177, 505);
			this->Rob8->Name = L"Rob8";
			this->Rob8->Size = System::Drawing::Size(33, 13);
			this->Rob8->TabIndex = 129;
			this->Rob8->Text = L"Rob8";
			// 
			// Rob7
			// 
			this->Rob7->AutoSize = true;
			this->Rob7->Location = System::Drawing::Point(177, 481);
			this->Rob7->Name = L"Rob7";
			this->Rob7->Size = System::Drawing::Size(33, 13);
			this->Rob7->TabIndex = 128;
			this->Rob7->Text = L"Rob7";
			// 
			// Rob6
			// 
			this->Rob6->AutoSize = true;
			this->Rob6->Location = System::Drawing::Point(177, 453);
			this->Rob6->Name = L"Rob6";
			this->Rob6->Size = System::Drawing::Size(33, 13);
			this->Rob6->TabIndex = 127;
			this->Rob6->Text = L"Rob6";
			// 
			// Rob5
			// 
			this->Rob5->AutoSize = true;
			this->Rob5->Location = System::Drawing::Point(177, 427);
			this->Rob5->Name = L"Rob5";
			this->Rob5->Size = System::Drawing::Size(33, 13);
			this->Rob5->TabIndex = 126;
			this->Rob5->Text = L"Rob5";
			// 
			// Rob4
			// 
			this->Rob4->AutoSize = true;
			this->Rob4->Location = System::Drawing::Point(177, 404);
			this->Rob4->Name = L"Rob4";
			this->Rob4->Size = System::Drawing::Size(33, 13);
			this->Rob4->TabIndex = 125;
			this->Rob4->Text = L"Rob4";
			// 
			// Rob3
			// 
			this->Rob3->AutoSize = true;
			this->Rob3->Location = System::Drawing::Point(177, 378);
			this->Rob3->Name = L"Rob3";
			this->Rob3->Size = System::Drawing::Size(33, 13);
			this->Rob3->TabIndex = 124;
			this->Rob3->Text = L"Rob3";
			// 
			// Rob2
			// 
			this->Rob2->AutoSize = true;
			this->Rob2->Location = System::Drawing::Point(177, 352);
			this->Rob2->Name = L"Rob2";
			this->Rob2->Size = System::Drawing::Size(33, 13);
			this->Rob2->TabIndex = 123;
			this->Rob2->Text = L"Rob2";
			// 
			// Rob1
			// 
			this->Rob1->AutoSize = true;
			this->Rob1->Location = System::Drawing::Point(177, 326);
			this->Rob1->Name = L"Rob1";
			this->Rob1->Size = System::Drawing::Size(33, 13);
			this->Rob1->TabIndex = 122;
			this->Rob1->Text = L"Rob1";
			// 
			// Rob0
			// 
			this->Rob0->AutoSize = true;
			this->Rob0->Location = System::Drawing::Point(177, 300);
			this->Rob0->Name = L"Rob0";
			this->Rob0->Size = System::Drawing::Size(33, 13);
			this->Rob0->TabIndex = 121;
			this->Rob0->Text = L"Rob0";
			// 
			// Val9
			// 
			this->Val9->Location = System::Drawing::Point(261, 531);
			this->Val9->Name = L"Val9";
			this->Val9->ReadOnly = true;
			this->Val9->Size = System::Drawing::Size(33, 20);
			this->Val9->TabIndex = 144;
			this->Val9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val7
			// 
			this->Val7->Location = System::Drawing::Point(261, 478);
			this->Val7->Name = L"Val7";
			this->Val7->ReadOnly = true;
			this->Val7->Size = System::Drawing::Size(33, 20);
			this->Val7->TabIndex = 143;
			this->Val7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val8
			// 
			this->Val8->Location = System::Drawing::Point(261, 505);
			this->Val8->Name = L"Val8";
			this->Val8->ReadOnly = true;
			this->Val8->Size = System::Drawing::Size(33, 20);
			this->Val8->TabIndex = 142;
			this->Val8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val0
			// 
			this->Val0->Location = System::Drawing::Point(261, 297);
			this->Val0->Name = L"Val0";
			this->Val0->ReadOnly = true;
			this->Val0->Size = System::Drawing::Size(33, 20);
			this->Val0->TabIndex = 141;
			this->Val0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val1
			// 
			this->Val1->Location = System::Drawing::Point(261, 323);
			this->Val1->Name = L"Val1";
			this->Val1->ReadOnly = true;
			this->Val1->Size = System::Drawing::Size(33, 20);
			this->Val1->TabIndex = 140;
			this->Val1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val2
			// 
			this->Val2->Location = System::Drawing::Point(261, 349);
			this->Val2->Name = L"Val2";
			this->Val2->ReadOnly = true;
			this->Val2->Size = System::Drawing::Size(33, 20);
			this->Val2->TabIndex = 139;
			this->Val2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val3
			// 
			this->Val3->Location = System::Drawing::Point(261, 375);
			this->Val3->Name = L"Val3";
			this->Val3->ReadOnly = true;
			this->Val3->Size = System::Drawing::Size(33, 20);
			this->Val3->TabIndex = 138;
			this->Val3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val4
			// 
			this->Val4->Location = System::Drawing::Point(261, 401);
			this->Val4->Name = L"Val4";
			this->Val4->ReadOnly = true;
			this->Val4->Size = System::Drawing::Size(33, 20);
			this->Val4->TabIndex = 137;
			this->Val4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val5
			// 
			this->Val5->Location = System::Drawing::Point(261, 427);
			this->Val5->Name = L"Val5";
			this->Val5->ReadOnly = true;
			this->Val5->Size = System::Drawing::Size(33, 20);
			this->Val5->TabIndex = 136;
			this->Val5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Val6
			// 
			this->Val6->Location = System::Drawing::Point(261, 453);
			this->Val6->Name = L"Val6";
			this->Val6->ReadOnly = true;
			this->Val6->Size = System::Drawing::Size(33, 20);
			this->Val6->TabIndex = 135;
			this->Val6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done9
			// 
			this->Done9->Location = System::Drawing::Point(305, 531);
			this->Done9->Name = L"Done9";
			this->Done9->ReadOnly = true;
			this->Done9->Size = System::Drawing::Size(33, 20);
			this->Done9->TabIndex = 154;
			this->Done9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done7
			// 
			this->Done7->Location = System::Drawing::Point(305, 478);
			this->Done7->Name = L"Done7";
			this->Done7->ReadOnly = true;
			this->Done7->Size = System::Drawing::Size(33, 20);
			this->Done7->TabIndex = 153;
			this->Done7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done8
			// 
			this->Done8->Location = System::Drawing::Point(305, 505);
			this->Done8->Name = L"Done8";
			this->Done8->ReadOnly = true;
			this->Done8->Size = System::Drawing::Size(33, 20);
			this->Done8->TabIndex = 152;
			this->Done8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done0
			// 
			this->Done0->Location = System::Drawing::Point(305, 297);
			this->Done0->Name = L"Done0";
			this->Done0->ReadOnly = true;
			this->Done0->Size = System::Drawing::Size(33, 20);
			this->Done0->TabIndex = 151;
			this->Done0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done1
			// 
			this->Done1->Location = System::Drawing::Point(305, 323);
			this->Done1->Name = L"Done1";
			this->Done1->ReadOnly = true;
			this->Done1->Size = System::Drawing::Size(33, 20);
			this->Done1->TabIndex = 150;
			this->Done1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done2
			// 
			this->Done2->Location = System::Drawing::Point(305, 349);
			this->Done2->Name = L"Done2";
			this->Done2->ReadOnly = true;
			this->Done2->Size = System::Drawing::Size(33, 20);
			this->Done2->TabIndex = 149;
			this->Done2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done3
			// 
			this->Done3->Location = System::Drawing::Point(305, 375);
			this->Done3->Name = L"Done3";
			this->Done3->ReadOnly = true;
			this->Done3->Size = System::Drawing::Size(33, 20);
			this->Done3->TabIndex = 148;
			this->Done3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done4
			// 
			this->Done4->Location = System::Drawing::Point(305, 401);
			this->Done4->Name = L"Done4";
			this->Done4->ReadOnly = true;
			this->Done4->Size = System::Drawing::Size(33, 20);
			this->Done4->TabIndex = 147;
			this->Done4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done5
			// 
			this->Done5->Location = System::Drawing::Point(305, 427);
			this->Done5->Name = L"Done5";
			this->Done5->ReadOnly = true;
			this->Done5->Size = System::Drawing::Size(33, 20);
			this->Done5->TabIndex = 146;
			this->Done5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Done6
			// 
			this->Done6->Location = System::Drawing::Point(305, 453);
			this->Done6->Name = L"Done6";
			this->Done6->ReadOnly = true;
			this->Done6->Size = System::Drawing::Size(33, 20);
			this->Done6->TabIndex = 145;
			this->Done6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(213, 275);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(29, 13);
			this->label24->TabIndex = 155;
			this->label24->Text = L"Dest";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(259, 275);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(22, 13);
			this->label25->TabIndex = 156;
			this->label25->Text = L"Val";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(302, 275);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(33, 13);
			this->label26->TabIndex = 157;
			this->label26->Text = L"Done";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(356, 280);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(397, 167);
			this->richTextBox1->TabIndex = 158;
			this->richTextBox1->Text = L"";
			// 
			// Output
			// 
			this->Output->AutoSize = true;
			this->Output->Location = System::Drawing::Point(353, 259);
			this->Output->Name = L"Output";
			this->Output->Size = System::Drawing::Size(42, 13);
			this->Output->TabIndex = 159;
			this->Output->Text = L"Output:";
			// 
			// RS0_tag
			// 
			this->RS0_tag->Location = System::Drawing::Point(707, 77);
			this->RS0_tag->Name = L"RS0_tag";
			this->RS0_tag->ReadOnly = true;
			this->RS0_tag->Size = System::Drawing::Size(46, 20);
			this->RS0_tag->TabIndex = 167;
			this->RS0_tag->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS0_busy
			// 
			this->RS0_busy->Location = System::Drawing::Point(635, 77);
			this->RS0_busy->Name = L"RS0_busy";
			this->RS0_busy->ReadOnly = true;
			this->RS0_busy->Size = System::Drawing::Size(46, 20);
			this->RS0_busy->TabIndex = 166;
			this->RS0_busy->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS0_v2
			// 
			this->RS0_v2->Location = System::Drawing::Point(565, 77);
			this->RS0_v2->Name = L"RS0_v2";
			this->RS0_v2->ReadOnly = true;
			this->RS0_v2->Size = System::Drawing::Size(46, 20);
			this->RS0_v2->TabIndex = 165;
			this->RS0_v2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS0_v1
			// 
			this->RS0_v1->Location = System::Drawing::Point(504, 77);
			this->RS0_v1->Name = L"RS0_v1";
			this->RS0_v1->ReadOnly = true;
			this->RS0_v1->Size = System::Drawing::Size(46, 20);
			this->RS0_v1->TabIndex = 164;
			this->RS0_v1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS0_t2
			// 
			this->RS0_t2->Location = System::Drawing::Point(442, 77);
			this->RS0_t2->Name = L"RS0_t2";
			this->RS0_t2->ReadOnly = true;
			this->RS0_t2->Size = System::Drawing::Size(46, 20);
			this->RS0_t2->TabIndex = 163;
			this->RS0_t2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS0_t1
			// 
			this->RS0_t1->Location = System::Drawing::Point(379, 77);
			this->RS0_t1->Name = L"RS0_t1";
			this->RS0_t1->ReadOnly = true;
			this->RS0_t1->Size = System::Drawing::Size(46, 20);
			this->RS0_t1->TabIndex = 162;
			this->RS0_t1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RS0_op
			// 
			this->RS0_op->Location = System::Drawing::Point(308, 77);
			this->RS0_op->Name = L"RS0_op";
			this->RS0_op->ReadOnly = true;
			this->RS0_op->Size = System::Drawing::Size(46, 20);
			this->RS0_op->TabIndex = 161;
			this->RS0_op->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(274, 84);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(28, 13);
			this->label23->TabIndex = 160;
			this->label23->Text = L"RS0";
			// 
			// FilePickerBtn
			// 
			this->FilePickerBtn->Location = System::Drawing::Point(189, 227);
			this->FilePickerBtn->Name = L"FilePickerBtn";
			this->FilePickerBtn->Size = System::Drawing::Size(30, 23);
			this->FilePickerBtn->TabIndex = 168;
			this->FilePickerBtn->Text = L"...";
			this->FilePickerBtn->UseVisualStyleBackColor = true;
			this->FilePickerBtn->Click += gcnew System::EventHandler(this, &Form1::FilePickerBtn_Click);
			// 
			// aboutBtn
			// 
			this->aboutBtn->Location = System::Drawing::Point(707, 528);
			this->aboutBtn->Name = L"aboutBtn";
			this->aboutBtn->Size = System::Drawing::Size(46, 23);
			this->aboutBtn->TabIndex = 169;
			this->aboutBtn->Text = L"About";
			this->aboutBtn->UseVisualStyleBackColor = true;
			this->aboutBtn->Click += gcnew System::EventHandler(this, &Form1::aboutBtn_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(33, 275);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(24, 13);
			this->label18->TabIndex = 170;
			this->label18->Text = L"RF:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 589);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->aboutBtn);
			this->Controls->Add(this->FilePickerBtn);
			this->Controls->Add(this->RS0_tag);
			this->Controls->Add(this->RS0_busy);
			this->Controls->Add(this->RS0_v2);
			this->Controls->Add(this->RS0_v1);
			this->Controls->Add(this->RS0_t2);
			this->Controls->Add(this->RS0_t1);
			this->Controls->Add(this->RS0_op);
			this->Controls->Add(this->label23);
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
			this->Controls->Add(this->RS1_busy);
			this->Controls->Add(this->RS1_v2);
			this->Controls->Add(this->RS1_v1);
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
			this->Controls->Add(this->RegF9);
			this->Controls->Add(this->RegF8);
			this->Controls->Add(this->RegF7);
			this->Controls->Add(this->RegF6);
			this->Controls->Add(this->RegF5);
			this->Controls->Add(this->RegF4);
			this->Controls->Add(this->RegF3);
			this->Controls->Add(this->RegF2);
			this->Controls->Add(this->RegF1);
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
			this->Name = L"Form1";
			this->Text = L"Tomasulos Algorithm";
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
		this->instList->push_back(instObj(instNameList[index], (int)this->reg1UD->Value, (int)this->reg2UD->Value, (int)this->reg3UD->Value, this->getNextID()));
		int end = instList->size() - 1;
		this->InstBank->Text += gcnew String(instList->at(end).print().c_str()) + "\n";
	}
}


private: System::Void QuickAddBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	//this->instList->push_back(instObj("ADD", 1, 2, 3));
	//this->instList->push_back(instObj("SUB", 4, 5, 6));
	//this->instList->push_back(instObj("DIV", 3, 4, 5));
	//this->instList->push_back(instObj("MUL", 2, 2, 3));
	//this->instList->push_back(instObj("ADD", 8, 9, 4));
	//this->instList->push_back(instObj("ADD", 4, 5, 6));
	//this->instList->push_back(instObj("SUB", 3, 2, 3));
	//CHANGE FOR LOOP
	this->instList->push_back(instObj("ADD", 1, 3, 4, this->getNextID()));
	this->instList->push_back(instObj("MUL", 7, 1, 5, this->getNextID()));
	this->instList->push_back(instObj("DIV", 9, 7, 2, this->getNextID()));
	this->instList->push_back(instObj("SUB", 2, 3, 4, this->getNextID()));

	int end = instList->size();

	for (int i = end - 4; i < end; i++) {
		this->InstBank->Text += gcnew String(instList->at(i).print().c_str()) + "\n";
	}

}

private: System::Void run(){

	// Handle Write Queue
	if (this->writeQueue->size() > 0) {
		if (this->writeQueue->at(0).canWrite == true) {
			//this->updateRAT(this->writeQueue->at(0));
			this->removeRat(this->writeQueue->at(0).reg1);
			this->updateMEM(this->writeQueue->at(0));
			this->writeQueue->erase(this->writeQueue->begin());
			
		}
	}
	// Handle Broad Cast Queue
	//-------------------------------------------------------------------------------------------------
	if (this->broadCastQ->size() > 0) {
		instObj cur = this->broadCastQ->back();
		this->broadCastQ->pop_back();
		//std::cout << "size of broadcast Q " << this->broadCastQ->size();
		for (int i = 0; i < this->writeQueue->size(); i++) {
			if (this->writeQueue->at(i).instId == cur.instId) {
				this->writeQueue->at(i).canWrite = true;
			}
		}
		this->updateRAT(cur);
		//this->removeRat(cur.reg1);
		this->robsInUse->at(cur.reg1) = -1;
		this->updateMulUnit(); 
		this->updateAddUnit();
		

	}





	// Check if instr can be loaded
	this->updateClockCycle();

	// Load a new Inst
	//-------------------------------------------------------------------------------------------------
	if (this->instList->size() != 0) {
		int end = instList->size();
		instObj curObj = this->instList->at(0);
		this->instList->erase(instList->begin());
		this->updateInstBank();


		if (curObj.inst.compare("ADD") == 0 || curObj.inst.compare("SUB") == 0) {
			if (this->addUnit->size() >= this->MAX_ADD_UNIT) {
				bool flipped = false;
				for (int i = 0; i < this->MAX_ADD_UNIT; i++) {
					if (this->addUnit->at(i).isPlaceHolder == true) {
						curObj.index = i;
						curObj.rob = this->getRob(curObj.reg1);
						this->insertIntoRat(curObj.reg1, curObj.rob);
						this->addUnit->at(i) = curObj;
						this->insertROB(curObj);
						this->writeQueue->push_back(curObj);
						flipped = true;
						break;
					}
				}
				if (!flipped) {
					this->instList->insert(instList->begin(), curObj);
				}
			}
			else {
				curObj.index = this->addUnit->size();
				curObj.rob = this->getRob(curObj.reg1);
				this->insertIntoRat(curObj.reg1, curObj.rob);
				this->addUnit->push_back(curObj);
				this->insertROB(curObj);
				this->writeQueue->push_back(curObj);
			}
			this->updateInstBank();
			this->updateAddUnit();

		}
		else {
			if (this->mulUnit->size() >= this->MAX_MUL_UNIT) {
				bool flipped = false;
				for (int i = 0; i < this->MAX_MUL_UNIT; i++) {
					if (this->mulUnit->at(i).isPlaceHolder == true) {
						curObj.index = i;
						curObj.rob = this->getRob(curObj.reg1);
						this->insertIntoRat(curObj.reg1, curObj.rob);
						this->mulUnit->at(i) = curObj;
						this->insertROB(curObj);
						this->writeQueue->push_back(curObj);
						flipped = true;
						break;
					}
				}
				if (!flipped) {
					this->instList->insert(instList->begin(), curObj);

				}
			}
			else {
				curObj.index = this->mulUnit->size();
				curObj.rob = this->getRob(curObj.reg1);
				this->insertIntoRat(curObj.reg1, curObj.rob);
				this->mulUnit->push_back(curObj);
				this->insertROB(curObj);
				this->writeQueue->push_back(curObj);
			}

			this->updateInstBank();
			this->updateMulUnit();
		}

	}


	// subtract clock cycles from inst and see if they can execute
	//-------------------------------------------------------------------------------------------------
	std::vector<instObj>::iterator curMul;

	for (curMul = this->mulUnit->begin(); curMul != this->mulUnit->end(); ++curMul) {
		bool brk = false;
		if (this->robsInUse->at(curMul->rob) == -1 && curMul->isPlaceHolder == false) {
			//std::cout << curMul->rob;
			curMul->CCToFinish -= 1;
			brk = true;
		}
		std::cout << "Inst is at " << curMul->CCToFinish << "\n";
		if (curMul->CCToFinish <= 0 && this->broadCastQ->size() == 0 && curMul->isPlaceHolder == false) {
			this->broadCastQ->push_back(*curMul);

		}
		if (brk) {
			break;
		}
	}

	std::vector<instObj>::iterator curAdd;
	for (curAdd = this->addUnit->begin(); curAdd != this->addUnit->end(); ++curAdd) {
		bool brk = false;
		if (this->robsInUse->at(curAdd->rob) == -1 && curAdd->isPlaceHolder == false) {
			curAdd->CCToFinish -= 1;
			brk = true;
		}
		//std::cout << "Inst is at " << curAdd->CCToFinish;
		if (curAdd->CCToFinish <= 0 && this->broadCastQ->size() == 0 && curAdd->isPlaceHolder == false) {
			this->broadCastQ->push_back(*curAdd);
		}
		if (brk) {
			break;
		}
	}





}

private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//for (int i = 0; i < this->robsInUse->size(); i++) {
	//	std::cout << this->robsInUse->at(i) << " ";
	//}
	//std::cout << this->broadCastQ->size() << " ";
	std::cout << "\n";
	run();
}

private: System::Void updateMulUnit() {
	for (int i = 0; i < mulUnit->size(); i++) {
		instObj cur = mulUnit->at(i);
		bool reg1dep = false;
		bool reg2dep = false;
		if (this->robsInUse->at(cur.reg2) != -1) {
			reg1dep = true;
		}
		if (this->robsInUse->at(cur.reg3) != -1) {
			reg2dep = true;
		}
		if (i == 0) {
			if (cur.isPlaceHolder == true) {
				this->RS3_op->Text = "";
				this->RS3_v1->Text = "";
				this->RS3_v2->Text = "";
				this->RS3_tag->Text = "";
				this->RS3_t1->Text = "";
				this->RS3_t2->Text = "";
				cur.index = -1;
			}
			else {
				this->RS3_op->Text = gcnew String(cur.inst.c_str());
				if (reg1dep) {
					this->RS3_t1->Text = gcnew String("ROB " + this->robsInUse->at(cur.reg2).ToString());
				}
				else {
					//this->RS3_v1->Text = this->writeBackLines->at(cur.reg2).ToString();
					this->RS3_v1->Text = this->regFilesA->at(cur.reg2).ToString();
				}
				if (reg2dep) {
					this->RS3_t2->Text = gcnew String("ROB " + this->robsInUse->at(cur.reg3).ToString());
				}
				else {
					//this->RS3_v2->Text = this->writeBackLines->at(cur.reg3).ToString();
					this->RS3_v2->Text = this->regFilesA->at(cur.reg3).ToString();
				}
				this->RS3_tag->Text = gcnew String("ROB " + cur.rob.ToString());
				cur.index = 3;
			}
		}
		else {
			if (cur.isPlaceHolder == true) {
				this->RS4_op->Text = "";
				this->RS4_v1->Text = "";
				this->RS4_v2->Text = "";
				this->RS4_tag->Text = "";
				this->RS4_t1->Text = "";
				this->RS4_t2->Text = "";
				cur.index = -1;
			}
			else {
				this->RS4_op->Text = gcnew String(cur.inst.c_str());
				if (reg1dep) {
					this->RS4_t1->Text = gcnew String("ROB " + this->robsInUse->at(cur.reg2).ToString());
				}
				else {
					//this->RS4_v1->Text = this->writeBackLines->at(cur.reg2).ToString();
					this->RS4_v1->Text = this->regFilesA->at(cur.reg2).ToString();
				}
				if (reg2dep) {
					this->RS4_t2->Text = gcnew String("ROB " + this->robsInUse->at(cur.reg3).ToString());
				}
				else {
					//this->RS4_v2->Text = this->writeBackLines->at(cur.reg3).ToString();
					this->RS4_v2->Text = this->regFilesA->at(cur.reg3).ToString();
				}
				this->RS4_tag->Text = gcnew String("ROB " + cur.rob.ToString());
				cur.index = 4;
			}
		}
	}
}

private: System::Void updateAddUnit() {
	for (int i = 0; i < this->addUnit->size(); i++) {
		instObj cur = this->addUnit->at(i);
		bool reg1dep = false;
		bool reg2dep = false;
		if (this->robsInUse->at(cur.reg2) != -1) {
			reg1dep = true;
		}
		if (this->robsInUse->at(cur.reg3) != -1) {
			reg2dep = true;
		}
		if (i == 0) {
			if (cur.isPlaceHolder == true) {
				this->RS0_op->Text = "";
				this->RS0_v1->Text = "";
				this->RS0_v2->Text = "";
				this->RS0_tag->Text = "";
				this->RS0_t1->Text = "";
				this->RS0_t2->Text = "";
				cur.index = -1;
			}
			else {
				this->RS0_op->Text = gcnew String(cur.inst.c_str());
				if (reg1dep) {
					this->RS0_t1->Text = gcnew String("ROB " + this->robsInUse->at(cur.reg2).ToString());
				}
				else {
					this->RS0_v1->Text = this->writeBackLines->at(cur.reg2).ToString();
					//this->RS0_v1->Text = this->regFilesA->at(cur.reg2).ToString();
				}
				if (reg2dep) {
					this->RS0_t2->Text = gcnew String("ROB " + this->robsInUse->at(cur.reg3).ToString());
				}
				else {
					this->RS0_v2->Text = this->writeBackLines->at(cur.reg3).ToString();
					//this->RS0_v2->Text = this->regFilesA->at(cur.reg3).ToString();
				}
				this->RS0_tag->Text = gcnew String("ROB " + cur.rob.ToString());
				cur.index = 0;
			}
		}
		else if (i == 1) {
			if (cur.isPlaceHolder == true) {
				this->RS1_op->Text = "";
				this->RS1_v1->Text = "";
				this->RS1_v2->Text = "";
				this->RS1_tag->Text = "";
				this->RS1_t1->Text = "";
				this->RS1_t2->Text = "";
				cur.index = -1;
			}
			else {
				this->RS1_op->Text = gcnew String(cur.inst.c_str());
				if (reg1dep) {
					this->RS1_t1->Text = gcnew String("ROB " + this->robsInUse->at(cur.reg2).ToString());
				}
				else {
					//this->RS1_v1->Text = this->writeBackLines->at(cur.reg2).ToString();
					this->RS1_v1->Text = this->regFilesA->at(cur.reg2).ToString();
				}
				if (reg2dep) {
					this->RS1_t2->Text = gcnew String("ROB " + this->robsInUse->at(cur.reg3).ToString());
				}
				else {
					//this->RS1_v2->Text = this->writeBackLines->at(cur.reg3).ToString();
					this->RS1_v2->Text = this->regFilesA->at(cur.reg3).ToString();
				}
				this->RS1_tag->Text = gcnew String("ROB " + cur.rob.ToString());
				cur.index = 1;
			}
		}
		else {
			if (cur.isPlaceHolder == true) {
				this->RS2_op->Text = "";
				this->RS2_v1->Text = "";
				this->RS2_v2->Text = "";
				this->RS2_tag->Text = "";
				this->RS2_t1->Text = "";
				this->RS2_t2->Text = "";
				cur.index = -1;
			}
			else {
				this->RS2_op->Text = gcnew String(cur.inst.c_str());
				if (reg1dep) {
					this->RS2_t1->Text = gcnew String("ROB " + this->robsInUse->at(cur.reg2).ToString());
				}
				else {
					//this->RS2_v1->Text = this->writeBackLines->at(cur.reg2).ToString();
					this->RS2_v1->Text = this->regFilesA->at(cur.reg2).ToString();
				}
				if (reg2dep) {
					this->RS2_t2->Text = gcnew String("ROB " + this->robsInUse->at(cur.reg3).ToString());
				}
				else {
					//this->RS2_v2->Text = this->writeBackLines->at(cur.reg3).ToString();
					this->RS2_v2->Text = this->regFilesA->at(cur.reg3).ToString();
				}
				this->RS1_tag->Text = gcnew String("ROB " + cur.rob.ToString());
				cur.index = 2;
			}
		}
	}

}

private: System::Void updateClockCycle() {
	curClockCycle = curClockCycle + 1;
	this->current_clock->Text = curClockCycle.ToString();
}


private: System::Void updateInstBank() {
	this->InstBank->Clear();
	int end = instList->size();
	for (int i = 0; i < end; i++) {
		this->InstBank->Text += gcnew String(instList->at(i).print().c_str()) + "\n";
	}
}

private: System::Void insertROB(instObj cur) {
	switch (cur.rob)
	{
	case 0:
		this->Dest0->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 1:
		this->Dest1->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 2:
		this->Dest2->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 3:
		this->Dest3->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 4:
		this->Dest4->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 5:
		this->Dest5->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 6:
		this->Dest6->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 7:
		this->Dest7->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 8:
		this->Dest8->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 9:
		this->Dest9->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	default:
		std::cout << "Invalid Insert RAT";
		break;
	}


}

private: System::Void updateRAT(instObj cur) {

	int val = 0;
	int r2 = this->regFilesA->at(cur.reg2);
	int r3 = this->regFilesA->at(cur.reg3);
	if (cur.inst.compare("ADD") == 0) {
		val = r2 + r3;

	}
	else if (cur.inst.compare("SUB") == 0) {
		val = r2 - r3;

	}
	else if (cur.inst.compare("MUL") == 0) {
		val = r2 * r3;

	}
	else if (cur.inst.compare("DIV") == 0) {
		val = r2 / r3;

	}
	else {
		std::cout << "Invalid operation";
	}

	switch (cur.rob)
	{
	case 0:
		this->Val0->Text = gcnew String(val.ToString());
		this->Done0->Text = gcnew String((this->curClockCycle + 1).ToString());
		//this->Dest0->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 1:
		this->Val1->Text = gcnew String(val.ToString());
		this->Done1->Text = gcnew String((this->curClockCycle + 1).ToString());
		//this->Dest1->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 2:
		this->Val2->Text = gcnew String(val.ToString());
		this->Done2->Text = gcnew String((this->curClockCycle + 1).ToString());
		//this->Dest2->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 3:
		this->Val3->Text = gcnew String(val.ToString());
		this->Done3->Text = gcnew String((this->curClockCycle + 1).ToString());
		//this->Dest3->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 4:
		this->Val4->Text = gcnew String(val.ToString());
		this->Done4->Text = gcnew String((this->curClockCycle + 1).ToString());
		//this->Dest4->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 5:
		this->Val5->Text = gcnew String(val.ToString());
		this->Done5->Text = gcnew String((this->curClockCycle + 1).ToString());
		//this->Dest5->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 6:
		this->Val6->Text = gcnew String(val.ToString());
		this->Done6->Text = gcnew String((this->curClockCycle + 1).ToString());
		//this->Dest6->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 7:
		this->Val7->Text = gcnew String(val.ToString());
		this->Done7->Text = gcnew String((this->curClockCycle + 1).ToString());
		//this->Dest7->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 8:
		this->Val8->Text = gcnew String(val.ToString());
		this->Done8->Text = gcnew String((this->curClockCycle + 1).ToString());
		//this->Dest8->Text = gcnew String("R" + cur.reg1.ToString());
		break;
	case 9:
		this->Val9->Text = gcnew String(val.ToString());
		this->Done9->Text = gcnew String((this->curClockCycle + 1).ToString());
		//this->Dest9->Text = gcnew String("R" + cur.reg1.ToString());
		break;

	default:
		std::cout << "Invalid ROB counter";
		break;
	}

	if (cur.inst.compare("ADD") == 0 || cur.inst.compare("SUB") == 0) {
		//std::cout << cur.index ;
		for (int i = 0; i < this->addUnit->size(); i++) {
			if (this->addUnit->at(i).index == cur.index) {
				//this->addUnit->erase(this->addUnit->begin()+i);
				this->addUnit->at(i).isPlaceHolder = true;
				//std::cout << cur.index << "\n";
			}
		}
	}
	else {
		for (int i = 0; i < this->mulUnit->size(); i++) {
			if (this->mulUnit->at(i).index == cur.index) {
				//this->mulUnit->erase(this->mulUnit->begin() + i);
				this->mulUnit->at(i).isPlaceHolder = true;
			}
		}
	}

	this->updateAddUnit();
	this->updateMulUnit();
	

}
private: System::Void updateMEM(instObj cur) {
	int val = 0;
	int r2 = this->regFilesA->at(cur.reg2);
	int r3 = this->regFilesA->at(cur.reg3);
	if (cur.inst.compare("ADD") == 0) {
		val = r2 + r3;

	}
	else if (cur.inst.compare("SUB") == 0) {
		val = r2 - r3;

	}
	else if (cur.inst.compare("MUL") == 0) {
		val = r2 * r3;

	}
	else if (cur.inst.compare("DIV") == 0) {
		val = r2 / r3;

	}
	else {
		std::cout << "Invalid operation";
	}
	// updating Memory ----------------------------------------------------------------------
	this->regFilesA->at(cur.reg1) = val;
	this->updateMemeory();

	this->curROB += 1;
	if (curROB >= 10) {
		this->curROB = 0;
	}


	this->updateAddUnit();
	this->updateMulUnit();


}

private: System::Void updateMemeory() {
	for (int i = 0; i < this->regFilesA->size(); i++) {
		switch (i) 
		{
		case 0:
			this->RegF0->Text = gcnew String(this->regFilesA->at(i).ToString());
			break;
		case 1:
			this->RegF1->Text = gcnew String(this->regFilesA->at(i).ToString());
			break;
		case 2:
			this->RegF2->Text = gcnew String(this->regFilesA->at(i).ToString());
			break;
		case 3:
			this->RegF3->Text = gcnew String(this->regFilesA->at(i).ToString());
			break;
		case 4:
			this->RegF4->Text = gcnew String(this->regFilesA->at(i).ToString());
			break;
		case 5:
			this->RegF5->Text = gcnew String(this->regFilesA->at(i).ToString());
			break;
		case 6:
			this->RegF6->Text = gcnew String(this->regFilesA->at(i).ToString());
			break;
		case 7:
			this->RegF7->Text = gcnew String(this->regFilesA->at(i).ToString());
			break;
		case 8:
			this->RegF8->Text = gcnew String(this->regFilesA->at(i).ToString());
			break;
		case 9:
			this->RegF9->Text = gcnew String(this->regFilesA->at(i).ToString());
			break;
		default:
			std::cout << "Invalid Mem counter\n";
			break;
		}

	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::cout << "Run Btn Pressed/n";
	if (isRunning) {
		this->isRunning = false;
		this->button2->Text = "Run";
	}
	else {
		this->isRunning = true;
		this->button2->Text = "...";
	}
	this->runningLoop();

}

private: System::Void runningLoop() {
	while (this->isRunning) {
		if ((this->instList->size()==0 && this->writeQueue->size() == 0) || this->cyclesOfSimulation == 0 ) {
			this->cyclesOfSimulation = -1;
			this->button2->Text = "Done";
			this->isRunning = false;
			break;
		}
		this->cyclesOfSimulation--;
		this->run();
		this->Update();
		Sleep(500);

	}
}

private: int getRob(int dest) {
	
	this->curRob = this->curRob + 1;
	if (this->curRob >= 10) {
		this->curRob = 0;
	}
	
	int x = this->curRob;
	//index = RF line
	//val = robVal
	this->robsInUse->at(dest) = x;

	return this->curRob;
}

private: System::Void insertIntoRat(int ratNumber, int robNumber) {

	switch (ratNumber)
	{
	case 0:
		this->Rat_r0->Text = gcnew String("ROB " + robNumber.ToString());
		break;
	case 1:
		this->Rat_r1->Text = gcnew String("ROB " + robNumber.ToString());
		break;
	case 2:
		this->Rat_r2->Text = gcnew String("ROB " + robNumber.ToString());
		break;
	case 3:
		this->Rat_r3->Text = gcnew String("ROB " + robNumber.ToString());
		break;
	case 4:
		this->Rat_r4->Text = gcnew String("ROB " + robNumber.ToString());
		break;
	case 5:
		this->Rat_r5->Text = gcnew String("ROB " + robNumber.ToString());
		break;
	case 6:
		this->Rat_r6->Text = gcnew String("ROB " + robNumber.ToString());
		break;
	case 7:
		this->Rat_r7->Text = gcnew String("ROB " + robNumber.ToString());
		break;
	case 8:
		this->Rat_r8->Text = gcnew String("ROB " + robNumber.ToString());
		break;
	case 9:
		this->Rat_r9->Text = gcnew String("ROB " + robNumber.ToString());
		break;
	default:
		std::cout << "Invalid Rat Number On Insert\n";
		break;
	}
}

private: System::Void removeRat(int ratNumber) {
	
	switch (ratNumber)
	{
	case 0:
		this->Rat_r0->Text = gcnew String("R0");
		break;
	case 1:
		this->Rat_r1->Text = gcnew String("R1");
		break;
	case 2:
		this->Rat_r2->Text = gcnew String("R2");
		break;
	case 3:
		this->Rat_r3->Text = gcnew String("R3");
		break;
	case 4:
		this->Rat_r4->Text = gcnew String("R4");
		break;
	case 5:
		this->Rat_r5->Text = gcnew String("R5");
		break;
	case 6:
		this->Rat_r6->Text = gcnew String("R6");
		break;
	case 7:
		this->Rat_r7->Text = gcnew String("R7");
		break;
	case 8:
		this->Rat_r8->Text = gcnew String("R8");
		break;
	case 9:
		this->Rat_r9->Text = gcnew String("R9");
		break;
	default:
		std::cout << "Invalid Rat Number On Remove\n";
		break;
	}
}

private: int getNextID() {
	this->curID = this->curID + 1;
	return this->curID;
}

private: System::Void FilePickerBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{	
		String^ temp = gcnew String(openFileDialog1->FileName->ToString());
		using System::Runtime::InteropServices::Marshal;
		std::ifstream file((const char*)(Marshal::StringToHGlobalAnsi(temp->ToString())).ToPointer());
		std::string str;
		int i = 0;
		int numOfInst, topRange;
		while (std::getline(file, str)) {
			//std::cout << str << "\n";
			if (i == 0) {
				numOfInst = std::stoi(str);
				topRange = 2 + numOfInst;
			}
			else if (i == 1) {
				this->cyclesOfSimulation = std::stoi(str);
			}
			else if ( i<topRange ) {
				std::string code = str.substr(0, 1);
				int codei = std::stoi(code);

				int ir1 = std::stoi(str.substr(2, 3));
				int ir2 = std::stoi(str.substr(4, 5));
				int ir3 = std::stoi(str.substr(6, 7));
				switch (codei)
				{
				case 0:
					this->instList->push_back(instObj("ADD",  ir1, ir2, ir3, this->getNextID()));
					break;
				case 1:
					this->instList->push_back(instObj("SUB", ir1, ir2, ir3, this->getNextID()));
					break;
				case 2:
					this->instList->push_back(instObj("MUL", ir1, ir2, ir3, this->getNextID()));
					break;
				case 3:
					this->instList->push_back(instObj("DIV", ir1, ir2, ir3, this->getNextID()));
					break;
				default:
					std::cout << "Invalid Inst Name\n";
					break;
				}
				this->updateInstBank();
			}
			else {
				int key = i - (2 + numOfInst);
				this->regFilesA->at(key) = std::stoi(str);
				switch (key)
				{
				case 0:
					this->RegF0->Text = gcnew String(this->regFilesA->at(key).ToString());
					break;
				case 1:
					this->RegF1->Text = gcnew String(this->regFilesA->at(key).ToString());
					break;
				case 2:
					this->RegF2->Text = gcnew String(this->regFilesA->at(key).ToString());
					break;
				case 3:
					this->RegF3->Text = gcnew String(this->regFilesA->at(key).ToString());
					break;
				case 4:
					this->RegF4->Text = gcnew String(this->regFilesA->at(key).ToString());
					break;
				case 5:
					this->RegF5->Text = gcnew String(this->regFilesA->at(key).ToString());
					break;
				case 6:
					this->RegF6->Text = gcnew String(this->regFilesA->at(key).ToString());
					break;
				case 7:
					this->RegF7->Text = gcnew String(this->regFilesA->at(key).ToString());
					break;
				case 8:
					this->RegF8->Text = gcnew String(this->regFilesA->at(key).ToString());
					break;
				case 9:
					this->RegF9->Text = gcnew String(this->regFilesA->at(key).ToString());
					break;
				default:
					std::cout << "Invalid Mem counter in load file\n";
					break;
				}
			}
			
			i++;
		}
	}

}
private: System::Void aboutBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	//MessageBox::Show("Computer Arch ECE 474 Taught by: Sudarshan Srinivasan, Ph.D.");
	AboutPopUp^ a = gcnew AboutPopUp();
	a->Show();
}

};
}
