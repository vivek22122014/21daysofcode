//Define a program to find out whether a given number is even or odd.

#include<iostream>
using namespace std;
void oddevenfn(int a);
int main(){
    int n;
    cout<<"Please enter the number : \n";
    cin>>n;

    oddevenfn(n);
        return 0;
}
void oddevenfn(int a){
    (a%2==0)?(cout<<"\neven"):(cout<<"\nOdd");
}