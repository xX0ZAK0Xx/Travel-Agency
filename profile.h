#pragma once
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <string>
#include <cstring>
#include <iostream>
using namespace System;
using namespace std;
namespace Travel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class profile : public System::Windows::Forms::Form
	{
	public:
		profile(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			string fileMail, filePass, fileName, tckt, line;
			ifstream loginFile, ticketFile;
			loginFile.open("Curr.txt", ios_base::in);

			if (loginFile.is_open()) {
				getline(loginFile, fileName);//gets the 1st line from the file
				getline(loginFile, filePass);//gets the 2nd line from the file
				getline(loginFile, fileMail);//gets the 3rd line from the file
				loginFile.close();
			}
			ticketFile.open("ticket" + fileName + ".txt", ios_base::in);
			if (ticketFile.is_open()) {
				while (getline(ticketFile, line)) {
					tckt.append(line);
					tckt.append("\n");
				}
				ticketFile.close();
			}
			String^ str1 = gcnew String(fileName.c_str());
			String^ str2 = gcnew String(filePass.c_str());
			String^ str3 = gcnew String(fileMail.c_str());
			String^ str4 = gcnew String(tckt.c_str());
			name->Text = str1;
			email->Text = str3;
			pass->Text = str2;
			tickets->Text = str4;
			//tickets->Text = " Dubai | Premium | 6/15/2022  Paris | Gold | 6/25/2022 ";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ email;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ tickets;

	private: System::Windows::Forms::Label^ pass;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(profile::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pass = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tickets = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->panel1->Controls->Add(this->pass);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->email);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->name);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(383, 673);
			this->panel1->TabIndex = 0;
			// 
			// pass
			// 
			this->pass->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pass->AutoSize = true;
			this->pass->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::Color::White;
			this->pass->Location = System::Drawing::Point(109, 318);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(70, 25);
			this->pass->TabIndex = 6;
			this->pass->Text = L"Email  :";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(3, 318);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Password :";
			// 
			// email
			// 
			this->email->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->email->AutoSize = true;
			this->email->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->ForeColor = System::Drawing::Color::White;
			this->email->Location = System::Drawing::Point(109, 284);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(70, 25);
			this->email->TabIndex = 4;
			this->email->Text = L"Email  :";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(3, 284);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Email        :";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(3, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name       :";
			// 
			// name
			// 
			this->name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Location = System::Drawing::Point(109, 250);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(70, 25);
			this->name->TabIndex = 3;
			this->name->Text = L"Name :";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Aharoni", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(114, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PROFILE";
			// 
			// tickets
			// 
			this->tickets->AutoSize = true;
			this->tickets->BackColor = System::Drawing::Color::Transparent;
			this->tickets->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tickets->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tickets->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->tickets->Location = System::Drawing::Point(383, 0);
			this->tickets->Name = L"tickets";
			this->tickets->Size = System::Drawing::Size(136, 28);
			this->tickets->TabIndex = 19;
			this->tickets->Text = L"show all tickets";
			this->tickets->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// userProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(885, 673);
			this->Controls->Add(this->tickets);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"userProfile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Profile";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
