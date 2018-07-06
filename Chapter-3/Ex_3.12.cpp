#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector<vector<int>> ivec; // legal declaration vector of vector of type int
  vector<string> svec=ivec; // illegal as svec is vector of type string
  vector<string> svec(10, "null");// legal as svec is vector of length 10 with value null
  return 0;

}


