// simple preprocessor example
#include <stdio.h>
#define TWO 2
#define OW "Consistency is the last refuge of unimagina\
tive. - Dado Oduor"
#define FOUR TWO*TWO
#define PX printf("X is %d.\n", x);

int main()
{
    int x = TWO;
     PX;
     x = FOUR;
     printf(FMT, x);
     printf("%s\n", OW);
     printf("TWO: OW\n");

     return 0;
}