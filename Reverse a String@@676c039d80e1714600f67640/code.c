#include<stdio.h>
#include<string.h>

int main(){

    char a[] ;

    scanf("%s" , &a) ;

    int i = 0 , j = strlen(a)-1 ;

    while(i<j){

        char temp = a[i] ;
        a[i] = a[j] ;
        a[j] = temp ;

        i++;
        j-- ;

    }

    printf("%s" , a) ;


    return 0 ;

}