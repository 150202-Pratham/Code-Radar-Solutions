#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a , b , c ;
    
    scanf("%d %d %d",&a,&b,&c) ;

    (a+b>=c && b+c>=a && c+a>=b)?printf("Valid"):printf("Invalid");

    return 0;
}