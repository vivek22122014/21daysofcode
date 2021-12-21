/*
Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. Go to the editor
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40 
*/
#include<iostream>
using namespace std;
void converthms(int sec);
int main(){
    int sec;
    cout<<"Input seconds: ";
    cin>>sec;
    converthms(sec);
    return 0;
}
void converthms(int sec){
    int hours=sec/3600;
    sec=sec-(hours*3600);
    int min=sec/60;
    sec=sec-(min*60);
    cout<<"There are:\n"<<"H:M:S - "<<hours<<":"<<min<<":"<<sec;
}
