#include<stdio.h>
int main(){

    int number ;
    scanf("%d" ,&number) ;


    for(int  i = 0 ; i<number ; i++){
        for(int j = 0 ; j<number-i-1 ; j++){
            printf(" ") ;

        }

        for(int k = 0 ; k<(2*i+1) ; k++){
            printf("*");
        }
        printf("\n");

    }
}