/********************************************************************************************************************************
 * Name:    CoachLDEWM
 * Date:    11.09.2026
 * Purpose: Printing String to the console
 *******************************************************************************************************************************/


#include <iostream>                 //standard input/output streams library in C++. It provides an object-oriented framework for 
                                    //reading user input from the console and writing output data back to the screen or a log.
#include <string>                   //String header file




//The entry point to every program
int main()
{
    std::string name = "CoachLDEWM";
    int age = 51;

    std::cout << "Hello. My name is " << name << ". I am " << age << " years old.";


    return 0;
}