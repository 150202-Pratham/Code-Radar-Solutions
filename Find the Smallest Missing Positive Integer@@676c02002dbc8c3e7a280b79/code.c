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
    
    
    sum = (N*(N+1))/2-sum ;

    
    printf("%d" , sum) ;

}