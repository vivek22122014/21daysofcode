/*
Write a C program to print the following characters in a reverse way. 
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX
*/

#include<iostream>
#define l 100
using namespace std;
void revfn(char ch[],int size);
int main(){
    int n;
    char ch[l];
    cout<<"How many character you want to reverse : ";
    cin>>n;
    cout<<"Please enter character you want to reverse : ";
    for (int i = 0; i < n; i++)
    {
        cin>>ch[i];
    }
    cout<<"\nReversered charcters : ";
    revfn(ch,n);

    return 0;
}

void revfn(char ch[],int size){
    int i=size;
  while (i>=0)
  {
      cout<<ch[i];
      --i;
  }
   


}