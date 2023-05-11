#pragma once
#include<set>
#include"event.h"
public ref class home{
private: System::Windows::Forms::Button^ prev;
private: System::Windows::Forms::Button^ next;
private: System::Windows::Forms::ListView^ listView1;
private: System::Windows::Forms::Panel^ panel;
private: int page = 1;
public:
	home() {
		this->panel = gcnew System::Windows::Forms::Panel();
		this->prev = (gcnew System::Windows::Forms::Button());
		this->next = (gcnew System::Windows::Forms::Button());
		this->listView1 = (gcnew System::Windows::Forms::ListView());
		this->prev->Location = System::Drawing::Point(39, 224);
		this->prev->Name = L"prev";
		this->prev->Size = System::Drawing::Size(75, 23);
		this->prev->TabIndex = 7;
		this->prev->Text = L"prev";
		this->prev->UseVisualStyleBackColor = true;
		this->prev->Click += gcnew System::EventHandler(this, &home::prev_Click);

		this->listView1->HideSelection = false;
		this->listView1->Location = System::Drawing::Point(25, 11);
		this->listView1->Name = L"listView1";
		this->listView1->Size = System::Drawing::Size(322, 204);
		this->listView1->TabIndex = 0;
		this->listView1->UseCompatibleStateImageBehavior = false;
		this->listView1->View = System::Windows::Forms::View::List;
		loadList();
		this->next->Location = System::Drawing::Point(254, 224);
		this->next->Name = L"next";
		this->next->Size = System::Drawing::Size(69, 21);
		this->next->TabIndex = 8;
		this->next->Text = L"next";
		this->next->UseVisualStyleBackColor = true;
		this->next->Click += gcnew System::EventHandler(this, &home::next_Click);
		panel->SuspendLayout();
		panel->Controls->Add(this->next);
		panel->Controls->Add(this->prev);
		panel->Controls->Add(this->listView1);
		panel->Location = System::Drawing::Point(0, 3);
		panel->Name = L"Home";
		panel->Size = System::Drawing::Size(373, 255);
		panel->TabIndex = 6;
		panel->ResumeLayout(false);

	}
	System::Windows::Forms::Panel^ getPanel() {
		return panel;
	}

	void loadList() {
		ndb* db = ndb::getInstance();
		for (int i = 0; i < 5; i++) {
			event e;
			std::string s = "lmfao";
			for (int j = 0; j < 5; j++)
				s[i] = (char)(s[i] + (i * 12*j + 5*j-3*i+16) % 7);
			e.setHeadline(s);
			db->addNews(e);
		}
		std::multiset<event> news = db->getNews();
		for (event i : news)
			this->listView1->Items->Add(gcnew System::String(i.getHeadline().c_str()));
	}

private: System::Void prev_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void next_Click(System::Object^ sender, System::EventArgs^ e) {}

};