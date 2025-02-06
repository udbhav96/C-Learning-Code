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
/*
 * This program calculates the Greatest Common Divisor (GCD) of two integers
 * using the Euclidean algorithm.
 *
 * Steps:
 * 1. Prompt the user to enter two integers.
 * 2. Read the two integers using scanf. If the input is invalid, display an error
 *    message and terminate the program.
 * 3. Display the two integers for which the GCD will be calculated.
 * 4. Use a while loop to apply the Euclidean algorithm:
 *    - Continue looping until the second integer (b) becomes 0.
 *    - In each iteration, calculate the remainder (t) of a divided by b.
 *    - Update a to b and b to the remainder (t).
 * 5. Once the loop ends, the variable 'a' contains the GCD.
 * 6. Print the computed GCD.
 */

