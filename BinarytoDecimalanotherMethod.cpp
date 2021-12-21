//binary to decimal another logic shown in applied ai course.

#include<iostream>
using namespace std;
int main(){
    int n,rem,d,j=1,dec=0;
    cout<<"Enter Binary number ";
    cin>>n;
    while(n>0){
        rem=n%10;
        d=j*rem;
        j*=2;
        dec+=d;
        n/=10;
    }
cout<<"\nDecimal number : "<<dec;

    return 0;}
