#include "user.h"
#include "Event.h"
using namespace std;
user::user() {
    spam = 0;
}

int user::getId() {
    return id;
}

void user::setId(int newId) {
    id = newId;
}

std::vector<std::string> user::getPreference() {
    return preference;
}

void user::addPreference(std::string newPreference) {
    preference.push_back(newPreference);
}

std::string user::getUsername() {
    return username;
}

void user::setUsername(std::string newusername) {
    username = newusername;
}

std::string user::getPassword() {
    return password;
}

void user::setPassword(std::string newPassword) {
    password = newPassword;
}

void user::reportSpam(event event) {
    spam++;
}

void user::rate(event event, int rate) {
    // Add the user's rating to the event's rating and increment the rating count
    event.addRating(rate);
    event.incrementRatingCount();
}


void user::displayNews(vector<event> events) {
    
    for (auto it = events.begin(); it != events.end(); ++it) {
        std::cout << "Event ID: " << it->getID() << std::endl;
        std::cout << "Headline: " << it->getHeadline() << std::endl;
        std::cout << "Details: " << it->getDetails() << std::endl;
        std::cout << "Category: " << it->getCategory() << std::endl;
        std::cout << "Author: " << it->getAuthor().getUsername() << std::endl;
        std::cout << "Rating: " << it->getRate() << std::endl;
        std::cout << "Spam Count: " << it->getSpam() << std::endl;
        
       
    }
}



void user::displayNews(std::string category, vector<event> events) {
    // Display events belonging to the specified category
    for (auto it = events.begin(); it != events.end(); ++it) {
        if (it->getCategory() == category) {
            std::cout << "Event ID: " << it->getID() << std::endl;
            std::cout << "Headline: " << it->getHeadline() << std::endl;
            std::cout << "Details: " << it->getDetails() << std::endl;
            std::cout << "Category: " << it->getCategory() << std::endl;
            std::cout << "Author: " << it->getAuthor().getUsername() << std::endl;
            std::cout << "Rating: " << it->getRate() << std::endl;
            std::cout << "Spam Count: " << it->getSpam() << std::endl;
            std::cout << "Comments:" << std::endl;
           
        }
    }
}
