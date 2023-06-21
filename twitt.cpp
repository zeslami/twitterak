#include "twitt.hpp"

void Twitt :: settwiit(string tweet)
{
        twit = tweet;
}
string Twitt :: get_twitt()
{
    return twit;
}

void Twitt :: set_like()
{
    like++;
    
}
int Twitt :: get_like()
{
    return like;
}

void Twitt :: set_date()
{
    string date;
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    created_at = ctime(&now_c); 

}

string Twitt:: get_data()
{
    return created_at;
}
