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
	/// Summary for SeaBeach
	/// </summary>
	public ref class SeaBeach : public System::Windows::Forms::Form
	{
	public:
		SeaBeach(void)
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
		~SeaBeach()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;
	protected:
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::Label^ label21;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SeaBeach::typeid));
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
			this->tableLayoutPanel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			this->tableLayoutPanel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel12
			// 
			this->tableLayoutPanel12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel12->BackColor = System::Drawing::SystemColors::Control;
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
			this->tableLayoutPanel12->Location = System::Drawing::Point(105, 334);
			this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
			this->tableLayoutPanel12->RowCount = 2;
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel12->Size = System::Drawing::Size(1043, 415);
			this->tableLayoutPanel12->TabIndex = 31;
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label22->Location = System::Drawing::Point(773, 305);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(190, 104);
			this->label22->TabIndex = 21;
			this->label22->Text = L"Mauritius, Mauritius";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label22->Click += gcnew System::EventHandler(this, &SeaBeach::mauritius);
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label23->Location = System::Drawing::Point(427, 309);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(187, 96);
			this->label23->TabIndex = 20;
			this->label23->Text = L"Dune du Pyla, France";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label23->Click += gcnew System::EventHandler(this, &SeaBeach::dune);
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label24->Location = System::Drawing::Point(80, 309);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(187, 96);
			this->label24->TabIndex = 19;
			this->label24->Text = L"Bora Bora, French Polynesia";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label24->Click += gcnew System::EventHandler(this, &SeaBeach::bora);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(697, 3);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(343, 294);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 2;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &SeaBeach::mauritius);
			// 
			// pictureBox20
			// 
			this->pictureBox20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(350, 3);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(341, 294);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 1;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &SeaBeach::dune);
			// 
			// pictureBox21
			// 
			this->pictureBox21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(3, 3);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(341, 294);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 0;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &SeaBeach::bora);
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel11->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel11->ColumnCount = 1;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel11->Controls->Add(this->pictureBox18, 0, 0);
			this->tableLayoutPanel11->Controls->Add(this->label21, 0, 1);
			this->tableLayoutPanel11->Location = System::Drawing::Point(55, 14);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 2;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60.75949F)));
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.24051F)));
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(1160, 339);
			this->tableLayoutPanel11->TabIndex = 30;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(3, 3);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(1154, 199);
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
			this->label21->Location = System::Drawing::Point(244, 224);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(672, 96);
			this->label21->TabIndex = 18;
			this->label21->Text = resources->GetString(L"label21.Text");
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SeaBeach
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1283, 673);
			this->Controls->Add(this->tableLayoutPanel12);
			this->Controls->Add(this->tableLayoutPanel11);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SeaBeach";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SeaBeach";
			this->tableLayoutPanel12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			this->tableLayoutPanel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
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
	};
}
