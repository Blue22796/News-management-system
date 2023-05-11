
#pragma once
#ifndef WINDOW_H
#define WINDOW_H
#include "ndb.h"
#include "home.h"
#include "login.h"
namespace $safeprojectname$ {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for window
	/// </summary>
	public ref class window : public System::Windows::Forms::Form
	{
	public:
		window(void)
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
		~window()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ panel2;

	protected:

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
			login^ l = gcnew login();
			this->SuspendLayout();
			this->Controls->Add(l->panel);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(376, 261);
			this->Controls->Add(this->panel2);
			this->Name = L"window";
			this->Text = L"window";
			this->ResumeLayout(false);

		}

#pragma endregion
};
}
#endif