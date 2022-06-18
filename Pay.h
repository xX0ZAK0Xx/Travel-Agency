#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;
namespace Travel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pay
	/// </summary>
	public ref class Pay : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::Label^ destination;
	private: System::Windows::Forms::Label^ classs;
	private: System::Windows::Forms::Label^ datee;
	public:
		Pay(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Pay(String^ amount)
		{
			InitializeComponent();
			label2->Text = amount;
			//
			//TODO: Add the constructor code here
			//
		}
		Pay(String^amount, String^ dst, String^ t, String^ dt)
		{
			InitializeComponent();
			label2->Text = amount;

			destination->Text = dst;
			classs->Text = t;
			datee->Text = dt;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button8;
	protected:
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox38;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pay::typeid));
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->destination = (gcnew System::Windows::Forms::Label());
			this->classs = (gcnew System::Windows::Forms::Label());
			this->datee = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			this->SuspendLayout();
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Location = System::Drawing::Point(10, 203);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(120, 51);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Cancel";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Pay::button8_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Location = System::Drawing::Point(328, 203);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 51);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Proceed";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Pay::button7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 15));
			this->textBox1->Location = System::Drawing::Point(109, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(339, 36);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"XXXX-XXXX-XXXX-XXXX";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Click += gcnew System::EventHandler(this, &Pay::textBox1_Click);
			// 
			// pictureBox38
			// 
			this->pictureBox38->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(10, 82);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(58, 50);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox38->TabIndex = 0;
			this->pictureBox38->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Amount :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(262, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Amount :";
			// 
			// destination
			// 
			this->destination->AutoSize = true;
			this->destination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->destination->Location = System::Drawing::Point(39, 299);
			this->destination->Name = L"destination";
			this->destination->Size = System::Drawing::Size(91, 25);
			this->destination->TabIndex = 6;
			this->destination->Text = L"Amount :";
			this->destination->Visible = false;
			// 
			// classs
			// 
			this->classs->AutoSize = true;
			this->classs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->classs->Location = System::Drawing::Point(175, 299);
			this->classs->Name = L"classs";
			this->classs->Size = System::Drawing::Size(91, 25);
			this->classs->TabIndex = 7;
			this->classs->Text = L"Amount :";
			this->classs->Visible = false;
			// 
			// datee
			// 
			this->datee->AutoSize = true;
			this->datee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datee->Location = System::Drawing::Point(310, 299);
			this->datee->Name = L"datee";
			this->datee->Size = System::Drawing::Size(91, 25);
			this->datee->TabIndex = 8;
			this->datee->Text = L"Amount :";
			this->datee->Visible = false;
			// 
			// Pay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 410);
			this->Controls->Add(this->datee);
			this->Controls->Add(this->classs);
			this->Controls->Add(this->destination);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Pay";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pay";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "XXXX-XXXX-XXXX-XXXX")
			textBox1->Text = "";
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string card = msclr::interop::marshal_as<std::string>(textBox1->Text);


	int size = card.length();
	int doubleEvenSum = 0;

	for (int i = size - 2; i >= 0; i -= 2) {
		int sum = (card[i] - 48) * 2;
		if (sum > 9) {
			sum = (sum / 10) + (sum % 10);
		}
		doubleEvenSum += sum;
	}

	for (int i = size - 1; i >= 0; i -= 2) {
		doubleEvenSum += card[i] - 48;
	}

	if (doubleEvenSum % 10 == 0) {
		ifstream current;
		ofstream tck;
		current.open("Curr.txt", ios_base::in);
		std::string userName;
		getline(current, userName);
		current.close();
		tck.open("ticket" + userName + ".txt", ios_base::app);
		std::string space = " | ";

		std::string dest = msclr::interop::marshal_as<std::string>(destination->Text);
		std::string type = msclr::interop::marshal_as<std::string>(classs->Text);
		std::string date = msclr::interop::marshal_as<std::string>(datee->Text);

		tck <<endl<< dest << space << type << space << date << endl;
		tck.close();

		MessageBox::Show("Payment Successfull");
	}
	else {
		MessageBox::Show("Invalid Card");
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
