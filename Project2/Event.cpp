#include "Event.h"
#include"Comment.h"
#include<iostream>
#include<vector>
using namespace std;
Event::Event()
{

}

void Event::setHeadline(string headline)
{
	this->headline = headline;
}

string Event::getHeadline()
{
	return headline;
}

string Event::getDate()
{
	return string();
}

void Event::setDetails(string details)
{
	this->details = details;
}

string Event::getDetails()
{
	return details;
}
/*
Admin Event::getAuthor()
{
	return author;
}
*/

float Event::getRate()
{
	return rating;
}

int Event::getSpam()
{
	return spam;
}

int Event::getID()
{
	return id;
}

void Event::setCategory(string category)
{
	this->category = category;
}

string Event::getCategory()
{
	return category;
}

void Event::addComment(Comment comment)
{
	string s;
	cin >> s;
	comment.setContent(s);
	comments.push_back(comment);
}

vector<Comment> Event::getComments()
{
	return vector<Comment>();
}

Event::~Event()
{

}