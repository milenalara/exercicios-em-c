#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 1, a = 3, b = 5, c = b, d = 7;
    bool w = 0;

    // 1. não (x > 3) -> true
    w = !(x > 3);
    printf("!(x > 3) ? -> %d\n", w);

    // 2. (x<1) e não(B>0) -> false && !true = false
    w = ((x < 1) && !(b>0));
    printf("(x < 1) && !(b>0) ? -> %d\n", w);

    // 3. não (d<7) e (c>5) -> !false && false = false

    // 4. não(x>3) ou (c<7) -> !true || false = false

    // 5. (a>b) ou (c>b) -> false || false = false

    // 6. (x>=2) -> true

    // 7. (x<1) e (b>=d) -> false && false = false

    // 8. (d>0) ou (c>5) -> true || false = true

    // 9. não(d>3) ou não(b>7) -> !false || !false = true

    // 10. (a>b) ou (c>b) -> false || false = false

    // 11.


    return 0;
}
