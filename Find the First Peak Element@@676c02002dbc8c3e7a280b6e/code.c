#include<stdio.h>

int main(){
    
    int N ;


    scanf("%d" , &N) ;

    int arr[N] ;

   for(int i = 0 ; i<N ; i++){

       scanf("%d" , &arr[i]) ;

   }

   int start = 0 , end = N-1 , mid ;

   while(start<=end){

      mid = start+(end-start)/2 ;

      if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
          
           printf("%d" , arr[mid]);
           break ;

      }

      else if(arr[mid]>arr[mid-1]){
        start = mid+1 ;

        
      }

      else{
        end = mid-1 ;

      }
   }

}

    