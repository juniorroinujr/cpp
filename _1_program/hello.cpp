// hello.cpp -- displays a message

#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    
    cout << "\nhello, world!";
    cout << endl;

    system("cowsay -f dragon 'I love coffee and C++'");
    

    return 0;
}