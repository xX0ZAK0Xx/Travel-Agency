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
	/// Summary for Winter
	/// </summary>
	public ref class Winter : public System::Windows::Forms::Form
	{
	public:
		Winter(void)
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
		~Winter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel20;
	protected:
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::PictureBox^ pictureBox37;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel19;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
	private: System::Windows::Forms::Label^ label37;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Winter::typeid));
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
			this->tableLayoutPanel20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			this->tableLayoutPanel19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel20
			// 
			this->tableLayoutPanel20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel20->BackColor = System::Drawing::SystemColors::Control;
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
			this->tableLayoutPanel20->Location = System::Drawing::Point(98, 357);
			this->tableLayoutPanel20->Name = L"tableLayoutPanel20";
			this->tableLayoutPanel20->RowCount = 2;
			this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.28915F)));
			this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.71084F)));
			this->tableLayoutPanel20->Size = System::Drawing::Size(1041, 415);
			this->tableLayoutPanel20->TabIndex = 39;
			// 
			// label38
			// 
			this->label38->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label38->Location = System::Drawing::Point(772, 305);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(190, 104);
			this->label38->TabIndex = 21;
			this->label38->Text = L"Tokyo, Japan";
			this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label38->Click += gcnew System::EventHandler(this, &Winter::tokyo);
			// 
			// label39
			// 
			this->label39->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label39->Location = System::Drawing::Point(427, 309);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(187, 96);
			this->label39->TabIndex = 20;
			this->label39->Text = L"Dublin, Ireland";
			this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label39->Click += gcnew System::EventHandler(this, &Winter::dublin);
			// 
			// label40
			// 
			this->label40->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15));
			this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->label40->Location = System::Drawing::Point(80, 309);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(187, 96);
			this->label40->TabIndex = 19;
			this->label40->Text = L"Banff, Alberta, Canada";
			this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label40->Click += gcnew System::EventHandler(this, &Winter::alberta);
			// 
			// pictureBox35
			// 
			this->pictureBox35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox35->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(697, 3);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(341, 294);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox35->TabIndex = 2;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Click += gcnew System::EventHandler(this, &Winter::tokyo);
			// 
			// pictureBox36
			// 
			this->pictureBox36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox36->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(350, 3);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(341, 294);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox36->TabIndex = 1;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &Winter::dublin);
			// 
			// pictureBox37
			// 
			this->pictureBox37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox37->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(3, 3);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(341, 294);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox37->TabIndex = 0;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Click += gcnew System::EventHandler(this, &Winter::alberta);
			// 
			// tableLayoutPanel19
			// 
			this->tableLayoutPanel19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel19->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel19->ColumnCount = 1;
			this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel19->Controls->Add(this->pictureBox34, 0, 0);
			this->tableLayoutPanel19->Controls->Add(this->label37, 0, 1);
			this->tableLayoutPanel19->Location = System::Drawing::Point(55, 14);
			this->tableLayoutPanel19->Name = L"tableLayoutPanel19";
			this->tableLayoutPanel19->RowCount = 2;
			this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 63.05085F)));
			this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 36.94915F)));
			this->tableLayoutPanel19->Size = System::Drawing::Size(1158, 362);
			this->tableLayoutPanel19->TabIndex = 38;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(3, 3);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(1152, 222);
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
			this->label37->Location = System::Drawing::Point(243, 257);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(672, 75);
			this->label37->TabIndex = 18;
			this->label37->Text = resources->GetString(L"label37.Text");
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Winter
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1283, 673);
			this->Controls->Add(this->tableLayoutPanel20);
			this->Controls->Add(this->tableLayoutPanel19);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Winter";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Winter";
			this->tableLayoutPanel20->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			this->tableLayoutPanel19->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
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
	};
}
