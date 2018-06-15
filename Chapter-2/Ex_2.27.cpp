#include<iostream>

int main(){
  int i=-1,&r=0; // Reference cannot be initialized to literal
  int* const p2=&i2;  // Legal operation if i2 is defined first
  const int i=-1,&r=0;  // Legal operation
  const int * const p3=&i2; //  if i2 is int then it is illegal
  const int* p1=&i2;  // Legal operation
  const int &const r2;// illegal type declaration
  const int i2=i, &r=i; // legal operation
  return 0;
}
