#include <stdio.h>
#include <math.h>

int main(void) {
    long num = 612852475143;
    long max_factor = 1;
    long factor = 2;

    while (num > 1) {
        if (num % factor == 0) {
            max_factor = factor;
            num /= factor;
            while (num % factor == 0) {
                num /= factor;
            }
        }
        factor = (factor == 2) ? 3 : factor + 2;
    }

    printf("%ld\n", max_factor);
    return 0;
}

