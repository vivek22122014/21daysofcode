/*  
Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail
*/

#include<iostream>
using namespace std;
void marksfn(int mark);
int main(){
    int marks;
    cout<<"Please enter marks out of 100 : ";
    cin>>marks;
    marksfn(marks);
 
    return 0;
}
void marksfn(int mark){
     
    switch (mark/10)
    {
    case 10:
    case 9:
           cout<<"AA";
            break;
    case 8:
           cout<<"AB";
        break;
    case 7:
           cout<<"BB";
         break;
    case 6:
           cout<<"BC";
        break;
    case 5:
           cout<<"CD";

        break;
    case 4:
           cout<<"DD";

        break;
    case 3:
           cout<<"Fail";
            break;
    
    default:
        cout<<"Please enter a valid marks";
        break;
    }

}