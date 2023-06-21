#include "twittrak.hpp"


void twittrak :: help()
{
    cout << "> help" <<endl;
    cout << "Login -->>  Enter the word login to enter the user account" << endl;
    cout <<"Signup -->> Enter Singnup to create an account" << endl;
    cout << "Edit -->> To change the user account or tweet, enter edit"<< endl;
    cout << "Exit -->> Enter exit to exit" << endl;

}

void twittrak :: signup()
{
    user Auxiliary;
    string name;
    string username;
    string nambeprhone;
    int password;
    cout << "> signup" << endl;
    cin >> name;
    Auxiliary.setname(name);
    cout << "$Username:"<< endl;
    cin >> username;
    Auxiliary.set_username(username);
    cout << "$name:"<< endl;
    cin >> name;
    Auxiliary.setname(name);
    cout << "$namberphone:"<< endl;
    cin >> nambeprhone;
    Auxiliary.set_phonenamber(nambeprhone);
    cout << "$password:"<< endl;
    cin >> password;
    Auxiliary.set_password(password);
    vector <user> *point;
    point -> push_back(Auxiliary);
    cout << "* Registration was successful." << endl;
    in_account(point->size());
}
// int print(){
//     std::cout<<"hasdkn;dsukvbonsdkjvbdsvdsi;bvn'sd\n";
// }

void twittrak :: seetwitt(int size)
{
    cout << ">" << users[size].get_username() << endl;
    users[size].twitss();
    
}

void twittrak :: edit_profile(int size)
{

}
void twittrak :: login()
{
    string usernm1;
    string usernm2;
    string Pasword;
    cout << "> login" ;
    cout << "$Username:"<< endl;
    cin >> usernm1;
    cout << "$ Password:"<< endl;
    cin >> Pasword;
    for (size_t i = 0; i < users.size() ; i++)
    {
        usernm2 = users[i].get_username();
        if ( usernm2== usernm1)
        {
            if (users[i].get_password() == Pasword)
            {
                in_account( i);
            }
            
        }
        
        
    }
}

void twittrak :: in_account( int size)
{
    cout << ">"<< users[size].get_username();
    int Exxit;
    system("CLS");
    int  choice =  decision_account();
    do
    {
        cout << ">"<< users[size].get_username();
        decision();
        switch (choice)
        {
        case 1:
            help();
            break;
        case 2:
            login();
            break;
        case 3:
            signup();
            //signup(ptr, 1, Extra_Name, Extra_Num, Extra_Pass);
            break;
        case 4:
            //Edit_Profile();
            break;
        case 5:
            Exxit = 1;
            break;
        default:
            break;
        }
    }while (Exxit == 0);
}

int twittrak::decision_account()
{
   // menu.menu_starting_page();
    bool done = false;
    string Cmd;
    do
    {
        cout << "> ";
        Cmd = Cche();
        for (int i = 0; i < Cmd.length() ; i++)
        {
            if (Cmd[i] == 32)
            {
                break;
            }
            Cmd[i] = (tolower(Cmd[i]));
        }
        if (Cmd[0] == 'd'&& Cmd[1] == 'e')
        {
            if(Cmd == "delete account")
                {
                    return 1;
                }
        }
        else if (Cmd[0] == 'p')
        {
            
        }
        else if (Cmd[0] == 'd'&& Cmd[1] == 'i')
        {
            
        }
        else if (Cmd[0] == 'e')
        {
            
        }
        else if (Cmd[0] == 't')
        {
            
        }
        else if (Cmd[0] == '@')
        {
            
        }
        else if (Cmd[0] == 'l')
        {
            
        }

    } while (done == false);
    return 0;
}

void twittrak :: delete_account()
{
    string answer;
    cout << "? This operation cannot bereversed in any way. Are you sure?(y/n) :" ;
    cin >> answer;
    if (answer == "y")
    {
        
    }
    else
    {
        
    }
    
    
}


void twittrak :: run()
{
    std::vector <user > users_vector;
    std::vector <user > *ptr;
    ptr = &users_vector;
    int Exxit;
    system("CLS");
    int  choice =  decision();
    do
    {
        decision();
        switch (choice)
        {
        case 1:
            help();
            break;
        case 2:
            login();
            break;
        case 3:
            signup();
            //signup(ptr, 1, Extra_Name, Extra_Num, Extra_Pass);
            break;
        case 4:
            //Edit_Profile();
            break;
        case 5:
            Exxit = 1;
            break;
        default:
            break;
        }
    }while (Exxit == 0);
}

//twittrak::twittrak()
//{
    //signup();
//}

string twittrak :: Cche()
{
    std::string Line;
    getline(std::cin, Line);
    return Line;
}

int twittrak::decision()
{
   // menu.menu_starting_page();
    bool done = false;
    string Cmd;
    do
    {
        cout << "> ";
        Cmd = Cche();
        for (int i = 0; i < Cmd.length() ; i++)
        {
            if (Cmd[i] == 32)
            {
                break;
            }
            Cmd[i] = (tolower(Cmd[i]));
        }
        if(Cmd == "help")
        {
            return 1;
        }
        else if(Cmd == "login")
        {
            return 2;
        }
        else if(Cmd == "signup")
        {
            return 3;
        }
        else if(Cmd == "edit")
        {
            return 4;
        }
        else if(Cmd == "exit")
        {
            return 5;
        }
    } while (done == false);
    return 0;
}
/*void twittrak :: run()
{
    
    string order;
    for (int i = 0; i < order.length(); i++)
    {
        order[i] = toupper(order[i]);
    }

    if (order =="SIGNUP")
    {
        // coe 
    }
    else if (order == "LOGIN")
    {
        // code 
    }
    else if (order == "LOGIN")
    {
        // code 
    }
    
    
}*/

/*void twittrak :: seetwitt()
{
    for (size_t i = 0; i < users.size(); i++)
    { 
        cout << users[i].get_name() << endl;
        cout << "@" << users[i].get_username() << endl;
        //cout << users[i];
    }
    
}*/