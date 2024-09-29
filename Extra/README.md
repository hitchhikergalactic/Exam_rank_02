## Subject

```
Assignment name  : work_bits
Expected files   : work_bits.c
Allowed functions: write, printf, &, |, << >>,
--------------------------------------------------------------------------------

Bit operators:

*** This is intended to be an aid in learning to operate with bits. ***

*** Here you can operate and demonstrate the functions that are asked of you in
Exam 02 about operating with bits. ***

Bit operators can only operate on char and int data types (decimal, hexadecimal,
and octal integers).
Bit operators perform operations on each of the bits of an integer or char.

These operators are:

• AND, represented by the (&) symbol.
• OR, represented by the symbol (|).
• XOR, represented by the symbol (^).
• One's complement, represented by the symbol ~.
• Shift to the left, is represented by two minor signs
that (").
• Shift to the right, it is represented by two major signs
that (").

The AND operation (and) compare bit by bit obtaining a result according to table AND.

Bitwise AND operation:

AND |   Bit 0   |   Bit 1   |   Result
--------------------------------------
          0     |     0     |     0
          0     |     1     |     0
          1     |     0     |     0
          1     |     1     |     1

Thus, if we perform the operation 107 (01101011 in binary) AND 27 (00011011 in binary)
we would obtain 11 (00001011 in binary).
The OR operation (|) compares bit by bit, obtaining a result according to table OR.

Bitwise OR operation:

OR  |   Bit 0   |   Bit 1   |   Result
--------------------------------------
          0     |     0     |     0
          0     |     1     |     1
          1     |     0     |     1
          1     |     1     |     1

Thus, if we perform the operation 107 (01101011 in binary) OR 27 (00011011 in binary)
we would obtain 123 (01111011 in binary).
The XOR (^) operation compares bit by bit obtaining a result according to table XOR.

Bitwise XOR operation:

XOR |   Bit 0   |   Bit 1   |   Result
--------------------------------------
          0     |     0     |     0
          0     |     1     |     1
          1     |     0     |     1
          1     |     1     |     0


Thus, if we perform the operation 107 (01101011 in binary) XOR 27 (00011011 in binary)
we would obtain 112 (01110000 in binary).
The one's complement operator (~) simply inverts each of the bits.
Thus, ~01101011 is equal to 10010100 and ~00011011 is equal to 11100100.
The left shift operator («) shifts the bits to the left as many positions as indicated
after the operator, placing the least significant bit (rightmost bit) with a zero, and

the most significant bit (bit leftmost) is discarded.

Let's look at an example in which a shift to the right is applied to a variable.
left of a bit:

int main (void)
{
    int left = 1;
    left = left << 1;
}

At initialization, the left variable has a value of 1, which in binary is 00000001.
But what happens in the shift left operation? We can see it in the figure below:

                         ___ ___ ___ ___ ___ ___
                        | 0 | 0 | 0 | 0 | 0 | 1 |  Before moving.                         
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯
The most                /   /   /   /   /   /
significant bit          ___ ___ ___ ___ ___ ___
is discarded   --->  X  | 0 | 0 | 0 | 0 | 1 | 0 |  After displacement.
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯
                                              ^
                                      A zero is entered
                                         in the least
                                       significant bit

As can be seen, the result of the shift is 00000010 in binary, whose equivalent value in
decimal is 2. This value is then assigned to the left variable.
The right shift operator (») shifts the bits to the right as many positions as indicated 
after the operator, with the most significant bit being set to a zero, and the least significant
bit being discarded. Let's now look at an example of shifting a bit to the right:

int main (void)
{
    int right = 1;
    right = right >> 1;
}

At initialization, the right variable has a value of 1, which in binary is 00000001. Let's
look in the figure below to see how the movement is performed.

                         ___ ___ ___ ___ ___ ___
Before moving.          | 0 | 0 | 0 | 0 | 0 | 1 |                         
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯
                            \   \   \   \   \   \         The most
                         ___ ___ ___ ___ ___ ___          significant bit
After displacement.     | 0 | 0 | 0 | 0 | 0 | 0 |  X <--- is discarded.          
                         ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯         
                          ^
                   A zero is entered
                      in the least
                    significant bit

As can be seen, the result of the shift is 00000000 in binary, whose equivalent value in
decimal is 0. This value is then assigned to the right variable.
