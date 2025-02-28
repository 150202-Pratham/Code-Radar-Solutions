#include<stdio.h>
int main(){

    int N ;
    scanf("%d" , &N) ;
    int arr[N] ;

    for(int i = 0 ; i<N;i++){

        scanf("%d" , &arr[i]) ;
    }
    
    int largest = arr[0] , secondmax = arr[0];

    for(int i = 0 ; i<N ; i++){

        if(arr[i]>largest){

            largest = arr[i];

        }


    }

    for(int i = 0 ; i<N ; i++){

        if(arr[i]>secondmax && arr[i]!=largest){

            secondmax = arr[i] ;

        }
    }

    printf("%d" , secondmax)



}