#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter charatcter to find ASCII Value : ";
    cin>>ch;
    cout<<"ASSCI value of "<<ch<<" is "<<int(ch);
return 0;
}


/*

#include <iostream>
using namespace std;
int main(){

  cout << "Printable ASCII [32..126]:\n";
  for (char i = ' '; i <= '~'; ++i) {
    cout << i <<"\t";
  }

return 0;
}









or









#include <iostream>
int main()
{
  std::cout << "Printable ASCII [32..126]:\n";
  for (char i = ' '; i <= '~'; ++i) {
    std::cout << i << ((i % 16 == 15) ? '\n' : ' ');
  }
}

*/