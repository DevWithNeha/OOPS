#include<bits/stdc++.h>
using namespace std;

class person{
    protected:
    string name;

    public:

    void Introduce(){
        cout<<"hello my name is: "<<name<<endl;
    }
};

class employee : public person{
    protected:
    int salary;;

    public:
    void monthly_salary() {
        cout<<"my monthly salary is:"<<salary<<endl;
    }
}; 

class Manager : public employee{
    public:
    string department;

    Manager(string name, int salary, string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work(){
        cout<<"i am working: "<<department<<endl;
    }
};


int main(){
    Manager A1("neha", 2000, "finnance");
    A1.monthly_salary();
    // A1.salary = 1888; // we cannot access it because it's a protected
    A1.department = "Software Engineering";
    A1.work();


}