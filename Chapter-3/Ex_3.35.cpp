#include<iostream>
using namespace std;

int main(){

  int* ptr;
  int a[]={1,2,3,4,5};
  int* beg=begin(a);
  int* last=end(a);
  
  for(beg;beg!=last;++beg)
    *beg=0;
  beg=begin(a); 
  for(beg;beg!=last;++beg)
    cout<<*beg<<endl;

  return 0;
}
