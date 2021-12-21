//A person is elligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote.

#include<iostream>
using namespace std;
void voteEligibilityfn(int a);
int main(){
cout<<"Please enter age : ";
int age;
cin>>age;
voteEligibilityfn(age);


    return 0;
}
void voteEligibilityfn(int a){
    (a>=18)?(cout<<"\nHe/she is eligible to vote."):(cout<<"\nHe/she is not eligible to vote yet.");
    return;


}