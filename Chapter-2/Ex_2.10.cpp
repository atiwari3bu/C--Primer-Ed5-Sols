#include<iostream>

std::string global_str;//Empty string 
int global_int;//0

int main(){

  int local_int;//defaut initialized
  std::string local_str;// empty

  std::cout<<local_int<<local_str<<std::endl;

  return 0;
}
 
