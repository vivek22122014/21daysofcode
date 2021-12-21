//3. Write a C program to print a block F using hash (#), 
//where the F has a height of six characters and width of five and four characters. And also to print a big 'C'. 

#include<iostream>
using namespace std;

void Ffn(int h,int w);
void Cfn(int s);
int main(){
    cout<<"\n";
    Ffn(6,4);
    cout<<"\n\n";
    Cfn(10);
    return 0;
}

void Ffn(int h,int w){
    int i,j;
    for ( i = 1; i < 7; i++)
    {
        for ( j = 1; j < 5; j++)
        {
           if (j==1)
           {
               cout<<"#";
           }
           if (i==1||i==4)
           {
               cout<<" #";
           }
                          }
        
        cout<<endl;
    }
   // return;
}


void Cfn(int s){
    int i,j;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j <s; j++)
        {
            if (i==1||i==9)
            {
                if (j>=2&&j<8)
                {
                    cout<<" #";
                }
                else{
                    cout<<"  ";
                }
                
            }
            if (i==2||i==8)
            {
                if ((j<2)||(j>7))
                {
                    cout<<" #";
                }
                else{
                    cout<<"  ";
                }
                
            }
                
        }




if (i>=3&&i<=7)
{
for (int j = 0; j < s; j++)
{
    if (j==0)
   {
       cout<<" #";
   }
}

  
   
}

      cout<<endl;  
    }
    


}