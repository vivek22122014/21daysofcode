//Check if a year is leap year or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter year : ";
    cin>>n;
    if(n%100==0){
        if(n%400==0){
            cout<<"\nLeap Year";
        }
        else{
            cout<<"\nNot a leap year";
        }
    }
    else{
        if (n%4==0)
        {
            cout<<"\nLeap Year";
        }
        else
        {
            cout<<"\nNot a leap year";
        }

    }

return 0;

}