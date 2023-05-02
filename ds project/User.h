#ifndef USER_H
#define USER_H

#include <vector>
#include <string>

using namespace std;

class User {
private:
    int id;
    vector<string> preference;
    string username;
    string password;
    int spam;

public:
    User();
    int getId();
    void setId(int newId);
    vector<string> getPreference();
    void addPreference(string newPreference);
    string getUsername();
    void setUsername(string newUsername);
    string getPassword();
    void setPassword(string newPassword);
    void reportSpam(Event event);
    void rate(Event event, int rate);
    void displayNews();
    void displayNews(string category);
};

#endif // USER_H

