#pragma once
#include "HomePage.h"
#include "regLog.h"
#include "userData.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace Travel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(494, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(768, 673);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->button4);
			this->panel9->Controls->Add(this->button5);
			this->panel9->Controls->Add(this->panel11);
			this->panel9->Controls->Add(this->panel10);
			this->panel9->Location = System::Drawing::Point(177, 295);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(450, 281);
			this->panel9->TabIndex = 9;
			this->panel9->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Turquoise;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(394, 14);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(44, 49);
			this->button4->TabIndex = 11;
			this->button4->Text = L">>";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Transparent;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(394, 127);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(44, 49);
			this->button5->TabIndex = 10;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->panel11->Controls->Add(this->textBox7);
			this->panel11->Location = System::Drawing::Point(23, 127);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(365, 49);
			this->panel11->TabIndex = 6;
			this->panel11->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(17, 12);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(333, 23);
			this->textBox7->TabIndex = 1;
			this->textBox7->Text = L"ENTER A NEW PASSWORD";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->Click += gcnew System::EventHandler(this, &MyForm::textBox7_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->panel10->Controls->Add(this->textBox6);
			this->panel10->Location = System::Drawing::Point(23, 14);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(365, 49);
			this->panel10->TabIndex = 5;
			this->panel10->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(17, 12);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(333, 23);
			this->textBox6->TabIndex = 1;
			this->textBox6->Text = L"ENTER REGISTERED EMAIL";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->Click += gcnew System::EventHandler(this, &MyForm::textBox6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->ForeColor = System::Drawing::Color::Cyan;
			this->label8->Location = System::Drawing::Point(460, 263);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(155, 16);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Forgot password\?";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::forgot);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Enabled = false;
			this->label7->Font = (gcnew System::Drawing::Font(L"Aharoni", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label7->ForeColor = System::Drawing::Color::Silver;
			this->label7->Location = System::Drawing::Point(297, 635);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(226, 14);
			this->label7->TabIndex = 7;
			this->label7->Text = L"CONTINUE WITHOUT SIGNING IN";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label7->Visible = false;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::cont);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(571, 193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(44, 63);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::logIn);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Location = System::Drawing::Point(200, 193);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(365, 63);
			this->panel4->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(14, 17);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(336, 29);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"PASSWORD";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(200, 106);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(415, 63);
			this->panel3->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(14, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(385, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"USER NAME";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Aharoni", 40, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(303, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(287, 66);
			this->label6->TabIndex = 0;
			this->label6->Text = L"SIGN IN";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(494, 673);
			this->panel2->TabIndex = 1;
			this->panel2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->checkBox2);
			this->panel5->Controls->Add(this->panel8);
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Location = System::Drawing::Point(79, 419);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(338, 251);
			this->panel5->TabIndex = 7;
			this->panel5->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(85, 203);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 35);
			this->button3->TabIndex = 8;
			this->button3->Text = L">>";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Aharoni", 9, System::Drawing::FontStyle::Bold));
			this->checkBox2->Location = System::Drawing::Point(65, 163);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(216, 44);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"AGREE TO THE TERMS AND CONDITION";
			this->checkBox2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->panel8->Controls->Add(this->textBox5);
			this->panel8->Location = System::Drawing::Point(36, 123);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(259, 34);
			this->panel8->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(17, 7);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(231, 23);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"EMAIL";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->Click += gcnew System::EventHandler(this, &MyForm::textBox5_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->panel7->Controls->Add(this->textBox4);
			this->panel7->Location = System::Drawing::Point(36, 69);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(259, 34);
			this->panel7->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(17, 7);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(231, 23);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"PASSWORD";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->Click += gcnew System::EventHandler(this, &MyForm::textBox4_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->panel6->Controls->Add(this->textBox3);
			this->panel6->Font = (gcnew System::Drawing::Font(L"Aharoni", 8, System::Drawing::FontStyle::Bold));
			this->panel6->Location = System::Drawing::Point(36, 18);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(259, 34);
			this->panel6->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(16, 7);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(231, 23);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"USER NAME";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->Click += gcnew System::EventHandler(this, &MyForm::textBox3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(169, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 35);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Sign Up";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::signup);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Aharoni", 12, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(193, 323);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"NO ACCOUNT \?";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Aharoni", 8, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::LightGray;
			this->label5->Location = System::Drawing::Point(140, 339);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(234, 45);
			this->label5->TabIndex = 6;
			this->label5->Text = L"CREATE AN ACCOUNT TO GET THE BEST DEAL";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Aharoni", 10, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Gainsboro;
			this->label3->Location = System::Drawing::Point(173, 274);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"TRAVEL OVER THE TOP";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Aharoni", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label2->Location = System::Drawing::Point(71, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(429, 47);
			this->label2->TabIndex = 2;
			this->label2->Text = L"TRAVEL SOLUTION";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Aharoni", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label1->Location = System::Drawing::Point(205, 193);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"A to Z";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(165, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(162, 178);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Aharoni", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "USER NAME") {
		textBox1->Text = "";
	}
	if (textBox2->Text == "") {
		textBox2->Text = "PASSWORD";
	}
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "PASSWORD") {
		textBox2->Text = "";
	}
	if (textBox1->Text == "") {
		textBox1->Text = "USER NAME";
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		textBox1->Text = "USER NAME";
	}
	if (textBox2->Text == "") {
		textBox2->Text = "PASSWORD";
	}
}
private: System::Void signup(System::Object^ sender, System::EventArgs^ e) {
	panel5->Visible = true;
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "USER NAME") {
		textBox3->Text = "";
	}
	if (textBox4->Text == "") {
		textBox4->Text = "PASSWORD";
	}
	if (textBox5->Text == "") {
		textBox5->Text = "EMAIL";
	}
}
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "") {
		textBox3->Text = "USER NAME";
	}
	if (textBox4->Text == "PASSWORD") {
		textBox4->Text = "";
	}
	if (textBox5->Text == "") {
		textBox5->Text = "EMAIL";
	}
}
private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "") {
		textBox3->Text = "USER NAME";
	}
	if (textBox4->Text == "") {
		textBox4->Text = "PASSWORD";
	}
	if (textBox5->Text == "EMAIL") {
		textBox5->Text = "";
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked == true) {
		button3->Visible = true;
	}else {
		button3->Visible = false;
	}
	
	if (textBox3->Text == "USER NAME" || textBox4->Text == "PASSWORD" || textBox5->Text == "EMAIL" || textBox5->Text == "") {
		button3->Enabled = false;
	}
	else {
		button3->Enabled = true;
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string fname = msclr::interop::marshal_as<std::string>(textBox3->Text);
	std::string fpass = msclr::interop::marshal_as<std::string>(textBox4->Text);
	std::string fmail = msclr::interop::marshal_as<std::string>(textBox5->Text);
	int u = 0, l = 0, d = 0, s = 0, m = 0;
	for (int i = 0; i<fpass.length() ; i++) {
		if (fpass.at(i) >= 'A' && fpass.at(i) <= 'Z') u++;
	
		if (fpass.at(i) >= 'a' && fpass.at(i) <= 'z') l++;
	
		if (fpass.at(i) >= '0' && fpass.at(i) <= '9') d++;
	
		if (fpass.at(i)=='@' || fpass.at(i) == '_' || fpass.at(i) == '&' || fpass.at(i) == '%' || fpass.at(i) == '$' ) s++;
	}

	if (isCornerPresent(fmail, "@gmail.com") || isCornerPresent(fmail, "@yahoo.com") || isCornerPresent(fmail, "@hotmail.com"))
		m = 1;
	if (u != 0 && l != 0 && d != 0 && s != 0 && m==1) {
		if (userRegister(fname, fpass, fmail)) {
			MessageBox::Show("Account Created Successfully");
		}
		else {
			MessageBox::Show("User name already exists");
		}
	}
	else {
		if(u == 0 || l == 0 || d == 0 || s == 0 || m == 1)
			MessageBox::Show("Password must contain Uppercase, Lowercase,\nDigits and at least one Special Symbol(@, _, &, %, $)");
		if(m==0)
			MessageBox::Show("Invalid Email Address");
	}
}
private: System::Void logIn(System::Object^ sender, System::EventArgs^ e) {
	std::string name = msclr::interop::marshal_as<std::string>(textBox1->Text);
	std::string pass = msclr::interop::marshal_as<std::string>(textBox2->Text);

	if (userLogin(name, pass)) {

		HomePage^ h1 = gcnew HomePage(this);
		this->Hide();
		h1->ShowDialog();

	}
	else {
		MessageBox::Show("Invalid data");
	}
}
private: System::Void forgot(System::Object^ sender, System::EventArgs^ e) {
	std::string name = msclr::interop::marshal_as<std::string>(textBox1->Text);

	if (frgt(name)) {
		panel9->Visible = true;
		panel10->Visible = true;
	}
	else {
		MessageBox::Show("Invalid username");
	}

}
private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6->Text == "ENTER REGISTERED EMAIL") {
		textBox6->Text = "";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string uname = msclr::interop::marshal_as<std::string>(textBox1->Text);
	std::string umail = msclr::interop::marshal_as<std::string>(textBox6->Text);

	if (checkMail(uname, umail)) {
		panel11->Visible = true;
		button5->Visible = true;
	}
	else {
		MessageBox::Show("Invalid Email");
	}
}

private: System::Void textBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7->Text == "ENTER A NEW PASSWORD") {
		textBox7->Text = "";
	}	
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7->Text == "") {
		MessageBox::Show("Password Can't be blank");
	}
	else {
		std::string uname = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string upass = msclr::interop::marshal_as<std::string>(textBox7->Text);
		int u = 0, l = 0, d = 0, s = 0;
		for (int i = 0; i < upass.length(); i++) {
			if (upass.at(i) >= 'A' && upass.at(i) <= 'Z') u++;

			if (upass.at(i) >= 'a' && upass.at(i) <= 'z') l++;

			if (upass.at(i) >= '0' && upass.at(i) <= '9') d++;

			if (upass.at(i) == '@' || upass.at(i) == '_' || upass.at(i) == '&' || upass.at(i) == '%' || upass.at(i) == '$') s++;
		}
		if (u != 0 && l != 0 && d != 0 && s != 0 ) {
			resetPass(uname, upass);
			MessageBox::Show("Password Changed Successfully\nPlease Login Again");
			
		}
		else {
			MessageBox::Show("Password must contain Uppercase, Lowercase,\nDigits and at least one Special Symbol(@, _, &, %, $)");
		}
	}

}


private: System::Void cont(System::Object^ sender, System::EventArgs^ e) {
	/*
	HomePage h1;
	this->Hide();
	h1.ShowDialog();
	*/
	this->Hide();
	HomePage^ h1 = gcnew HomePage(this);
	h1->ShowDialog();
}
};
}

