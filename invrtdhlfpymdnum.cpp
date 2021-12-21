//Print Inverted Half Pyramid using numbers 6-12-21

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 1; j<=n-i; j++)
        {
        cout<<j;      }
cout<<"\n";
}     

    return 0;
}