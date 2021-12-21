#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
 
    printf("Input a number :");
    cin>>a>>b>>c;
    if ((a>0)&&(b>0)&&(c>0))
        cout<<"+";
    else
        cout<<"minus";
return 0;
}