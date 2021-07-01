
// a small C++ program
#include <iostream>
#include <string>

int main()
{
    // ask for the person's name
    std::cout << "Please enter your first name: ";
    
    //read the name
    std::string name;
    std::cin >> name;
 
    // build the message we intend to write
    const std::string greeting = "Hello, " + name + "!";

    // the number of blanks surrounding the greeting
    const int pad = 1;

    // total number of rows to write
    const int rows = pad * 2+3;

    return 0;
}


