#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
  string s1="Ashish";
  string s2="Tiwari";

  if(s1==s2)
    cout<<"Two strings are equal"<<endl;
  else if(s1<s2)
    cout<<"s1 is less than s2"<<endl;
  else
    cout<<"s1 is greater than s2"<<endl;

  const char a[]="Ashish";
  const char b[]="Tiwari";

  if(strcmp(a,b)==0)
    cout<<"The two strings are equal"<<endl;
  else if(strcmp(a,b)<0)
    cout<<"a is less than b"<<endl;
  else
    cout<<"a is greater than b"<<endl;

  return 0;
}


