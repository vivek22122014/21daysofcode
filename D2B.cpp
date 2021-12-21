//cnvert the given numbers from Decimal to binary
//8
#include<iostream>
using namespace std;

int main(){
    int n,arr[100];
    cout<<"enter Decimal number\n";
    cin>>n;//2
    int counter=0;
    while(n>0){//2>0
        arr[counter++]=n%2;
        n=n/2; 
          }
          --counter;
    for(;counter>-1;counter--){
        cout<<arr[counter];
    }

    return 0;
}
