#pragma once
#ifndef COMMENT_H
#define COMMENT_H
#include<iostream>
#include "user.h"

class comment
{
	user commenter;
	std::string content;
public:
	comment();
	user getcommenter();
	void setcommenter(user commenter);
	std::string getContent();
	void setContent(std::string content);
	~comment();
};
#endif