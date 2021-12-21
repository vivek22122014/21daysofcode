//Pattern - 5 Palindromic pattern 7-12-21 && 8-12-21



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
        for(int i=1;i<=n;i++){
            int count=i;
            int count2=2;
           
            for(int j=1;j<=n-i;j++){
                cout<<"  ";

            }
            for(int k=1;k<=i;k++){
                
                cout<<count<<" ";
                count=count-1;    
                
            }
           
            if(i>=2){
            for (int j2 = 2; j2 <=i; j2++)
            {
                cout<<count2<<" ";
                count2=count2+1;
            }
            
            }
cout<<endl;
        }
return 0;


}
