//Write a program to print the sum of two numbers entered by user by defining your own function.

#include<iostream>
using namespace std;
int sumfn(int a,int b);
int main(){
    int a,b;
    cout<<"Please enter Two numbers :\n";
    cin>>a>>b;
    cout<<"\n"<<"Sum of two numbers "<<a<<" and "<<b<<" is "<<sumfn(a,b);

return 0;
}
int sumfn(int x,int y){
    return x+y;
}