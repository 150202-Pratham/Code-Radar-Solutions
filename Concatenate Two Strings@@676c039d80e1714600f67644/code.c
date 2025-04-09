// Concatenate two strings 

#include<stdio.h>

int main(){

    char a[1000] ;
    char b[1000] ;


    fgets(a , 1000 , stdin) ;
    fgets(b , 1000 , stdin) ;

    printf("%s%s" , a , b)
}