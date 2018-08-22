int main(){

  *iter++; // legal operation
  (*iter)++; //illegal operation as it will try to increment string
  *iter.empty;// illegal as the dot operator will act first and then it will be
  // dereferenced iter has no function called empty
  iter->empty;// legal operation
  ++*iter; // illegal operation as it will be incremented first and then
  //dereferenced
  iter++->empty;  //legal operation

  return 0;
}

