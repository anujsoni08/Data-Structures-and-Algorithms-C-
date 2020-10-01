#include <iostream>
#include <conio.h>

using namespace std;

int main(){
  char a[10];
  cout<<"Enter your name ";
  cin>>a;
  cout<<"\n";
  a[4]='s';
  cout<<"Your name is "<<a<<endl;
  return 0;
}
