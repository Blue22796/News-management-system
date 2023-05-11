#include "admin.h"
#include <iostream>
using namespace std;

void admin::displayNews(vector<event> events) {
    // Display all events
    for (auto it = events.begin(); it != events.end(); ++it) {
        cout<<"Event ID: " <<it->getID()<<endl;
         cout<< "Headline: " << it->getHeadline() <<endl;
         cout << "Details: " << it->getDetails() <<endl;
         cout << "Category: " << it->getCategory() <<  endl;
         cout << "Author: " << it->getAuthor().getUsername() <<  endl;
         cout << "Rating: " << it->getRate() <<  endl;
         cout << "Spam Count: " << it->getSpam() <<  endl;
         
         
    }
}

