//macro with arguments
#include <stdio.h>
#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\b", X)

int main()
{
    int x = 5;
    int z;

    printf("x = %d\n", x);
    z = SQUARE(x);
    printf("Evaluating SQUARE(X): ");
    PR(z);
    z = SQUARE(2);
    printf("Evaluating SQUARE(X+2): ");
    PR(SQUARE(x + 2));
    printf("Evaluating 100/ SQUARE(2): ");
    printf("x is %d.\n", x);
    printf("Evaluating SQUARE(++x): ");
    PR(SQUARE(++x));
    printf("After incrementing, x is %x.\n", x);

    
    return 0;
}