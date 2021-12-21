//Write a program to reverse an array or string

#include<iostream>
using namespace std;

int main(){

    int arr[]={1,3,4,2,5,8,6,9};
    cout<<"before"<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"after"<<endl;
     for(int j=7;j>=0;j--){
        cout<<arr[j]<<endl;

    }
    
    return 0;
}