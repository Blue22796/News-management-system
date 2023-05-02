#include "Comment.h"

Comment::Comment()
{
}

User Comment::getCommenter()
{
	return commenter;
}

void Comment::setCommenter(User commenter)
{
	this->commenter = commenter;
}

string Comment::getContent()
{
	return content;
}

void Comment::setContent(string content)
{
	this->content = content;
}

Comment::~Comment()
{
}