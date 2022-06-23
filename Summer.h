#pragma once
#include "Pkg.h"
namespace Travel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Summer
	/// </summary>
	public ref class Summer : public System::Windows::Forms::Form
	{
	public:
		Summer(void)
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
		~Summer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel18;
	protected:
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel17;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::Label^ label33;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Summer::typeid));
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
			this->tableLayoutPanel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			this->tableLayoutPanel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel18
			// 
			this->tableLayoutPanel18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel18->BackColor = System::Drawing::SystemColors::Control;
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
			this->tableLayoutPanel18->Location = System::Drawing::Point(99, 296);
			this->tableLayoutPanel18->Name = L"tableLayoutPanel18";
			this->tableLayoutPanel18->RowCount = 2;
			this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
			this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
			this->tableLayoutPanel18->Size = System::Drawing::Size(1037, 415);
			this->tableLayoutPanel18->TabIndex = 37;
			// 
			// label34
			// 
			this->label34->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label34->Location = System::Drawing::Point(768, 305);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(190, 104);
			this->label34->TabIndex = 21;
			this->label34->Text = L"Nova Scotia, Canada";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label34->Click += gcnew System::EventHandler(this, &Summer::novaS);
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
			this->label35->Click += gcnew System::EventHandler(this, &Summer::sanD);
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
			this->label36->Click += gcnew System::EventHandler(this, &Summer::rome);
			// 
			// pictureBox31
			// 
			this->pictureBox31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox31->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(693, 3);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(341, 294);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox31->TabIndex = 2;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &Summer::novaS);
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
			this->pictureBox32->Click += gcnew System::EventHandler(this, &Summer::sanD);
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
			this->pictureBox33->Click += gcnew System::EventHandler(this, &Summer::rome);
			// 
			// tableLayoutPanel17
			// 
			this->tableLayoutPanel17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel17->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel17->ColumnCount = 1;
			this->tableLayoutPanel17->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel17->Controls->Add(this->pictureBox30, 0, 0);
			this->tableLayoutPanel17->Controls->Add(this->label33, 0, 1);
			this->tableLayoutPanel17->Location = System::Drawing::Point(55, 11);
			this->tableLayoutPanel17->Name = L"tableLayoutPanel17";
			this->tableLayoutPanel17->RowCount = 2;
			this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 63.05085F)));
			this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 36.94915F)));
			this->tableLayoutPanel17->Size = System::Drawing::Size(1154, 295);
			this->tableLayoutPanel17->TabIndex = 36;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(3, 3);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(1148, 180);
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
			this->label33->Location = System::Drawing::Point(241, 194);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(672, 93);
			this->label33->TabIndex = 18;
			this->label33->Text = resources->GetString(L"label33.Text");
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Summer
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1283, 673);
			this->Controls->Add(this->tableLayoutPanel18);
			this->Controls->Add(this->tableLayoutPanel17);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Summer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Summer";
			this->tableLayoutPanel18->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			this->tableLayoutPanel17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
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
	};
}
