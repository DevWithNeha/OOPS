// single inheritance

#include<bits/stdc++.h>
using namespace std;

class Human{
    protected:
    string name;
    int age;


    // Default Constructor

    // Human(){
    //     cout<<"i am human\n";  
    // }

    public:

    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    public:

    void work(){
        cout<<"i am working\n";
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

class student : public Human{
    int roll_no, fees;

    public:
    student(string name, int age, int roll_no, int fees) : Human(name, age){
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    // Default constructor

    // student(){
    //     cout<<"Hello Student\n";
    // }

    void display(){
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
    }
};

int main(){
    student A1("neha", 20, 35, 245);
    A1.display();
    
}