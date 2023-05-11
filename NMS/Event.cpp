#include "event.h"
#include"Comment.h"
#include "admin.h"
#include<iostream>
#include<vector>

event::event()
{

}

bool event::operator<(const event& e) const
{
	return rating < e.rating;
}


void event::setHeadline(std::string headline)
{
	this->headline = headline;
}

std::string event::getHeadline()
{
	return headline;
}

std::string event::getDate()
{
	return std::string();
}

void event::setDetails(std::string details)
{
	this->details = details;
}

std::string event::getDetails()
{
	return details;
}

admin event::getAuthor()
{
	return author;
}


float event::getRate()
{
	return rating;
}

int event::getSpam()
{
	return spam;
}

int event::getID()
{
	return id;
}

void event::setCategory(std::string category)
{
	this->category = category;
}

std::string event::getCategory()
{
	return category;
}

void event::addComment(comment comment)
{
	comments.push_back(comment);
}

std::vector<comment> event::getComments()
{
	return std::vector<comment>();
}

event::~event()
{

}