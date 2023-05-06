#pragma once
#include "DataAboutServer.h"

namespace ClientThree {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// —водка дл€ Chat
	/// </summary>
	public ref class Chat : public System::Windows::Forms::Form
	{
	public:
		Chat(void)
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
		~Chat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox_chat;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox_message;
	private: System::Windows::Forms::Label^ label_your_message;
	private: System::Windows::Forms::ListBox^ listBox_users;


	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_send;

	private: System::Windows::Forms::Label^ label_users;

	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox_chat = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox_message = (gcnew System::Windows::Forms::RichTextBox());
			this->label_your_message = (gcnew System::Windows::Forms::Label());
			this->listBox_users = (gcnew System::Windows::Forms::ListBox());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_send = (gcnew System::Windows::Forms::Button());
			this->label_users = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// richTextBox_chat
			// 
			this->richTextBox_chat->BackColor = System::Drawing::Color::Silver;
			this->richTextBox_chat->Enabled = false;
			this->richTextBox_chat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox_chat->HideSelection = false;
			this->richTextBox_chat->ImeMode = System::Windows::Forms::ImeMode::On;
			this->richTextBox_chat->Location = System::Drawing::Point(5, 5);
			this->richTextBox_chat->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox_chat->Name = L"richTextBox_chat";
			this->richTextBox_chat->ReadOnly = true;
			this->richTextBox_chat->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox_chat->ShowSelectionMargin = true;
			this->richTextBox_chat->Size = System::Drawing::Size(758, 679);
			this->richTextBox_chat->TabIndex = 24;
			this->richTextBox_chat->Text = L"";
			// 
			// richTextBox_message
			// 
			this->richTextBox_message->BackColor = System::Drawing::Color::DarkGray;
			this->richTextBox_message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->richTextBox_message->Location = System::Drawing::Point(5, 712);
			this->richTextBox_message->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox_message->Name = L"richTextBox_message";
			this->richTextBox_message->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox_message->Size = System::Drawing::Size(758, 86);
			this->richTextBox_message->TabIndex = 27;
			this->richTextBox_message->Text = L"";
			this->richTextBox_message->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Chat::richTextBox_message_KeyDown);
			// 
			// label_your_message
			// 
			this->label_your_message->AutoSize = true;
			this->label_your_message->BackColor = System::Drawing::Color::Transparent;
			this->label_your_message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_your_message->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_your_message->Location = System::Drawing::Point(1, 688);
			this->label_your_message->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_your_message->Name = L"label_your_message";
			this->label_your_message->Size = System::Drawing::Size(134, 20);
			this->label_your_message->TabIndex = 28;
			this->label_your_message->Text = L"Your message:";
			// 
			// listBox_users
			// 
			this->listBox_users->BackColor = System::Drawing::Color::DarkGray;
			this->listBox_users->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox_users->FormattingEnabled = true;
			this->listBox_users->ItemHeight = 25;
			this->listBox_users->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"Glintvein2042", L"Popirus_Kekykeky", L"Magagin_Terrorist",
					L"MotherFucker", L"Keker12_76", L"Obdolbysh_TV", L"Torch_Lawer", L"Popka_Durak1899", L"Adolf Hitler", L"f", L"f", L"f", L"f",
					L"f", L"f", L"f", L"f", L"f", L"f", L"f", L"f", L"f", L"f", L"f", L"f"
			});
			this->listBox_users->Location = System::Drawing::Point(779, 105);
			this->listBox_users->Margin = System::Windows::Forms::Padding(4);
			this->listBox_users->Name = L"listBox_users";
			this->listBox_users->Size = System::Drawing::Size(217, 579);
			this->listBox_users->TabIndex = 29;
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Transparent;
			this->button_exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_exit->FlatAppearance->BorderSize = 0;
			this->button_exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumOrchid;
			this->button_exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumOrchid;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::Control;
			this->button_exit->Location = System::Drawing::Point(779, 0);
			this->button_exit->Margin = System::Windows::Forms::Padding(4);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(217, 70);
			this->button_exit->TabIndex = 32;
			this->button_exit->Text = L"Exit";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &Chat::button_exit_Click);
			// 
			// button_send
			// 
			this->button_send->BackColor = System::Drawing::Color::Transparent;
			this->button_send->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_send->FlatAppearance->BorderSize = 0;
			this->button_send->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumOrchid;
			this->button_send->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumOrchid;
			this->button_send->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_send->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_send->ForeColor = System::Drawing::SystemColors::Control;
			this->button_send->Location = System::Drawing::Point(779, 712);
			this->button_send->Margin = System::Windows::Forms::Padding(4);
			this->button_send->Name = L"button_send";
			this->button_send->Size = System::Drawing::Size(217, 86);
			this->button_send->TabIndex = 33;
			this->button_send->Text = L"Send";
			this->button_send->UseVisualStyleBackColor = false;
			this->button_send->Click += gcnew System::EventHandler(this, &Chat::button_send_Click);
			// 
			// label_users
			// 
			this->label_users->AutoSize = true;
			this->label_users->BackColor = System::Drawing::Color::Transparent;
			this->label_users->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_users->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_users->Location = System::Drawing::Point(842, 74);
			this->label_users->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_users->Name = L"label_users";
			this->label_users->Size = System::Drawing::Size(88, 29);
			this->label_users->TabIndex = 34;
			this->label_users->Text = L"Users:";
			// 
			// Chat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Purple;
			this->ClientSize = System::Drawing::Size(1001, 799);
			this->Controls->Add(this->label_users);
			this->Controls->Add(this->button_send);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->listBox_users);
			this->Controls->Add(this->label_your_message);
			this->Controls->Add(this->richTextBox_message);
			this->Controls->Add(this->richTextBox_chat);
			this->KeyPreview = true;
			this->Name = L"Chat";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chat";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Chat::Chat_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void S(String^ received_msg) {
		richTextBox_chat->AppendText(received_msg);
		message.clear();
	}
	private:System::Void Receive_Message() {
		while (true)
		{
			if (message.size() != 0)
			{
				String^ received_msg = gcnew System::String(message.c_str());
				if (InvokeRequired)
				{
					this->Invoke(gcnew Action<String^>(this, &Chat::S), received_msg);
				}
			}
		}
	}
	private: void Send_Message() {
		if (registration_key)
		{
			Thread^ th = gcnew Thread(gcnew ThreadStart(this, &Chat::Receive_Message));
			th->IsBackground = true;
			th->Start();
			registration_key = false;
		}
		string message_user = msclr::interop::marshal_as<string>(richTextBox_message->Text);
		if (message_user.size() != 0 && message_user != "\n")
		{
			message_user = login + ": " + message_user + "\n";
			int msg_sz = message_user.size();
			send(Connection, (char*)&msg_sz, sizeof(int), NULL);
			send(Connection, message_user.c_str(), msg_sz, NULL);
		}
		richTextBox_message->Clear();
	}
	private: System::Void button_send_Click(System::Object^ sender, System::EventArgs^ e) {
		Send_Message();
	}

	private: System::Void richTextBox_message_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
		{
			Send_Message();
		}
	}
	private: System::Void Chat_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (MessageBox::Show("Are you sure?", "Exit", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
		else
		{
			e->Cancel = true;
		}
	}
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	};
}
