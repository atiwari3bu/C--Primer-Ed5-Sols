#include<iostream>
#include<vector>
using namespace std;


int main(){

  vector<int>v1; // 0 elements are present
  vector<int>v2(10); //10 elements are present with value 0
  vector<int> v3(10,42); // 10 elements are present with value 42
  vector<int> v4{10}; // 1 element with valaue 10
  vector<int> v5{10,42}; // 2 elements present with value 10 and 42
  vector<string> v6{10}; // ten elements with empty strings
  vector<string> v7{10, "hi"}; // ten elements with value "hi"

  return 0;
}
