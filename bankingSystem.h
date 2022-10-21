#ifndef BANKING_SYSTEM
#define BANKING_SYSTEM
#include <map>
#include <iostream>
#include <string>

using namespace std;

class Bank
{
public:
    Bank(string, string, int, int);
    int balance();
    void deposit(int);
    void withdraw(int);
    friend ostream &operator<<(ostream &out, Bank &);

private:
    string firstName;
    string lastName;
    int initialBalance;
    int accountNumber;
};
class BankAccountList
{
public:
    void addBankAccountList(Bank &, int);
    void printMap();
    void specificData(int);
    void accessDeposition(int, int);
    void accessWithdrawal(int, int);
    void bankAccDel(int);

private:
    map<int, Bank> list;
};
#endif