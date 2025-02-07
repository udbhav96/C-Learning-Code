#include <stdio.h>

int main() {
    int m, n;
    int ri = 0;
    int sqsum = 0;
    int ci, a, rowsum;

    scanf("%d %d", &m, &n);

    while (ri < m) {
        rowsum = 0;
        ci = 0;
        while (ci < n) {
            scanf("%d", &a);  
            rowsum = rowsum + a;
            ci = ci + 1;
        }
        sqsum = sqsum + (rowsum * rowsum);
        ri = ri + 1;
    }
    
    printf("%d", sqsum);  
    return 0;
}
// The program reads two integers, m and n, representing the number of rows and columns of a matrix.  
// It initializes a variable sqsum to store the sum of squared row sums.  

// A loop runs m times, processing each row of the matrix:  
// - It resets rowsum to 0 at the start of each row.  
// - Another loop runs n times to read n integers (the elements of the row).  
// - Each element is added to rowsum.  

// After reading a full row, the program squares rowsum and adds it to sqsum.  
// This process repeats for all rows.  

// Finally, the program prints the value of sqsum, which represents the sum of the squared row sums.  

