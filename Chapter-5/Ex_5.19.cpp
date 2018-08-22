#include<iostream>
#include<string>

using namespace std;

int main(){

  string s1,s2;

  do{
    cin>>s1>>s2;
    if(s1<s2) cout<<s1<<" is less than "<<s2<<endl;
    else cout<<s2<<" is less than "<<s1<<endl;
  }while(cin);

  return 0;
}
