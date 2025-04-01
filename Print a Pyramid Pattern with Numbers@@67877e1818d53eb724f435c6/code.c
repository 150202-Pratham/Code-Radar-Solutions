#include<stdio.h>
int main(){

    int rows ;

    scanf("%d", &rows) ;

    for(int i = 0 ; i<rows ; i++){

        for(int j = 0 ; j<=rows-i ; j++){

            printf(" ") ;

        }

        for(int k = 1 ; k<=2*i+1 ; k++){

            printf("%d" , k) ;

        }

        printf("\n") ;

        
    }
}