#pragma once
#include <iostream>
#include <string>

namespace TomasulosAlgorithm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutPopUp
	/// </summary>
	public ref class AboutPopUp : public System::Windows::Forms::Form
	{
	public:
		AboutPopUp(void)
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
		~AboutPopUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label22;
	protected:
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutPopUp::typeid));
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(9, 66);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(143, 13);
			this->label22->TabIndex = 137;
			this->label22->Text = L"Sudarshan Srinivasan, Ph.D.";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(53, 53);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(58, 13);
			this->label21->TabIndex = 136;
			this->label21->Text = L"Taught by:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(18, 40);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(122, 13);
			this->label20->TabIndex = 135;
			this->label20->Text = L"Computer Arch ECE 474";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::Navy;
			this->linkLabel1->Location = System::Drawing::Point(9, 19);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(148, 13);
			this->linkLabel1->TabIndex = 138;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Click Here For Video Tuatorial";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AboutPopUp::linkLabel1_LinkClicked);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(500, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(10, 10);
			this->pictureBox1->TabIndex = 139;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(521, 338);
			this->label1->TabIndex = 140;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// AboutPopUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 457);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Name = L"AboutPopUp";
			this->Text = L"AboutPopUp";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//std::string url = "https://www.google.com/";


		//cout << url << endl;
		//std::string op = std::string("open ").append(url);
		system("open http://google.com/");
	}
};
}
