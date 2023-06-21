#ifndef USER
#include <iostream>
#include <string>
#include <vector>
#include "twitt.hpp"
using namespace std;
struct Date_of_birth 
{
    int day;
    int month;
    int year;
};



class user
{
private:
    string name;
    string username;
    string biograghy;
    string country;
    string link;
    struct Date_of_birth date;
    string phonenamber;
    string password;
    int header;
    vector <Twitt> twitts;





public:
    void setname(string Name);
    void set_username(string Username);
    void set_biograghy(string Biograghy);
    void set_country(string Country);
    void set_link(string Link);
    void setDate_of_birth(int Day , int Month , int Year);
    void set_phonenamber(string Phonenamber);
    void set_password(int Password);
    string get_name();
    string get_username();
    string get_biograghy();
    string get_country();
    struct date getdateofbirth();
    string get_phonenamber();
    string get_password();
    string get_link();
    void  set_twitt(string twitt);
    int get_size_twitt();
    void twitss();

};



#endif
