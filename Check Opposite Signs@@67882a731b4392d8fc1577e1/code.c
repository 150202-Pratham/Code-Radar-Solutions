#include <stdio.h>
int main() {
    int a , b  ;

    //  to check if two numbers have opposite sign or not 
    scanf("%d %d" , &a ,&b) ;
    
    (a>0 && b<0)? printf("True"):printf("False") ;


    return 0;
}