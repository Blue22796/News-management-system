#include<iostream>
#include "ndb.h"
#include "comment.h"
#include<set>

ndb* ndb::inst = new ndb();

std::multiset<event> ndb::news = std::multiset<event>();
std::map<std::string,user> ndb::users = std::map<std::string, user>();

ndb* ndb::getInstance() {
	return ndb::inst;
}
void ndb::retreiveNews()
{
}
void ndb::retreiveUsers()
{
}
void ndb::retreiveComments()
{
}
void ndb::storeNews()
{
}
void ndb::storeUsers()
{
}
void ndb::storeComments()
{
}

void ndb::addNews(event e){
	news.insert(e);
}


void ndb::delNews(event e)
{
}

void ndb::saveUser(user u)
{
}

void ndb::saveComment(comment c, event e)
{
}

std::vector<comment> ndb::getComments(event e)
{
	return std::vector<comment>();
}

std::multiset<event> ndb::getNews()
{
	return news;
}

std::priority_queue<event> ndb::getSpam()
{
	return std::priority_queue<event>();
}

bool ndb::validateUser(System::String^ user, System::String^ pass)
{
	return 1;
}
