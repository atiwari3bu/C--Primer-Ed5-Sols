#include<iostream>
#include<stdexcept>

using namespace std;

int main(){

  int a,b;
  bool try_again;
  do{
    try_again=false;
    try{
      cin>>a>>b;
      if(b==0)
        throw std::runtime_error("Divide by 0");
      cout<<a/b<<endl;
    }
    catch(std::runtime_error err){
      cout<<err.what()<<"\n Try Again ? (y/n) \n"<<endl;
      char c;
      if(cin>>c && (c=='y' || c=='Y'))
        try_again=true;
    }
  }while(try_again);

  return 0;
}
