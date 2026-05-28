// // public 

// // statically

// /*

// #include<bits/stdc++.h>
// using namespace std;

// class student{
//     public: // access modifier
//     string name;
//     int age,rollNo;
//     string grade;
// };

// int main(){
//     student s1;
//     s1.name = "neha";
//     s1.age = 22;
//     s1.rollNo = 3415;
//     s1.grade = "A";

//     cout<<s1.name<<endl;

//     student s2;
//     s2.name = "rani";
//     s2.age = 26;
//     s2.rollNo = 3414;
//     s2.grade = "B";

//     cout<<s2.name<<" "<<s2.rollNo<<" ";

// }
// */

// // private


// #include<bits/stdc++.h>
// using namespace std;

// class student{
//     private:
//     string name;
//     int age,rollNo;
//     string grade;

//     // Function using Getter and Setter

//     public:
//     void setname(string s){
//         if(s.size() == 0){
//             cout<<"invalid"<<endl;
//             return;
//         } 
//         name = s;
//     }
//     void setgrade(string s){
//         grade = s;
//     }
//     void setrollNo(int r){
//         rollNo = r;
//     }
//     void setage(int a){
//         if(a<0 || a>100){
//             cout<<"invalid";
//             return;
//         }
//         age = a;
//     }

//     // intialise karne ke liye get function

//     void getname(){
//         cout<<name<<endl;
//     }
//     void getage(){
//         cout<<age<<endl;
//     }
//     void getrollNo(){
//         cout<<rollNo<<endl;
//     }
//     string getgrade(int pin){
//         if(pin == 123){
//             return grade;

//             return " ";
//         }
        
//     }
    
// };

// int main(){
//     student s1;
//     s1.setname("neha");
//     s1.setgrade("A++");
//     s1.setrollNo(35);
//     s1.setage(22);

//     s1.getname();
//     s1.getrollNo();
//     s1.getage();
//     cout<<s1.getgrade(1234);
// }

// dynamically 

#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age,roll;
    string grade;

};

int main(){
    student *s = new student; // new student ka address s me store h
    (*s).name = "neha";
    (*s).age = 22;
    (*s).roll = 35;
    (*s).grade = "A++";

    cout<<s->name<<endl;
    cout<<s->age<<endl;
    cout<<s->roll<<endl;
    cout<<s->grade<<endl;


}