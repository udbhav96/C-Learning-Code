#include <stdio.h>

void swap(int* ptra, int* ptrb) {
    int t = *ptra;
    *ptra = *ptrb;
    *ptrb = t;
}

void rev_arry(int a[], int n) {
    int* b = a + n - 1;  

    while (b > a) {  
        swap(a, b);
        a = a + 1;
        b = b - 1;  
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    rev_arry(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*
 * This program reverses an array in C.
 *
 * 1. `swap` function:
 *    - Takes two integer pointers.
 *    - Swaps the values they point to.
 *
 * 2. `rev_arry` function:
 *    - Takes an array and its size.
 *    - Uses two pointers: one at the start and one at the end.
 *    - Swaps elements while moving pointers towards the center.
 *
 * 3. `main` function:
 *    - Initializes an array.
 *    - Calls `rev_arry` to reverse it.
 *    - Prints the reversed array.
 */
