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
	/// Summary for SnowFall
	/// </summary>
	public ref class SnowFall : public System::Windows::Forms::Form
	{
	public:
		SnowFall(void)
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
		~SnowFall()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
	protected:
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::Label^ label25;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SnowFall::typeid));
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
			this->tableLayoutPanel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			this->tableLayoutPanel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel14
			// 
			this->tableLayoutPanel14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel14->BackColor = System::Drawing::SystemColors::Control;
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
			this->tableLayoutPanel14->Location = System::Drawing::Point(105, 329);
			this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
			this->tableLayoutPanel14->RowCount = 2;
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel14->Size = System::Drawing::Size(1013, 415);
			this->tableLayoutPanel14->TabIndex = 33;
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label26->Location = System::Drawing::Point(748, 305);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(190, 104);
			this->label26->TabIndex = 21;
			this->label26->Text = L"Kashmir, India";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label26->Click += gcnew System::EventHandler(this, &SnowFall::kashmir);
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label27->Location = System::Drawing::Point(412, 309);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(187, 96);
			this->label27->TabIndex = 20;
			this->label27->Text = L"Patagonia, Argentina";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label27->Click += gcnew System::EventHandler(this, &SnowFall::patagonia);
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label28->Location = System::Drawing::Point(75, 309);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(187, 96);
			this->label28->TabIndex = 19;
			this->label28->Text = L"Gstaad, Switzerland";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label28->Click += gcnew System::EventHandler(this, &SnowFall::gstaad);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(677, 3);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(333, 294);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 2;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &SnowFall::kashmir);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(340, 3);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(331, 294);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox24->TabIndex = 1;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &SnowFall::patagonia);
			// 
			// pictureBox25
			// 
			this->pictureBox25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(3, 3);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(331, 294);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox25->TabIndex = 0;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &SnowFall::gstaad);
			// 
			// tableLayoutPanel13
			// 
			this->tableLayoutPanel13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel13->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel13->ColumnCount = 1;
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel13->Controls->Add(this->pictureBox22, 0, 0);
			this->tableLayoutPanel13->Controls->Add(this->label25, 0, 1);
			this->tableLayoutPanel13->Location = System::Drawing::Point(55, 17);
			this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
			this->tableLayoutPanel13->RowCount = 2;
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60.75949F)));
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 39.24051F)));
			this->tableLayoutPanel13->Size = System::Drawing::Size(1130, 339);
			this->tableLayoutPanel13->TabIndex = 32;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(3, 3);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(1124, 199);
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
			// SnowFall
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->tableLayoutPanel14);
			this->Controls->Add(this->tableLayoutPanel13);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SnowFall";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SnowFall";
			this->tableLayoutPanel14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			this->tableLayoutPanel13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
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
	};
}
