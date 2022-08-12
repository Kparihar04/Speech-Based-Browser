#pragma once
#include "Recording.h"
#include "HMM.h"
#include "yesstopstart.h"
#include<iostream>
#include<stdint.h>
#include <Windows.h>

using namespace std;
namespace MyBrowser {

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
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected: 

	private: System::Windows::Forms::Label^  GoogleLbl;
	private: System::Windows::Forms::Label^  WikiLbl;
	private: System::Windows::Forms::Label^  youtubeLbl;
	private: System::Windows::Forms::Label^  SearchLbl2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  startBtn;
	private: System::Windows::Forms::Button^  Speakbtn2;

	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  trainBtn;
	private: System::Windows::Forms::TextBox^  input;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  train;


	private: System::Windows::Forms::Button^  button1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->GoogleLbl = (gcnew System::Windows::Forms::Label());
			this->WikiLbl = (gcnew System::Windows::Forms::Label());
			this->youtubeLbl = (gcnew System::Windows::Forms::Label());
			this->SearchLbl2 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->startBtn = (gcnew System::Windows::Forms::Button());
			this->Speakbtn2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->trainBtn = (gcnew System::Windows::Forms::Button());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->train = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(313, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(348, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Welcome to Speech Based Browsing System";
			// 
			// GoogleLbl
			// 
			this->GoogleLbl->AutoSize = true;
			this->GoogleLbl->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->GoogleLbl->ForeColor = System::Drawing::Color::Red;
			this->GoogleLbl->Location = System::Drawing::Point(469, 165);
			this->GoogleLbl->Name = L"GoogleLbl";
			this->GoogleLbl->Padding = System::Windows::Forms::Padding(1);
			this->GoogleLbl->Size = System::Drawing::Size(50, 17);
			this->GoogleLbl->TabIndex = 29;
			this->GoogleLbl->Text = L"Search";
			this->GoogleLbl->Visible = false;
			// 
			// WikiLbl
			// 
			this->WikiLbl->AutoSize = true;
			this->WikiLbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->WikiLbl->ForeColor = System::Drawing::Color::Navy;
			this->WikiLbl->Location = System::Drawing::Point(369, 165);
			this->WikiLbl->Name = L"WikiLbl";
			this->WikiLbl->Size = System::Drawing::Size(62, 16);
			this->WikiLbl->TabIndex = 28;
			this->WikiLbl->Text = L"WikiPedia";
			this->WikiLbl->Visible = false;
			// 
			// youtubeLbl
			// 
			this->youtubeLbl->AutoSize = true;
			this->youtubeLbl->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->youtubeLbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->youtubeLbl->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->youtubeLbl->ForeColor = System::Drawing::Color::Red;
			this->youtubeLbl->Location = System::Drawing::Point(551, 164);
			this->youtubeLbl->Name = L"youtubeLbl";
			this->youtubeLbl->Size = System::Drawing::Size(64, 17);
			this->youtubeLbl->TabIndex = 27;
			this->youtubeLbl->Text = L"YouTube";
			this->youtubeLbl->Visible = false;
			// 
			// SearchLbl2
			// 
			this->SearchLbl2->AutoSize = true;
			this->SearchLbl2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SearchLbl2->Location = System::Drawing::Point(388, 100);
			this->SearchLbl2->Name = L"SearchLbl2";
			this->SearchLbl2->Padding = System::Windows::Forms::Padding(2);
			this->SearchLbl2->Size = System::Drawing::Size(212, 20);
			this->SearchLbl2->TabIndex = 39;
			this->SearchLbl2->Text = L"Say any of these word to search under";
			this->SearchLbl2->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(390, 234);
			this->label11->Name = L"label11";
			this->label11->Padding = System::Windows::Forms::Padding(4);
			this->label11->Size = System::Drawing::Size(208, 27);
			this->label11->TabIndex = 40;
			this->label11->Text = L"These are the avialble words";
			this->label11->Visible = false;
			// 
			// startBtn
			// 
			this->startBtn->Location = System::Drawing::Point(457, 58);
			this->startBtn->Name = L"startBtn";
			this->startBtn->Size = System::Drawing::Size(75, 23);
			this->startBtn->TabIndex = 41;
			this->startBtn->Text = L"Start";
			this->startBtn->UseVisualStyleBackColor = true;
			this->startBtn->Click += gcnew System::EventHandler(this, &Form1::startBtn_Click);
			// 
			// Speakbtn2
			// 
			this->Speakbtn2->Location = System::Drawing::Point(457, 195);
			this->Speakbtn2->Name = L"Speakbtn2";
			this->Speakbtn2->Size = System::Drawing::Size(75, 23);
			this->Speakbtn2->TabIndex = 42;
			this->Speakbtn2->Text = L"Speak";
			this->Speakbtn2->UseVisualStyleBackColor = true;
			this->Speakbtn2->Visible = false;
			this->Speakbtn2->Click += gcnew System::EventHandler(this, &Form1::Speakbtn2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Maroon;
			this->label7->Location = System::Drawing::Point(620, 280);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(2);
			this->label7->Size = System::Drawing::Size(41, 19);
			this->label7->TabIndex = 46;
			this->label7->Tag = L"v";
			this->label7->Text = L"Gold";
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(519, 280);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(2);
			this->label6->Size = System::Drawing::Size(51, 19);
			this->label6->TabIndex = 45;
			this->label6->Text = L"Dollor";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(415, 280);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(2);
			this->label5->Size = System::Drawing::Size(59, 19);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Corona";
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(313, 280);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(2);
			this->label4->Size = System::Drawing::Size(59, 19);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Speech";
			this->label4->Visible = false;
			// 
			// trainBtn
			// 
			this->trainBtn->Location = System::Drawing::Point(457, 349);
			this->trainBtn->Name = L"trainBtn";
			this->trainBtn->Size = System::Drawing::Size(75, 23);
			this->trainBtn->TabIndex = 48;
			this->trainBtn->Text = L"Train";
			this->trainBtn->UseVisualStyleBackColor = true;
			this->trainBtn->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// input
			// 
			this->input->Location = System::Drawing::Point(391, 434);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(207, 20);
			this->input->TabIndex = 50;
			this->input->Text = L"Input";
			this->input->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->input->Visible = false;
			this->input->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::textBox1_MouseClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(368, 388);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(4);
			this->label1->Size = System::Drawing::Size(247, 27);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Type word which you want to train";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// train
			// 
			this->train->Location = System::Drawing::Point(457, 471);
			this->train->Name = L"train";
			this->train->Size = System::Drawing::Size(75, 23);
			this->train->TabIndex = 52;
			this->train->Text = L"Record";
			this->train->UseVisualStyleBackColor = true;
			this->train->Visible = false;
			this->train->Click += gcnew System::EventHandler(this, &Form1::recordBtn_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(457, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 20);
			this->button1->TabIndex = 53;
			this->button1->Text = L"CONTINUE ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 506);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->train);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->input);
			this->Controls->Add(this->trainBtn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Speakbtn2);
			this->Controls->Add(this->startBtn);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->SearchLbl2);
			this->Controls->Add(this->GoogleLbl);
			this->Controls->Add(this->WikiLbl);
			this->Controls->Add(this->youtubeLbl);
			this->Controls->Add(this->label3);
			this->Name = L"Form1";
			this->Text = L"MyBrowser";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void startBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->youtubeLbl->Visible = true;
				 this->WikiLbl->Visible = true;
				 this->GoogleLbl->Visible = true;
				 this->SearchLbl2->Visible = true;
				 this->Speakbtn2->Visible = true;
				 this->button1->Visible = true;
				 MessageBox::Show("Speak Search if you want to search on google , \nYoutube if you  want to search on Youtube , \nWikipedia if you  want to search on Wikipedia ","Message");
				 yesstartstop();
				 

				 fun1();
			 }
private: System::Void Speakbtn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 recognise();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 this->input->Visible = true;
			 this->label1->Visible = true;
			 this->train->Visible = true;
			 MessageBox::Show("Type the word which you want to train then click Record button to start recording it will record 20 times ","Message");
			 
		 }
private: System::Void textBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 input->Text = "";
		 }
private : System:: Void fun1()
		  {
			 label11->Visible = true;
			 label4->Visible = true;
			 label5->Visible = true;
			 label6->Visible = true;
			 label7->Visible = true;
	//		 label8->Visible = true;
		  }
private : System:: Void showWords()
		  {
			 label11->Visible = true;
			 label4->Visible = true;
			 label5->Visible = true;
			 label6->Visible = true;
			 label7->Visible = true;
//			 label8->Visible = true;
		  }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 string s=yesstartstop();
			 if(s=="yes")
			 {
				 recognise();
			 }
			 else
			 {
				 if(s=="stop")exit(0);
			 }
		 }
private: System::Void recordBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 RecordTrain();
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

