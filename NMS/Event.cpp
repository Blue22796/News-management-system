#include "Event.h"
#include"Comment.h"
#include "admin.h"
#include<iostream>
#include<vector>
Event::Event()
{

}

void Event::setHeadline(std::string headline)
{
	this->headline = headline;
}

std::string Event::getHeadline()
{
	return headline;
}

std::string Event::getDate()
{
	return std::string();
}

void Event::setDetails(std::string details)
{
	this->details = details;
}

std::string Event::getDetails()
{
	return details;
}

admin Event::getAuthor()
{
	return author;
}


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

void Event::setCategory(std::string category)
{
	this->category = category;
}

std::string Event::getCategory()
{
	return category;
}

void Event::addComment(Comment comment)
{
	comments.push_back(comment);
}

std::vector<Comment> Event::getComments()
{
	return std::vector<Comment>();
}

Event::~Event()
{

}