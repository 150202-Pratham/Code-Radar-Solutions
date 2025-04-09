#include<stdio.h>
#include<string.h>

int main(){

    char a[1000] ;
    int count = 0 ;
    int sum = 0 ;


    fgets(a , 1000 , stdin) ;

    for(int i = 0 ; i<strlen(a) ; i++){

        if(a[i]==' '){

            sum+=1 ;
            count = 0 ;

            continue ;


        }

        count++ ;

    }


    printf("%d" , sum) ;

    
}