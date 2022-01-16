
#include <iostream>
using namespace std;

#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void PrintMenu() {
    cout << endl;
    cout << "-------------------------------"<<endl;
	cout << "Choose a Demo to run by entering the number of the demo or 0 to Quit" << endl;
	cout << "1 Demo 1" << endl;
	cout << "2 Demo 2" << endl;
    cout << "0 to exit this app" << endl;
    cout << "-------------------------------" << endl;

}

int  getMenuChoice() 
{
    while (true) // Loop until user enters a valid input
    {
        
        int x{};
        std::cin >> x;

        // Check for failed extraction
        if (std::cin.fail()) // has a previous extraction failed?
        {
            // yep, so let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            ignoreLine(); // and remove the bad input
            std::cerr << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            ignoreLine(); // remove any extraneous input

            // the user can't enter a meaningless double value, so we don't need to worry about validating that
            return x;
        }
    }
}

int main()
{
	int menuchoice = 0;

    PrintMenu();
    menuchoice = getMenuChoice(); //
    while (menuchoice!=0) 
    {
        switch (menuchoice) {
        case 0:

            break;
        case 1:
            cout << "you chose 1" << endl;
            break;
        case 2:
            cout << "you chose 2" << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
        PrintMenu();
        menuchoice = getMenuChoice();
    }

	return 0;
}