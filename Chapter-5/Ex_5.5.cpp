#include<iostream>
#include<vector>
using namespace std;

int main(){

  const vector<string> scores={"F","D","C","B","A","A++"};
  string lettergrade;
  float grade;

  cin>>grade;

  if(grade<60)
    lettergrade=scores[0];
  else if(grade<70)
    lettergrade=scores[1];
  else if(grade<80)
    lettergrade=scores[2];
  else if(grade<90)
    lettergrade=scores[3];
  else if(grade<95)
    lettergrade=scores[4];
  else
    lettergrade=scores[5];

  cout<<lettergrade<<endl;
  return 0;

}


