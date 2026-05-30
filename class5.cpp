
// Encapsulation
// data hiding
// no one can access private 
// they access it with the help of function

#include<bits/stdc++.h>
using namespace std;

class customer{
    string name;
    int account_number, balance;

    public:
    customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    void deposit(int amount){
        if(amount>0){
            balance += amount;
        }
    }

    void withdraw(int amount){
        if(amount <= balance && amount > 0){
            balance -= amount;
        }
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main(){
    customer c1("neha",1,1000);
    customer c2("manju",2,2000);
    customer c3("anna",3,5000);

    c1.deposit(1200);
    c1.display();
}