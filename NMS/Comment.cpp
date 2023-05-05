#include "comment.h"

comment::comment()
{
}

user comment::getcommenter()
{
	return commenter;
}

void comment::setcommenter(user commenter)
{
	this->commenter = commenter;
}

std::string comment::getContent()
{
	return content;
}

void comment::setContent(std::string content)
{
	this->content = content;
}

comment::~comment()
{
}