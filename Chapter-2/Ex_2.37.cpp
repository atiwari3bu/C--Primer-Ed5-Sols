#include<iostream>

int main(){

  int a=3,b=4;  // a and b are of type int
  decltype(a) c=a;  // c is of type int
  decltype(a=b) d =a; // d is reference type to a

  return 0;

}
