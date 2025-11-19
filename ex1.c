/******************
Name: Ori David     
ID:214140154
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    printf("Ascii:\n");
    char x;
    printf("Please enter a character\n");
    scanf(" %c",&x);
    printf("Its numerical value is: %d\n", x);
    printf( "0 for even, 1 for odd: %d\n", x & 1 );

  


    




    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */

    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    int y;
    printf("Please enter a negative integer\n");
    scanf(" %d",&y);
    printf("1's complement: %d\n", -~y );
    printf("unsigned: %u\n", y);
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */

    // Shifting right and left
    printf("\nShifting right and left:\n");
    int r, n, b;
    printf("Please enter 3 integers\n");
    scanf("%d %d %d",& r,& n,& b);
    printf("After shifting right and left: %d\n", (r >> n)<<b);

    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */

    // Even - Odd
    printf("\nEven - Odd:\n");
    int p, v, q;
    printf("Please enter 3 integers\n");
    scanf("%d %d %d",& p,& v,& q);
    printf("0 - most of them are even, 1 - most of them are odd: %d\n",(p&1 & v&1)|(p&1 & q&1)|(v&1 & q&1));

    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */

    // Different Bases
    printf("\nDifferent Bases:\n");
    int f, g;
    printf("Please enter two numbers in octal and hexadecimal bases\n");
        scanf("%o", &f);
    scanf("%x", &g);
    printf("LSBs: %d %d\n", f & 1, g & 1);
    printf("MSBs: %d %d\n", (f >> 31)&1, (g >> 31)&1);


    /*  Scan two numbers:
    * 
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */

    printf("Bye!");

    return 0;
}
