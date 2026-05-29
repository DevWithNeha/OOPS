#include<bits/stdc++.h>
using namespace std;

class customer{
    string name;
    int account_number;
    int balance;
    int *roi;

    public:

    // default constructor

    customer(){
        name = "neha";
        account_number = 123;
        balance = 1222;
        roi = new int[100];

        // cout<<"this a default customer";
    }

    // Parameterized Constructor

    // customer(string a,int b,int c){
    //     name = a;
    //     account_number = b;
    //     balance = c;
    // }

    // customer(string name,int account_number,int balance){
    //     this->name = name;
    //     this->account_number = account_number;
    //     this->balance = balance;
    // }

    // constructor overloading

    customer(string a,int b){
        name = a;
        account_number = b;
        balance = 0;
    }

    // Inline Function

    inline customer(string a,int b,int c): name(a), account_number(b), balance(c){

    }
    
    // copy constructor

    customer(customer &b){ // refernce de diye mtlb b bhi c4 ko hi point karega
        name = b.name;
        account_number = b.account_number;
        balance = b.balance;
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main(){
    customer c1;
    // customer c2("neha",123,1200);
    customer c3("neha",1233);
    customer c4("rani",1234,1500);
    c1.display();
    // c2.display();
    c3.display();
    c4.display();

    // copy constructor
    
    customer c5(c4);
    c5.display();
    c5 = c3;
    c5.display();
}