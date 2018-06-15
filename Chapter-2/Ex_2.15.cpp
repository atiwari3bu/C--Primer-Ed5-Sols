#include<iostream>

int main(){

  int ival=1.01; // valid but ival will contain 1 and not 1.01 because of int type
  int &rval1=1.01; //invalid because cannot bound initializer to object
  int &rval2=ival; //valid
  int &rval3; // error: a reference must be initialized
  return 0;

}
