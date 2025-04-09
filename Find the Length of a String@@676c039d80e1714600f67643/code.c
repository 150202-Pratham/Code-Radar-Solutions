#include<stdio.h>

int main(){

    char a[1000] ;

    fgets(a , 1000, stdin) ;

    
    int count = 0 ;


    for(int i = 0 ; a[i]!='\0' ; i++){

        count++ ;

    }

    printf("%d" , count) ;

}