//Amstrong numbers 4-12-2021

#include<iostream> 
#include<cmath>                                                     //153
using namespace std;
int main(){
    int n,num,sum=0;
    cout<<"Please enter your number : ";
    cin>>n;
    int temp=n;
    while(n>0){
        num=n%10;  
        sum+=(pow(num,3)); 
        //or sum=sum+rem*rem*rem;
        n/=10;
        }

    if(temp==sum){
        cout<<temp<<" is a amstrong number.";
                    }
    else{

        cout<<temp<<" is not a amstrong number.";
                    }
    return 0;
    }