//fib series using recursion
//1,1,2,3,5,8,13

#include<iostream>
using namespace std;

void fibseries(int n){
    int fib=1;
    if(n<0){
        cout<<"enter valid number\n";
    }
    else if (n==0||n==1)
    {
        cout<<fib;
        }
    else{

        return fib=fib+(fibseries-1);
    }
    

}


int main(){





}