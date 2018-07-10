#include<iostream>
#include<vector>
using namespace std;

int main(){

  int a[]={1,2,3,4,5};
  int b[]={6,7,8,9,10};
  int i=0;

  for(i;i<5;++i){
    if(a[i]!=b[i])
      break;
  }
  if(i==5)
    cout<<"Arrays are equal"<<endl;
  else
    cout<<"Arrays are not equal"<<endl;
  
  vector<int> v1;
  vector<int> v2;

  for(int j=0;j<5;++j){
    v1.push_back(j);
    v2.push_back(i);
  }

  if(v1==v2)
    cout<<"vectors are equal"<<endl;
  else
    cout<<"vectors are not equal"<<endl;

  return 0;
}
