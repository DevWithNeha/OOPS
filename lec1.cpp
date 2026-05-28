#include<bits/stdc++.h>
using namespace std;

class student{
    public: // access modifier
    string name;
    int age,rollNo;
    string grade;
};

int main(){
    student s1;
    s1.name = "neha";
    s1.age = 22;
    s1.rollNo = 3415;
    s1.grade = "A";

    cout<<s1.name<<endl;

    student s2;
    s2.name = "rani";
    s2.age = 26;
    s2.rollNo = 3414;
    s2.grade = "B";

    cout<<s2.name<<" "<<s2.rollNo<<" ";

}