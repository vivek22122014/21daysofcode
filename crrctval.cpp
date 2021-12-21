/*
Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. 
If q is greater than r and s is greater than p and 
if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values". 
Test Data :
Input the first integer: 25                                                                                                                 
Input the second integer: 35                                                                                                                
Input the third integer: 15                                                                                                                
Input the fourth integer: 46                                                                                                                 
Wrong values

Input the first integer(even): 2
Input the second integer: 9
Input the third integer: 8
Input the fourth integer: 66
Correct values
*/
#include<iostream>
using namespace std;
const char* correctval(int a,int b,int c,int d);
int main(void){
    int p,q,r,s;
    cout<<"Input the first integer(even): ";
    cin>>p;
    cout<<"Input the second integer: ";
    cin>>q;
    cout<<"Input the third integer: ";
    cin>>r;
    cout<<"Input the fourth integer: ";
    cin>>s;
    cout<<correctval(p,q,r,s);
    return 0;
}
const char* correctval(int p,int q,int r,int s){
      if((p>0)&&(q>0)&&(r>0) && (p%2==0)&&((q>r) && (s>p))&&((r+s)>(q+p))){  
            return "Correct values";
        }
    else{
        return "Wrong values";
        
    }
    
}
