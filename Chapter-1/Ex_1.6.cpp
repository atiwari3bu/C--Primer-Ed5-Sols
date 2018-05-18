/*
 *
 * The program code is not legal because we are adding semicolon
 * at the very first line and terminating that statement.
 * We can remove the semicolon and the code fragment will be 
 * legal as shown below
 *
 *
 */


#include<iostream>

int main(){
  int v1=0;
  int v2=0;
  std::cout<< "The sum of "<<v1
    << " and "<< v2
    <<" is "<< v1+v2 << std::endl;
    return 0;

}
