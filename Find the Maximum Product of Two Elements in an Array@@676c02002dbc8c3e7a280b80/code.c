#include<stdio.h>
#include<stdlib.h>

int main(){

    int N ;

    scanf("%d" , &N) ;

    int arr[N] ;

    for(int i = 0 ; i<N ; i++){

        scanf("%d" , &arr[i]) ;
    }
    
    long int max_Product = 1 ;

    
    for(int i = 0 ;i<N ;i++){
      
      for(int j = 0 ; j<N ; j++){

         max_Product = max(max_Product , (arr[i]*arr[j])) ;

      }
        
    }

    printf("%d" , max_Product) ;

}