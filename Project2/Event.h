#pragma once
#include<iostream>
#include<string>
#include"Comment.h"
#include<vector>
using namespace std;
class Event
{
	string headline;
	string date;
	string details;
	//Admin author;
	int views;
	float rating;
	int spam;
	int id;
	string category;
	vector <Comment> comments;
public:
	Event();
	void setHeadline(string headline);
	string getHeadline();
	string getDate();
	void setDetails(string details);
	string getDetails();
	//Admin getAuthor();
	float getRate();
	int getSpam();
	int getID();
	void setCategory(string category);
	string getCategory();
	void addComment(Comment comment);
	vector<Comment> getComments();
	~Event();
};
