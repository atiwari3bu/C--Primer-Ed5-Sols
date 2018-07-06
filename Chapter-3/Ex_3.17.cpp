#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

  string word;
  vector<string>v1;
  
  while(cin>>word)
    v1.push_back(word);
  for(auto &i:v1)
    for(auto &c:i)
      c=toupper(c);
  for(decltype(v1.size()) ix=0;ix!=v1.size();++ix){
    cout<<v1[ix]<<" ";
    if((ix+1)%8==0)
      cout<<endl;
  }
  return 0;
}
