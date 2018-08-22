If we take an unsigned int instead of long, it may vary from machine to machine.
Hence, we can set 27 bit value to 1 if unsigned int only stores 16 bits on a
certain machine.

By using unsigned long int, we are making sure that atleast 32 bits are reserved.
