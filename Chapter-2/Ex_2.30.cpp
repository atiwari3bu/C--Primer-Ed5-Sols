#include<iostream>

int main(){

  const int v2=0; // top-level
  int v1=v2;  
  int*p1 =&v1; 
  int &r1=v1; 
  const int* p2=&v2;  // low-level
  const int *const p3=&i; //right most top level and left most low level
  const int &r2=v2; // top-level
  return 0;
}
