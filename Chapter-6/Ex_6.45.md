The whole purpose of writing inline function is to save time for compiling.
The compiler just replaces the text of the function as it is when it is called,
saving a lot of time.

However, when the function is complex, it will only slowdown the compiler. 
Hence, rule of thumb will be to use inline function only when function can be 
expressed in one line.
