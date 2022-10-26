#include <stdio.h>

int main(){
    int a = 0x61626364;
    int *p = &a;
    char *q = (char *)&a;
    printf("%x %c\n", *p, *q);
}