#include <stdio.h>

int main() {
    int maxchar;
    int i;
    char c = '\n';
    char p;

    scanf("%d", &maxchar);   
    getchar(); 

    for (i = 0; i < maxchar; i++) {
        p = c;
        c = getchar();  
        

        if ((c == '\n') && (p == '\n')) {
            break; 
        }
    }

    printf("%d\n", i);
    return 0;
}
/* 
 * 1. The program reads an integer `maxchar` which indicates the maximum number of characters to process.
 * 2. It then reads input characters one by one using `getchar()`.
 * 3. The loop continues until one of two conditions are met:
 *    - It processes exactly `maxchar` characters (as specified by the user).
 *    - It detects two consecutive newline (`Enter`) presses, in which case the loop stops early.
 * 4. After processing, the program prints the number of characters it has processed before exiting.
 * 5. If there are fewer than `maxchar` characters entered and two consecutive newlines are detected, the loop terminates early.
 */

