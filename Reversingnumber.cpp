//Reversing a number 4-12-21

//12345

#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"ENTER NUMBER : ";
    cin>>n;
    while(n>0){
        num=n%10;
        cout<<num;
        n/=10;

    }
return 0;
}