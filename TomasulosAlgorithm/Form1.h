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
			this->label9->Location = System::Drawing::Point(186, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Memory";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 339);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Processor Units";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(348, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(105, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Reservation Stations";
			// 
			// AddInstBtn
			// 
			this->AddInstBtn->Location = System::Drawing::Point(12, 276);
			this->AddInstBtn->Name = L"AddInstBtn";
			this->AddInstBtn->Size = System::Drawing::Size(75, 23);
			this->AddInstBtn->TabIndex = 14;
			this->AddInstBtn->Text = L"Add Inst";
			this->AddInstBtn->UseVisualStyleBackColor = true;
			this->AddInstBtn->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(154, 457);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Run";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(246, 456);
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
			this->InstBank->Location = System::Drawing::Point(12, 107);
			this->InstBank->Name = L"InstBank";
			this->InstBank->ReadOnly = true;
			this->InstBank->Size = System::Drawing::Size(229, 167);
			this->InstBank->TabIndex = 17;
			this->InstBank->Text = L"";
			// 
			// InstBox
			// 
			this->InstBox->FormattingEnabled = true;
			this->InstBox->Location = System::Drawing::Point(13, 80);
			this->InstBox->Name = L"InstBox";
			this->InstBox->Size = System::Drawing::Size(46, 21);
			this->InstBox->TabIndex = 18;
			// 
			// reg1UD
			// 
			this->reg1UD->Location = System::Drawing::Point(86, 80);
			this->reg1UD->Name = L"reg1UD";
			this->reg1UD->Size = System::Drawing::Size(34, 20);
			this->reg1UD->TabIndex = 19;
			// 
			// reg2UD
			// 
			this->reg2UD->Location = System::Drawing::Point(147, 81);
			this->reg2UD->Name = L"reg2UD";
			this->reg2UD->Size = System::Drawing::Size(34, 20);
			this->reg2UD->TabIndex = 20;
			// 
			// reg3UD
			// 
			this->reg3UD->Location = System::Drawing::Point(207, 81);
			this->reg3UD->Name = L"reg3UD";
			this->reg3UD->Size = System::Drawing::Size(34, 20);
			this->reg3UD->TabIndex = 21;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(65, 83);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(15, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"R";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(126, 83);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(15, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"R";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(186, 83);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(15, 13);
			this->label14->TabIndex = 24;
			this->label14->Text = L"R";
			// 
			// QuickAddBtn
			// 
			this->QuickAddBtn->Location = System::Drawing::Point(155, 276);
			this->QuickAddBtn->Name = L"QuickAddBtn";
			this->QuickAddBtn->Size = System::Drawing::Size(75, 23);
			this->QuickAddBtn->TabIndex = 25;
			this->QuickAddBtn->Text = L"Quick Add";
			this->QuickAddBtn->UseVisualStyleBackColor = true;
			this->QuickAddBtn->Click += gcnew System::EventHandler(this, &Form1::QuickAddBtn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(941, 511);
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
