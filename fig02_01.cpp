

#include <iostream> 
using namespace std;

class Chapte2Demos
{
    // Fig. 2.1: fig02_01.cpp
    // Text-printing program.
        public:
        void Rundemofig02_01() 
        {
            cout << "Demo fig02_01.cpp Text-printing program." << endl;
            cout << "Fig. 2.1" << endl;
            cout << "Welcome to C++!\n"; // display message
            cout << "End of Demo fig02_01.cpp" << endl;
           
            cout << "----------------fig02_01.cpp--------------" << endl;
            cout << "Paused. Press Enter to continue.";
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }


        // Fig. 2.3: fig02_03.cpp
        // Printing a line of text with multiple statements.
        void Rundemofig02_03()
        {
            cout << "Demo fig02_03.cpp Printing a line of text with multiple statements." << endl;
            cout << "Welcome ";
            cout << "to C++!\n";
            cout << "End of Demo fig02_03.cpp" << endl;
            cout << "----------------fig02_03.cpp--------------" << endl;
            cout << "Paused. Press Enter to continue.";
            cin.ignore(100000, '\n');
        }
        // Fig. 2.4: fig02_04.cpp
        // Printing multiple lines of text with a single statement.
        void Rundemofig02_04()
        {
            cout << "Demo fig02_04.cpp Printing multiple lines of text with a single statement." << endl;
            cout << "Welcome\nto\n\nC++!\n";
            cout << "End of Demo fig02_04" << endl;
            cout << "----------------fig02_04.cpp--------------" << endl;
            cout << "Paused. Press Enter to continue.";
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        // Fig. 2.13: fig02_13.cpp
        // Comparing integers using if statements, relational operators
        // and equality operators.
        void RunDemofig02_13() {
            int number1{ 0 }; // first integer to compare (initialized to 0)
            int number2{ 0 }; // second integer to compare (initialized to 0)

            cout << "Enter two integers to compare: "; // prompt user for data
            cin >> number1 >> number2; // read two integers from user

            if (number1 == number2) {
                cout << number1 << " == " << number2 << endl;
            }

            if (number1 != number2) {
                cout << number1 << " != " << number2 << endl;
            }

            if (number1 < number2) {
                cout << number1 << " < " << number2 << endl;
            }

            if (number1 > number2) {
                cout << number1 << " > " << number2 << endl;
            }

            if (number1 <= number2) {
                cout << number1 << " <= " << number2 << endl;
            }

            if (number1 >= number2) {
                cout << number1 << " >= " << number2 << endl;
            }
            cout << "End of Demo fig02_13.cpp"<<endl;
            cout << "----------------fig02_13.cpp--------------"<<endl;
            cout << "Paused. Press Enter to continue.";
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        void runall() 
        {
            Rundemofig02_01();
            RunDemofig02_13();
            Rundemofig02_03();
            Rundemofig02_04();
        }
}; // end class
