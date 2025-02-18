#include<stdio.h>
#include<stdlib.h>
char *duplicate(char * s){
    int i= 0;
    int len;
    char *t;
    for( i = 0; s[i] != 0; i++);
    len = i;
    t = (char *) malloc((len+1)*sizeof(char));
    for( i = 0; i < len; i++){
        t[i] = s[i];
    }
    t[i] = '\0';
    return  t;

}
int main(){
    char s[] = "Sample";
    char *t;
    t = duplicate(s);
    printf("%s\n" , t);
} 