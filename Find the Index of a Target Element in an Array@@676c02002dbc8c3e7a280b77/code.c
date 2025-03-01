#include<stdio.h>


int ifExist(int *arr[] , int k){
    
   for(int i = 0 ; i<N ;i++){
       
       if(arr[i]==k){
         return  i ;
       }


    }


}
int main(){

    int N , K;

    scanf("%d" , &N) ;
    
    int arr[N] ;

    for(int i = 0 ; i<N ; i++){
         

         scanf("%d", &arr[i]) ;

    }
    
    scanf("%d" , &K) ;
   printf("%d" , ifExist(arr , k)) ;


    


}