#include "bankingSystem.h"
#include "bankingSystem.cpp"
#include <map>
#include <iostream>
int main()
{
    BankAccountList b1;
    int choice, i = 1, number, deposit = 0, withdraw = 0, eraseNum = 0;
    cout << endl;
    cout << "Banking System" << endl;
    cout << endl;
    cout << "Select one option below:" << endl;
    cout << "1.Open an account" << endl;
    cout << "2.Balance Enquiry" << endl;
    cout << "3.Deposit" << endl;
    cout << "4.Withdrawal" << endl;
    cout << "5.Close an account" << endl;
    cout << "6.Show all accounts" << endl;
    cout << "7.Quit" << endl;
    cout << endl;
    cout << "Select the option: ";
    cin >> choice;
    while (choice != 7)
    {
        if (choice == 1)
        {
            string fn, ln;
            int amount;
            cout << "Enter first name: ";
            cin >> fn;
            cout << "Enter last name: ";
            cin >> ln;
            cout << "Enter amount: ";
            cin >> amount;
            Bank account(fn, ln, amount, i);
            b1.addBankAccountList(account, i);
            i++;
        }
        else if (choice == 2)
        {
            cout << "Account Number: ";
            cin >> number;
            b1.specificData(number);
        }
        else if (choice == 3)
        {
            cout << "Account Number: ";
            cin >> number;
            cout << "Deposit: ";
            cin >> deposit;
            b1.accessDeposition(number, deposit);
        }
        else if (choice == 4)
        {
            cout << "Account Number: ";
            cin >> number;
            cout << "Withdraw: ";
            cin >> withdraw;
            b1.accessWithdrawal(number, withdraw);
        }
        else if (choice == 5)
        {
            cout << "Account Number: ";
            cin >> eraseNum;
            b1.bankAccDel(eraseNum);
            cout << "Account No." << eraseNum << " is closed." << endl;
        }
        else if (choice == 6)
        {
            b1.printMap();
        }
        cout << "Select the option: ";
        cin >> choice;
    }
}