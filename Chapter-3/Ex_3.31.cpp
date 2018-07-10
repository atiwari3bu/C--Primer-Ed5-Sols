#include<iostream>
#include<cstddef>
using namespace std;

int main(){

  int array[10];
  for(size_t ix=0;ix<10;++ix)
    array[ix]=ix;
  for(size_t iy=0;iy<10;++iy)
    cout<<array[iy]<<" ";
  cout<<endl;

  return 0;
}

  
