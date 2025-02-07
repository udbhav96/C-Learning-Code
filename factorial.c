#include<stdio.h>
int factorial(int r){
    int i;
    int ans=1;
    for(i=0; i < r; i=i+1){
        ans = ans*(i+1);
    }
    return ans;
}
int main(){
    int n,k;
    int res;
    scanf("%d %d" , &n , &k);
    res = factorial(n)/ (factorial(k)*factorial(n-k));
    printf("%d choose %d is\n", n , k);
    printf("%d\n" , res);

}
/*
This program calculates the binomial coefficient "n choose k" (combinations of n items taken k at a time).

1. The `factorial` function computes the factorial of a given number `r`:
   - Uses a loop to multiply numbers from 1 to `r`.
   - Returns the factorial value.

2. The `main` function:
   - Reads two integers `n` and `k` from input.
   - Computes the binomial coefficient using the formula:
     C(n, k) = n! / (k! * (n - k)!)
   - Prints the result in the format "n choose k is <result>".

Example Input:
5 2

Output:
5 choose 2 is
10
*/