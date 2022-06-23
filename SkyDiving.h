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
	/// Summary for SkyDiving
	/// </summary>
	public ref class SkyDiving : public System::Windows::Forms::Form
	{
	public:
		SkyDiving(void)
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
		~SkyDiving()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel16;
	protected:
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel15;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::Label^ label29;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SkyDiving::typeid));
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
			this->tableLayoutPanel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			this->tableLayoutPanel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel16
			// 
			this->tableLayoutPanel16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel16->BackColor = System::Drawing::SystemColors::Control;
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
			this->tableLayoutPanel16->Location = System::Drawing::Point(100, 484);
			this->tableLayoutPanel16->Name = L"tableLayoutPanel16";
			this->tableLayoutPanel16->RowCount = 2;
			this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
			this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
			this->tableLayoutPanel16->Size = System::Drawing::Size(1037, 415);
			this->tableLayoutPanel16->TabIndex = 35;
			// 
			// label30
			// 
			this->label30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label30->Location = System::Drawing::Point(768, 305);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(190, 104);
			this->label30->TabIndex = 21;
			this->label30->Text = L"InterLaken, Switzerland";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label30->Click += gcnew System::EventHandler(this, &SkyDiving::interlaken);
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
			this->label31->Click += gcnew System::EventHandler(this, &SkyDiving::foxGlacier);
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
			this->label32->Click += gcnew System::EventHandler(this, &SkyDiving::dubai);
			// 
			// pictureBox27
			// 
			this->pictureBox27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox27->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(693, 3);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(341, 294);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox27->TabIndex = 2;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &SkyDiving::interlaken);
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
			this->pictureBox28->Click += gcnew System::EventHandler(this, &SkyDiving::foxGlacier);
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
			this->pictureBox29->Click += gcnew System::EventHandler(this, &SkyDiving::dubai);
			// 
			// tableLayoutPanel15
			// 
			this->tableLayoutPanel15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel15->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel15->ColumnCount = 1;
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel15->Controls->Add(this->pictureBox26, 0, 0);
			this->tableLayoutPanel15->Controls->Add(this->label29, 0, 1);
			this->tableLayoutPanel15->Location = System::Drawing::Point(55, 8);
			this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
			this->tableLayoutPanel15->RowCount = 3;
			this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.27139F)));
			this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.72861F)));
			this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel15->Size = System::Drawing::Size(1154, 503);
			this->tableLayoutPanel15->TabIndex = 34;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(3, 3);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(1148, 343);
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
			this->label29->Location = System::Drawing::Point(81, 358);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(991, 114);
			this->label29->TabIndex = 18;
			this->label29->Text = resources->GetString(L"label29.Text");
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SkyDiving
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1283, 673);
			this->Controls->Add(this->tableLayoutPanel16);
			this->Controls->Add(this->tableLayoutPanel15);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SkyDiving";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SkyDiving";
			this->tableLayoutPanel16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			this->tableLayoutPanel15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void dubai(System::Object^ sender, System::EventArgs^ e) {
	Pkg^ p1 = gcnew Pkg(label32->Text, "Beautiful, shiny skyscrapers, state of the art buildings and beautiful beaches and sand dunes; fine dining; fabulous all-inclusive accommodation options, shopping at Dubai Mall and adrenaline filled experiences all make Dubai a fantastic tourist destination.", "170,000 BDT", "210,000 BDT", "270,000 BDT");

}
private: System::Void foxGlacier(System::Object^ sender, System::EventArgs^ e) {
	Pkg^ p1 = gcnew Pkg(label31->Text, "The area around the Fox Glacier township offers visitors a rare opportunity to easily access a dynamic glacial environment in a forested area while within driving and walking distance from the main highway.", "320,000 BDT", "360,000 BDT", "410,000 BDT");

}
private: System::Void interlaken(System::Object^ sender, System::EventArgs^ e) {
	Pkg^ p1 = gcnew Pkg(label30->Text, "For spectacular scenery and amazing views, it's very hard to beat the Alps and the surrounding area, and Interlaken is one of the best places to visit in Switzerland, with so much to see and do in the local area and further afield for memories that will last a lifetime.", "170,000 BDT", "230,000 BDT", "280,000 BDT");

}
	};
}
