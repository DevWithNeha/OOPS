#include<bits/stdc++.h>
using namespace std;

class customer{
    string name;
    int* data;

    public:
    customer(){
        name = "D";
        cout<<"constructor is"<<name<<endl;
    }

    customer(string name){
        this->name = name;
        cout<<"constructor is"<<name<<endl;

    }
    // destructor
    ~customer(){
        cout<<"Destructor is"<<name<<endl;
    }
};

int main(){
    customer c1("A");
    customer c2("B");
    customer c3("C");
    customer *c4 = new customer;
    delete c4;
}