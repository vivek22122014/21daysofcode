/*
Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers.
Display a message if it is not possible to find the roots. Go to the editor
Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000
*/

#include<iostream>
#include<math.h>
using namespace std;
void Bhaskara(int a,int b,int c);
int main(){
    int a,b,c;
   
    cout<<"Input the first number(a): ";
    cin>>a;
    cout<<"Input the first number(b): ";
    cin>>b;
    cout<<"Input the first number(c): ";
    cin>>c;
    Bhaskara(a,b,c);
   

    return 0;
}

void Bhaskara(int a,int b,int c){
     double x1=(double)(-b+sqrt((b*b)-(4*a*c)))/(2*a);
     double x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
     cout<<"Root1: "<<x1<<"\n";
     cout<<"Root2: "<<x2;
     
}