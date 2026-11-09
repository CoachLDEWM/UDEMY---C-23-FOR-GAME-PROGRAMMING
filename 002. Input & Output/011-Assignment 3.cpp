/********************************************************************************************************************************
 * Name:    CoachLDEWM
 * Date:    11.09.2026
 * Purpose: Create a new C++ project called "Greeting".
            Add a source file to your project called "main.cpp".
            Prompt the user to enter their name using std::cout.
            Read the user's name from the console using std::cin. You can store the name in a string variable.
            Prompts the user to enter their age using std::cout.
            Reads the user's age from the console using std::cin. You can store the age in an int variable.
                Make sure you check for valid input (age should not be negative)!
                If the user enters an invalid age, repeat the prompt to enter an age until a valid age is entered.
            Displays a greeting message using std::cout. The message should be formatted as follows: "Hello, <name>. You are <age> years old." 
            Make sure to replace <name> and <age> with the values entered by the user.
            Make sure the program runs correctly.
            Push your code to your GitHub repository.
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

    // while (age < 0)
    // {
    //     std::cout << "Please enter a valid age: ";
    //     std::cin.clear();                                                       //Clears the error state
    //     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');     //Ignore everything in the input stream. Ignore max stream size ir until new-line
    //     std::cin >> age;                                                        //Attempts to re-enter the number
    // }

    while (std::cin.fail() || age < 0)
    {
        std::cout << "ERROR! Please enter a valid number: ";                    //Print an error message to the screen
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