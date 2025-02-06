#include <stdio.h>


int main() {
    int c;
    int p;
    int len=0;
    int d=0;
    scanf("%d" , &p);
    if (!(p == -1)){
        len = 1; 
        d = 1;
        scanf("%d" , &c);
        while(!(c==-1)){
            if (p < c){
                len = len + 1;

            }
            else{
                if (len > d){
                    d = len;
                }
                len = 1;
            }
            p = c;
            scanf("%d" , &c);
            if (len > d){
                d = len;
            }
        }
        
    }
    printf("%d\n" , d);
}
