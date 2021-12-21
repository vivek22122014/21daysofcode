#include<stdio.h>
int main()
{
    int n;//5
    printf("Enter the decimal number : ");
    scanf("%d",&n);
    int i=1, diff=0, bin[10];
    while(n>=(2**i))//5>=2
    {
        i++; //2,3
    }
    
    diff=n-2**(i-1);//5-4//1
    bin[-i]=1;
    while(i>1)//3,2
    {
        i--;//2,1
        if(diff>=2**i-1)1>=4
            bin[-i]=1;
        else
            bin[-i]=0;  //i=2//0
    }
    for(i=0;i<10;i++)
    {
        printf("%d",bin[i]);
    }
}