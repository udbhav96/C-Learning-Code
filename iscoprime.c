#include <stdio.h>

int iscoprime(int a , int b) {
    int  t;
    if ( a < b){
        t = a;
        a = b;
        b = t;
    }
    while (b != 0) {
        t = b;
        b = a%b;
        a = t;
    }
    if ( a==1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int p , c;
    int i , n;
    int count=0;
    scanf("%d" , &n);
    scanf("%d" , &p);
    for (i = 0; i < n; i++){
        scanf("%d" , &c);
        count = count + iscoprime(p,c);
    }
    printf("%d" , count);
}
/*
This program calculates how many numbers in a given list are coprime with a specified number.

1. The `iscoprime` function checks if two numbers are coprime (i.e., their greatest common divisor (GCD) is 1).
   - It uses the Euclidean algorithm to compute the GCD.
   - Returns 1 if the numbers are coprime, otherwise 0.

2. The `main` function:
   - Reads an integer `n` (number of elements in the list) and an integer `p` (the number to check coprimality with).
   - Reads `n` integers from input and counts how many are coprime with `p` using the `iscoprime` function.
   - Prints the count of coprime numbers.

Example Input:
5 12
3 7 12 25 11

Output:
3
*/