//print first n terms of fibonacci numbers 4-12-21

//1,1,2,3,5,8

#include<iostream>
using namespace std;
int main(){
    int n,fib=1,arr[10]={-1};
    

    cout<<"Enter number : ";
    cin>>n;
    cout<<"\nFib series : ";
    for (int i=0;i<n;i++){
        arr[i]=fib; //a0=1,a1=1
        fib=arr[i-1]+arr[i]; //fib= arr[i-1]+fib;  //fib=0+1 //fib=1+1=2
         cout<<endl<<arr[i];  
    }
    return 0;
}