#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    string name;
    double balance;

public:
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }
    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance = balance + amount;
            cout << "Amount deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid amount!" << endl;
        }
    }
    void withdraw(double amount)
    {
        if(amount <= 0)
        {
            cout << "Invalid amount" << endl;
        }
        else if(amount > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
    }
    void display()
    {
        cout << "Account Details" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    account.createAccount();

    account.deposit(5000);
    account.withdraw(2000);

    account.display();

    return 0;
}