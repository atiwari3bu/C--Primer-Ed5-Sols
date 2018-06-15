#include<iostream>

int main(){
  i=ic;// Legal, int can be assigned as const int
  p1=p3; // legal, int * can be assigned to int* const
  p1=&ic;// invalid conversion form int* to const int
  p3=&ic;// invalid conversion
  p2=p1;// illegal assigment for read only p2
  ic=*p3; // legal operation
 
  return 0;
}
