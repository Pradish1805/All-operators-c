//Program for Arethemtic Operators

#include <stdio.h>

int main()
{
    int a, b;
        a = 10;
        b = 20;
            printf("%d\n", a + b); // Addition
            printf("%d\n", a - b); // Substraction
            printf("%d\n", a * b); // Multtiplication
            printf("%d\n", a / b); // Division
            printf("%d\n", a % b); // Modulus
           
    return 0;
}
// Program for Relational Operators

#include <stdio.h>

int main()
{
    int a, b;
    a = 10;
    b = 20;
        printf("%d\n", a < b); // a < b
        printf("%d\n", a <= b); // a <= b
        printf("%d\n", a > b); // a > b
        printf("%d\n", a >= b); // a >= b
        printf("%d\n", a == b); // a == b
        printf("%d\n", a != b); // a != b
        return 0;
}
// Program for Logic Operators

#include <stdio.h>

int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
        printf("%d\n", (a > b) && (b > c)); // Logical AND
        printf("%d\n", (a > b) || (b < c)); // Logical OR
        printf("%d\n", !(a > b)); // Logical NOT
    return 0;
}
// Proram for Bitwise Operator

#include <stdio.h>

int main()
{
    int a, b;
    a = 10;
    b = 20;
        printf("%d\n", a & b);  // Bitwise AND
        printf("%d\n", a | b );  // Bitwise OR
        printf("%d\n", a << b );  // Bitwise Left Shift
        printf("%d\n", a >> b );  // Bitwise Right Shift
        printf("%d\n", a = ~b ); // Bitwise NOT
        printf("%d\n", a ^ b);  // Bitwise XOR
    return 0;      
}      
// Program for Assignment Operator

#include <stdio.h>

int main()
{
    int a = 10;
    printf("%d\n", a);  // Assigning value 10 to a

    a += 10;
    printf("%d\n", a);  // Assigning value by adding 10 to a

    a -= 10;
    printf("%d\n", a);  // Assigning value by subtracting 10 from a

    a *= 10;
    printf("%d\n", a);  // Assigning value by multiplying 10 to a

    a /= 10;
    printf("%d\n", a);   // Assigning value by dividing 10 from a

    a %= 10;
    printf("%d\n", a);   // Assigning value by mod 10 from a

    return 0;
}
//Program for Ternary Operator

#include <stdio.h>

int main()
{
    int a, b, max;
    a = 10;
    b = 20;
    max = (a > b) ? a : b;

    printf("%d", max);
    return 0;
}