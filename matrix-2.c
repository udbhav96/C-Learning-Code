#include<stdio.h>
int main(){
    int  n ;
    int trace , i , j , a;
    scanf("%d %d" ,  &n);
    for (trace = 0 , i = 0 ; i < n;  i++){
        for( j = 0; j < n; j++){
            scanf("%d", &a);
            if (i == j){
                trace = trace + a;
            }
        }

    }
    printf("%d" , trace);
    return 0;

}
/*
 * 1. The program reads an integer `n`, which represents the size of a square matrix (n x n).
 * 2. It initializes a variable `trace` to 0, which will store the sum of the matrix's diagonal elements.
 * 3. The program then enters a nested loop to read each element of the matrix:
 *    - The outer loop iterates over each row.
 *    - The inner loop iterates over each column of the current row.
 * 4. If the current element is on the diagonal (i.e., where row index equals column index), 
 *    the element is added to the `trace` sum.
 * 5. After the loops complete, the program prints the sum of the diagonal elements (trace).
 */
