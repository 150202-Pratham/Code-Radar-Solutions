#include<stdio.h>
int main(){

    int N ;
    scanf("%d" , &N) ;

    int arr[N] ;

    for(int i = 0 ; i<N ; i++ ){

        scanf("%d" , &arr[i]) ;
    }

    int frequencyelem [N+1] ;

    for(int i = 0 ; i<N ; i++){

        frequencyelem[i] = 0  ;


    }

    for(int i = 0 ; i< N ; i++){

        frequencyelem[arr[i]] ++ ;
     

    }

    for(int j = 0 ;j<N ; j++){

        if(frequencyelem[j]>=2){

            printf("%d",j) ;
            break ;

        }
    }

   return 0 ;

   


}