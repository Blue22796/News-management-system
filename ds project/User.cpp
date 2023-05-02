#include "User.h"

User::User() {
    spam = 0;
}

int User::getId() {
    return id;
}

void User::setId(int newId) {
    id = newId;
}

vector<string> User::getPreference() {
    return preference;
}

void User::addPreference(string newPreference) {
    preference.push_back(newPreference);
}

string User::getUsername() {
    return username;
}

void User::setUsername(string newUsername) {
    username = newUsername;
}

string User::getPassword() {
    return password;
}

void User::setPassword(string newPassword) {
    password = newPassword;
}

void User::reportSpam(Event event) {
    spam++;
}

void User::rate(Event event, int rate) {
    // implementation
}

void User::displayNews() {
    // implementation
}

void User::displayNews(string category) {
    // implementation
}
