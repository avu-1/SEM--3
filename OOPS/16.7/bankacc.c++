#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    static int nextAccountNumber; // Static variable for generating unique account numbers
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(double initialBalance) : balance(initialBalance) {
        accountNumber = "BA" + to_string(++nextAccountNumber); // Generate unique account number
    }

    // Friend function declaration
    friend bool validateTransaction(const BankAccount& account, double amount);

    // Function to display account details
    void displayAccount() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw money
    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "$" << amount << " withdrawn successfully." << endl;
            return true;
        } else {
            cout << "Invalid or insufficient funds for withdrawal." << endl;
            return false;
        }
    }
};

// Initialize static member variable
int BankAccount::nextAccountNumber = 0;

// Friend function definition
bool validateTransaction(const BankAccount& account, double amount) {
    // Check if the account has sufficient balance for the transaction
    if (amount <= account.balance) {
        cout << "Transaction validated for account " << account.accountNumber << endl;
        return true;
    } else {
        cout << "Transaction declined for account " << account.accountNumber << ": Insufficient funds." << endl;
        return false;
    }
}

int main() {
    BankAccount account1(500.0); // Create a bank account with an initial balance
    account1.displayAccount(); // Display account details

    // Attempt to validate and perform transactions
    double transactionAmount = 200.0;
    if (validateTransaction(account1, transactionAmount)) {
        account1.withdraw(transactionAmount);
    }

    account1.deposit(300.0); // Deposit money
    account1.displayAccount(); // Display account details after transactions

    return 0;
}