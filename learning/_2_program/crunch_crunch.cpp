// carrots.cpp -- food "Crunch Crunch"

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    int carrots = 25;

    cout << "\nI have " << carrots << " carrots." << endl;

    carrots--;
    system("cowsay 'crunch..crunch'");  

    cout << "Now I have "
         << carrots << " carrots .\n" << endl; 

    

    return 0;
}
