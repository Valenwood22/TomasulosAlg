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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg1UD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg2UD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reg3UD))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(763, 9);
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
			this->label8->Size = System::Drawing::Size(91, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Instruction Queue";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 262);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Memory";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(440, 175);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Processor Units";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(453, 107);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(105, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Reservation Stations";
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
			this->button2->Location = System::Drawing::Point(586, 518);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Run";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(678, 517);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Next Cycle";
			this->button3->UseVisualStyleBackColor = true;
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
			this->textBox2->Size = System::Drawing::Size(33, 20);
			this->textBox2->TabIndex = 37;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(39, 336);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(33, 20);
			this->textBox3->TabIndex = 38;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(39, 362);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(33, 20);
			this->textBox4->TabIndex = 39;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(39, 388);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(33, 20);
			this->textBox5->TabIndex = 40;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(39, 414);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(33, 20);
			this->textBox6->TabIndex = 41;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(39, 440);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(33, 20);
			this->textBox7->TabIndex = 42;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(39, 466);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(33, 20);
			this->textBox8->TabIndex = 43;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(39, 492);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(33, 20);
			this->textBox9->TabIndex = 44;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(39, 518);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(33, 20);
			this->textBox10->TabIndex = 45;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(941, 685);
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
};
}
