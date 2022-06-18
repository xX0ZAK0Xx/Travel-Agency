#pragma once
#include "Pkg.h"
#include "Pay.h"
#include "profile.h"
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

	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::Label^ label21;

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel16;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::PictureBox^ pictureBox27;
    private: System::Windows::Forms::PictureBox^ pictureBox28;
    private: System::Windows::Forms::PictureBox^ pictureBox29;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel15;
    private: System::Windows::Forms::PictureBox^ pictureBox26;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::PictureBox^ pictureBox23;
    private: System::Windows::Forms::PictureBox^ pictureBox24;
    private: System::Windows::Forms::PictureBox^ pictureBox25;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
    private: System::Windows::Forms::PictureBox^ pictureBox22;
    private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel20;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::PictureBox^ pictureBox35;
private: System::Windows::Forms::PictureBox^ pictureBox36;
private: System::Windows::Forms::PictureBox^ pictureBox37;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel19;
private: System::Windows::Forms::PictureBox^ pictureBox34;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel18;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::PictureBox^ pictureBox31;
private: System::Windows::Forms::PictureBox^ pictureBox32;
private: System::Windows::Forms::PictureBox^ pictureBox33;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel17;
private: System::Windows::Forms::PictureBox^ pictureBox30;
private: System::Windows::Forms::Label^ label33;
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
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel20 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel19 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel18 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel17 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel16 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->tableLayoutPanel3->SuspendLayout();
            this->panel2->SuspendLayout();
            this->tableLayoutPanel20->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
            this->tableLayoutPanel19->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
            this->tableLayoutPanel18->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
            this->tableLayoutPanel17->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
            this->tableLayoutPanel16->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
            this->tableLayoutPanel15->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
            this->tableLayoutPanel14->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
            this->tableLayoutPanel13->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
            this->tableLayoutPanel12->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
            this->tableLayoutPanel11->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
            this->tableLayoutPanel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
            this->tableLayoutPanel9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
            this->tableLayoutPanel8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            this->tableLayoutPanel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            this->tableLayoutPanel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->tableLayoutPanel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            this->tableLayoutPanel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
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
            this->comboBox2->Location = System::Drawing::Point(236, 30);
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
            this->label1->Location = System::Drawing::Point(6, 32);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(191, 24);
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
            this->label4->Location = System::Drawing::Point(511, 0);
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
                397)));
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
            this->dateTimePicker1->Location = System::Drawing::Point(873, 29);
            this->dateTimePicker1->MaxDate = System::DateTime(2023, 12, 31, 0, 0, 0, 0);
            this->dateTimePicker1->MinDate = System::DateTime(2022, 1, 1, 0, 0, 0, 0);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->dateTimePicker1->Size = System::Drawing::Size(338, 30);
            this->dateTimePicker1->TabIndex = 40;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Top;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(3, 3);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(1125, 236);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox2->TabIndex = 17;
            this->pictureBox2->TabStop = false;
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel3->BackColor = System::Drawing::SystemColors::ControlLight;
            this->tableLayoutPanel3->ColumnCount = 1;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel3->Controls->Add(this->pictureBox2, 0, 0);
            this->tableLayoutPanel3->Controls->Add(this->label5, 0, 1);
            this->tableLayoutPanel3->Location = System::Drawing::Point(58, 567);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 2;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60.75949F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.24051F)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(1131, 402);
            this->tableLayoutPanel3->TabIndex = 20;
            // 
            // label5
            // 
            this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label5->Location = System::Drawing::Point(229, 275);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(672, 96);
            this->label5->TabIndex = 18;
            this->label5->Text = resources->GetString(L"label5.Text");
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel2
            // 
            this->panel2->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->panel2->Controls->Add(this->label41);
            this->panel2->Controls->Add(this->panel1);
            this->panel2->Controls->Add(this->tableLayoutPanel20);
            this->panel2->Controls->Add(this->tableLayoutPanel19);
            this->panel2->Controls->Add(this->tableLayoutPanel18);
            this->panel2->Controls->Add(this->tableLayoutPanel17);
            this->panel2->Controls->Add(this->tableLayoutPanel16);
            this->panel2->Controls->Add(this->tableLayoutPanel15);
            this->panel2->Controls->Add(this->tableLayoutPanel14);
            this->panel2->Controls->Add(this->tableLayoutPanel13);
            this->panel2->Controls->Add(this->tableLayoutPanel12);
            this->panel2->Controls->Add(this->tableLayoutPanel11);
            this->panel2->Controls->Add(this->tableLayoutPanel10);
            this->panel2->Controls->Add(this->tableLayoutPanel9);
            this->panel2->Controls->Add(this->tableLayoutPanel8);
            this->panel2->Controls->Add(this->tableLayoutPanel7);
            this->panel2->Controls->Add(this->tableLayoutPanel6);
            this->panel2->Controls->Add(this->tableLayoutPanel5);
            this->panel2->Controls->Add(this->tableLayoutPanel4);
            this->panel2->Controls->Add(this->tableLayoutPanel3);
            this->panel2->Location = System::Drawing::Point(-18, 361);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1252, 8261);
            this->panel2->TabIndex = 21;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &HomePage::panel2_Paint);
            // 
            // label41
            // 
            this->label41->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label41->BackColor = System::Drawing::Color::Transparent;
            this->label41->Font = (gcnew System::Drawing::Font(L"Aharoni", 30, System::Drawing::FontStyle::Bold));
            this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label41->Location = System::Drawing::Point(406, 176);
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
            this->panel1->Location = System::Drawing::Point(0, 8161);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1252, 100);
            this->panel1->TabIndex = 38;
            // 
            // tableLayoutPanel20
            // 
            this->tableLayoutPanel20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel20->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->tableLayoutPanel20->ColumnCount = 3;
            this->tableLayoutPanel20->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel20->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel20->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel20->Controls->Add(this->label38, 2, 1);
            this->tableLayoutPanel20->Controls->Add(this->label39, 1, 1);
            this->tableLayoutPanel20->Controls->Add(this->label40, 0, 1);
            this->tableLayoutPanel20->Controls->Add(this->pictureBox35, 2, 0);
            this->tableLayoutPanel20->Controls->Add(this->pictureBox36, 1, 0);
            this->tableLayoutPanel20->Controls->Add(this->pictureBox37, 0, 0);
            this->tableLayoutPanel20->Location = System::Drawing::Point(104, 7393);
            this->tableLayoutPanel20->Name = L"tableLayoutPanel20";
            this->tableLayoutPanel20->RowCount = 2;
            this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
            this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
            this->tableLayoutPanel20->Size = System::Drawing::Size(1035, 415);
            this->tableLayoutPanel20->TabIndex = 37;
            // 
            // label38
            // 
            this->label38->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label38->BackColor = System::Drawing::Color::Transparent;
            this->label38->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label38->Location = System::Drawing::Point(767, 305);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(190, 104);
            this->label38->TabIndex = 21;
            this->label38->Text = L"Tokyo, Japan";
            this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label38->Click += gcnew System::EventHandler(this, &HomePage::tokyo);
            // 
            // label39
            // 
            this->label39->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label39->BackColor = System::Drawing::Color::Transparent;
            this->label39->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label39->Location = System::Drawing::Point(424, 309);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(187, 96);
            this->label39->TabIndex = 20;
            this->label39->Text = L"Dublin, Ireland";
            this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label39->Click += gcnew System::EventHandler(this, &HomePage::dublin);
            // 
            // label40
            // 
            this->label40->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label40->BackColor = System::Drawing::Color::Transparent;
            this->label40->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label40->Location = System::Drawing::Point(79, 309);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(187, 96);
            this->label40->TabIndex = 19;
            this->label40->Text = L"Banff, Alberta, Canada";
            this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label40->Click += gcnew System::EventHandler(this, &HomePage::alberta);
            // 
            // pictureBox35
            // 
            this->pictureBox35->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox35->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
            this->pictureBox35->Location = System::Drawing::Point(693, 3);
            this->pictureBox35->Name = L"pictureBox35";
            this->pictureBox35->Size = System::Drawing::Size(339, 294);
            this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox35->TabIndex = 2;
            this->pictureBox35->TabStop = false;
            this->pictureBox35->Click += gcnew System::EventHandler(this, &HomePage::tokyo);
            // 
            // pictureBox36
            // 
            this->pictureBox36->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox36->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
            this->pictureBox36->Location = System::Drawing::Point(348, 3);
            this->pictureBox36->Name = L"pictureBox36";
            this->pictureBox36->Size = System::Drawing::Size(339, 294);
            this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox36->TabIndex = 1;
            this->pictureBox36->TabStop = false;
            this->pictureBox36->Click += gcnew System::EventHandler(this, &HomePage::dublin);
            // 
            // pictureBox37
            // 
            this->pictureBox37->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox37->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
            this->pictureBox37->Location = System::Drawing::Point(3, 3);
            this->pictureBox37->Name = L"pictureBox37";
            this->pictureBox37->Size = System::Drawing::Size(339, 294);
            this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox37->TabIndex = 0;
            this->pictureBox37->TabStop = false;
            this->pictureBox37->Click += gcnew System::EventHandler(this, &HomePage::alberta);
            // 
            // tableLayoutPanel19
            // 
            this->tableLayoutPanel19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel19->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->tableLayoutPanel19->ColumnCount = 1;
            this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel19->Controls->Add(this->pictureBox34, 0, 0);
            this->tableLayoutPanel19->Controls->Add(this->label37, 0, 1);
            this->tableLayoutPanel19->Location = System::Drawing::Point(61, 7050);
            this->tableLayoutPanel19->Name = L"tableLayoutPanel19";
            this->tableLayoutPanel19->RowCount = 2;
            this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 63.05085F)));
            this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 36.94915F)));
            this->tableLayoutPanel19->Size = System::Drawing::Size(1131, 362);
            this->tableLayoutPanel19->TabIndex = 36;
            // 
            // pictureBox34
            // 
            this->pictureBox34->Dock = System::Windows::Forms::DockStyle::Top;
            this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
            this->pictureBox34->Location = System::Drawing::Point(3, 3);
            this->pictureBox34->Name = L"pictureBox34";
            this->pictureBox34->Size = System::Drawing::Size(1125, 222);
            this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox34->TabIndex = 17;
            this->pictureBox34->TabStop = false;
            // 
            // label37
            // 
            this->label37->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label37->BackColor = System::Drawing::Color::Transparent;
            this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label37->Location = System::Drawing::Point(229, 257);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(672, 75);
            this->label37->TabIndex = 18;
            this->label37->Text = resources->GetString(L"label37.Text");
            this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel18
            // 
            this->tableLayoutPanel18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel18->BackColor = System::Drawing::Color::SeaShell;
            this->tableLayoutPanel18->ColumnCount = 3;
            this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel18->Controls->Add(this->label34, 2, 1);
            this->tableLayoutPanel18->Controls->Add(this->label35, 1, 1);
            this->tableLayoutPanel18->Controls->Add(this->label36, 0, 1);
            this->tableLayoutPanel18->Controls->Add(this->pictureBox31, 2, 0);
            this->tableLayoutPanel18->Controls->Add(this->pictureBox32, 1, 0);
            this->tableLayoutPanel18->Controls->Add(this->pictureBox33, 0, 0);
            this->tableLayoutPanel18->Location = System::Drawing::Point(105, 6573);
            this->tableLayoutPanel18->Name = L"tableLayoutPanel18";
            this->tableLayoutPanel18->RowCount = 2;
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
            this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
            this->tableLayoutPanel18->Size = System::Drawing::Size(1035, 415);
            this->tableLayoutPanel18->TabIndex = 35;
            // 
            // label34
            // 
            this->label34->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label34->BackColor = System::Drawing::Color::Transparent;
            this->label34->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label34->Location = System::Drawing::Point(767, 305);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(190, 104);
            this->label34->TabIndex = 21;
            this->label34->Text = L"Nova Scotia, Canada";
            this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label34->Click += gcnew System::EventHandler(this, &HomePage::novaS);
            // 
            // label35
            // 
            this->label35->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label35->BackColor = System::Drawing::Color::Transparent;
            this->label35->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label35->Location = System::Drawing::Point(424, 309);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(187, 96);
            this->label35->TabIndex = 20;
            this->label35->Text = L"San Diego, California";
            this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label35->Click += gcnew System::EventHandler(this, &HomePage::sanD);
            // 
            // label36
            // 
            this->label36->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label36->BackColor = System::Drawing::Color::Transparent;
            this->label36->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label36->Location = System::Drawing::Point(79, 309);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(187, 96);
            this->label36->TabIndex = 19;
            this->label36->Text = L"Rome, Italy";
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label36->Click += gcnew System::EventHandler(this, &HomePage::rome);
            // 
            // pictureBox31
            // 
            this->pictureBox31->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox31->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
            this->pictureBox31->Location = System::Drawing::Point(693, 3);
            this->pictureBox31->Name = L"pictureBox31";
            this->pictureBox31->Size = System::Drawing::Size(339, 294);
            this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox31->TabIndex = 2;
            this->pictureBox31->TabStop = false;
            this->pictureBox31->Click += gcnew System::EventHandler(this, &HomePage::novaS);
            // 
            // pictureBox32
            // 
            this->pictureBox32->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox32->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
            this->pictureBox32->Location = System::Drawing::Point(348, 3);
            this->pictureBox32->Name = L"pictureBox32";
            this->pictureBox32->Size = System::Drawing::Size(339, 294);
            this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox32->TabIndex = 1;
            this->pictureBox32->TabStop = false;
            this->pictureBox32->Click += gcnew System::EventHandler(this, &HomePage::sanD);
            // 
            // pictureBox33
            // 
            this->pictureBox33->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox33->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
            this->pictureBox33->Location = System::Drawing::Point(3, 3);
            this->pictureBox33->Name = L"pictureBox33";
            this->pictureBox33->Size = System::Drawing::Size(339, 294);
            this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox33->TabIndex = 0;
            this->pictureBox33->TabStop = false;
            this->pictureBox33->Click += gcnew System::EventHandler(this, &HomePage::rome);
            // 
            // tableLayoutPanel17
            // 
            this->tableLayoutPanel17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel17->BackColor = System::Drawing::Color::SeaShell;
            this->tableLayoutPanel17->ColumnCount = 1;
            this->tableLayoutPanel17->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel17->Controls->Add(this->pictureBox30, 0, 0);
            this->tableLayoutPanel17->Controls->Add(this->label33, 0, 1);
            this->tableLayoutPanel17->Location = System::Drawing::Point(61, 6288);
            this->tableLayoutPanel17->Name = L"tableLayoutPanel17";
            this->tableLayoutPanel17->RowCount = 2;
            this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 63.05085F)));
            this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 36.94915F)));
            this->tableLayoutPanel17->Size = System::Drawing::Size(1131, 295);
            this->tableLayoutPanel17->TabIndex = 34;
            // 
            // pictureBox30
            // 
            this->pictureBox30->Dock = System::Windows::Forms::DockStyle::Top;
            this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
            this->pictureBox30->Location = System::Drawing::Point(3, 3);
            this->pictureBox30->Name = L"pictureBox30";
            this->pictureBox30->Size = System::Drawing::Size(1125, 180);
            this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox30->TabIndex = 17;
            this->pictureBox30->TabStop = false;
            // 
            // label33
            // 
            this->label33->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label33->BackColor = System::Drawing::Color::Transparent;
            this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label33->Location = System::Drawing::Point(229, 194);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(672, 93);
            this->label33->TabIndex = 18;
            this->label33->Text = resources->GetString(L"label33.Text");
            this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel16
            // 
            this->tableLayoutPanel16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel16->BackColor = System::Drawing::Color::LightCyan;
            this->tableLayoutPanel16->ColumnCount = 3;
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel16->Controls->Add(this->label30, 2, 1);
            this->tableLayoutPanel16->Controls->Add(this->label31, 1, 1);
            this->tableLayoutPanel16->Controls->Add(this->label32, 0, 1);
            this->tableLayoutPanel16->Controls->Add(this->pictureBox27, 2, 0);
            this->tableLayoutPanel16->Controls->Add(this->pictureBox28, 1, 0);
            this->tableLayoutPanel16->Controls->Add(this->pictureBox29, 0, 0);
            this->tableLayoutPanel16->Location = System::Drawing::Point(103, 5847);
            this->tableLayoutPanel16->Name = L"tableLayoutPanel16";
            this->tableLayoutPanel16->RowCount = 2;
            this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
            this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
            this->tableLayoutPanel16->Size = System::Drawing::Size(1035, 415);
            this->tableLayoutPanel16->TabIndex = 33;
            // 
            // label30
            // 
            this->label30->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label30->BackColor = System::Drawing::Color::Transparent;
            this->label30->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label30->Location = System::Drawing::Point(767, 305);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(190, 104);
            this->label30->TabIndex = 21;
            this->label30->Text = L"InterLaken, Switzerland";
            this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label30->Click += gcnew System::EventHandler(this, &HomePage::interlaken);
            // 
            // label31
            // 
            this->label31->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label31->BackColor = System::Drawing::Color::Transparent;
            this->label31->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label31->Location = System::Drawing::Point(424, 309);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(187, 96);
            this->label31->TabIndex = 20;
            this->label31->Text = L"Fox Glacier, New Zealand";
            this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label31->Click += gcnew System::EventHandler(this, &HomePage::foxGlacier);
            // 
            // label32
            // 
            this->label32->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label32->BackColor = System::Drawing::Color::Transparent;
            this->label32->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label32->Location = System::Drawing::Point(79, 309);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(187, 96);
            this->label32->TabIndex = 19;
            this->label32->Text = L"Palm Jumeirah, Dubai";
            this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label32->Click += gcnew System::EventHandler(this, &HomePage::dubai);
            // 
            // pictureBox27
            // 
            this->pictureBox27->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox27->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
            this->pictureBox27->Location = System::Drawing::Point(693, 3);
            this->pictureBox27->Name = L"pictureBox27";
            this->pictureBox27->Size = System::Drawing::Size(339, 294);
            this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox27->TabIndex = 2;
            this->pictureBox27->TabStop = false;
            this->pictureBox27->Click += gcnew System::EventHandler(this, &HomePage::interlaken);
            // 
            // pictureBox28
            // 
            this->pictureBox28->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox28->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
            this->pictureBox28->Location = System::Drawing::Point(348, 3);
            this->pictureBox28->Name = L"pictureBox28";
            this->pictureBox28->Size = System::Drawing::Size(339, 294);
            this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox28->TabIndex = 1;
            this->pictureBox28->TabStop = false;
            this->pictureBox28->Click += gcnew System::EventHandler(this, &HomePage::foxGlacier);
            // 
            // pictureBox29
            // 
            this->pictureBox29->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox29->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
            this->pictureBox29->Location = System::Drawing::Point(3, 3);
            this->pictureBox29->Name = L"pictureBox29";
            this->pictureBox29->Size = System::Drawing::Size(339, 294);
            this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox29->TabIndex = 0;
            this->pictureBox29->TabStop = false;
            this->pictureBox29->Click += gcnew System::EventHandler(this, &HomePage::dubai);
            // 
            // tableLayoutPanel15
            // 
            this->tableLayoutPanel15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel15->BackColor = System::Drawing::Color::LightCyan;
            this->tableLayoutPanel15->ColumnCount = 1;
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel15->Controls->Add(this->pictureBox26, 0, 0);
            this->tableLayoutPanel15->Controls->Add(this->label29, 0, 1);
            this->tableLayoutPanel15->Location = System::Drawing::Point(58, 5371);
            this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
            this->tableLayoutPanel15->RowCount = 3;
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.27139F)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.72861F)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel15->Size = System::Drawing::Size(1131, 503);
            this->tableLayoutPanel15->TabIndex = 32;
            // 
            // pictureBox26
            // 
            this->pictureBox26->Dock = System::Windows::Forms::DockStyle::Top;
            this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
            this->pictureBox26->Location = System::Drawing::Point(3, 3);
            this->pictureBox26->Name = L"pictureBox26";
            this->pictureBox26->Size = System::Drawing::Size(1125, 343);
            this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox26->TabIndex = 17;
            this->pictureBox26->TabStop = false;
            // 
            // label29
            // 
            this->label29->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label29->BackColor = System::Drawing::Color::Transparent;
            this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label29->Location = System::Drawing::Point(229, 358);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(672, 114);
            this->label29->TabIndex = 18;
            this->label29->Text = resources->GetString(L"label29.Text");
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel14
            // 
            this->tableLayoutPanel14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel14->BackColor = System::Drawing::Color::WhiteSmoke;
            this->tableLayoutPanel14->ColumnCount = 3;
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel14->Controls->Add(this->label26, 2, 1);
            this->tableLayoutPanel14->Controls->Add(this->label27, 1, 1);
            this->tableLayoutPanel14->Controls->Add(this->label28, 0, 1);
            this->tableLayoutPanel14->Controls->Add(this->pictureBox23, 2, 0);
            this->tableLayoutPanel14->Controls->Add(this->pictureBox24, 1, 0);
            this->tableLayoutPanel14->Controls->Add(this->pictureBox25, 0, 0);
            this->tableLayoutPanel14->Location = System::Drawing::Point(108, 4895);
            this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
            this->tableLayoutPanel14->RowCount = 2;
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel14->Size = System::Drawing::Size(1035, 415);
            this->tableLayoutPanel14->TabIndex = 31;
            // 
            // label26
            // 
            this->label26->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label26->BackColor = System::Drawing::Color::Transparent;
            this->label26->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label26->Location = System::Drawing::Point(767, 305);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(190, 104);
            this->label26->TabIndex = 21;
            this->label26->Text = L"Kashmir, India";
            this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label26->Click += gcnew System::EventHandler(this, &HomePage::kashmir);
            // 
            // label27
            // 
            this->label27->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label27->BackColor = System::Drawing::Color::Transparent;
            this->label27->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label27->Location = System::Drawing::Point(424, 309);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(187, 96);
            this->label27->TabIndex = 20;
            this->label27->Text = L"Patagonia, Argentina";
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label27->Click += gcnew System::EventHandler(this, &HomePage::patagonia);
            // 
            // label28
            // 
            this->label28->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label28->BackColor = System::Drawing::Color::Transparent;
            this->label28->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label28->Location = System::Drawing::Point(79, 309);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(187, 96);
            this->label28->TabIndex = 19;
            this->label28->Text = L"Gstaad, Switzerland";
            this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label28->Click += gcnew System::EventHandler(this, &HomePage::gstaad);
            // 
            // pictureBox23
            // 
            this->pictureBox23->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox23->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
            this->pictureBox23->Location = System::Drawing::Point(693, 3);
            this->pictureBox23->Name = L"pictureBox23";
            this->pictureBox23->Size = System::Drawing::Size(339, 294);
            this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox23->TabIndex = 2;
            this->pictureBox23->TabStop = false;
            this->pictureBox23->Click += gcnew System::EventHandler(this, &HomePage::kashmir);
            // 
            // pictureBox24
            // 
            this->pictureBox24->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox24->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
            this->pictureBox24->Location = System::Drawing::Point(348, 3);
            this->pictureBox24->Name = L"pictureBox24";
            this->pictureBox24->Size = System::Drawing::Size(339, 294);
            this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox24->TabIndex = 1;
            this->pictureBox24->TabStop = false;
            this->pictureBox24->Click += gcnew System::EventHandler(this, &HomePage::patagonia);
            // 
            // pictureBox25
            // 
            this->pictureBox25->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox25->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
            this->pictureBox25->Location = System::Drawing::Point(3, 3);
            this->pictureBox25->Name = L"pictureBox25";
            this->pictureBox25->Size = System::Drawing::Size(339, 294);
            this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox25->TabIndex = 0;
            this->pictureBox25->TabStop = false;
            this->pictureBox25->Click += gcnew System::EventHandler(this, &HomePage::gstaad);
            // 
            // tableLayoutPanel13
            // 
            this->tableLayoutPanel13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel13->BackColor = System::Drawing::Color::WhiteSmoke;
            this->tableLayoutPanel13->ColumnCount = 1;
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel13->Controls->Add(this->pictureBox22, 0, 0);
            this->tableLayoutPanel13->Controls->Add(this->label25, 0, 1);
            this->tableLayoutPanel13->Location = System::Drawing::Point(58, 4583);
            this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
            this->tableLayoutPanel13->RowCount = 2;
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60.75949F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.24051F)));
            this->tableLayoutPanel13->Size = System::Drawing::Size(1131, 339);
            this->tableLayoutPanel13->TabIndex = 30;
            // 
            // pictureBox22
            // 
            this->pictureBox22->Dock = System::Windows::Forms::DockStyle::Top;
            this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
            this->pictureBox22->Location = System::Drawing::Point(3, 3);
            this->pictureBox22->Name = L"pictureBox22";
            this->pictureBox22->Size = System::Drawing::Size(1125, 199);
            this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox22->TabIndex = 17;
            this->pictureBox22->TabStop = false;
            // 
            // label25
            // 
            this->label25->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label25->BackColor = System::Drawing::Color::Transparent;
            this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label25->Location = System::Drawing::Point(229, 224);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(672, 96);
            this->label25->TabIndex = 18;
            this->label25->Text = resources->GetString(L"label25.Text");
            this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel12
            // 
            this->tableLayoutPanel12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel12->BackColor = System::Drawing::Color::LightCyan;
            this->tableLayoutPanel12->ColumnCount = 3;
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel12->Controls->Add(this->label22, 2, 1);
            this->tableLayoutPanel12->Controls->Add(this->label23, 1, 1);
            this->tableLayoutPanel12->Controls->Add(this->label24, 0, 1);
            this->tableLayoutPanel12->Controls->Add(this->pictureBox19, 2, 0);
            this->tableLayoutPanel12->Controls->Add(this->pictureBox20, 1, 0);
            this->tableLayoutPanel12->Controls->Add(this->pictureBox21, 0, 0);
            this->tableLayoutPanel12->Location = System::Drawing::Point(114, 4087);
            this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
            this->tableLayoutPanel12->RowCount = 2;
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel12->Size = System::Drawing::Size(1035, 415);
            this->tableLayoutPanel12->TabIndex = 29;
            // 
            // label22
            // 
            this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label22->BackColor = System::Drawing::Color::Transparent;
            this->label22->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label22->Location = System::Drawing::Point(767, 305);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(190, 104);
            this->label22->TabIndex = 21;
            this->label22->Text = L"Mauritius, Mauritius";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label22->Click += gcnew System::EventHandler(this, &HomePage::mauritius);
            // 
            // label23
            // 
            this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label23->BackColor = System::Drawing::Color::Transparent;
            this->label23->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label23->Location = System::Drawing::Point(424, 309);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(187, 96);
            this->label23->TabIndex = 20;
            this->label23->Text = L"Dune du Pyla, France";
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label23->Click += gcnew System::EventHandler(this, &HomePage::dune);
            // 
            // label24
            // 
            this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label24->BackColor = System::Drawing::Color::Transparent;
            this->label24->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label24->Location = System::Drawing::Point(79, 309);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(187, 96);
            this->label24->TabIndex = 19;
            this->label24->Text = L"Bora Bora, French Polynesia";
            this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label24->Click += gcnew System::EventHandler(this, &HomePage::bora);
            // 
            // pictureBox19
            // 
            this->pictureBox19->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
            this->pictureBox19->Location = System::Drawing::Point(693, 3);
            this->pictureBox19->Name = L"pictureBox19";
            this->pictureBox19->Size = System::Drawing::Size(339, 294);
            this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox19->TabIndex = 2;
            this->pictureBox19->TabStop = false;
            this->pictureBox19->Click += gcnew System::EventHandler(this, &HomePage::mauritius);
            // 
            // pictureBox20
            // 
            this->pictureBox20->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox20->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
            this->pictureBox20->Location = System::Drawing::Point(348, 3);
            this->pictureBox20->Name = L"pictureBox20";
            this->pictureBox20->Size = System::Drawing::Size(339, 294);
            this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox20->TabIndex = 1;
            this->pictureBox20->TabStop = false;
            this->pictureBox20->Click += gcnew System::EventHandler(this, &HomePage::dune);
            // 
            // pictureBox21
            // 
            this->pictureBox21->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox21->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
            this->pictureBox21->Location = System::Drawing::Point(3, 3);
            this->pictureBox21->Name = L"pictureBox21";
            this->pictureBox21->Size = System::Drawing::Size(339, 294);
            this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox21->TabIndex = 0;
            this->pictureBox21->TabStop = false;
            this->pictureBox21->Click += gcnew System::EventHandler(this, &HomePage::bora);
            // 
            // tableLayoutPanel11
            // 
            this->tableLayoutPanel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel11->BackColor = System::Drawing::Color::LightCyan;
            this->tableLayoutPanel11->ColumnCount = 1;
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel11->Controls->Add(this->pictureBox18, 0, 0);
            this->tableLayoutPanel11->Controls->Add(this->label21, 0, 1);
            this->tableLayoutPanel11->Location = System::Drawing::Point(64, 3767);
            this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
            this->tableLayoutPanel11->RowCount = 2;
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60.75949F)));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.24051F)));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel11->Size = System::Drawing::Size(1131, 339);
            this->tableLayoutPanel11->TabIndex = 28;
            // 
            // pictureBox18
            // 
            this->pictureBox18->Dock = System::Windows::Forms::DockStyle::Top;
            this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
            this->pictureBox18->Location = System::Drawing::Point(3, 3);
            this->pictureBox18->Name = L"pictureBox18";
            this->pictureBox18->Size = System::Drawing::Size(1125, 199);
            this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox18->TabIndex = 17;
            this->pictureBox18->TabStop = false;
            // 
            // label21
            // 
            this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label21->BackColor = System::Drawing::Color::Transparent;
            this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label21->Location = System::Drawing::Point(229, 224);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(672, 96);
            this->label21->TabIndex = 18;
            this->label21->Text = resources->GetString(L"label21.Text");
            this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel10
            // 
            this->tableLayoutPanel10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel10->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->tableLayoutPanel10->ColumnCount = 3;
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel10->Controls->Add(this->label18, 2, 1);
            this->tableLayoutPanel10->Controls->Add(this->label19, 1, 1);
            this->tableLayoutPanel10->Controls->Add(this->label20, 0, 1);
            this->tableLayoutPanel10->Controls->Add(this->pictureBox15, 2, 0);
            this->tableLayoutPanel10->Controls->Add(this->pictureBox16, 1, 0);
            this->tableLayoutPanel10->Controls->Add(this->pictureBox17, 0, 0);
            this->tableLayoutPanel10->Location = System::Drawing::Point(102, 3280);
            this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
            this->tableLayoutPanel10->RowCount = 2;
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel10->Size = System::Drawing::Size(1035, 415);
            this->tableLayoutPanel10->TabIndex = 27;
            // 
            // label18
            // 
            this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label18->BackColor = System::Drawing::Color::Transparent;
            this->label18->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label18->Location = System::Drawing::Point(767, 323);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(190, 69);
            this->label18->TabIndex = 21;
            this->label18->Text = L"Milos, Greece";
            this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label18->Click += gcnew System::EventHandler(this, &HomePage::milos);
            // 
            // label19
            // 
            this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label19->BackColor = System::Drawing::Color::Transparent;
            this->label19->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label19->Location = System::Drawing::Point(424, 309);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(187, 96);
            this->label19->TabIndex = 20;
            this->label19->Text = L"Madeira, Portugal";
            this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label19->Click += gcnew System::EventHandler(this, &HomePage::madeira);
            // 
            // label20
            // 
            this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label20->BackColor = System::Drawing::Color::Transparent;
            this->label20->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label20->Location = System::Drawing::Point(79, 309);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(187, 96);
            this->label20->TabIndex = 19;
            this->label20->Text = L"Bali, Indonesia";
            this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label20->Click += gcnew System::EventHandler(this, &HomePage::bali);
            // 
            // pictureBox15
            // 
            this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
            this->pictureBox15->Location = System::Drawing::Point(693, 3);
            this->pictureBox15->Name = L"pictureBox15";
            this->pictureBox15->Size = System::Drawing::Size(339, 294);
            this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox15->TabIndex = 2;
            this->pictureBox15->TabStop = false;
            this->pictureBox15->Click += gcnew System::EventHandler(this, &HomePage::milos);
            // 
            // pictureBox16
            // 
            this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
            this->pictureBox16->Location = System::Drawing::Point(348, 3);
            this->pictureBox16->Name = L"pictureBox16";
            this->pictureBox16->Size = System::Drawing::Size(339, 294);
            this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox16->TabIndex = 1;
            this->pictureBox16->TabStop = false;
            this->pictureBox16->Click += gcnew System::EventHandler(this, &HomePage::madeira);
            // 
            // pictureBox17
            // 
            this->pictureBox17->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
            this->pictureBox17->Location = System::Drawing::Point(3, 3);
            this->pictureBox17->Name = L"pictureBox17";
            this->pictureBox17->Size = System::Drawing::Size(339, 294);
            this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox17->TabIndex = 0;
            this->pictureBox17->TabStop = false;
            this->pictureBox17->Click += gcnew System::EventHandler(this, &HomePage::bali);
            // 
            // tableLayoutPanel9
            // 
            this->tableLayoutPanel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel9->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->tableLayoutPanel9->ColumnCount = 1;
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel9->Controls->Add(this->pictureBox14, 0, 0);
            this->tableLayoutPanel9->Controls->Add(this->label17, 0, 1);
            this->tableLayoutPanel9->Location = System::Drawing::Point(61, 2981);
            this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
            this->tableLayoutPanel9->RowCount = 3;
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60.75949F)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.24051F)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel9->Size = System::Drawing::Size(1131, 339);
            this->tableLayoutPanel9->TabIndex = 26;
            // 
            // pictureBox14
            // 
            this->pictureBox14->Dock = System::Windows::Forms::DockStyle::Top;
            this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
            this->pictureBox14->Location = System::Drawing::Point(3, 3);
            this->pictureBox14->Name = L"pictureBox14";
            this->pictureBox14->Size = System::Drawing::Size(1125, 187);
            this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox14->TabIndex = 17;
            this->pictureBox14->TabStop = false;
            // 
            // label17
            // 
            this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label17->BackColor = System::Drawing::Color::Transparent;
            this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label17->Location = System::Drawing::Point(229, 207);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(672, 96);
            this->label17->TabIndex = 18;
            this->label17->Text = resources->GetString(L"label17.Text");
            this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel8
            // 
            this->tableLayoutPanel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel8->BackColor = System::Drawing::Color::MintCream;
            this->tableLayoutPanel8->ColumnCount = 3;
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel8->Controls->Add(this->label14, 2, 1);
            this->tableLayoutPanel8->Controls->Add(this->label15, 1, 1);
            this->tableLayoutPanel8->Controls->Add(this->label16, 0, 1);
            this->tableLayoutPanel8->Controls->Add(this->pictureBox11, 2, 0);
            this->tableLayoutPanel8->Controls->Add(this->pictureBox12, 1, 0);
            this->tableLayoutPanel8->Controls->Add(this->pictureBox13, 0, 0);
            this->tableLayoutPanel8->Location = System::Drawing::Point(102, 2491);
            this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
            this->tableLayoutPanel8->RowCount = 2;
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel8->Size = System::Drawing::Size(1035, 415);
            this->tableLayoutPanel8->TabIndex = 25;
            // 
            // label14
            // 
            this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label14->BackColor = System::Drawing::Color::Transparent;
            this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label14->Location = System::Drawing::Point(767, 308);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(190, 99);
            this->label14->TabIndex = 21;
            this->label14->Text = L"Trossachs National Park, Scotland";
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label14->Click += gcnew System::EventHandler(this, &HomePage::trossachs);
            // 
            // label15
            // 
            this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label15->BackColor = System::Drawing::Color::Transparent;
            this->label15->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label15->Location = System::Drawing::Point(424, 309);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(187, 96);
            this->label15->TabIndex = 20;
            this->label15->Text = L"Daintree, Australia";
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label15->Click += gcnew System::EventHandler(this, &HomePage::daintree);
            // 
            // label16
            // 
            this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label16->BackColor = System::Drawing::Color::Transparent;
            this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label16->Location = System::Drawing::Point(79, 309);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(187, 96);
            this->label16->TabIndex = 19;
            this->label16->Text = L"Amazon Forest, Brazil";
            this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label16->Click += gcnew System::EventHandler(this, &HomePage::amazon);
            // 
            // pictureBox11
            // 
            this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
            this->pictureBox11->Location = System::Drawing::Point(693, 3);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(339, 294);
            this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox11->TabIndex = 2;
            this->pictureBox11->TabStop = false;
            this->pictureBox11->Click += gcnew System::EventHandler(this, &HomePage::trossachs);
            // 
            // pictureBox12
            // 
            this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
            this->pictureBox12->Location = System::Drawing::Point(348, 3);
            this->pictureBox12->Name = L"pictureBox12";
            this->pictureBox12->Size = System::Drawing::Size(339, 294);
            this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox12->TabIndex = 1;
            this->pictureBox12->TabStop = false;
            this->pictureBox12->Click += gcnew System::EventHandler(this, &HomePage::daintree);
            // 
            // pictureBox13
            // 
            this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
            this->pictureBox13->Location = System::Drawing::Point(3, 3);
            this->pictureBox13->Name = L"pictureBox13";
            this->pictureBox13->Size = System::Drawing::Size(339, 294);
            this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox13->TabIndex = 0;
            this->pictureBox13->TabStop = false;
            this->pictureBox13->Click += gcnew System::EventHandler(this, &HomePage::amazon);
            // 
            // tableLayoutPanel7
            // 
            this->tableLayoutPanel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel7->BackColor = System::Drawing::Color::MintCream;
            this->tableLayoutPanel7->ColumnCount = 1;
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel7->Controls->Add(this->pictureBox10, 0, 0);
            this->tableLayoutPanel7->Controls->Add(this->label13, 0, 1);
            this->tableLayoutPanel7->Location = System::Drawing::Point(58, 2174);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 2;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60.75949F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.24051F)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(1131, 339);
            this->tableLayoutPanel7->TabIndex = 24;
            // 
            // pictureBox10
            // 
            this->pictureBox10->Dock = System::Windows::Forms::DockStyle::Top;
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(3, 3);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(1125, 199);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox10->TabIndex = 17;
            this->pictureBox10->TabStop = false;
            // 
            // label13
            // 
            this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label13->BackColor = System::Drawing::Color::Transparent;
            this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label13->Location = System::Drawing::Point(229, 224);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(672, 96);
            this->label13->TabIndex = 18;
            this->label13->Text = resources->GetString(L"label13.Text");
            this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel6
            // 
            this->tableLayoutPanel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel6->BackColor = System::Drawing::Color::OldLace;
            this->tableLayoutPanel6->ColumnCount = 3;
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel6->Controls->Add(this->label10, 2, 1);
            this->tableLayoutPanel6->Controls->Add(this->label11, 1, 1);
            this->tableLayoutPanel6->Controls->Add(this->label12, 0, 1);
            this->tableLayoutPanel6->Controls->Add(this->pictureBox7, 2, 0);
            this->tableLayoutPanel6->Controls->Add(this->pictureBox8, 1, 0);
            this->tableLayoutPanel6->Controls->Add(this->pictureBox9, 0, 0);
            this->tableLayoutPanel6->Location = System::Drawing::Point(105, 1722);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 2;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(1035, 415);
            this->tableLayoutPanel6->TabIndex = 23;
            // 
            // label10
            // 
            this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label10->Location = System::Drawing::Point(767, 323);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(190, 69);
            this->label10->TabIndex = 21;
            this->label10->Text = L"Thar Desert, Jaipur, Rajsthan";
            this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label10->Click += gcnew System::EventHandler(this, &HomePage::thar);
            // 
            // label11
            // 
            this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label11->BackColor = System::Drawing::Color::Transparent;
            this->label11->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label11->Location = System::Drawing::Point(424, 309);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(187, 96);
            this->label11->TabIndex = 20;
            this->label11->Text = L"Sahara Desert, North Africa";
            this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label11->Click += gcnew System::EventHandler(this, &HomePage::sahara);
            // 
            // label12
            // 
            this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label12->BackColor = System::Drawing::Color::Transparent;
            this->label12->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label12->Location = System::Drawing::Point(79, 309);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(187, 96);
            this->label12->TabIndex = 19;
            this->label12->Text = L"Arabian Desert, Saudi Arabia";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label12->Click += gcnew System::EventHandler(this, &HomePage::arabian);
            // 
            // pictureBox7
            // 
            this->pictureBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(693, 3);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(339, 293);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox7->TabIndex = 2;
            this->pictureBox7->TabStop = false;
            this->pictureBox7->Click += gcnew System::EventHandler(this, &HomePage::thar);
            // 
            // pictureBox8
            // 
            this->pictureBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(348, 3);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(339, 293);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 1;
            this->pictureBox8->TabStop = false;
            this->pictureBox8->Click += gcnew System::EventHandler(this, &HomePage::sahara);
            // 
            // pictureBox9
            // 
            this->pictureBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(3, 3);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(339, 293);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox9->TabIndex = 0;
            this->pictureBox9->TabStop = false;
            this->pictureBox9->Click += gcnew System::EventHandler(this, &HomePage::arabian);
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel5->BackColor = System::Drawing::Color::OldLace;
            this->tableLayoutPanel5->ColumnCount = 1;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel5->Controls->Add(this->pictureBox6, 0, 0);
            this->tableLayoutPanel5->Controls->Add(this->label9, 0, 1);
            this->tableLayoutPanel5->Location = System::Drawing::Point(58, 1422);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 2;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60.75949F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.24051F)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(1131, 310);
            this->tableLayoutPanel5->TabIndex = 22;
            // 
            // pictureBox6
            // 
            this->pictureBox6->BackColor = System::Drawing::Color::OldLace;
            this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Top;
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(3, 3);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(1125, 182);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox6->TabIndex = 17;
            this->pictureBox6->TabStop = false;
            // 
            // label9
            // 
            this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label9->Location = System::Drawing::Point(229, 201);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(672, 96);
            this->label9->TabIndex = 18;
            this->label9->Text = resources->GetString(L"label9.Text");
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel4->BackColor = System::Drawing::SystemColors::ControlLight;
            this->tableLayoutPanel4->ColumnCount = 3;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel4->Controls->Add(this->label8, 2, 1);
            this->tableLayoutPanel4->Controls->Add(this->label7, 1, 1);
            this->tableLayoutPanel4->Controls->Add(this->label6, 0, 1);
            this->tableLayoutPanel4->Controls->Add(this->pictureBox5, 2, 0);
            this->tableLayoutPanel4->Controls->Add(this->pictureBox4, 1, 0);
            this->tableLayoutPanel4->Controls->Add(this->pictureBox3, 0, 0);
            this->tableLayoutPanel4->Location = System::Drawing::Point(112, 937);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 2;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(1035, 415);
            this->tableLayoutPanel4->TabIndex = 21;
            // 
            // label8
            // 
            this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label8->Location = System::Drawing::Point(767, 309);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(190, 97);
            this->label8->TabIndex = 21;
            this->label8->Text = L"Swiss Mountains, Switzerland";
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label8->Click += gcnew System::EventHandler(this, &HomePage::swiss);
            // 
            // label7
            // 
            this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label7->Location = System::Drawing::Point(424, 309);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(187, 96);
            this->label7->TabIndex = 20;
            this->label7->Text = L"Mount Logan, Toronto, Canada";
            this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label7->Click += gcnew System::EventHandler(this, &HomePage::logan);
            // 
            // label6
            // 
            this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(92)));
            this->label6->Location = System::Drawing::Point(79, 309);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(187, 96);
            this->label6->TabIndex = 19;
            this->label6->Text = L"Mount Fuji, Tokyo, Japan";
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label6->Click += gcnew System::EventHandler(this, &HomePage::fuji);
            // 
            // pictureBox5
            // 
            this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(693, 3);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(339, 294);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 2;
            this->pictureBox5->TabStop = false;
            this->pictureBox5->Click += gcnew System::EventHandler(this, &HomePage::swiss);
            // 
            // pictureBox4
            // 
            this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(348, 3);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(339, 294);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 1;
            this->pictureBox4->TabStop = false;
            this->pictureBox4->Click += gcnew System::EventHandler(this, &HomePage::logan);
            // 
            // pictureBox3
            // 
            this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(3, 3);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(339, 294);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 0;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &HomePage::fuji);
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
            this->panel3->Location = System::Drawing::Point(259, 14);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(732, 709);
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
            this->panel6->Location = System::Drawing::Point(61, 475);
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
            this->panel5->Location = System::Drawing::Point(61, 259);
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
            this->panel4->Location = System::Drawing::Point(61, 49);
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
            this->button6->Location = System::Drawing::Point(703, 4);
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
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"HomePage";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"HomePage";
            this->tableLayoutPanel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->tableLayoutPanel3->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->tableLayoutPanel20->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
            this->tableLayoutPanel19->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
            this->tableLayoutPanel18->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
            this->tableLayoutPanel17->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
            this->tableLayoutPanel16->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
            this->tableLayoutPanel15->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
            this->tableLayoutPanel14->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
            this->tableLayoutPanel13->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
            this->tableLayoutPanel12->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
            this->tableLayoutPanel11->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
            this->tableLayoutPanel10->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
            this->tableLayoutPanel9->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
            this->tableLayoutPanel8->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            this->tableLayoutPanel7->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            this->tableLayoutPanel6->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->tableLayoutPanel5->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            this->tableLayoutPanel4->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
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

private: System::Void fuji(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label6->Text,"Other than the sights, the food, the shopping and the climb, visiting Mt. Fuji is by itself an experience on its own. Discover the history of Mt. Fuji and why it is deemed a sacred mountain!","200,000 BDT","320,000 BDT","450,000 BDT");
    p1->ShowDialog();
}
private: System::Void logan(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label7->Text, "There are many reasons for choosing Mountain Climbing in Mount Logan. Mount Logan is the highest mountain in Canada. Therefore, due to altitude alone, it will give you the chance to stand on the highest spot in the country.", "220,000 BDT", "440,000 BDT", "650,000 BDT");
    p1->ShowDialog();
}
private: System::Void swiss(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label8->Text, "Switzerland is home to the Swiss Alps — and tons of other incredible natural scenery. Switzerland has some of the most incredible scenery in Europe, thanks to the majestic Swiss Alps.", "210,000 BDT", "325,000 BDT", "440,000 BDT");
    p1->ShowDialog();
}
private: System::Void arabian(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label12->Text, "With its diverse landscape, warm locals, vibrant cultures and delicious food, the Arabian Peninsula should be on everyone's top places to visit.", "180,000 BDT", "275,000 BDT", "350,000 BDT");
    p1->ShowDialog();
}
private: System::Void sahara(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label11->Text, "The Sahara Desert is full of beautiful ancient ruins, sand dunes as tall as mountains, and wondrous oasis towns. You can ride a camel, camp outside under the desert night sky.", "180,000 BDT", "280,000 BDT", "320,000 BDT");
    p1->ShowDialog();
}
private: System::Void thar(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label10->Text, "The Thar Desert is a fine choice for travellers who are keen on understanding the local flora and fauna of the land and experiencing life in the villages. It is the window into the local life of the people who live in this tough topography.", "60,000 BDT", "85,000 BDT", "110,000 BDT");
    p1->ShowDialog();
}
private: System::Void amazon(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label16->Text, "Rainforests offer opportunities for cultural exchange, photography, adventure, fishing, hiking, relaxation, birding and wildlife spotting. However, a visit to the rainforest is not a trip fit for everyone.", "240,000 BDT", "260,000 BDT", "320,000 BDT");
    p1->ShowDialog();
}
private: System::Void daintree(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label15->Text, "A landscape with striking diversity, the Daintree is a destination to discover mountain ranges, flowing streams, tall waterfalls, lagoons and gorges. Around 1200 square metres of nature's finest.", "130,000 BDT", "165,000 BDT", "190,000 BDT");
    p1->ShowDialog();
}
private: System::Void trossachs(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label14->Text, "Famous for its stunning scenery; the national park offers mountains, lochs, forests and glens across 1,865 square km. There's so much to see and do in the area, it's well worth making repeat visits.", "210,000 BDT", "235,000 BDT", "280,000 BDT");
    p1->ShowDialog();
}
private: System::Void bali(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label20->Text, "Beyond stunning beaches and magical temples, Bali has virtually every kind of natural beauty. Glorious mountainous areas with lush greenery, scenic lakes, gorgeous waterfalls, secret canyons all make up the island's landscape", "110,000 BDT", "150,000 BDT", "210,000 BDT");
    p1->ShowDialog();
}
private: System::Void madeira(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label19->Text, "This stunning subtropical island is often compared to Hawaii for its volcanic landscapes, rugged coastline, and botanical wonders. We've highlighted nine reasons to visit Madeira including stunning scenery, natural lava swimming pools, and world-class fireworks.", "200,000 BDT", "240,000 BDT", "280,000 BDT");
    p1->ShowDialog();
}
private: System::Void milos(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label18->Text, "The horseshoe shape of Milos, and the white rock that makes it famous, are two reasons why this island has such unique and beautiful beaches. One of the best things to do in Milos is travel between secret coves and sweeping bays, relaxing on the beach, or snorkeling in the crystal clear waters.", "200,000 BDT", "240,000 BDT", "300,000 BDT");
    p1->ShowDialog();
}
private: System::Void bora(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label24->Text, "Bora Bora offers intense colors and raw beauty, but also a breathtaking view of the lagoon from its heights. Take a walk in the evening along the Matira beach to admire the spectacle of the waves fading on the shore. You will never find a more exotic destination than this one.", "160,000 BDT", "210,000 BDT", "260,000 BDT");
    p1->ShowDialog();
}
private: System::Void dune(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label23->Text, "With soft golden sands and impossibly stunning views, Dune du Pilat is a natural phenomenon well worth visiting. Here is all you need to know to explore the highest sand dune in Europe.", "160,000 BDT", "200,000 BDT", "250,000 BDT");
    p1->ShowDialog();
}
private: System::Void mauritius(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label22->Text, "Mauritius has a marvellous blend of cultures, welcoming people, a varied cuisine and a huge mix of ethnic communities. There are activities for every kind of traveller in this natural paradise.", "200,000 BDT", "240,000 BDT", "260,000 BDT");
    p1->ShowDialog();
}
private: System::Void gstaad(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label28->Text, "Home to one of the most popular ski areas in the Alps, Gstaad offers the absolute alpine experience. Gondolas provide easy access to surrounding mountains and at 6,560 feet, you'll have clear views of the Simmental and Saanen Valleys.", "170,000 BDT", "230,000 BDT", "270,000 BDT");
    p1->ShowDialog();
}
private: System::Void patagonia(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label27->Text, "For fabulous landscapes: Patagonia is home to the southern section of the Andes mountain range, deserts, steppes, grasslands, lakes and two long coasts. It boasts huge glaciers, icebergs and designated national parks.", "260,000 BDT", "290,000 BDT", "330,000 BDT");

}
private: System::Void kashmir(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label26->Text, "One of the most apparent reasons why Kashmir is considered to be 'Heaven on earth' is due to the breathtaking landscapes that it offers the tourists. People from all around the world travel to this beautiful paradise to witness the gushing waters, lush green meadows, and the astoundingly high mountain ranges.", "80,000 BDT", "110,000 BDT", "135,000 BDT");

}
private: System::Void dubai(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label32->Text, "Beautiful, shiny skyscrapers, state of the art buildings and beautiful beaches and sand dunes; fine dining; fabulous all-inclusive accommodation options, shopping at Dubai Mall and adrenaline filled experiences all make Dubai a fantastic tourist destination.", "170,000 BDT", "210,000 BDT", "270,000 BDT");

}
private: System::Void foxGlacier(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label31->Text, "The area around the Fox Glacier township offers visitors a rare opportunity to easily access a dynamic glacial environment in a forested area while within driving and walking distance from the main highway.", "320,000 BDT", "360,000 BDT", "410,000 BDT");

}
private: System::Void interlaken(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label30->Text, "For spectacular scenery and amazing views, it's very hard to beat the Alps and the surrounding area, and Interlaken is one of the best places to visit in Switzerland, with so much to see and do in the local area and further afield for memories that will last a lifetime.", "170,000 BDT", "230,000 BDT", "280,000 BDT");

}
private: System::Void rome(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label36->Text, "Also known as the Eternal City, Rome is home to some of the most historic monuments, art, and architecture in the world. Harking back to a time when gladiator fights were the daily form of entertainment, the city is bursting at the seams with fascinating things to see and do.", "200,000 BDT", "240,000 BDT", "300,000 BDT");
    p1->ShowDialog();
}
private: System::Void sanD(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label35->Text, "San Diego is home to some of the most beautiful beaches in the country. There are 70 miles of shoreline and a diverse selection of beaches to explore. If you like surfing, you'll be in heaven; if you prefer getting lost in your thoughts on a secluded sandy stretch, you'll also be in heaven.", "180,000 BDT", "220,000 BDT", "270,000 BDT");
    p1->ShowDialog();
}
private: System::Void novaS(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label34->Text, "Year-round surfing and sea kayaking, vineyards and markets, all within easy driving distance makes Nova Scotia the place for the perfect road trip.", "320,000 BDT", "360,000 BDT", "410,000 BDT");
    p1->ShowDialog();
}
private: System::Void alberta(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label40->Text, "You'll find the patios and terraces of top-class restaurants filled with people reveling in the incredible surroundings. Local shops and art galleries line the picturesque streets that from time to time witness a deer commuting through the town.", "330,000 BDT", "370,000 BDT", "420,000 BDT");
    p1->ShowDialog();
}
private: System::Void dublin(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label39->Text, "Dublin is incredibly picturesque. It's a medieval city that has some fascinating living history along its streets – ancient buildings, historical sites, street art, memorials and a different story at every turn.", "200,000 BDT", "240,000 BDT", "300,000 BDT");
    p1->ShowDialog();
}
private: System::Void tokyo(System::Object^ sender, System::EventArgs^ e) {
    Pkg^ p1 = gcnew Pkg(label38->Text, "Staying in Tokyo can be a rich cultural experience and give you a host of new memories. Having an open mind as you move through the city can lead you to interesting shops, restaurants and just sights found off the beaten path.", "180,000 BDT", "245,000 BDT", "310,000 BDT");
    p1->ShowDialog();
}
private: System::Void prof(System::Object^ sender, System::EventArgs^ e) {
    profile^ p = gcnew profile();
    p->ShowDialog();
}
};
}
