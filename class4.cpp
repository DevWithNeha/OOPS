// they are attribute of classes or class member
// static Data members

#include <bits/stdc++.h>
using namespace std;

class customer
{
    string name;
    int account_no, balance;
    static int total_customer;
    static int total_balance;

public:
    customer(string name, int account_no, int balance)
    {
        this->name = name;
        this->account_no = account_no;
        this->balance = balance;
        total_customer++;
        total_balance += balance;
    }

    // static member function

    static void acceStatic()
    { // ye name , account no, balance ko access ni kr sakta
        cout << total_customer << endl;
    }

    static void accessBalance()
    {
        cout << total_balance << endl;
    }

    void display()
    {
        cout << name << " " << account_no << " " << balance << " " << total_customer << " " << total_balance << endl;
    }

    void display_total()
    {
        cout << "total number of customer: " << total_customer << endl;
        cout << "total balance: " << total_balance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }
};

int customer::total_customer = 0;
int customer::total_balance = 0;

int main()
{
    customer c1("neha", 1, 1000);
    customer c2("manju", 2, 2000);
    customer c3("anna", 3, 5000);
    // customer::acceStatic();

    c1.deposit(400);
    // c1.display_total();
    c1.withdraw(300);
    c1.display_total();

    // customer::accessBalance();
}
