#pragma once
#include"User.h"
#include<iostream>
using namespace std;
class Comment
{
	User commenter;
	string content;
public:
	Comment();
	User getCommenter();
	void setCommenter(User commenter);
	string getContent();
	void setContent(string content);
	~Comment();
};