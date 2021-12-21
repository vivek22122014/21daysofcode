//prime -2      using sqrt thereby reducing number of times use of % operator in for loop           11-12-21



#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Enter number : ";
    int i,n,sq;
    cin>>n;
    sq=sqrt(n);
    for (i = 2; i <= sq; i++)
           if (n%i==0)
            break;

if (i>sq)
    cout<<"\n"<<n<<" is prime number";
else
    cout<<"\n"<<n<<" is not Prime number";

       
    

    return 0;
}