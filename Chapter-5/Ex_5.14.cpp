#include<iostream>
using namespace std;

int main(){

  string s,s1,s2;
  int count=1,max=0;

  while(cin>>s){
    if(s1==s){
      ++count;
    }
    else{
      if(count>max){
        max=count;
        s2=s1;
      }
      s1=s;
      count=1;
    }
  }
  cout<<"The word " <<s2<<" occured "<<max<<" times"<<endl;
  return 0;
}
