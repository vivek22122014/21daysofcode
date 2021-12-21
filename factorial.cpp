//Calculating factorial of number 4-12-21

#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter number to find factorial : ";
    cin>>n;

    for(int i=n;i>0;i--)
    {
        fact*=i;
    }
    cout<<endl<<"Factorial of "<<n<<" is : "<<fact;
    



return 0;
}