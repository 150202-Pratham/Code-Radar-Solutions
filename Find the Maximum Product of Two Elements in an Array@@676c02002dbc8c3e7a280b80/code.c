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
    
     long int  max_Product = 0 ;

    
    for(int i = 0 ;i<N-1 ;i++){
    
         max_Product = max(max_Product , (arr[i]*arr[i+1])) ;
  
    }

    printf("%ld" , max_Product) ;

}