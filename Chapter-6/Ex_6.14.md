Reference parameters
  - Functions must use reference parameters to operate on objects of a type that cannot be copied.
  - Functions prefer to use reference parameters to operate on objects of large class types or large containers.
  - Functions should use reference parameters to return additional information via the reference parameters.

    void printStr(std::ostream &os, const std::string &str, bool &stat) {
      if (os << str)
        stat = true;
      else
        stat = false;
    }

Nonreference parameters
  - Functions should use nonreference parameters when the value of the parameters may changed but should not affect the objects passed to the function.

    int sum(int n) {
      int sum = 0;
      while (n > 0)
        sum += n--;
      return sum;
    }

