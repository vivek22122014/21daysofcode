//Define a function to find out if number is prime or not.
#include<iostream>
#include<math.h>
using namespace std;
void primefn(int a);
int main(){
    cout<<"Please enter number : ";
    int num;
    cin>>num;
    primefn(num);
    return 0;
}
void primefn(int a){
  int i,z;
    z=sqrt(a);
    for( i=2;i<=z;i++)
      if (a%i==0)
          break;

      if (i>z)
        cout<<"\nPrime";
      else
       cout<<"\nNot Prime";
  return;
}