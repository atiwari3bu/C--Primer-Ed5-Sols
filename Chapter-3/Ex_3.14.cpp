#include<iostream>
#include<vector>

using namespace std;

int main(){
  int number;
  vector<int> values;

  while(cin>>number){
    values.push_back(number);
  }

  return 0;
}
