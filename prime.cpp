//checking a number is prime

#include<iostream>
using namespace std;
int main(){
int n;
bool boolval=true;
cout<<"Enter number : \n";
cin>>n;
for(int i=2;i<n;i++)
    if(n%i==0)
        boolval=false;

if (boolval)
    cout<<"Prime";
else
    cout<<"Not prime";


return 0;
}

