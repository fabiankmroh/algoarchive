#include <stdio.h>

int main(void){
    char a[500];
    char* p;

    while(gets(a) != NULL){
        p = a;

        *a = *a + 2;

        printf("%c\n", *a);
    }
}