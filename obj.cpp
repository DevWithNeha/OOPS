#include<bits/stdc++.h>
using namespace std;

// empty class ka size 1 byte hota h C++ so that each object gets a unique memory address.

class a{
    
    
    // char c;
    // int b;
    // char a;  // 12 byte

    // int a;
    // char b;
    // char c; // 8 byte


    // c d p p b b b b e e e e e e e e // padding
    char c;
    char d;
    int b;
    double e;

};

int main(){
    a obj;
    cout<<sizeof(obj)<<" ";
}