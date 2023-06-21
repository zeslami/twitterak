#ifndef TWITT
#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

class Twitt
{
private:

    string twit;
    int like;
    string created_at; 
   
    //int numbertwitt;

    
public: 

    void settwiit(string tweet);
    string  get_twitt();
    void set_like();
    void set_date();
    string  get_data();
    int get_like();
};
#endif


