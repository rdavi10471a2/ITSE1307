
#include <iostream>
#include <limits>
#include "ex02_05.h"
#include "fig02_01.cpp" //entire implementation is in single file should probably be .h but this shows you can also include.CPP
#include "account.h"
using namespace std;


//borrowed from https://www.learncpp.com/cpp-tutorial/stdcin-and-handling-invalid-input/ 
void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void PrintMenu() {
    cout << endl;
    cout << "-------------------------------"<<endl;
	cout << "Choose a Demo to run by entering the number of the demo or 0 to Quit" << endl;
	cout << "1 Chapter 2 Simple demos" << endl;
	cout << "2 Chapter 2 3 numbers single row .cpp and .h file" << endl;
    cout << "3 Chapter 3 demos" << endl ;
    cout << "4 cin.getLine sample" << endl;
    cout << "0 to exit this app" << endl;
    cout << "-------------------------------" << endl;

}
//borrowed and modified from https://www.learncpp.com/cpp-tutorial/stdcin-and-handling-invalid-input/
//note this does not check for the meaning of the integer to the caller whether it is in the expected range etc just that the value entered was an integer
int  getMenuChoiceInt() 
{
    while (true) // Loop until user enters a valid input
    {
        
        int InputValue{};
        cin >> InputValue;

        // Check for failed extraction
        if (cin.fail()) // has a previous extraction failed?
        {
            // yep, so let's handle the failure
            cin.clear(); // put us back in 'normal' operation mode
            ignoreLine(); // and remove the bad input
            cerr << "Oops, that input is invalid.  Please try again.\n"; //error output stream see https://www.cplusplus.com/reference/iostream/cerr/
        }
        else
        {
            ignoreLine(); // remove any extraneous input
            // the user can't enter a meaningless integer value, so we don't need to worry about validating that
            return InputValue;
        }
    }
}

int main()
{
	int menuchoice = 0;  //uzer input of menu choice

    PrintMenu(); //initial printing of the menu
    //prime the read
    menuchoice = getMenuChoiceInt(); //get the first menu choice
    while (menuchoice!=0) 
    {
        switch (menuchoice) {
        case 0:
            break;
        case 1:
            {
                Chapte2Demos temp;
                temp.runall();
            }
            break;
        case 2:
        {
            Chapter2Demo2 demo;
            demo.runDemo();
            demo.runDemo2();
        }
            break;
        case 3:
        {
            AccountTester AC;
            AC.RunTests();

        }
        case 4:
        {
            //https://www.cplusplus.com/reference/istream/istream/getline/
            // This example illustrates how to get lines from the standard input stream(cin)
            cout << "This example illustrates how to get lines from the standard input stream(cin)" << endl;
            char name[256], title[256];
            

            cout << "Please, enter your name: ";
            cin.getline(name, 256);

            cout << "Please, enter your favourite movie: ";
            cin.getline(title, 256);

            cout << name << "'s favourite movie is " << title;
        }
        break;
        default:
            cout << "Invalid Choice for menu" << endl;
        }
        PrintMenu(); //reprint the menu
        menuchoice = getMenuChoiceInt();// retrieve next choice that is an integer
    }

	return 0;
}