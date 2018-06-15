#include<iostream>

int main(){

  int i=42; // Assigning 42 to variable i
  int* p1=&i; // Initializing pointer type pi with address of i
  *p1=*p1 * *p1;//i=42*42
  std::cout<<i<<std::endl;
  return 0;

}
