#include "user.hpp"

void  user :: setname(string Name)
{
    name = Name;
}
void  user :: set_username(string Username)
{
    int size = Username.length();
    for (size_t i = 0; i < size; i++)
    {
        if(Username[i] >= 48 && Username[i] <= 57 || Username[i] >= 48 &&
        Username[i] <= 90 ||Username[i] >= 97 && Username[i] <= 122)
        {
           username = Username; 
        }    
    }    
}

void  user :: set_biograghy(string Biograghy)
{
    if ((Biograghy.length()) <= 160)
    {
        biograghy = Biograghy;
    }
    
}
void user :: set_country(string Country)
{
    country = Country;
}

 void user :: set_link(string Link)
 {
    link = "https " + Link;
 }

void  user :: setDate_of_birth(int Day , int Month , int Year)
{
    date.day = Day;
    date.month = Month;
    date.year = Year;
}
void user :: set_phonenamber(string Phonenamber)
{
    if (Phonenamber.length() == 12)
    {
        phonenamber = Phonenamber;
    }
    
    
}

 void user :: set_password(int Password)
{
    password = Password;
}
 
string user :: get_name()
{
    return name;
}

string user :: get_username()
{
    return username;
}

string user :: get_biograghy()
{
    return biograghy;
}

string user :: get_country()
{
    return country;
}



string user :: get_phonenamber()
{
    return phonenamber;
}

string user :: get_password()
{
    return password;
}

string user :: get_link()
{
    return link;
}

void user:: set_twitt(string twitt)
{   
    Twitt t;
    t.settwiit(twitt);
    //twitts.push_back(twitt);
}

int user :: get_size_twitt()
{
    return twitts.size();
}

void user :: twitss()
{
    for (size_t i = 0; i <twitts.size(); i++)
    {
        //cout << i << twitts[i] << endl;
    }
}