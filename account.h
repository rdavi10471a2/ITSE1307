#include <string>
#include <iostream>

using namespace std;
//full implementation here but this could also be broken into .cpp and .h

class Account {
public:
    // Account constructor with two parameters  
    Account(std::string accountName, int initialBalance)
        : name{ accountName } { // assign accountName to data member name

        // validate that the initialBalance is greater than 0; if not,
        // data member balance keeps its default initial value of 0
        if (initialBalance > 0) { // if the initialBalance is valid
            balance = initialBalance; // assign it to data member balance
        }
    }

    // function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount) {
        if (depositAmount > 0) { // if the depositAmount is valid
            balance = balance + depositAmount; // add it to the balance 
        }
    }

    // function returns the account balance
    int getBalance() const {
        return balance;
    }

    // function that sets the name
    void setName(std::string accountName) {
        name = accountName;
    }

    // function that returns the name
    std::string getName() const {
        return name;
    }
private:
    std::string name; // account name data member 
    int balance{ 0 }; // data member with default initial value
}; // end class Account

class AccountTester {

public:
    void RunTests() {

        Account account1{ "Jane Green", 50 };
        Account account2{ "John Blue", -7 };

        // display initial balance of each object
        cout << "account1: " << account1.getName() << " balance is $"
            << account1.getBalance();
        cout << "\naccount2: " << account2.getName() << " balance is $"
            << account2.getBalance();

        cout << "\n\nEnter deposit amount for account1: "; // prompt
        int depositAmount;
        cin >> depositAmount; // obtain user input
        cout << "adding " << depositAmount << " to account1 balance";
        account1.deposit(depositAmount); // add to account1's balance

        // display balances
        cout << "\n\naccount1: " << account1.getName() << " balance is $"
            << account1.getBalance();
        cout << "\naccount2: " << account2.getName() << " balance is $"
            << account2.getBalance();

        cout << "\n\nEnter deposit amount for account2: "; // prompt
        cin >> depositAmount; // obtain user input
        cout << "adding " << depositAmount << " to account2 balance";
        account2.deposit(depositAmount); // add to account2 balance

        // display balances
        cout << "\n\naccount1: " << account1.getName() << " balance is $"
            << account1.getBalance();
        cout << "\naccount2: " << account2.getName() << " balance is $"
            << account2.getBalance() << endl;
        cout << "End of acount tests" << endl;
        cout << "-------------------" << endl;
    }

};