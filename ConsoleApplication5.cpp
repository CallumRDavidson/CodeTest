// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
#include <string_view>

void printSV( std::string_view str) //Function that prints a std::string_view
{
    std::cout << str << "\n";
}

double getDouble() // Function that takes a double from user and returns it
{
    std::cout << "Enter a double value: ";
    double value{};
    std::cin >> value;
    return value;
}

char getOperator() // takes an operator from user and returns it 

{
    char operation{};
   
    bool valid_input = false ;
    do // will continue to loop until user enters a valid operation
    {
        std::cout << "Enter one of the following: +, - *, or /";
        std::cin >> operation;
        
        if (operation == '+' || operation == '-' || operation == '*' || operation == '/') 
        {
            valid_input = true;
        }
        else std::cout << " Invalid operation, please try again.'\n'";
    } while (valid_input == false);
       
    return operation;
}  

void printResult(double x, char operation, double y) // takes a valid operation from user and returns the result of the operation
{
  
     
        if (operation == '+')
        {
            std::cout << x << " + " << y << " = " << x + y << '\n';
        }
        else if (operation == '-')
        {
            std::cout << x << " - " << y << " = " << x - y << '\n';
        }
        else if (operation == '*')
        {
            std::cout << x << " * " << y << " = " << x * y << '\n';
        }
        else if (operation == '/') {
            std::cout << x << " / " << y << " = " << x / y << '\n';
        }
     
}


int main()
{
    std::string answer{};
    do 
    {
          double x{ getDouble() };
          double y{ getDouble() };
        printResult(x, getOperator(), y);
        std::cout << " Would you like to continue? y or n \n ";
        std::getline(std::cin >> std::ws, answer);
       
    } while (answer == "y" || answer == "Y");
    std::cout << "Goodbye"; 
    /*;
    std::cout << "Enter a name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    std::string_view s{ name }; //s will be replaced with name at compile time
    printSV(s);
    */

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
