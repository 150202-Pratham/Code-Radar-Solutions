#include<stdio.h>
int main(){

    int N ;
    scanf("%d",&N);
    int sum  = 0 ;
    
    int arr[N] ;
     
    for(int i = 0 ; i<N ; i++){
        scanf("%d" , &arr[i]) ;
        sum+=arr[i] ;
    }
    
    
   

    
    printf("%d" , sum/N) ;

}