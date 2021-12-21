//Define a function that returns the product of two numbers entered by user.

#include<iostream>
using namespace std;
int productfn(int a,int b);
int main(){

    int a,b;
    cout<<"Please enter two numbers to find product of : \n";
    cin>>a>>b;
    cout<<"Product of numbers "<<a<<" and "<<b<<" is "<<productfn(a,b);
   return 0;
}
int productfn(int x,int y){
    return x*y;
}