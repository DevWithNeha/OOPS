// private, protected, public

// #include<bits/stdc++.h>
// using namespace std;

// class Human{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;

//     // within class

//     void fn(){
//         a = 30;
//         b = 20;
//         c = 10;
//     }
// };
// int main(){
//     Human h1;
//     // external
//         h1.c = 10;

// }

#include<bits/stdc++.h>
using namespace std;

class Human{
    string religion, color;
    public:
    string name;
    int age, weight;

};

class student: private Human{ // here private, protected, public teeno se access kr sakte h

    private:
    int roll_number, fees;

    public:
    
    student(string name, int age, int weight, int roll_number, int fees){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->fees = fees;
        this->roll_number = roll_number;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<fees<<" "<<roll_number<<" "<<endl;
    }
};

class teacher:public Human
{
    int salary, id;

};

int main(){
    student A("neha", 20, 50, 2000,35);
    A.display();
    teacher B;
    B.name = "neha";
    
    
}