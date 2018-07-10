#include<iostream>

int main(){

  p1+=p2-p2;  // p1=p1+p2-p2;

  // Here p1+p2 does not end the end of the same array
  // As p1 + p2 will point to garbage value and
  // subtracting it with p2 will produce indefinite result.
  //
  return 0;

}
