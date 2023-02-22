/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

struct Game
{
    string Name, Developer;
    int Number;
    
    Game(string name, string developer, int number)
    {
        Name = name;
        Developer = developer;
        Number = number;
    }
};
ostream& operator <<(ostream& COUT, Game& entain)
{
    COUT<<"Name:"<<entain.Name<<endl;
    COUT<<"Developer:"<<entain.Developer<<endl;
    COUT<<"Count od players:"<<entain.Number<<endl;
    return COUT;
}



int main()
{
    Game play1 = Game("CSGO", "Valve", 75000);
    Game play2 = Game("Call of Duty", "Activision", 60000);

    cout<<play1<<endl;
    operator<<(cout, play2);
    return 0;
}
