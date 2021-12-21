//Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.

#include<iostream>
#define PI 3.14
using namespace std;
void circlefn(float a);
int main(){
    float r;
    cout<<"Please enter radius of circle : ";
    cin>>r;
    cout<<"\n";
    circlefn(r);
return 0;
}

void circlefn(float r){
    float area=PI*r*r;
    float circumferece=2*PI*r;
    cout<<"Area of circle with radius of "<<r<<" is "<<area<<endl;
    cout<<"Circumference of circle with radius of "<<r<<" is "<<circumferece;
}