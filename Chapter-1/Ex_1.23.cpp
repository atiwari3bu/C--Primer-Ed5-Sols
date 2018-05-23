#include<iostream>
#include "Sales_item.h"

int main(){
  int count=1;
  Sales_item total;
  
  if(std::cin>>total){
    Sales_item trans;
    while(std::cin>>trans){
      if(total.isbn()==trans.isbn())
        ++count;
      else{
        std::cout<<"isbn= "<<total.isbn()<<" count= "<<count<<std::endl;
        total=trans;
        count=1;
      }
    }
    std::cout<<"isbn= "<<trans.isbn()<<" count= "<<count<<std::endl;
  }
  
  return 0;
}
