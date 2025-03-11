#include<stdio.h>
int main(){

    int N ;

    scanf("%d" , &N) ;

    int arr[N] ;

    for(int i = 0 ; i<N ; i++){

        scanf("%d" , &arr[i]) ;
    }

    int sum = 0 ;

    for(int j = 0 ; j<N-1  ; j++){

        arr[j+1] = arr[j]+arr[j+1] ;

    }

    for(int out = 0 ; out<N ; out++){

        printf("%d ", arr[out]) ;
    }
}