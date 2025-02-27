#include<stdio.h>
int main(){

    int N ;

    scanf("%d" , &N) ;

    int arr[N] ;

   for(int i = 0 ; i<N ; i++){

     scanf("%d" , &arr[i]) ;
   }

   int max_Element  = 0 ; 
   int min_Element = 0  ;

   for(int i = 0 ; i<N  ;i++){

        if(arr[i]>arr[max_Element]){
            max_Element = i ;
        }
        
        else if(arr[i]<arr[min_Element]){
            min_Element = i ;
        }
   }

    
        
        printf("%d %d" , arr[min_Element] , arr[max_Element]) ;
        
}