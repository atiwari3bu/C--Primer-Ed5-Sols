#include<stdio.h>

int main(){

  extern int ix=1024;// error, extern cannot be initialized inside function
  int iy;// declaration
  extern int iz;

  return 0;
}

