#include <stdio.h>

int main() {
    int a , b ;
    scanf("%d %d" , &a , &b) ;
    int result = (a>>(b)&1) ;
    printf("%d" , result);
    return 0;
}