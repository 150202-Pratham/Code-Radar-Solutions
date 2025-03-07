#include<stdio.h>
int main(){

    int N , K , myvalue;

    scanf("%d" , &N) ;
    
    int arr[N] ;

    for(int i = 0 ; i<N ; i++){
         

         scanf("%d", &arr[i]) ;

    }
    
    scanf("%d" , &K) ;
    for(int i = 0 ; i<N ;i++){
       
       if(arr[i]==k){
          myvalue  = i  ;
          break ;
       }
    }

   printf("%d" , myvalue);
    

}