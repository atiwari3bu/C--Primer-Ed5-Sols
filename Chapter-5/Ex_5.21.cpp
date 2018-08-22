#include<iostream>
#include<string>

using namespace std;

int main(){

  string s,temp;
  int to_print=0;
  while(cin>>s){
    if(temp!=s){
      temp=s;
    }
    else{
      cout<<s<<endl;
      to_print=1;
      continue;
    }
  }
  if(to_print==0) cout<<"No words were repeated "<<endl;  return 0;
}
