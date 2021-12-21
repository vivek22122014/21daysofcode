/*
Write a C program to display multiple variables. 
Sample Variables :
a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
Declaration :
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;
Click me to see the solution
*/

#include<iostream>
using namespace std;
int main(){

int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;
cout<<"a+ c : \t"<<a+(int(c))<<"\n";
cout<<"x+c : \t"<<x+int(c)<<"\n";
cout<<"dx + x : \t"<<dx+x<<"\n";
cout<<"((int) dx) : \t"<<((int) dx)<<"\n";
cout<<"((int) dx) + ax : \t"<<((int) dx) + ax<<"\n";
cout<<"a + x : \t"<<a + x<<"\n";
cout<<"a + x : \t"<<a + x<<"\n";
cout<<"s + b : \t"<<s + b<<"\n";
cout<<"ax + b : \t"<<ax + b<<"\n";
cout<<"s + c : \t"<<s +int (c)<<"\n";
cout<<"ax + c : \t"<<ax +int (c)<<"\n";
cout<<"ax + ux : \t"<<ax + ux<<"\n";
    return 0;
}
