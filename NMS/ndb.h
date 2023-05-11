#include<map>
#include<set>
#include<queue>
#pragma once
#ifndef NDB_H
#define NDB_H
#include<vector>
#include "event.h"
#include "user.h"
class ndb {
private:
	ndb() {}
	static std::map<std::string, user> users;
	static std::multiset<event> news;
	static ndb* inst;
	
public:
	static ndb* getInstance();
	void retreiveNews();
	void retreiveUsers();
	void retreiveComments();
	void storeNews();
	void storeUsers();
	void storeComments();
	
	void addNews(event e);
	void delNews(event e);
	void saveUser(user u);
	void saveComment(comment c, event e);
	std::vector<comment> getComments(event e);
	std::multiset<event> getNews();
	std::priority_queue<event> getSpam();
	bool validateUser(System::String^ user, System::String^ pass);
};
#endif