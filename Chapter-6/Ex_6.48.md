
string s;
while(cin>>s && s!=sought){}
assert(cin);

The loop are used to keep reading string from the input until `sought` found. It is a bad idea to use `assert` check whether `cin` is in an error state. Because when the program compiled with `NDEBUG` preprocessor variable, the statement would not be excuted.
