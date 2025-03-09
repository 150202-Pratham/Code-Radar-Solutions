#include<stdio.h>
#include <stdlib.h> 

int main(){

    int N ;

    scanf("%d" , &N) ;

    int arr[N] ;

    for(int i = 0 ; i<N ; i++){

        scanf("%d" , &arr[i]);

        int sum = 0 ;
        
        int n = abs(arr[i]) ;

        
        while(n!=0){
            int rem = n%10 ;
            sum+=rem ;
            n = n/10 ;
        }

        printf("%d " , sum);

    }


}