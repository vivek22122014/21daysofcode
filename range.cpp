/* Write a C program that reads an integer and check the specified range where it belongs. 
Print an error message if the number is negative and greater than 80. 
Test Data :
Input an integer: 15
Expected Output:
Range [0, 20] 


Specified Range: [0, 20], [21, 40], [41, 60], [61, 80]
*/

#include<iostream>
using namespace std;
void range(int a);
int main(void){
    int a;
    cout<<"Input an integer: ";
    cin>>a;
    range(a);
    return 0;
    }
void range(int a){
    
  ((a<20)?(cout<<"Range [0, 20]") : (a<40)?(cout<<"Range [20, 40]"):(a<60)?(cout<<"Range [40, 60]"):(a<80)?(cout<<"Range [60, 80]"):(cout<<"Invalid"));
    
    
}


