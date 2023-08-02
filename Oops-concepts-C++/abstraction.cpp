/*Abstraction is a fundamental concept in object-oriented programming that focuses on hiding the internal implementation 
details of an object while exposing a simple and clear interface for interacting with it. It allows us to model complex 
real-world entities as simple, abstract, and manageable objects in our code.*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of $" << amount << " successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount. Amount should be greater than 0." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds or invalid withdrawal amount." << endl;
        }
    }

    void displayBalance() {
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("123456789", 1000.0);

    account.displayBalance(); // Output: Account Number: 123456789, Balance: $1000

    account.deposit(500.0);   // Output: Deposit of $500 successful. New balance: $1500
    account.withdraw(200.0);  // Output: Withdrawal of $200 successful. New balance: $1300

    account.displayBalance(); // Output: Account Number: 123456789, Balance: $1300

    return 0;
}
