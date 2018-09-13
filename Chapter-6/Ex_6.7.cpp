#include<iostream>
using namespace std;

int foo(){
  static int val = 0;
  return val++;
}

int main(){

  for(int i=0;i<10;++i)
    cout<<foo()<<endl;
  return 0;
}
