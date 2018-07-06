#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  int n=50;
  int sum=0;
  while(n!=100){
    sum+=n;
    ++n;
  }
  cout<<"Sum= "<<sum<<endl;

  n=10;
  while(n>=0){
    cout<<n<<endl;
    --n;
  }
  
  int n1,n2;
  cout<<"Enter two numbers"<<endl;
  cin>>n1>>n2;
  for(n1;n1<=n2;++n1){
    cout<<n1<<endl;
  }
  return 0;
}

