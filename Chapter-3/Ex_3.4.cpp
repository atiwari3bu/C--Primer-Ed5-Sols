#include<iostream>

using namespace std;

int main(){

  string s1,s2;
  cin>>s1>>s2;
  if(s1==s2)
    cout<<"They are equal"<<endl;
  else if(s1>s2)
    cout<<s1<<" is greater than "<<s2<<endl;
  else
    cout<<s2<<" is greater than "<<s1<<endl;

  if(s1.size()==s2.size())
    cout<<"They have the same size"<<endl;
  else if(s1.size()>s2.size())
    cout<<s1<<" is greater in size than "<<s2<<endl;
  else if(s1.size()<s2.size())
    cout<<s2<<" is greater in size than "<<s1<<endl;

  return 0;
}
