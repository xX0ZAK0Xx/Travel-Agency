#pragma once
#include "Pay.h"
namespace Travel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pkg
	/// </summary>
	public ref class Pkg : public System::Windows::Forms::Form
	{
	public:
		Pkg(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}Pkg(String^ lc, String^dsc, String^p1, String^p2, String^p3)
		{
			InitializeComponent();
			desc->Text = lc;
			dscrptn->Text = dsc;
			price1->Text = p1;
			price2->Text = p2;
			price3->Text = p3;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pkg()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	private: System::Windows::Forms::Button^ price2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ price1;
	private: System::Windows::Forms::Label^ desc;
	private: System::Windows::Forms::Button^ price3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ dscrptn;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pkg::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->desc = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->price3 = (gcnew System::Windows::Forms::Button());
			this->price2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->price1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dscrptn = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->panel2->Controls->Add(this->desc);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(702, 100);
			this->panel2->TabIndex = 2;
			// 
			// desc
			// 
			this->desc->BackColor = System::Drawing::Color::Transparent;
			this->desc->Dock = System::Windows::Forms::DockStyle::Fill;
			this->desc->Font = (gcnew System::Drawing::Font(L"Aharoni", 19.8F, System::Drawing::FontStyle::Bold));
			this->desc->ForeColor = System::Drawing::Color::White;
			this->desc->Location = System::Drawing::Point(0, 0);
			this->desc->Name = L"desc";
			this->desc->Size = System::Drawing::Size(702, 100);
			this->desc->TabIndex = 20;
			this->desc->Text = L"location";
			this->desc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->Controls->Add(this->price3, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->price2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->price1, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 325);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 57.56824F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 42.43176F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(702, 278);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// price3
			// 
			this->price3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->price3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14, System::Drawing::FontStyle::Bold));
			this->price3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->price3->Location = System::Drawing::Point(485, 186);
			this->price3->Name = L"price3";
			this->price3->Size = System::Drawing::Size(199, 66);
			this->price3->TabIndex = 5;
			this->price3->Text = L"button3";
			this->price3->UseVisualStyleBackColor = true;
			this->price3->Click += gcnew System::EventHandler(this, &Pkg::price3_Click);
			// 
			// price2
			// 
			this->price2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->price2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14, System::Drawing::FontStyle::Bold));
			this->price2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->price2->Location = System::Drawing::Point(251, 186);
			this->price2->Name = L"price2";
			this->price2->Size = System::Drawing::Size(199, 66);
			this->price2->TabIndex = 4;
			this->price2->Text = L"button2";
			this->price2->UseVisualStyleBackColor = true;
			this->price2->Click += gcnew System::EventHandler(this, &Pkg::price2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label3->Location = System::Drawing::Point(489, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 35);
			this->label3->TabIndex = 2;
			this->label3->Text = L"6 Days 7 Night";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label2->Location = System::Drawing::Point(255, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 35);
			this->label2->TabIndex = 1;
			this->label2->Text = L"4 Days 5 Night";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label1->Location = System::Drawing::Point(21, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"2 Days 3 Night";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// price1
			// 
			this->price1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->price1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14, System::Drawing::FontStyle::Bold));
			this->price1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->price1->Location = System::Drawing::Point(15, 186);
			this->price1->Name = L"price1";
			this->price1->Size = System::Drawing::Size(203, 66);
			this->price1->TabIndex = 3;
			this->price1->Text = L"button1";
			this->price1->UseVisualStyleBackColor = true;
			this->price1->Click += gcnew System::EventHandler(this, &Pkg::price1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dscrptn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(702, 172);
			this->panel1->TabIndex = 4;
			// 
			// dscrptn
			// 
			this->dscrptn->BackColor = System::Drawing::Color::Transparent;
			this->dscrptn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dscrptn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dscrptn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->dscrptn->Location = System::Drawing::Point(0, 0);
			this->dscrptn->Name = L"dscrptn";
			this->dscrptn->Size = System::Drawing::Size(702, 172);
			this->dscrptn->TabIndex = 19;
			this->dscrptn->Text = L"Visiting a desert destination can help you avoid the crowds and enjoy a peaceful "
				L"experience. For many of us, when we think of the desert,";
			this->dscrptn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(334, 292);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label4->Location = System::Drawing::Point(147, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Choose Starting Date :";
			// 
			// Pkg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 673);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Pkg";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Package";
			this->panel2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void price1_Click(System::Object^ sender, System::EventArgs^ e) {
		Pay^ p = gcnew Pay(price1->Text, desc->Text, "Package 1", dateTimePicker1->Text);
		p->ShowDialog();
	}
private: System::Void price2_Click(System::Object^ sender, System::EventArgs^ e) {
	Pay^ p = gcnew Pay(price2->Text, desc->Text, "Package 2", dateTimePicker1->Text);
	p->ShowDialog();
}
private: System::Void price3_Click(System::Object^ sender, System::EventArgs^ e) {
	Pay^ p = gcnew Pay(price3->Text, desc->Text, "Package 3", dateTimePicker1->Text);
	p->ShowDialog();
}
};
}
