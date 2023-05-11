#pragma once
#include<stack>
#include "Window.h"
#include"ndb.h"
#include"home.h"

public ref class state_stack {
private:
	static System::Collections::Stack^ state;
	static System::Windows::Forms::Form^ window;
	static System::String^ loggedAs;
public:
	static void push(System::Windows::Forms::Panel^ panel) {
		 
		window->Controls->Clear();
		window->Controls->Add(panel);
		state->Push(panel);
	}
	static int pop() {
		state->Pop();
		window->Controls->Clear();
		window->Controls->Add((System::Windows::Forms::Panel^)state->Peek());
		return state->Count;
	}

	static void login(user user) {
		loggedAs = gcnew System::String(user.getUsername().c_str());
		home^ h = gcnew home();
		push(h->getPanel());

	}
	static void setWindow(System::Windows::Forms::Form^ win) {
		window = win;
		state = gcnew System::Collections::Stack();
	}
};