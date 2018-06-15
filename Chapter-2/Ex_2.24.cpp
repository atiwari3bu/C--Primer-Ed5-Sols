#include<iostream>

int main(){

  int i=42;
  void* p=&i; // Typeless pointer that can hold address of any object
  long* lp=&i;  // long pointer cannot hold address of integer variable

  return 0;
}
