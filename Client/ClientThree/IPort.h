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
	/// —водка дл€ IPort
	/// </summary>
	public ref class IPort : public System::Windows::Forms::Form
	{
	public:
		IPort(void)
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
		~IPort()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_ip_adress;
	protected:
	private: System::Windows::Forms::Label^ label_port;
	private: System::Windows::Forms::TextBox^ textBox_ip_inputed;
	private: System::Windows::Forms::TextBox^ textBox_port_inputed;

	private: System::Windows::Forms::Button^ button_ok;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_ip_adress = (gcnew System::Windows::Forms::Label());
			this->label_port = (gcnew System::Windows::Forms::Label());
			this->textBox_ip_inputed = (gcnew System::Windows::Forms::TextBox());
			this->textBox_port_inputed = (gcnew System::Windows::Forms::TextBox());
			this->button_ok = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_ip_adress
			// 
			this->label_ip_adress->AutoSize = true;
			this->label_ip_adress->BackColor = System::Drawing::Color::Transparent;
			this->label_ip_adress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ip_adress->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_ip_adress->Location = System::Drawing::Point(4, 61);
			this->label_ip_adress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_ip_adress->Name = L"label_ip_adress";
			this->label_ip_adress->Size = System::Drawing::Size(147, 29);
			this->label_ip_adress->TabIndex = 15;
			this->label_ip_adress->Text = L"IP-address:";
			// 
			// label_port
			// 
			this->label_port->AutoSize = true;
			this->label_port->BackColor = System::Drawing::Color::Transparent;
			this->label_port->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_port->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_port->Location = System::Drawing::Point(34, 134);
			this->label_port->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_port->Name = L"label_port";
			this->label_port->Size = System::Drawing::Size(68, 29);
			this->label_port->TabIndex = 16;
			this->label_port->Text = L"Port:";
			// 
			// textBox_ip_inputed
			// 
			this->textBox_ip_inputed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_ip_inputed->BackColor = System::Drawing::Color::LightGray;
			this->textBox_ip_inputed->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_ip_inputed->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_ip_inputed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_ip_inputed->Location = System::Drawing::Point(149, 61);
			this->textBox_ip_inputed->Margin = System::Windows::Forms::Padding(4);
			this->textBox_ip_inputed->MaxLength = 15;
			this->textBox_ip_inputed->Name = L"textBox_ip_inputed";
			this->textBox_ip_inputed->Size = System::Drawing::Size(263, 27);
			this->textBox_ip_inputed->TabIndex = 17;
			this->textBox_ip_inputed->TabStop = false;
			this->textBox_ip_inputed->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_port_inputed
			// 
			this->textBox_port_inputed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_port_inputed->BackColor = System::Drawing::Color::LightGray;
			this->textBox_port_inputed->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_port_inputed->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_port_inputed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_port_inputed->Location = System::Drawing::Point(149, 136);
			this->textBox_port_inputed->Margin = System::Windows::Forms::Padding(4);
			this->textBox_port_inputed->MaxLength = 5;
			this->textBox_port_inputed->Name = L"textBox_port_inputed";
			this->textBox_port_inputed->Size = System::Drawing::Size(263, 27);
			this->textBox_port_inputed->TabIndex = 18;
			this->textBox_port_inputed->TabStop = false;
			this->textBox_port_inputed->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button_ok
			// 
			this->button_ok->BackColor = System::Drawing::Color::Transparent;
			this->button_ok->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_ok->FlatAppearance->BorderSize = 0;
			this->button_ok->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumOrchid;
			this->button_ok->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumOrchid;
			this->button_ok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_ok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ok->ForeColor = System::Drawing::SystemColors::Control;
			this->button_ok->Location = System::Drawing::Point(176, 196);
			this->button_ok->Margin = System::Windows::Forms::Padding(4);
			this->button_ok->Name = L"button_ok";
			this->button_ok->Size = System::Drawing::Size(83, 49);
			this->button_ok->TabIndex = 19;
			this->button_ok->Text = L"OK";
			this->button_ok->UseVisualStyleBackColor = false;
			this->button_ok->Click += gcnew System::EventHandler(this, &IPort::button_ok_Click);
			// 
			// IPort
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Purple;
			this->ClientSize = System::Drawing::Size(442, 258);
			this->Controls->Add(this->button_ok);
			this->Controls->Add(this->textBox_port_inputed);
			this->Controls->Add(this->textBox_ip_inputed);
			this->Controls->Add(this->label_port);
			this->Controls->Add(this->label_ip_adress);
			this->Name = L"IPort";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"IP and port";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void button_ok_Click(System::Object^ sender, System::EventArgs^ e) {
		ip = msclr::interop::marshal_as< std::string >(textBox_ip_inputed->Text);
		port_con = Convert::ToInt16(textBox_port_inputed->Text);
		IPort::Close();
	}
};
}
