#include<stdio.h>
int main(){

    int N , K=0 , myvalue = -1;

    scanf("%d" , &N) ;
    
    int arr[N] ;

    for(int i = 0 ; i<N ; i++){
         

         scanf("%d", &arr[i]) ;

    }
    
    scanf("%d" , &K) ;
    for(int i = 0 ; i<N ;i++){
       
       if(arr[i]==K){
          myvalue  = i  ;
          break ;
       }
       
    }

   printf("%d" , myvalue);
    

}