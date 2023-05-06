#pragma once
#include "DataAboutServer.h"

namespace ClientThree {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_registration;
	protected:
	private: System::Windows::Forms::Label^ label_login;
	private: System::Windows::Forms::Label^ label_password;
	private: System::Windows::Forms::TextBox^ textBox_login_input;
	private: System::Windows::Forms::TextBox^ textBox_password_input;
	private: System::Windows::Forms::Button^ button_log_in;
	private: System::Windows::Forms::Button^ button_log_on;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_registration = (gcnew System::Windows::Forms::Label());
			this->label_login = (gcnew System::Windows::Forms::Label());
			this->label_password = (gcnew System::Windows::Forms::Label());
			this->textBox_login_input = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password_input = (gcnew System::Windows::Forms::TextBox());
			this->button_log_in = (gcnew System::Windows::Forms::Button());
			this->button_log_on = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_registration
			// 
			this->label_registration->AutoSize = true;
			this->label_registration->BackColor = System::Drawing::Color::Transparent;
			this->label_registration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_registration->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_registration->Location = System::Drawing::Point(255, 9);
			this->label_registration->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_registration->Name = L"label_registration";
			this->label_registration->Size = System::Drawing::Size(305, 58);
			this->label_registration->TabIndex = 18;
			this->label_registration->Text = L"Registration";
			// 
			// label_login
			// 
			this->label_login->AutoSize = true;
			this->label_login->BackColor = System::Drawing::Color::Transparent;
			this->label_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_login->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_login->Location = System::Drawing::Point(13, 135);
			this->label_login->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_login->Name = L"label_login";
			this->label_login->Size = System::Drawing::Size(168, 58);
			this->label_login->TabIndex = 19;
			this->label_login->Text = L"Login:";
			// 
			// label_password
			// 
			this->label_password->AutoSize = true;
			this->label_password->BackColor = System::Drawing::Color::Transparent;
			this->label_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_password->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_password->Location = System::Drawing::Point(13, 246);
			this->label_password->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_password->Name = L"label_password";
			this->label_password->Size = System::Drawing::Size(155, 58);
			this->label_password->TabIndex = 20;
			this->label_password->Text = L"Pass:";
			// 
			// textBox_login_input
			// 
			this->textBox_login_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_login_input->BackColor = System::Drawing::Color::LightGray;
			this->textBox_login_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_login_input->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_login_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_login_input->Location = System::Drawing::Point(230, 151);
			this->textBox_login_input->Margin = System::Windows::Forms::Padding(4);
			this->textBox_login_input->MaxLength = 20;
			this->textBox_login_input->Name = L"textBox_login_input";
			this->textBox_login_input->Size = System::Drawing::Size(512, 38);
			this->textBox_login_input->TabIndex = 21;
			this->textBox_login_input->TabStop = false;
			this->textBox_login_input->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_password_input
			// 
			this->textBox_password_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_password_input->BackColor = System::Drawing::Color::LightGray;
			this->textBox_password_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_password_input->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_password_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_password_input->Location = System::Drawing::Point(230, 262);
			this->textBox_password_input->Margin = System::Windows::Forms::Padding(4);
			this->textBox_password_input->MaxLength = 30;
			this->textBox_password_input->Name = L"textBox_password_input";
			this->textBox_password_input->PasswordChar = '*';
			this->textBox_password_input->Size = System::Drawing::Size(512, 38);
			this->textBox_password_input->TabIndex = 22;
			this->textBox_password_input->TabStop = false;
			this->textBox_password_input->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox_password_input->UseSystemPasswordChar = true;
			// 
			// button_log_in
			// 
			this->button_log_in->BackColor = System::Drawing::Color::Transparent;
			this->button_log_in->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_log_in->FlatAppearance->BorderSize = 0;
			this->button_log_in->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumOrchid;
			this->button_log_in->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumOrchid;
			this->button_log_in->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_log_in->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_log_in->ForeColor = System::Drawing::SystemColors::Control;
			this->button_log_in->Location = System::Drawing::Point(138, 357);
			this->button_log_in->Margin = System::Windows::Forms::Padding(4);
			this->button_log_in->Name = L"button_log_in";
			this->button_log_in->Size = System::Drawing::Size(219, 75);
			this->button_log_in->TabIndex = 23;
			this->button_log_in->Text = L"Log in";
			this->button_log_in->UseVisualStyleBackColor = false;
			this->button_log_in->Click += gcnew System::EventHandler(this, &Registration::button_log_in_Click);
			// 
			// button_log_on
			// 
			this->button_log_on->BackColor = System::Drawing::Color::Transparent;
			this->button_log_on->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_log_on->FlatAppearance->BorderSize = 0;
			this->button_log_on->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumOrchid;
			this->button_log_on->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumOrchid;
			this->button_log_on->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_log_on->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_log_on->ForeColor = System::Drawing::SystemColors::Control;
			this->button_log_on->Location = System::Drawing::Point(478, 357);
			this->button_log_on->Margin = System::Windows::Forms::Padding(4);
			this->button_log_on->Name = L"button_log_on";
			this->button_log_on->Size = System::Drawing::Size(217, 75);
			this->button_log_on->TabIndex = 24;
			this->button_log_on->Text = L"Log on";
			this->button_log_on->UseVisualStyleBackColor = false;
			this->button_log_on->Click += gcnew System::EventHandler(this, &Registration::button_log_on_Click);
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Purple;
			this->ClientSize = System::Drawing::Size(801, 475);
			this->Controls->Add(this->button_log_on);
			this->Controls->Add(this->button_log_in);
			this->Controls->Add(this->textBox_password_input);
			this->Controls->Add(this->textBox_login_input);
			this->Controls->Add(this->label_password);
			this->Controls->Add(this->label_login);
			this->Controls->Add(this->label_registration);
			this->Name = L"Registration";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int attempts = 4;
	private: void RegAct() {
		//____________________________________________________________________________ Saving data about client
		login = msclr::interop::marshal_as< std::string >(textBox_login_input->Text);
		password = msclr::interop::marshal_as< std::string >(textBox_password_input->Text);
		//____________________________________________________________________________ Saving data about client
		//____________________________________________________________________________ Send information about joining to the server
		std::string  msg = login + " joined\n";
		int msg_size = msg.size();
		send(Connection, (char*)&msg_size, sizeof(int), NULL);
		send(Connection, msg.c_str(), msg_size, NULL);
		//____________________________________________________________________________ Send information about joining to the server
		
		registration_key = true;
		Registration::Close();
	}
	private: System::Void button_log_in_Click(System::Object^ sender, System::EventArgs^ e) {
		RegAct();
	}
	private: System::Void button_log_on_Click(System::Object^ sender, System::EventArgs^ e) {
		RegAct();
	}
	};
}
