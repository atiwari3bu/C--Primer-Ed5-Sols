#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

  vector<string> text;
  string line;
  while(getline(cin,line))
    text.push_back(line);

  for(auto it=text.begin();it!=text.end();++it)
    for(auto &c: *it)
      c=toupper(c);

  for(auto &elem:text)
    if(elem.empty())
      cout<<endl;
    else
      cout<<elem<<" ";

  return 0;
}
