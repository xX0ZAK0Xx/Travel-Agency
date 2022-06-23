#pragma once
#include"Pkg.h"
namespace Travel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Island
	/// </summary>
	public ref class Island : public System::Windows::Forms::Form
	{
	public:
		Island(void)
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
		~Island()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
	protected:
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ label17;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Island::typeid));
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
			this->tableLayoutPanel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->tableLayoutPanel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel10->BackColor = System::Drawing::SystemColors::Control;
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
			this->tableLayoutPanel10->Location = System::Drawing::Point(96, 320);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 2;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(1043, 415);
			this->tableLayoutPanel10->TabIndex = 29;
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label18->Location = System::Drawing::Point(773, 323);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(190, 69);
			this->label18->TabIndex = 21;
			this->label18->Text = L"Milos, Greece";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label18->Click += gcnew System::EventHandler(this, &Island::milos);
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label19->Location = System::Drawing::Point(427, 309);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(187, 96);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Madeira, Portugal";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label19->Click += gcnew System::EventHandler(this, &Island::madeira);
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label20->Location = System::Drawing::Point(80, 309);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(187, 96);
			this->label20->TabIndex = 19;
			this->label20->Text = L"Bali, Indonesia";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label20->Click += gcnew System::EventHandler(this, &Island::bali);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(697, 3);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(343, 294);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 2;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &Island::milos);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(350, 3);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(341, 294);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 1;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &Island::madeira);
			// 
			// pictureBox17
			// 
			this->pictureBox17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(3, 3);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(341, 294);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 0;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &Island::bali);
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel9->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel9->ColumnCount = 1;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel9->Controls->Add(this->pictureBox14, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->label17, 0, 1);
			this->tableLayoutPanel9->Location = System::Drawing::Point(55, 21);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 3;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60.75949F)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.24051F)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(1160, 339);
			this->tableLayoutPanel9->TabIndex = 28;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(3, 3);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(1154, 187);
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
			this->label17->Location = System::Drawing::Point(244, 207);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(672, 96);
			this->label17->TabIndex = 18;
			this->label17->Text = resources->GetString(L"label17.Text");
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Island
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1283, 673);
			this->Controls->Add(this->tableLayoutPanel10);
			this->Controls->Add(this->tableLayoutPanel9);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Island";
			this->Text = L"Island";
			this->tableLayoutPanel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->tableLayoutPanel9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
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
	};
}
