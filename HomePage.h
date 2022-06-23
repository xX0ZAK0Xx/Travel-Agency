#pragma once
#include "Pkg.h"
#include "Pay.h"
#include "profile.h"
#include "Mountains.h"
#include "Desert.h"
#include "Forest.h"
#include "Island.h"
#include "SeaBeach.h"
#include "SkyDiving.h"
#include "SnowFall.h"
#include "Summer.h"
#include "Winter.h"
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
//#include "MyForm.h"
namespace Travel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomePage
	/// </summary>
	public ref class HomePage : public System::Windows::Forms::Form
	{
	public:
        Form^ f;
		HomePage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}HomePage(Form^ f1)
        {
            InitializeComponent();
            f = f1;
            //
            //TODO: Add the constructor code here
            //
        }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox2;


	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;





	private: System::Windows::Forms::Panel^ panel2;




































































private: System::Windows::Forms::Panel^ panel1;




















private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ button6;

private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Label^ time1;

private: System::Windows::Forms::Label^ flight1;
private: System::Windows::Forms::Label^ from1;
private: System::Windows::Forms::Label^ dest1;
private: System::Windows::Forms::Label^ price1;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Label^ price3;



private: System::Windows::Forms::Label^ flight3;
private: System::Windows::Forms::Label^ from3;
private: System::Windows::Forms::Label^ dest3;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Label^ price2;

private: System::Windows::Forms::Label^ flight2;
private: System::Windows::Forms::Label^ from2;
private: System::Windows::Forms::Label^ dest2;
private: System::Windows::Forms::Label^ atime3;
private: System::Windows::Forms::Label^ time3;
private: System::Windows::Forms::Label^ atime2;
private: System::Windows::Forms::Label^ time2;
private: System::Windows::Forms::Label^ atime1;






private: System::Windows::Forms::Label^ date3;
private: System::Windows::Forms::Label^ date2;
private: System::Windows::Forms::Label^ date1;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel21;
private: System::Windows::Forms::PictureBox^ pictureBox58;
private: System::Windows::Forms::PictureBox^ pictureBox56;
private: System::Windows::Forms::PictureBox^ pictureBox54;
private: System::Windows::Forms::PictureBox^ pictureBox48;
private: System::Windows::Forms::PictureBox^ pictureBox46;
private: System::Windows::Forms::PictureBox^ pictureBox44;
private: System::Windows::Forms::PictureBox^ pictureBox38;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ label9;





















	protected:

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePage::typeid));
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel21 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->date3 = (gcnew System::Windows::Forms::Label());
            this->atime3 = (gcnew System::Windows::Forms::Label());
            this->price3 = (gcnew System::Windows::Forms::Label());
            this->time3 = (gcnew System::Windows::Forms::Label());
            this->flight3 = (gcnew System::Windows::Forms::Label());
            this->from3 = (gcnew System::Windows::Forms::Label());
            this->dest3 = (gcnew System::Windows::Forms::Label());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->date2 = (gcnew System::Windows::Forms::Label());
            this->atime2 = (gcnew System::Windows::Forms::Label());
            this->price2 = (gcnew System::Windows::Forms::Label());
            this->time2 = (gcnew System::Windows::Forms::Label());
            this->flight2 = (gcnew System::Windows::Forms::Label());
            this->from2 = (gcnew System::Windows::Forms::Label());
            this->dest2 = (gcnew System::Windows::Forms::Label());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->date1 = (gcnew System::Windows::Forms::Label());
            this->atime1 = (gcnew System::Windows::Forms::Label());
            this->price1 = (gcnew System::Windows::Forms::Label());
            this->time1 = (gcnew System::Windows::Forms::Label());
            this->flight1 = (gcnew System::Windows::Forms::Label());
            this->from1 = (gcnew System::Windows::Forms::Label());
            this->dest1 = (gcnew System::Windows::Forms::Label());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->tableLayoutPanel2->SuspendLayout();
            this->panel2->SuspendLayout();
            this->tableLayoutPanel21->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel3->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel7->SuspendLayout();
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)),
                static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->tableLayoutPanel1->ColumnCount = 6;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                9.629875F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                66.47865F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                7.252216F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                0.6446414F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                7.881118F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                7.880678F)));
            this->tableLayoutPanel1->Controls->Add(this->button2, 4, 0);
            this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->button1, 2, 0);
            this->tableLayoutPanel1->Controls->Add(this->button5, 5, 0);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 1;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1241, 140);
            this->tableLayoutPanel1->TabIndex = 0;
            // 
            // button2
            // 
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Aharoni", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(177)));
            this->button2->ForeColor = System::Drawing::Color::White;
            this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
            this->button2->Location = System::Drawing::Point(1047, 4);
            this->button2->Margin = System::Windows::Forms::Padding(4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(90, 132);
            this->button2->TabIndex = 6;
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &HomePage::prof);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(4, 4);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(98, 132);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // button1
            // 
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Aharoni", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(177)));
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
            this->button1->Location = System::Drawing::Point(949, 4);
            this->button1->Margin = System::Windows::Forms::Padding(4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(82, 132);
            this->button1->TabIndex = 1;
            this->button1->UseVisualStyleBackColor = true;
            // 
            // button5
            // 
            this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button5->Dock = System::Windows::Forms::DockStyle::Left;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->ForeColor = System::Drawing::Color::White;
            this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
            this->button5->Location = System::Drawing::Point(1144, 3);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(94, 134);
            this->button5->TabIndex = 7;
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &HomePage::button5_Click);
            // 
            // comboBox2
            // 
            this->comboBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->comboBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
            this->comboBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
            this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->comboBox2->Font = (gcnew System::Drawing::Font(L"Aharoni", 12, System::Drawing::FontStyle::Bold));
            this->comboBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(40) {
                L"Paris", L"Tokyo", L"Toronto", L"Switzerland",
                    L"Saudi Arabia", L"Africa", L"Jaipur", L"Brazil", L"London", L"Australia", L"Scotland", L"Indonesia", L"Portugal", L"Greece",
                    L"France", L"Mauritius", L"Argentina", L"Kashmir", L"Dubai", L"New Zealand", L"Rome", L"San Diego", L"Nova Scotia", L"Alberta",
                    L"Dublin", L"Bali", L"New York", L"Mexico", L"Istanbul", L"Maldives", L"Barcelona", L"Singapore", L"Costa Rica", L"Thailand",
                    L"Spain", L"Machu Picchu", L"Tokyo", L"Santorini", L"Washington DC", L"Prague"
            });
            this->comboBox2->Location = System::Drawing::Point(224, 30);
            this->comboBox2->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(238, 28);
            this->comboBox2->TabIndex = 4;
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label1->Font = (gcnew System::Drawing::Font(L"Aharoni", 15, System::Drawing::FontStyle::Bold));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label1->Location = System::Drawing::Point(4, 32);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(188, 24);
            this->label1->TabIndex = 7;
            this->label1->Text = L"DESTINATION :";
            // 
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Aharoni", 15, System::Drawing::FontStyle::Bold));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label4->Location = System::Drawing::Point(494, 0);
            this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(328, 89);
            this->label4->TabIndex = 10;
            this->label4->Text = L"CHOOSE TRAVEL DATE";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->ColumnCount = 4;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                40.04107F)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                59.95893F)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                336)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                414)));
            this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
            this->tableLayoutPanel2->Controls->Add(this->comboBox2, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->label4, 2, 0);
            this->tableLayoutPanel2->Controls->Add(this->dateTimePicker1, 3, 0);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
            this->tableLayoutPanel2->Location = System::Drawing::Point(0, 140);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 1;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(1241, 89);
            this->tableLayoutPanel2->TabIndex = 14;
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
            this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)),
                static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(177)));
            this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->dateTimePicker1->Location = System::Drawing::Point(864, 29);
            this->dateTimePicker1->MaxDate = System::DateTime(2023, 12, 31, 0, 0, 0, 0);
            this->dateTimePicker1->MinDate = System::DateTime(2022, 1, 1, 0, 0, 0, 0);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->dateTimePicker1->Size = System::Drawing::Size(338, 30);
            this->dateTimePicker1->TabIndex = 40;
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->label9);
            this->panel2->Controls->Add(this->tableLayoutPanel21);
            this->panel2->Controls->Add(this->label41);
            this->panel2->Controls->Add(this->panel1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel2->Location = System::Drawing::Point(0, 722);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1241, 1362);
            this->panel2->TabIndex = 21;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &HomePage::panel2_Paint);
            // 
            // label9
            // 
            this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Aharoni", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(177)));
            this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label9->Location = System::Drawing::Point(260, 20);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(769, 311);
            this->label9->TabIndex = 41;
            this->label9->Text = L"CHECKOUT OUR BEST DEALS BELOW FOR AN EXCITING HOLIDAY";
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel21
            // 
            this->tableLayoutPanel21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel21->ColumnCount = 5;
            this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                74.40476F)));
            this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25.59524F)));
            this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                304)));
            this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                106)));
            this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                288)));
            this->tableLayoutPanel21->Controls->Add(this->pictureBox58, 4, 4);
            this->tableLayoutPanel21->Controls->Add(this->pictureBox56, 2, 4);
            this->tableLayoutPanel21->Controls->Add(this->pictureBox54, 0, 4);
            this->tableLayoutPanel21->Controls->Add(this->pictureBox48, 4, 2);
            this->tableLayoutPanel21->Controls->Add(this->pictureBox46, 2, 2);
            this->tableLayoutPanel21->Controls->Add(this->pictureBox44, 0, 2);
            this->tableLayoutPanel21->Controls->Add(this->pictureBox38, 4, 0);
            this->tableLayoutPanel21->Controls->Add(this->pictureBox4, 2, 0);
            this->tableLayoutPanel21->Controls->Add(this->pictureBox2, 0, 0);
            this->tableLayoutPanel21->Location = System::Drawing::Point(68, 388);
            this->tableLayoutPanel21->Name = L"tableLayoutPanel21";
            this->tableLayoutPanel21->RowCount = 5;
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 89.91597F)));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.08403F)));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                222)));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                23)));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                224)));
            this->tableLayoutPanel21->Size = System::Drawing::Size(1113, 698);
            this->tableLayoutPanel21->TabIndex = 40;
            // 
            // pictureBox58
            // 
            this->pictureBox58->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox58->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
            this->pictureBox58->Location = System::Drawing::Point(827, 476);
            this->pictureBox58->Name = L"pictureBox58";
            this->pictureBox58->Size = System::Drawing::Size(283, 219);
            this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox58->TabIndex = 24;
            this->pictureBox58->TabStop = false;
            this->pictureBox58->Click += gcnew System::EventHandler(this, &HomePage::pictureBox58_Click);
            // 
            // pictureBox56
            // 
            this->pictureBox56->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox56->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
            this->pictureBox56->Location = System::Drawing::Point(417, 476);
            this->pictureBox56->Name = L"pictureBox56";
            this->pictureBox56->Size = System::Drawing::Size(298, 219);
            this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox56->TabIndex = 22;
            this->pictureBox56->TabStop = false;
            this->pictureBox56->Click += gcnew System::EventHandler(this, &HomePage::pictureBox56_Click);
            // 
            // pictureBox54
            // 
            this->pictureBox54->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox54->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
            this->pictureBox54->Location = System::Drawing::Point(3, 476);
            this->pictureBox54->Name = L"pictureBox54";
            this->pictureBox54->Size = System::Drawing::Size(302, 219);
            this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox54->TabIndex = 20;
            this->pictureBox54->TabStop = false;
            this->pictureBox54->Click += gcnew System::EventHandler(this, &HomePage::pictureBox54_Click);
            // 
            // pictureBox48
            // 
            this->pictureBox48->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox48->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
            this->pictureBox48->Location = System::Drawing::Point(827, 231);
            this->pictureBox48->Name = L"pictureBox48";
            this->pictureBox48->Size = System::Drawing::Size(283, 216);
            this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox48->TabIndex = 14;
            this->pictureBox48->TabStop = false;
            this->pictureBox48->Click += gcnew System::EventHandler(this, &HomePage::pictureBox48_Click);
            // 
            // pictureBox46
            // 
            this->pictureBox46->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox46->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
            this->pictureBox46->Location = System::Drawing::Point(417, 231);
            this->pictureBox46->Name = L"pictureBox46";
            this->pictureBox46->Size = System::Drawing::Size(298, 216);
            this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox46->TabIndex = 12;
            this->pictureBox46->TabStop = false;
            this->pictureBox46->Click += gcnew System::EventHandler(this, &HomePage::pictureBox46_Click);
            // 
            // pictureBox44
            // 
            this->pictureBox44->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox44->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
            this->pictureBox44->Location = System::Drawing::Point(3, 231);
            this->pictureBox44->Name = L"pictureBox44";
            this->pictureBox44->Size = System::Drawing::Size(302, 216);
            this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox44->TabIndex = 10;
            this->pictureBox44->TabStop = false;
            this->pictureBox44->Click += gcnew System::EventHandler(this, &HomePage::pictureBox44_Click);
            // 
            // pictureBox38
            // 
            this->pictureBox38->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox38->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
            this->pictureBox38->Location = System::Drawing::Point(827, 3);
            this->pictureBox38->Name = L"pictureBox38";
            this->pictureBox38->Size = System::Drawing::Size(283, 199);
            this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox38->TabIndex = 4;
            this->pictureBox38->TabStop = false;
            this->pictureBox38->Click += gcnew System::EventHandler(this, &HomePage::pictureBox38_Click);
            // 
            // pictureBox4
            // 
            this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(417, 3);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(298, 199);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 2;
            this->pictureBox4->TabStop = false;
            this->pictureBox4->Click += gcnew System::EventHandler(this, &HomePage::pictureBox4_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(3, 3);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(302, 199);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 0;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &HomePage::pictureBox2_Click);
            // 
            // label41
            // 
            this->label41->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label41->BackColor = System::Drawing::Color::Transparent;
            this->label41->Font = (gcnew System::Drawing::Font(L"Aharoni", 30, System::Drawing::FontStyle::Bold));
            this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label41->Location = System::Drawing::Point(400, -3402);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(501, 312);
            this->label41->TabIndex = 39;
            this->label41->Text = L"CHECKOUT OUR BEST TRAVEL PACKAGES  BELOW FOR AN EXCITING HOLIDAY";
            this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel1->Location = System::Drawing::Point(0, 1262);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1241, 100);
            this->panel1->TabIndex = 38;
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->ForeColor = System::Drawing::Color::White;
            this->button4->Location = System::Drawing::Point(0, 0);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(1241, 44);
            this->button4->TabIndex = 39;
            this->button4->Text = L"SEARCH";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &HomePage::button4_Click);
            // 
            // monthCalendar1
            // 
            this->monthCalendar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->monthCalendar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->monthCalendar1->Location = System::Drawing::Point(821, 82);
            this->monthCalendar1->Name = L"monthCalendar1";
            this->monthCalendar1->TabIndex = 11;
            // 
            // panel3
            // 
            this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel3->BackColor = System::Drawing::SystemColors::ControlLightLight;
            this->panel3->Controls->Add(this->panel6);
            this->panel3->Controls->Add(this->panel5);
            this->panel3->Controls->Add(this->panel4);
            this->panel3->Controls->Add(this->button6);
            this->panel3->Location = System::Drawing::Point(207, 13);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(801, 709);
            this->panel3->TabIndex = 40;
            this->panel3->Visible = false;
            // 
            // panel6
            // 
            this->panel6->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
            this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel6->Controls->Add(this->date3);
            this->panel6->Controls->Add(this->atime3);
            this->panel6->Controls->Add(this->price3);
            this->panel6->Controls->Add(this->time3);
            this->panel6->Controls->Add(this->flight3);
            this->panel6->Controls->Add(this->from3);
            this->panel6->Controls->Add(this->dest3);
            this->panel6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->panel6->Location = System::Drawing::Point(95, 475);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(610, 189);
            this->panel6->TabIndex = 7;
            this->panel6->Click += gcnew System::EventHandler(this, &HomePage::panel6_Click);
            // 
            // date3
            // 
            this->date3->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->date3->AutoSize = true;
            this->date3->BackColor = System::Drawing::Color::White;
            this->date3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 7, System::Drawing::FontStyle::Bold));
            this->date3->ForeColor = System::Drawing::Color::Black;
            this->date3->Location = System::Drawing::Point(254, 118);
            this->date3->Name = L"date3";
            this->date3->Size = System::Drawing::Size(15, 18);
            this->date3->TabIndex = 12;
            this->date3->Text = L"0";
            // 
            // atime3
            // 
            this->atime3->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->atime3->AutoSize = true;
            this->atime3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->atime3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
            this->atime3->ForeColor = System::Drawing::Color::White;
            this->atime3->Location = System::Drawing::Point(367, 30);
            this->atime3->Name = L"atime3";
            this->atime3->Size = System::Drawing::Size(95, 29);
            this->atime3->TabIndex = 10;
            this->atime3->Text = L"FROM T";
            // 
            // price3
            // 
            this->price3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->price3->AutoSize = true;
            this->price3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->price3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 10, System::Drawing::FontStyle::Bold));
            this->price3->ForeColor = System::Drawing::Color::White;
            this->price3->Location = System::Drawing::Point(372, 152);
            this->price3->Name = L"price3";
            this->price3->Size = System::Drawing::Size(81, 25);
            this->price3->TabIndex = 5;
            this->price3->Text = L"FROM T";
            // 
            // time3
            // 
            this->time3->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->time3->AutoSize = true;
            this->time3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->time3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
            this->time3->ForeColor = System::Drawing::Color::White;
            this->time3->Location = System::Drawing::Point(367, 3);
            this->time3->Name = L"time3";
            this->time3->Size = System::Drawing::Size(95, 29);
            this->time3->TabIndex = 9;
            this->time3->Text = L"FROM T";
            // 
            // flight3
            // 
            this->flight3->AutoSize = true;
            this->flight3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
                static_cast<System::Int32>(static_cast<System::Byte>(105)));
            this->flight3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 19, System::Drawing::FontStyle::Bold));
            this->flight3->ForeColor = System::Drawing::Color::White;
            this->flight3->Location = System::Drawing::Point(3, 3);
            this->flight3->Name = L"flight3";
            this->flight3->Size = System::Drawing::Size(149, 45);
            this->flight3->TabIndex = 3;
            this->flight3->Text = L"FROM T";
            // 
            // from3
            // 
            this->from3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->from3->AutoSize = true;
            this->from3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
                static_cast<System::Int32>(static_cast<System::Byte>(105)));
            this->from3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 19, System::Drawing::FontStyle::Bold));
            this->from3->ForeColor = System::Drawing::Color::White;
            this->from3->Location = System::Drawing::Point(18, 60);
            this->from3->Name = L"from3";
            this->from3->Size = System::Drawing::Size(149, 45);
            this->from3->TabIndex = 2;
            this->from3->Text = L"FROM T";
            // 
            // dest3
            // 
            this->dest3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dest3->AutoSize = true;
            this->dest3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->dest3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 19, System::Drawing::FontStyle::Bold));
            this->dest3->ForeColor = System::Drawing::Color::White;
            this->dest3->Location = System::Drawing::Point(284, 62);
            this->dest3->Name = L"dest3";
            this->dest3->Size = System::Drawing::Size(149, 45);
            this->dest3->TabIndex = 1;
            this->dest3->Text = L"FROM T";
            // 
            // panel5
            // 
            this->panel5->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
            this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel5->Controls->Add(this->date2);
            this->panel5->Controls->Add(this->atime2);
            this->panel5->Controls->Add(this->price2);
            this->panel5->Controls->Add(this->time2);
            this->panel5->Controls->Add(this->flight2);
            this->panel5->Controls->Add(this->from2);
            this->panel5->Controls->Add(this->dest2);
            this->panel5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->panel5->Location = System::Drawing::Point(95, 259);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(610, 189);
            this->panel5->TabIndex = 6;
            this->panel5->Click += gcnew System::EventHandler(this, &HomePage::panel5_Click);
            // 
            // date2
            // 
            this->date2->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->date2->AutoSize = true;
            this->date2->BackColor = System::Drawing::Color::White;
            this->date2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 7, System::Drawing::FontStyle::Bold));
            this->date2->ForeColor = System::Drawing::Color::Black;
            this->date2->Location = System::Drawing::Point(254, 116);
            this->date2->Name = L"date2";
            this->date2->Size = System::Drawing::Size(15, 18);
            this->date2->TabIndex = 10;
            this->date2->Text = L"0";
            // 
            // atime2
            // 
            this->atime2->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->atime2->AutoSize = true;
            this->atime2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->atime2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
            this->atime2->ForeColor = System::Drawing::Color::White;
            this->atime2->Location = System::Drawing::Point(367, 30);
            this->atime2->Name = L"atime2";
            this->atime2->Size = System::Drawing::Size(95, 29);
            this->atime2->TabIndex = 8;
            this->atime2->Text = L"FROM T";
            // 
            // price2
            // 
            this->price2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->price2->AutoSize = true;
            this->price2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->price2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 10, System::Drawing::FontStyle::Bold));
            this->price2->ForeColor = System::Drawing::Color::White;
            this->price2->Location = System::Drawing::Point(372, 152);
            this->price2->Name = L"price2";
            this->price2->Size = System::Drawing::Size(81, 25);
            this->price2->TabIndex = 5;
            this->price2->Text = L"FROM T";
            // 
            // time2
            // 
            this->time2->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->time2->AutoSize = true;
            this->time2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->time2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
            this->time2->ForeColor = System::Drawing::Color::White;
            this->time2->Location = System::Drawing::Point(367, 3);
            this->time2->Name = L"time2";
            this->time2->Size = System::Drawing::Size(95, 29);
            this->time2->TabIndex = 7;
            this->time2->Text = L"FROM T";
            // 
            // flight2
            // 
            this->flight2->AutoSize = true;
            this->flight2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)));
            this->flight2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 19, System::Drawing::FontStyle::Bold));
            this->flight2->ForeColor = System::Drawing::Color::White;
            this->flight2->Location = System::Drawing::Point(3, 3);
            this->flight2->Name = L"flight2";
            this->flight2->Size = System::Drawing::Size(149, 45);
            this->flight2->TabIndex = 3;
            this->flight2->Text = L"FROM T";
            // 
            // from2
            // 
            this->from2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->from2->AutoSize = true;
            this->from2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)));
            this->from2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 19, System::Drawing::FontStyle::Bold));
            this->from2->ForeColor = System::Drawing::Color::White;
            this->from2->Location = System::Drawing::Point(18, 60);
            this->from2->Name = L"from2";
            this->from2->Size = System::Drawing::Size(149, 45);
            this->from2->TabIndex = 2;
            this->from2->Text = L"FROM T";
            // 
            // dest2
            // 
            this->dest2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dest2->AutoSize = true;
            this->dest2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->dest2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 19, System::Drawing::FontStyle::Bold));
            this->dest2->ForeColor = System::Drawing::Color::White;
            this->dest2->Location = System::Drawing::Point(284, 62);
            this->dest2->Name = L"dest2";
            this->dest2->Size = System::Drawing::Size(149, 45);
            this->dest2->TabIndex = 1;
            this->dest2->Text = L"FROM T";
            // 
            // panel4
            // 
            this->panel4->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
            this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel4->Controls->Add(this->date1);
            this->panel4->Controls->Add(this->atime1);
            this->panel4->Controls->Add(this->price1);
            this->panel4->Controls->Add(this->time1);
            this->panel4->Controls->Add(this->flight1);
            this->panel4->Controls->Add(this->from1);
            this->panel4->Controls->Add(this->dest1);
            this->panel4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->panel4->Location = System::Drawing::Point(95, 49);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(610, 189);
            this->panel4->TabIndex = 1;
            this->panel4->Click += gcnew System::EventHandler(this, &HomePage::panel4_Click);
            // 
            // date1
            // 
            this->date1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->date1->AutoSize = true;
            this->date1->BackColor = System::Drawing::Color::White;
            this->date1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 7, System::Drawing::FontStyle::Bold));
            this->date1->ForeColor = System::Drawing::Color::Black;
            this->date1->Location = System::Drawing::Point(254, 117);
            this->date1->Name = L"date1";
            this->date1->Size = System::Drawing::Size(15, 18);
            this->date1->TabIndex = 9;
            this->date1->Text = L"0";
            // 
            // atime1
            // 
            this->atime1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->atime1->AutoSize = true;
            this->atime1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->atime1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
            this->atime1->ForeColor = System::Drawing::Color::White;
            this->atime1->Location = System::Drawing::Point(367, 29);
            this->atime1->Name = L"atime1";
            this->atime1->Size = System::Drawing::Size(95, 29);
            this->atime1->TabIndex = 6;
            this->atime1->Text = L"FROM T";
            // 
            // price1
            // 
            this->price1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->price1->AutoSize = true;
            this->price1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->price1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 10, System::Drawing::FontStyle::Bold));
            this->price1->ForeColor = System::Drawing::Color::White;
            this->price1->Location = System::Drawing::Point(372, 152);
            this->price1->Name = L"price1";
            this->price1->Size = System::Drawing::Size(81, 25);
            this->price1->TabIndex = 5;
            this->price1->Text = L"FROM T";
            // 
            // time1
            // 
            this->time1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->time1->AutoSize = true;
            this->time1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->time1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold));
            this->time1->ForeColor = System::Drawing::Color::White;
            this->time1->Location = System::Drawing::Point(367, 2);
            this->time1->Name = L"time1";
            this->time1->Size = System::Drawing::Size(95, 29);
            this->time1->TabIndex = 4;
            this->time1->Text = L"FROM T";
            // 
            // flight1
            // 
            this->flight1->AutoSize = true;
            this->flight1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
                static_cast<System::Int32>(static_cast<System::Byte>(180)));
            this->flight1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 19, System::Drawing::FontStyle::Bold));
            this->flight1->ForeColor = System::Drawing::Color::White;
            this->flight1->Location = System::Drawing::Point(3, 3);
            this->flight1->Name = L"flight1";
            this->flight1->Size = System::Drawing::Size(149, 45);
            this->flight1->TabIndex = 3;
            this->flight1->Text = L"FROM T";
            // 
            // from1
            // 
            this->from1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->from1->AutoSize = true;
            this->from1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
                static_cast<System::Int32>(static_cast<System::Byte>(180)));
            this->from1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 19, System::Drawing::FontStyle::Bold));
            this->from1->ForeColor = System::Drawing::Color::White;
            this->from1->Location = System::Drawing::Point(18, 60);
            this->from1->Name = L"from1";
            this->from1->Size = System::Drawing::Size(149, 45);
            this->from1->TabIndex = 2;
            this->from1->Text = L"FROM T";
            // 
            // dest1
            // 
            this->dest1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dest1->AutoSize = true;
            this->dest1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)));
            this->dest1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 19, System::Drawing::FontStyle::Bold));
            this->dest1->ForeColor = System::Drawing::Color::White;
            this->dest1->Location = System::Drawing::Point(284, 62);
            this->dest1->Name = L"dest1";
            this->dest1->Size = System::Drawing::Size(149, 45);
            this->dest1->TabIndex = 1;
            this->dest1->Text = L"FROM T";
            // 
            // button6
            // 
            this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->button6->Location = System::Drawing::Point(772, 4);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(25, 26);
            this->button6->TabIndex = 0;
            this->button6->Text = L"X";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &HomePage::button6_Click);
            // 
            // panel7
            // 
            this->panel7->Controls->Add(this->button4);
            this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel7->Location = System::Drawing::Point(0, 229);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(1241, 44);
            this->panel7->TabIndex = 41;
            // 
            // HomePage
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->ClientSize = System::Drawing::Size(1262, 673);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel7);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->tableLayoutPanel2);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Font = (gcnew System::Drawing::Font(L"Aharoni", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(177)));
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"HomePage";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"HomePage";
            this->tableLayoutPanel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->tableLayoutPanel21->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel3->ResumeLayout(false);
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel7->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
	
private: System::Void tableLayoutPanel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    //MyForm m1;
    this->Hide();
    f->Show();
}/*
 Paris | Tokyo | Toronto | Switzerland | Saudi Arabia | Africa | Jaipur | Brazil | London | Australia | Scotland | Indonesia | Portugal
Greece | France | Mauritius | Argentina | Kashmir | Dubai | New Zealand | Rome | San Diego | Nova Scotia | Alberta | Dublin | Bali | Dubai
New York | Rome | Mexico | Istanbul | Greece | Maldives | Italy | New Zealand | Barcelona | Singapore | Costa Rica | Thailand | Spain
Machu Picchu | Tokyo | Santorini | USA | Bangkok | Prague | Portugal
 */
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    if (comboBox2->Text=="") {
        MessageBox::Show("Invalid parameters");
    }
    else {
        from1->Text = "DAC"; from2->Text = "DAC"; from3->Text = "DAC";
        if (comboBox2->Text == "Paris") {
            flight1->Text = "EK583"; flight2->Text = "EK583"; flight3->Text = "EK583";
            date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
            dest1->Text = "CDG"; dest2->Text = "CDG"; dest3->Text = "CDG";
            time1->Text = "10:15"; atime1->Text = "20:00";
            time2->Text = "10:15"; atime2->Text = "20:00";
            time3->Text = "10:15"; atime3->Text = "20:00";
            price1->Text = "45000";
            price2->Text = "48000";
            price3->Text = "51000";
        }else if (comboBox2->Text == "Tokyo") {
            flight1->Text = "MH103"; flight2->Text = "MH103"; flight3->Text = "MH103";
            date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
            dest1->Text = "NRT"; dest2->Text = "NRT"; dest3->Text = "NRT";
            time1->Text = "12:15"; atime1->Text = "07:05+1";
            time2->Text = "12:15"; atime2->Text = "07:05+1";
            time3->Text = "12:15"; atime3->Text = "07:05+1";
            price1->Text = "55000";
            price2->Text = "58000";
            price3->Text = "62200";
        }else if (comboBox2->Text == "Toronto") {
            flight1->Text = "EK585"; flight2->Text = "EK585"; flight3->Text = "EK585";
            date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
            dest1->Text = "YYZ"; dest2->Text = "YYZ"; dest3->Text = "YYZ";
            time1->Text = "22:40"; atime1->Text = "13:10+1";
            time2->Text = "22:40"; atime2->Text = "13:10+1";
            time3->Text = "22:40"; atime3->Text = "13:10+1";
            price1->Text = "900000";
            price2->Text = "980000";
            price3->Text = "104000";
        }else if (comboBox2->Text == "Switzerland") {
            flight1->Text = "QR643"; flight2->Text = "QR643"; flight3->Text = "QR643";
            date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
            dest1->Text = "ZRH"; dest2->Text = "ZRH"; dest3->Text = "ZRH";
            time1->Text = "04:20"; atime1->Text = "13:40";
            time2->Text = "04:20"; atime2->Text = "13:40";
            time3->Text = "04:20"; atime3->Text = "13:40";
            price1->Text = "49000";
            price2->Text = "58000";
            price3->Text = "63000";
        }
        else if (comboBox2->Text == "Saudi Arabia") {
            flight1->Text = "SV807"; flight2->Text = "SV807"; flight3->Text = "SV807";
            date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
            dest1->Text = "RUH"; dest2->Text = "RUH"; dest3->Text = "RUH";
            time1->Text = "10:15"; atime1->Text = "13:05";
            time2->Text = "10:15"; atime2->Text = "13:05";
            time3->Text = "10:15"; atime3->Text = "13:05";
            price1->Text = "49000";
            price2->Text = "58000";
            price3->Text = "67000";
        }
        else if (comboBox2->Text == "Africa") {
            flight1->Text = "QR635"; flight2->Text = "QR635"; flight3->Text = "QR635";
            date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
            dest1->Text = "CPT"; dest2->Text = "CPT"; dest3->Text = "CPT";
            time1->Text = "19:45"; atime1->Text = "10:45+1";
            time2->Text = "19:45"; atime2->Text = "10:45+1";
            time3->Text = "19:45"; atime3->Text = "10:45+1";
            price1->Text = "42000";
            price2->Text = "55000";
            price3->Text = "67000";
        }
        else if (comboBox2->Text == "Jaipur") {
            flight1->Text = "6E1859"; flight2->Text = "6E1859"; flight3->Text = "6E1859";
            date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
            dest1->Text = "JAI"; dest2->Text = "JAI"; dest3->Text = "JAI";
            time1->Text = "16:00"; atime1->Text = "23:30";
            time2->Text = "16:00"; atime2->Text = "23:30";
            time3->Text = "16:00"; atime3->Text = "23:30";
            price1->Text = "15000";
            price2->Text = "17000";
            price3->Text = "18000";
        }
        else if (comboBox2->Text == "Brazil") {
            flight1->Text = "EK585"; flight2->Text = "EK585"; flight3->Text = "EK585";
            date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
            dest1->Text = "MAO"; dest2->Text = "MAO"; dest3->Text = "MAO";
            time1->Text = "22:40"; atime1->Text = "13:10+1";
            time2->Text = "22:40"; atime2->Text = "13:10+1";
            time3->Text = "22:40"; atime3->Text = "13:10+1";
            price1->Text = "100000";
            price2->Text = "104000";
            price3->Text = "107000";
        }
        else if (comboBox2->Text == "London") {
        flight1->Text = "EK585"; flight2->Text = "EK585"; flight3->Text = "EK585";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "LHR"; dest2->Text = "LHR"; dest3->Text = "LHR";
        time1->Text = "22:40"; atime1->Text = "07:05+1";
        time2->Text = "22:40"; atime2->Text = "07:05+1";
        time3->Text = "22:40"; atime3->Text = "07:05+1";
        price1->Text = "75000";
        price2->Text = "82000";
        price3->Text = "85000";
        }
        else if (comboBox2->Text == "Australia") {
        flight1->Text = "MH103"; flight2->Text = "MH103"; flight3->Text = "MH103";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "SYD"; dest2->Text = "SYD"; dest3->Text = "SYD";
        time1->Text = "12:15"; atime1->Text = "11:25+1";
        time2->Text = "12:15"; atime2->Text = "11:25+1";
        time3->Text = "12:15"; atime3->Text = "11:25+1";
        price1->Text = "40000";
        price2->Text = "44000";
        price3->Text = "49000";
        }
        else if (comboBox2->Text == "Scotland") {
        flight1->Text = "EK583"; flight2->Text = "EK583"; flight3->Text = "EK583";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "EDI"; dest2->Text = "EDI"; dest3->Text = "EDI";
        time1->Text = "10:15"; atime1->Text = "22:15";
        time2->Text = "10:15"; atime2->Text = "22:15";
        time3->Text = "10:15"; atime3->Text = "22:15";
        price1->Text = "75000";
        price2->Text = "80000";
        price3->Text = "84000";
        }
        else if (comboBox2->Text == "Indonesia") {
        flight1->Text = "AK70"; flight2->Text = "AK70"; flight3->Text = "AK70";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "CGK"; dest2->Text = "CGK"; dest3->Text = "CGK";
        time1->Text = "22:55"; atime1->Text = "08:05+1";
        time2->Text = "22:55"; atime2->Text = "08:05+1";
        time3->Text = "22:55"; atime3->Text = "08:05+1";
        price1->Text = "25000";
        price2->Text = "29000";
        price3->Text = "33000";
        }
        else if (comboBox2->Text == "Portugal") {
        flight1->Text = "QR643"; flight2->Text = "QR643"; flight3->Text = "QR643";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "LIS"; dest2->Text = "LIS"; dest3->Text = "LIS";
        time1->Text = "04:20"; atime1->Text = "21:15";
        time2->Text = "04:20"; atime2->Text = "21:15";
        time3->Text = "04:20"; atime3->Text = "21:15";
        price1->Text = "63000";
        price2->Text = "70000";
        price3->Text = "72000";
        }
        else if (comboBox2->Text == "Greece") {
        flight1->Text = "QR643"; flight2->Text = "QR643"; flight3->Text = "QR643";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "JTR"; dest2->Text = "JTR"; dest3->Text = "JTR";
        time1->Text = "04:20"; atime1->Text = "14:40";
        time2->Text = "04:20"; atime2->Text = "14:40";
        time3->Text = "04:20"; atime3->Text = "14:40";
        price1->Text = "60000";
        price2->Text = "68000";
        price3->Text = "85000";
        }
        else if (comboBox2->Text == "France") {
        flight1->Text = "EK583"; flight2->Text = "EK583"; flight3->Text = "EK583";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "CDG"; dest2->Text = "CDG"; dest3->Text = "CDG";
        time1->Text = "10:15"; atime1->Text = "20:00";
        time2->Text = "10:15"; atime2->Text = "20:00";
        time3->Text = "10:15"; atime3->Text = "20:00";
        price1->Text = "45000";
        price2->Text = "50000";
        price3->Text = "55000";
        }
        else if (comboBox2->Text == "Mauritius") {
        flight1->Text = "EK585"; flight2->Text = "EK585"; flight3->Text = "EK585";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "MRU"; dest2->Text = "MRU"; dest3->Text = "MRU";
        time1->Text = "22:40"; atime1->Text = "09:10+1";
        time2->Text = "22:40"; atime2->Text = "09:10+1";
        time3->Text = "22:40"; atime3->Text = "09:10+1";
        price1->Text = "68000";
        price2->Text = "75000";
        price3->Text = "79000";
        }
        else if (comboBox2->Text == "Argentina") {
        flight1->Text = "EK583"; flight2->Text = "EK583"; flight3->Text = "EK583";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "EZE"; dest2->Text = "EZE"; dest3->Text = "EZE";
        time1->Text = "10:15"; atime1->Text = "06:50+1";
        time2->Text = "10:15"; atime2->Text = "06:50+1";
        time3->Text = "10:15"; atime3->Text = "06:50+1";
        price1->Text = "105000";
        price2->Text = "110000";
        price3->Text = "117000";
        }
        else if (comboBox2->Text == "Kashmir") {
        flight1->Text = "UK182"; flight2->Text = "UK182"; flight3->Text = "UK182";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "IXJ"; dest2->Text = "IXJ"; dest3->Text = "IXJ";
        time1->Text = "10:30"; atime1->Text = "18:15";
        time2->Text = "10:30"; atime2->Text = "18:15";
        time3->Text = "10:30"; atime3->Text = "18:15";
        price1->Text = "105000";
        price2->Text = "110000";
        price3->Text = "117000";
        }
        else if (comboBox2->Text == "Dubai") {
        flight1->Text = "EK583"; flight2->Text = "EK583"; flight3->Text = "EK583";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "DXB"; dest2->Text = "DXB"; dest3->Text = "DXB";
        time1->Text = "10:15"; atime1->Text = "13:05";
        time2->Text = "10:15"; atime2->Text = "13:05";
        time3->Text = "10:15"; atime3->Text = "13:05";
        price1->Text = "40000";
        price2->Text = "45000";
        price3->Text = "49000";
        }
        else if (comboBox2->Text == "New Zealand") {
        flight1->Text = "EK585"; flight2->Text = "EK585"; flight3->Text = "EK585";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "AKL"; dest2->Text = "AKL"; dest3->Text = "AKL";
        time1->Text = "22:40"; atime1->Text = "11:20";
        time2->Text = "22:40"; atime2->Text = "11:20";
        time3->Text = "22:40"; atime3->Text = "11:20";
        price1->Text = "125000";
        price2->Text = "135000";
        price3->Text = "139000";
        }else if (comboBox2->Text == "Rome") {
        flight1->Text = "EK585"; flight2->Text = "EK585"; flight3->Text = "EK585";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "CIA"; dest2->Text = "CIA"; dest3->Text = "CIA";
        time1->Text = "22:40"; atime1->Text = "21:30+1";
        time2->Text = "22:40"; atime2->Text = "21:30+1";
        time3->Text = "22:40"; atime3->Text = "21:30+1";
        price1->Text = "70000";
        price2->Text = "73000";
        price3->Text = "75000";
        }
        else if (comboBox2->Text == "San Diego") {
        flight1->Text = "TK723"; flight2->Text = "TK723"; flight3->Text = "TK723";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "SAN"; dest2->Text = "SAN"; dest3->Text = "SAN";
        time1->Text = "23:00"; atime1->Text = "18:42+1";
        time2->Text = "23:00"; atime2->Text = "18:42+1";
        time3->Text = "23:00"; atime3->Text = "18:42+1";
        price1->Text = "70000";
        price2->Text = "73000";
        price3->Text = "75000";
        }
        else if (comboBox2->Text == "Nova Scotia") {
        flight1->Text = "KU284"; flight2->Text = "KU284"; flight3->Text = "KU284";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "YHZ"; dest2->Text = "YHZ"; dest3->Text = "YHZ";
        time1->Text = "23:15"; atime1->Text = "13:55+1";
        time2->Text = "23:15"; atime2->Text = "13:55+1";
        time3->Text = "23:15"; atime3->Text = "13:55+1";
        price1->Text = "120000";
        price2->Text = "124000";
        price3->Text = "129000";
        }
        else if (comboBox2->Text == "Alberta") {
        flight1->Text = "QR643"; flight2->Text = "QR643"; flight3->Text = "QR643";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "YHZ"; dest2->Text = "YHZ"; dest3->Text = "YHZ";
        time1->Text = "04:20"; atime1->Text = "21:28";
        time2->Text = "04:20"; atime2->Text = "21:28";
        time3->Text = "04:20"; atime3->Text = "21:28";
        price1->Text = "105000";
        price2->Text = "110000";
        price3->Text = "117000";
        }
        else if (comboBox2->Text == "Dublin") {
        flight1->Text = "TK723"; flight2->Text = "TK723"; flight3->Text = "TK723";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "YHZ"; dest2->Text = "YHZ"; dest3->Text = "YHZ";
        time1->Text = "23:00"; atime1->Text = "10:00+1";
        time2->Text = "23:00"; atime2->Text = "10:00+1";
        time3->Text = "23:00"; atime3->Text = "10:00+1";
        price1->Text = "72000";
        price2->Text = "76000";
        price3->Text = "81000";
        }
        else if (comboBox2->Text == "Bali") {
        flight1->Text = "OD161"; flight2->Text = "OD161"; flight3->Text = "OD161";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "DPS"; dest2->Text = "DPS"; dest3->Text = "DPS";
        time1->Text = "01:10"; atime1->Text = "12:15";
        time2->Text = "01:10"; atime2->Text = "12:15";
        time3->Text = "01:10"; atime3->Text = "12:15";
        price1->Text = "32000";
        price2->Text = "41000";
        price3->Text = "46000";
        }
        else if (comboBox2->Text == "New York") {
        flight1->Text = "EK585"; flight2->Text = "EK585"; flight3->Text = "EK585";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "JFK"; dest2->Text = "JFK"; dest3->Text = "JFK";
        time1->Text = "22:40"; atime1->Text = "08:50+1";
        time2->Text = "22:40"; atime2->Text = "08:50+1";
        time3->Text = "22:40"; atime3->Text = "08:50+1";
        price1->Text = "80000";
        price2->Text = "84000";
        price3->Text = "87000";
        }
        else if (comboBox2->Text == "Mexico") {
        flight1->Text = "EK585"; flight2->Text = "EK585"; flight3->Text = "EK585";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "MEX"; dest2->Text = "MEX"; dest3->Text = "MEX";
        time1->Text = "22:40"; atime1->Text = "16:05+1";
        time2->Text = "22:40"; atime2->Text = "16:05+1";
        time3->Text = "22:40"; atime3->Text = "16:05+1";
        price1->Text = "100000";
        price2->Text = "106000";
        price3->Text = "113000";
        }
        else if (comboBox2->Text == "Istanbul") {
        flight1->Text = "EK583"; flight2->Text = "EK583"; flight3->Text = "EK583";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "IST"; dest2->Text = "IST"; dest3->Text = "IST";
        time1->Text = "10:15"; atime1->Text = "17:55";
        time2->Text = "10:15"; atime2->Text = "17:55";
        time3->Text = "10:15"; atime3->Text = "17:55";
        price1->Text = "48000";
        price2->Text = "55000";
        price3->Text = "61000";
        }
        else if (comboBox2->Text == "Maldives") {
        flight1->Text = "BS337"; flight2->Text = "BS337"; flight3->Text = "BS337";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "MLE"; dest2->Text = "MLE"; dest3->Text = "MLE";
        time1->Text = "11:50"; atime1->Text = "15:10";
        time2->Text = "11:50"; atime2->Text = "15:10";
        time3->Text = "11:50"; atime3->Text = "15:10";
        price1->Text = "35000";
        price2->Text = "42000";
        price3->Text = "47000";
        }
        else if (comboBox2->Text == "Barcelona") {
        flight1->Text = "QR643"; flight2->Text = "QR643"; flight3->Text = "QR643";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "BCN"; dest2->Text = "BCN"; dest3->Text = "BCN";
        time1->Text = "04:20"; atime1->Text = "14:20";
        time2->Text = "04:20"; atime2->Text = "14:20";
        time3->Text = "04:20"; atime3->Text = "14:20";
        price1->Text = "65000";
        price2->Text = "68000";
        price3->Text = "72000";
        }
        else if (comboBox2->Text == "Singapore") {
        flight1->Text = "BG584"; flight2->Text = "BG584"; flight3->Text = "BG584";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "SIN"; dest2->Text = "SIN"; dest3->Text = "SIN";
        time1->Text = "08:30"; atime1->Text = "14:40";
        time2->Text = "08:30"; atime2->Text = "14:40";
        time3->Text = "08:30"; atime3->Text = "14:40";
        price1->Text = "32000";
        price2->Text = "38000";
        price3->Text = "41000";
        }
        else if (comboBox2->Text == "Costa Rica") {
        flight1->Text = "QR639"; flight2->Text = "QR639"; flight3->Text = "QR639";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "SJO"; dest2->Text = "SJO"; dest3->Text = "SJO";
        time1->Text = "03:20"; atime1->Text = "20:47";
        time2->Text = "03:20"; atime2->Text = "20:47";
        time3->Text = "03:20"; atime3->Text = "20:47";
        price1->Text = "106000";
        price2->Text = "114000";
        price3->Text = "120000";
        }
        else if (comboBox2->Text == "Thailand") {
        flight1->Text = "PG4823"; flight2->Text = "PG4823"; flight3->Text = "PG4823";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "BKK"; dest2->Text = "BKK"; dest3->Text = "BKK";
        time1->Text = "13:35"; atime1->Text = "17:00";
        time2->Text = "13:35"; atime2->Text = "17:00";
        time3->Text = "13:35"; atime3->Text = "17:00";
        price1->Text = "25000";
        price2->Text = "28000";
        price3->Text = "32000";
        }
        else if (comboBox2->Text == "Spain") {
        flight1->Text = "QR643"; flight2->Text = "QR643"; flight3->Text = "QR643";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "MAD"; dest2->Text = "MAD"; dest3->Text = "MAD";
        time1->Text = "04:20"; atime1->Text = "14:25";
        time2->Text = "04:20"; atime2->Text = "14:25";
        time3->Text = "04:20"; atime3->Text = "14:25";
        price1->Text = "62540";
        price2->Text = "64540";
        price3->Text = "68540";
        }
        else if (comboBox2->Text == "Machu Picchu") {
        flight1->Text = "EY245"; flight2->Text = "EY245"; flight3->Text = "EY245";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "CUZ"; dest2->Text = "CUZ"; dest3->Text = "CUZ";
        time1->Text = "18:05"; atime1->Text = "19:53+1";
        time2->Text = "18:05"; atime2->Text = "19:53+1";
        time3->Text = "18:05"; atime3->Text = "19:53+1";
        price1->Text = "129000";
        price2->Text = "134000";
        price3->Text = "138000";
        }
        else if (comboBox2->Text == "Tokyo") {
        flight1->Text = "MH103"; flight2->Text = "MH103"; flight3->Text = "MH103";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "NRT"; dest2->Text = "NRT"; dest3->Text = "NRT";
        time1->Text = "12:15"; atime1->Text = "07:05+1";
        time2->Text = "12:15"; atime2->Text = "07:05+1";
        time3->Text = "12:15"; atime3->Text = "07:05+1";
        price1->Text = "54000";
        price2->Text = "58000";
        price3->Text = "61000";
        }
        else if (comboBox2->Text == "Santorini") {
        flight1->Text = "QR641"; flight2->Text = "QR641"; flight3->Text = "QR641";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "JTR"; dest2->Text = "JTR"; dest3->Text = "JTR";
        time1->Text = "10:35"; atime1->Text = "21:15";
        time2->Text = "10:35"; atime2->Text = "21:15";
        time3->Text = "10:35"; atime3->Text = "21:15";
        price1->Text = "67000";
        price2->Text = "76000";
        price3->Text = "79000";
        }
        else if (comboBox2->Text == "Washington DC") {
        flight1->Text = "TK723"; flight2->Text = "TK723"; flight3->Text = "TK723";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "IAD"; dest2->Text = "IAD"; dest3->Text = "IAD";
        time1->Text = "23:00"; atime1->Text = "12:30+1";
        time2->Text = "23:00"; atime2->Text = "12:30+1";
        time3->Text = "23:00"; atime3->Text = "12:30+1";
        price1->Text = "70500";
        price2->Text = "76500";
        price3->Text = "80500";
        }
        else if (comboBox2->Text == "Prague") {
        /*
        std::string a = msclr::interop::marshal_as<std::string>(comboBox1->Text);
        String^ inst = "Installing:";
        price1->Text = inst;
        std::stringstream geek(inst);
        int x = 0;
        geek >> x;
        */

        flight1->Text = "TK723"; flight2->Text = "TK723"; flight3->Text = "TK723";
        date1->Text = dateTimePicker1->Text; date2->Text = dateTimePicker1->Text; date3->Text = dateTimePicker1->Text;
        dest1->Text = "PRG"; dest2->Text = "PRG"; dest3->Text = "PRG";
        time1->Text = "23:00"; atime1->Text = "08:30+1";
        time2->Text = "23:00"; atime2->Text = "08:30+1";
        time3->Text = "23:00"; atime3->Text = "08:30+1";
        price1->Text = "72500";
        price2->Text = "78500";
        price3->Text = "81500";
        }
        panel3->Visible = true;
    }
    

}
private:System::Void button6_Click(System::Object ^ sender, System::EventArgs ^ e) {
    panel3->Visible = false;
}

private: System::Void panel4_Click(System::Object^ sender, System::EventArgs^ e) {
    Pay^ p = gcnew Pay(price1->Text, comboBox2->Text, "Standard", dateTimePicker1->Text);
    p->ShowDialog();
}
private: System::Void panel5_Click(System::Object^ sender, System::EventArgs^ e) {
    Pay^ p = gcnew Pay(price2->Text, comboBox2->Text, "Gold", dateTimePicker1->Text);
    p->ShowDialog();
}
private: System::Void panel6_Click(System::Object^ sender, System::EventArgs^ e) {
    Pay^ p = gcnew Pay(price3->Text, comboBox2->Text, "Premium", dateTimePicker1->Text);
    p->ShowDialog();
}





private: System::Void prof(System::Object^ sender, System::EventArgs^ e) {
    profile^ p = gcnew profile();
    p->ShowDialog();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
    Mountains^ mntn = gcnew Mountains;
    mntn->ShowDialog();
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
    Desert^ dsrt = gcnew Desert;
    dsrt->ShowDialog();
}
private: System::Void pictureBox38_Click(System::Object^ sender, System::EventArgs^ e) {
    Forest^ frst = gcnew Forest;
    frst->ShowDialog();
}
private: System::Void pictureBox44_Click(System::Object^ sender, System::EventArgs^ e) {
    Island^ ilnd = gcnew Island;
    ilnd->ShowDialog();
}
private: System::Void pictureBox46_Click(System::Object^ sender, System::EventArgs^ e) {
    SeaBeach^ sbch = gcnew SeaBeach;
    sbch->ShowDialog();
}
private: System::Void pictureBox48_Click(System::Object^ sender, System::EventArgs^ e) {
    SkyDiving^ skdv = gcnew SkyDiving;
    skdv->ShowDialog();
}
private: System::Void pictureBox54_Click(System::Object^ sender, System::EventArgs^ e) {
    SnowFall^ snfl = gcnew SnowFall;
    snfl->ShowDialog();
}
private: System::Void pictureBox56_Click(System::Object^ sender, System::EventArgs^ e) {
    Winter^ wntr = gcnew Winter;
    wntr->ShowDialog();
}
private: System::Void pictureBox58_Click(System::Object^ sender, System::EventArgs^ e) {
    Summer^ smr = gcnew Summer;
    smr->ShowDialog();
}
};
}
