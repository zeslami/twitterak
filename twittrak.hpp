#ifndef TWITTRAK
#include <iostream>
#include <vector>
#include "user.hpp"
#include "twitt.hpp"
using namespace std;

class twittrak
{
private:
    /* data,us */
    vector <user> users;
    
public:

    void help();
    void run();
    void signup();
    void login();
    void delete_account();
    void seetwitt(int size);
    int decision();
    string  Cche();
    void in_account(int size);
    int decision_account();
    void edit_profile(int size);


};

#endif
