// to find the second mallest Number in the array 

#include<stdio.h>
#include<limits.h>


int main(){

    int N ;

    scanf("%d" , &N) ;

    int arr[N] ;

    for(int i = 0 ; i<N ; i++){

        scanf("%d" , &arr[i]) ;


    }

    int max_Elem = INT_MAX ;

    int Second_Max = -1 ;

    for(int i = 0 ; i<N ;i++){

        if(arr[i]<max_Elem){
            max_Elem = arr[i] ;

        }

        if(arr[i]<Second_Max && arr[i]!=max_Elem){

            Second_Max = arr[i] ;


        }
    }


    printf("%d" , Second_Max) ;



}