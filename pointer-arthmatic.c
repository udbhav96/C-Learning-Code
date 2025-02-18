#include<stdio.h>
#include<stdlib.h>
int *increment(int n){
    int * ptr;
    ptr = (int *)malloc(sizeof(int));
    *ptr = n + 1;
    return ptr;
}
int main(){
    int *p ;
    p = increment(1);
    printf("%d" , *p);
    free(p);
    p = 0 ;

}