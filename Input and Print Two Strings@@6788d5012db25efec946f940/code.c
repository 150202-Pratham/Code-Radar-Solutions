#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char arr[100] ;
    char brr[100] ;

    scanf("%s\n%s" ,&arr , &brr );
    printf("You entered: %s and %s" , arr , brr);
    

    return 0;
}