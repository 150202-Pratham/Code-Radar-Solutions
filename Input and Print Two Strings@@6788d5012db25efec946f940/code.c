#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char arr[100] ;
    char brr[100] ;

    scanf("%s\n%s" ,&arr , &brr );
    printf("%s\n" , arr);
    printf("%s",brr) ;

    return 0;
}