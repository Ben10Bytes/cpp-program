#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        if (initialBalance >= 0){
            balance = initialBalance;
        } else {
            balance = 0.0;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive ." << endl;
        }
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Successfully withdraw: &" << amount <<endl;
        } else {
            cout << "Invalid withdrawal amount or insufficiant funds. " << endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(500.0);

    account.deposit(150.0);
    account.withdraw(200.0);

    cout << "Current Balance: $" << account.getBalance() <<endl;
    return 0;
}