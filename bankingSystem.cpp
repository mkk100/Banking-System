#include "bankingSystem.h"
#include <map>
#include <iostream>
#include <string>
using namespace std;

Bank::Bank(string first, string last, int iBalance, int accNo)
{
    firstName = first;
    lastName = last;
    initialBalance = iBalance;
    accountNumber = accNo;
}
int Bank::balance()
{
    return initialBalance;
}

void Bank::deposit(int money)
{
    initialBalance += money;
}
void Bank::withdraw(int money)
{
    initialBalance -= money;
}
ostream &operator<<(ostream &out, Bank &b)
{
    out << "First Name:" << b.firstName << '\n'
        << "Last Name: " << b.lastName << '\n'
        << "Account Number: " << b.accountNumber << '\n'
        << "Initial Balance: " << b.initialBalance << '\n';
    return out;
}
void BankAccountList::addBankAccountList(Bank &b, int key)
{
    list.insert(pair<int, Bank>(key, b));
}
void BankAccountList::printMap()
{
    map<int, Bank>::iterator itr;
    for (itr = list.begin(); itr != list.end(); itr++)
    {
        cout << itr->second << endl;
    }
}
void BankAccountList::specificData(int i)
{
    map<int, Bank>::iterator itr = list.find(i);
    cout << itr->second;
};
void BankAccountList::accessDeposition(int i, int money)
{
    map<int, Bank>::iterator itr = list.find(i);
    itr->second.deposit(money);
}
void BankAccountList::accessWithdrawal(int i, int money)
{
    map<int, Bank>::iterator itr = list.find(i);
    itr->second.withdraw(money);
}
void BankAccountList::bankAccDel(int i)
{
    map<int, Bank>::iterator itr = list.find(i);
    list.erase(itr);
}
