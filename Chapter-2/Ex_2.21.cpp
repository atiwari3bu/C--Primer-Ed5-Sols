#include<iostream>

int main(){

  int i=0;
  double* dp=&i; //error: cannot convert ‘int*’ to ‘double*’ in initialization
	int *ip=i; // error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive] 
	int *p=&i;// Valid instruction address of i is stored in int* type
  return 0;

}
