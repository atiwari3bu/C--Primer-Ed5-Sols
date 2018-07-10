Adding two pointers will produce a third pointer whose address
may or may not be valid. If it is valid then it will produce 
value which is garbage and compiler will not know whether 
the value stored is garbage or not but it will be a serious 
issue to debug that problem. If the address obtained by adding
two pointers is invalid then it will produce an error while
dereferencing it.
