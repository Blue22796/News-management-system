#pragma once
#include"ndb.h"
#include"statestack.h"
#include "user.h"
public ref class login {
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button1;

public: 
	System::Windows::Forms::Panel^ panel;
	login() {
		this->panel = gcnew System::Windows::Forms::Panel ();
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->button1->Location = System::Drawing::Point(239, 202);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(99, 26);
		this->button1->TabIndex = 0;
		this->button1->Text = L"button1";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
		this->button2->Location = System::Drawing::Point(46, 202);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(80, 26);
		this->button2->TabIndex = 1;
		this->button2->Text = L"button2";
		this->button2->UseVisualStyleBackColor = true;
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(162, 25);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(35, 13);
		this->label1->TabIndex = 2;
		this->label1->Text = L"label1";
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(162, 115);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(35, 13);
		this->label2->TabIndex = 3;
		this->label2->Text = L"label2";
		this->textBox1->Location = System::Drawing::Point(117, 64);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(133, 20);
		this->textBox1->TabIndex = 4;
		this->textBox2->Location = System::Drawing::Point(117, 153);
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(133, 20);
		this->textBox2->TabIndex = 5;
		panel->SuspendLayout();
		panel->Location = System::Drawing::Point(1, 1);
		panel->Name = L"Login";
		panel->Size = System::Drawing::Size(376, 258);
		panel->TabIndex = 6;
		panel->Controls->Add(this->textBox2);
		panel->Controls->Add(this->textBox1);
		panel->Controls->Add(this->label2);
		panel->Controls->Add(this->label1);
		panel->Controls->Add(this->button2);
		panel->Controls->Add(this->button1);
		panel->ResumeLayout(false);
		panel->PerformLayout();
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name = textBox1->Text;
	System::String^ pass = textBox2->Text;
	textBox1->Text = "";
	textBox2->Text = "";
	ndb* db = ndb::getInstance();
	if (db->validateUser(name, pass)) {
		auto news = db->getNews();
		user u = user();
		std::string bname;
		for (int i = 0; i < name->Length; i++)
			bname += name[i];
		u.setUsername(bname);
		state_stack::login(u);
	}
}
};