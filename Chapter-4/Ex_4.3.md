I think that is an acceptable trade-off. When an expression refers to and change the same object, we can always seperate that expression into several expressions to avoid the situation except where:
  - The operator involved is one of _and `&&`, or `||`, conditional `?:`, comma `,`_ operator,
  - The subexpression that change the operand is itself the operand of another subexpression.

