#include<stdio.h>

int main(){

    int N ;

    scanf("%d" , &N) ;

    int arr[N] ;

    for(int i =0 ; i<N ; i++){

        scanf("%d" , &arr[i]) ;

    }

    for(int i = 0 ; i<N ; i++){

        int max_Elem = -1 ;

        for(int j = i+1 ; j<N ; j++){

            if(arr[j]>max_Elem){

                max_Elem = arr[j] ;

                arr[i] = arr[j] ;

            }


        }
    }

    arr[N-1] = -1 ;

    for(int i = 0 ; i<N ; i++){

        printf("%d " , arr[i]) ;

    }


    return 0 ;


}