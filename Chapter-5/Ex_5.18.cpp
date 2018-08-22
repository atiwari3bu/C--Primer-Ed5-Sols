int main(){


  //(a)

  do//{   // Curly braces are missing
    int v1,v2;
    cout<<"Enter two numbers to sum "<<endl;
    if(cin>>v1>>v2)
      cout<<"Sum is: "<<v1+v2<<endl;
    //}
  while(cin);

  //(b)

  do{
    // ...
  }while(int ival=get_response());  // Varible declared in condition


  //(c)

  do{
    int ival=get_response();
  }while(ival);   // Loop defines variable each time
  

  return 0;
}

