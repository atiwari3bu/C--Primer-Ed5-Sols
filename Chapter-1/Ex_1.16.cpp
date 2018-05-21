#include<iostream>

int main(){
  int sum=0;
  int value;
  while(std::cin>>value){
   // std::cout<<value<<std::endl;
   sum+=value;
  }
  std::cout<<"Sum is "<<sum<<std::endl;
  return 0;
}
