//Print 0-1 pattern 7-12-21


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            if ((i+j)%2==0)
            {
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}