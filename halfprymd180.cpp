//Print half pyramid after 180 rotation 6-12-21
//more efficient logic
/*

for(int i = 1; i <= n; i++) ^
for (int j = 1; j <= n; j++) ^
if (j <= n - i)
cout << " ";
 else 
cout << "*";

*/




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<"*";
                
            }
            
            
cout<<endl;
        }
return 0;


}
