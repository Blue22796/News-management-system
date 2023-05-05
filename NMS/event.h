#pragma once
#ifndef EVENT_H
#define EVENT_H
#include<iostream>
#include<string>
#include "admin.h"
#include<vector>

class comment;

class event
{
	std::string headline;
	std::string date;
	std::string details;
	admin author;
	int views;
	float rating;
	int spam;
	int id;
	std::string category;
	std::vector <comment> comments;
public:
	event();
	void setHeadline(std::string headline);
	std::string getHeadline();
	std::string getDate();
	void setDetails(std::string details);
	std::string getDetails();
	admin getAuthor();
	float getRate();
	int getSpam();
	int getID();
	void setCategory(std::string category);
	std::string getCategory();
	void addComment(comment comment);
	std::vector<comment> getComments();
	~event();
};
#endif