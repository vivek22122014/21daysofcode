//cnvert the given numbers from binary to decimal

#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int bnum;
    cout<<"enter binary number\n";
    cin>>bnum;
    int num,sum=0, exp=0;
    while(bnum>0){

        
        num=bnum%10;
        bnum=bnum/10;
        sum=(sum+(pow(2,exp)*num));
        exp++;

    }
cout<<"Decimal number : "<<sum<<endl;
return 0;

}