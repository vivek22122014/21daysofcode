//printing all positive decimal numbers from right to left


#include<iostream>
using namespace std;
int main(){
    int n,rem;
    cout<<"Enter number\n";
    cin>>n;
    while(n>0){
        rem=n%10;
        cout<<rem;

        n=n/10;
        
    }


}