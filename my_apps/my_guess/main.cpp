// main.cpp -- guess game 
#include <iostream>
#include <ctime>
#include <cstdlib>

void compare_guess(int guess);
bool exit_my_program();


int main(int argc, char const *argv[])
{
    int guess = 0;
    bool choice = true;
    
    while (choice)
    {
         
         choice = exit_my_program();
        
         if(choice == false) // exit
         {
            break;
         }
         system("clear");
         
         std::cout << "Enter your guess [0 a 10] : ";
         std::cin >> guess;
        
         compare_guess(guess);

    }

    std::cout << "Thank you!!\n\n" << std::endl;

    return 0;
}


bool exit_my_program()
{
    bool choice = false;
    std::cout << "\nZero or One -- Exit[0] or play[1] :";
    std::cin;     
    std::cin  >> choice;
    return choice;
}

void compare_guess(int guess)
{
    srand(time(nullptr)); 

    int my_randon_number = rand() % 10 + 0; 

    if ( guess == my_randon_number)
    {
        std::cout << "Congratulations \nComputer = " << my_randon_number 
                  << "\nYou = " << guess << std::endl;
        
    }else{
         std::cout << "Not this time! \nComputer = " << my_randon_number 
                  << "\nYou = " << guess << std::endl;

    }

}
