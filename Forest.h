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
	/// Summary for Forest
	/// </summary>
	public ref class Forest : public System::Windows::Forms::Form
	{
	public:
		Forest(void)
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
		~Forest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
	protected:
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label13;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Forest::typeid));
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
			this->tableLayoutPanel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->tableLayoutPanel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel8->BackColor = System::Drawing::SystemColors::Control;
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
			this->tableLayoutPanel8->Location = System::Drawing::Point(99, 331);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 2;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(1025, 415);
			this->tableLayoutPanel8->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label14->Location = System::Drawing::Point(758, 308);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(190, 99);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Trossachs National Park, Scotland";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label14->Click += gcnew System::EventHandler(this, &Forest::trossachs);
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label15->Location = System::Drawing::Point(418, 309);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(187, 96);
			this->label15->TabIndex = 20;
			this->label15->Text = L"Daintree, Australia";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label15->Click += gcnew System::EventHandler(this, &Forest::daintree);
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label16->Location = System::Drawing::Point(77, 309);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(187, 96);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Amazon Forest, Brazil";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label16->Click += gcnew System::EventHandler(this, &Forest::amazon);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(685, 3);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(337, 294);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 2;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Forest::trossachs);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(344, 3);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(335, 294);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 1;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Forest::daintree);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(3, 3);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(335, 294);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 0;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &Forest::amazon);
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel7->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel7->ColumnCount = 1;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->Controls->Add(this->pictureBox10, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->label13, 0, 1);
			this->tableLayoutPanel7->Location = System::Drawing::Point(55, 14);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 2;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60.75949F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.24051F)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(1142, 339);
			this->tableLayoutPanel7->TabIndex = 26;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(3, 3);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(1136, 199);
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
			this->label13->Location = System::Drawing::Point(235, 224);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(672, 96);
			this->label13->TabIndex = 18;
			this->label13->Text = resources->GetString(L"label13.Text");
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Forest
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->tableLayoutPanel8);
			this->Controls->Add(this->tableLayoutPanel7);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Forest";
			this->Text = L"Forest";
			this->tableLayoutPanel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->tableLayoutPanel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
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
	};
}
