#pragma once
#ifndef EVENT_H
#define EVENT_H
#include<iostream>
#include<string>
#include "admin.h"
#include<vector>

class Comment;

class Event
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
	std::vector <Comment> comments;
public:
	Event();
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
	void addComment(Comment comment);
	std::vector<Comment> getComments();
	~Event();
};
#endif