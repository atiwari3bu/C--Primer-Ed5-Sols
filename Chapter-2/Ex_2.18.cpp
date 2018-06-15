#include<iostream>

int main(){
  int a=10;
  int* val=0;
  val=&a;// changing the value of pointer
  *val=20; // Changing the value pointed by pointer
  return 0;

}
