#include<stdio.h>
int search(int a [], int n , int key){
    if (n == 0){
        return -1;}
    if (a[0] == key){
        return 1;
    }
    else{
        search(a+1 , n+1 ,key);
    }

    

}