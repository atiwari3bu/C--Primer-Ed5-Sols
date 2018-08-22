#include<iostream>
using namespace std;

int main(){
  int integer;
  while(cin>>integer){
    if(integer!=42)
      cout<<integer<<endl;
    else
      break;
  }
  return 0;
}
