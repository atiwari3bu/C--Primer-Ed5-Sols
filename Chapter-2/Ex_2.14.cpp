#include<iostream>

// Legal program but bad practice


int main(){

  int i=100,sum=0;

  for(int i=0;i!=10;++i)
    sum+=i;

  std::cout<<i<<" "<<sum<<std::endl;// i=100 because in the scope of main and not in scope of for
 // sum is updated to sum of 0 to 9 which is 45

  return 0;

}
