//C++ Program to Check Whether a Number is Palindrome or Not           11-12-21


#include<iostream>
using namespace std;
int main(){
    int num,n,digit,rev=0;
    cout<<"Enter number : ";
    cin>>num;
    n=num;
    while (num>0)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;

    }
    if (rev==n)
    {
        cout<<"\nPalindrome";
    }
    else{
        cout<<"\nNot palindrome";
    }
    

    return 0;
}