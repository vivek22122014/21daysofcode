/*
16. Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00
*/

#include<iostream>
using namespace std;
void notes(int amt);
int main(){
    int amt;
    cout<<"Input the amount: ";
    cin>>amt;
    cout<<"\n";
    notes(amt);
    return 0;
}
void notes(int amt){
    int h=(amt/100);
    int f=((amt%100)/50);
    int t=(amt-((h*100)+(f*50)))/20;
    int ten=(amt-((h*100)+(f*50)+(t*20)))/10;
    int five=(amt-((h*100)+(f*50)+(t*20)+(ten*10)))/5;
    int one=(amt-((h*100)+(f*50)+(t*20)+(ten*10)+(five*5)));
    cout<<"There are:\n";
    cout<<h<<" Note(s) of 100.00\n";
    cout<<f<<" Note(s) of 50.00\n";
    cout<<t<<" Note(s) of 20.00\n";
    cout<<ten<<" Note(s) of 10.00\n";
    cout<<five<<" Note(s) of 5.00\n";
    cout<<one<<" Note(s) of 1.00\n";








}