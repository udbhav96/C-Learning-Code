#include <stdio.h>

int main() {
    int a, b, t;
    printf("Enter two integers: ");
    if (scanf("%d%d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("GCD of %d and %d is ", a, b);
    while (b != 0) {
        t = a % b;
        a = b;
        b = t;
    }
    printf("%d\n", a);
    return 0;
}
