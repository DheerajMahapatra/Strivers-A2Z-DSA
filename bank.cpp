#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:

    // Function to input values
    void input() {
        cout << "Enter Depositor Name: ";
        getline(cin, name);

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Function to deposit money
    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully!\n";
        } else {
            cout << "Invalid amount!\n";
        }
    }

    // Function to withdraw money
    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully!\n";
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    // Function to display details
    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.input();
    acc.deposit();
    acc.withdraw();
    acc.display();

    return 0;
}