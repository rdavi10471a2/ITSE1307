// Calculate the product of three integers
#include <iostream> // enables program to perform input and output
#include "ex02_05.h"

using namespace std; // program uses names from the std namespace


void Chapter2Demo2::runDemo() 
{
	cout << "Enter three integers on a single line Demo: "; // prompt user for data
	cin >> x >> y >> z; // read three integers from user
	result = x * y * z; // multiply the three integers; store result
	cout << "The product is " << result << endl; // print result; end line
	cout << "-----------End Demo------------" << endl;
	cout << endl;
}

void Chapter2Demo2::runDemo2(){
	std::cout << "Two numbers on multiple lines Demo" << endl;
	std::cout << "Enter first integer: "; // prompt user for data
	std::cin >> number1; // read first integer from user into number1

	std::cout << "Enter second integer: "; // prompt user for data
	std::cin >> number2; // read second integer from user into number2

	sum = number1 + number2; // add the numbers; store result in sum

	std::cout << "Sum is " << sum << std::endl; // display sum; end line
	cout << "-----------End Demo------------" << endl;
	cout << endl;
}
