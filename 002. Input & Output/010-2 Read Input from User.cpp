/********************************************************************************************************************************
 * Name:    CoachLDEWM
 * Date:    11.09.2026
 * Purpose: Using cin to read input from the user.
 *******************************************************************************************************************************/


#include <iostream>                 //standard input/output streams library in C++. It provides an object-oriented framework for 
                                    //reading user input from the console and writing output data back to the screen or a log.
#include <string>                   //String header file




//The entry point to every program
int main()
{
    std::string name;
    int age;

    std::cout << "What is your name?: ";
    std::cin >> name;

    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "Hello. Your name is " << name << ". You are " << age << " years old.";


    return 0;
}
