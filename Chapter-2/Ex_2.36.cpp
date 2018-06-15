#include<iostream>

int main(){

  int a=3, b=4; // a and b is type int
  decltype(a) c=a; // c is of type int
  decltype((b))d=a; //d is reference type to a
  ++c;  //value of c becomes 4
  ++d;  //value of a becomes 4

  return 0;
}
