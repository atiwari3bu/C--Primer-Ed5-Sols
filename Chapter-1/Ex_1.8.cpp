#include<iostream>

/* The first,second and fourth line works fine
 * Third line does not work
*/

int main(){
  std::cout<<"/*";             
  std::cout<<"*/";
  std::cout<</* "*/" */;
  std::cout<</*  "*/"  /*  "/*"  */;
  return 0;
}
