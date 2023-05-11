#ifndef USER_H
#define USER_H
#include <vector>
#include <string>

class event;

class user {
private:
    int id;
    std::vector<std::string> preference;
    std::string username;
    std::string password;
    int spam;

public:
    user();
    int getId();
    void setId(int newId);
    std::vector<std::string> getPreference();
    void addPreference(std::string newPreference);
    std::string getUsername();
    void setUsername(std::string newUsername);
    std::string getPassword();
    void setPassword(std::string newPassword);
    void displayNews();
};

#endif

