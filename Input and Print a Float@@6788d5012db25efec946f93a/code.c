#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());

    float num ;
    scanf("%f" , &num) ;
    printf("%f" , num)   ;
    
    return 0;
}