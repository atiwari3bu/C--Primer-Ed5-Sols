
int main(){

  if(fval); // fval is converted to bool, if fval is 0 then if is true, 
  //otherwise, it is false
  dval= fval+ival;  // ival is converted to float and it is added to
  // to fval, the result of which is converted to double
  dval + ival * cval; // dval + (ival*cval) hence cval is converted to
  // int and multiplied to int which is converted to double and it is added
  // to dval
  return 0;
}
