#include <stdio.h>
int main() {
    int a , b  ;

    //  to check if two numbers have opposite sign or not 
    scanf("%d %d" , &a ,&b) ;
    if(a==0 && b==0 ){
        printf("False") ;
        
    }
    (a>0 && b<0)? printf("True"):printf("False") ;


    return 0;
}