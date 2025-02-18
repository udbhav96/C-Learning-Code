#include<stdio.h>
void reverse(int a[] , int n){
    if (n == 0 || n == 1)return;
    else{
        swap(a , a+n-1);
        reverse( a+1 , n -2);
    }
}
int max_array(int a[], int n){
    int maxval;
    if (n == 0)return -99999;
    if (n == 1)return a[0];
    maxval = max_array(a+1 , n -1);
    return max(a[0] , maxval);

}
int max_array(int a[], int n){
   
    if (n == 0)return -99999;
    if (n == 1)return a[0];
    return max(max_array(a , n/2) , max_array(a+n/2 , n-n/2));

}
