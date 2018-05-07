#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

class User {
public:

    string username;

    string password;



    void userRegister()

    {



        ofstream usersFile ("userData.txt");



        if (    !usersFile.is_open())

        {

            usersFile.open("userData.txt");

        }



            usersFile << username << " " << password << endl;



            usersFile.close();

    }



};



int main() {



    User user1;



    cout << "Welcome to spotify!\n after enter your id you will be able to use spotify\n-------------------------------\n\nPlease register.\nEnter a new username to login for spotify:\n";

    cin >> user1.username;



    cout << "\nPlease enter a new password:\n";

    cin >> user1.password;



    user1.userRegister();



    getch();

}
