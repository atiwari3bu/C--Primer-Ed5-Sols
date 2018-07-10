#include<iostream>

unsigned buf_size=1024;

int main(){

  int ia[buf_size]; // Legal, buf_size is global variable and is constant
  int ia[4*7-14];  // Legal if variable name ia is replaced
  int ia[text_size()];  // Legal, as it is const_expression
  char st[11]="fundamental"; // Error, no space for null character
  
  return 0;
}
