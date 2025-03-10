#include<stdio.h>
#include<stdlib.h>

long int max(long int a , long int b){

    return (a>b)?a:b ;

}
int main(){

    int N ;

    scanf("%d" , &N) ;

    int arr[N] ;

    for(int i = 0 ; i<N ; i++){

        scanf("%d" , &arr[i]) ;
    }
    
     long int  max_Product = 1 ;

    
    for(int i = 0 ;i<N ;i++){
      
      for(int j = 0 ; j<N ; j++){

         max_Product = max(max_Product , (arr[i]*arr[j])) ;

      }
        
    }

    printf("%ld" , max_Product) ;

}