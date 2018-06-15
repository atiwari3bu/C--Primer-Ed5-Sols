#include<iostream>

int main(){

  const int buf;  //const variable is uninitialized
  int cnt=0;      
  const int sz=cnt;
  ++cnt;++sz; // const varible sz cannot be changed

  return 0;

}
