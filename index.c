#include<stdio.h>

int main(){
    int x = 4;
    printf("%p, %d\n", &x, x);
    x = 5;
    printf("%p, %d\n", &x, x);
    x = 1;
    printf("%p, %d\n", &x, x);

    return 0;
}