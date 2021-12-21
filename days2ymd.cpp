/*
Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days. 
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)
*/
#include<iostream>
using namespace std;
void daystoYMD(int a);
int main(){
    int day;
    cout<<"Input no. of days: ";
    cin>>day;
    cout<<endl;
    daystoYMD(day);
    return 0;
}
void daystoYMD(int a){
    int y=a/365;
    a=a-(y*365);
    int m=a/30;
    a=a-(m*30);
    cout<<y<<" Year(s)\n";
    cout<<m<<" month(s)\n";
    cout<<a<<" Day(s)";
}