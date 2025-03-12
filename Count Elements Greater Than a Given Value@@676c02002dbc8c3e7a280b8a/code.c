#include<stdio.h>

int main(){

    int N , k ;
    scanf("%d %d", &N,&k) ;

    int arr[N] ;
    int count = 0 ;


    for(int i =0 ; i<N  ; i++){

        scanf("%d" , &arr[i]) ;
        if(arr[i]>k){
            count++ ;
        }

    }

    printf("%d" , count) ;

    






}