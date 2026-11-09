/********************************************************************************************************************************
 * Name:    CoachLDEWM
 * Date:    11.09.2026
 * Purpose: Using cin to read input from the user.
 *******************************************************************************************************************************/


#include <iostream>                 //standard input/output streams library in C++. It provides an object-oriented framework for 
                                    //reading user input from the console and writing output data back to the screen or a log.
#include <string>                   //String header file
#include <limits>                   //Limits header file




//The entry point to every program
int main()
{
    std::string name;
    int age;

    std::cout << "What is your name?: ";
    std::cin >> name;

    std::cout << "How old are you?: ";
    std::cin >> age;

    while (std::cin.fail())
    {
        std::cout << "ERROR! A number is required. Please enter a number: ";                           //Print an error message to the screen
        std::cin.clear();                                                       //Clears the error state
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');     //Ignore everything in the input stream. Ignore max stream size ir until new-line
        std::cin >> age;                                                        //Attempts to re-enter the number
    }

    std::cout << "Hello. Your name is " << name << ". You are " << age << " years old." << std::endl;

    //Prompt use to continue
    std::cout << "Press Enter to continue..." << std::endl;

    //We need to ignore all of the previous input again, because there may be something still in the stream
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}