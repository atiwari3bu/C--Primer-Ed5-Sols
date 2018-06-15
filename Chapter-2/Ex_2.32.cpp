#include<iostream>

int main(){

  int null=0; //legal
  int *p=null; // invalid conversion
  int*p=0;// This is valid but should be used as nullptr
  return 0;
}
