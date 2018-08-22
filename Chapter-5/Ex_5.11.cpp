#include<iostream>
#include<string>
using namespace std;

int main(){

  char ch;
  int a_cnt=0,e_cnt=0,i_cnt=0,o_cnt=0,u_cnt=0;
  int bl_cnt=0,tab_cnt=0,line_cnt=0;
  
  while(cin>>ch){
    if(ch=='a' || ch=='A')
      ++a_cnt;
    else if(ch=='e' || ch=='E')
      ++e_cnt;
    else if(ch=='i'|| ch=='I')
      ++i_cnt;
    else if(ch=='o'|| ch=='O')
      ++o_cnt;
    else if(ch=='u' || ch=='U')
      ++u_cnt;
    else if(ch==' ')
      ++bl_cnt;
    else if(ch=='  ')
      ++tab_cnt;
    else if(line_cnt=='\n')
      ++line_cnt;
  }

  cout<<"No of a's are: "<<a_cnt<<endl;
  cout<<"No of e's are: "<<e_cnt<<endl;
  cout<<"No of i's are: "<<i_cnt<<endl;
  cout<<"No of o's are: "<<o_cnt<<endl;
  cout<<"No of u's are: "<<u_cnt<<endl;
  cout<<"No of blanks are: "<<bl_cnt<<endl;
  cout<<"No of tabs are: "<<tab_cnt<<endl;
  cout<<"No of lines are: "<<line_cnt<<endl;

  return 0;

}
