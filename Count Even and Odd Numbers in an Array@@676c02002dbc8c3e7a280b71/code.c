#include<stdio.h>

int main(){

    int even_numbers = 0 , odd_numbers = 0  ;

    int N ;

    scanf("%d" , &N) ;

    int arr[N] ;
    
    for(int i = 0 ; i<N ; i++){
        scanf("%d", &arr[i]) ;
        
    }
    for(int i = 0 ; i<N ; i++){

        if(arr[i]%2==0){
            even_numbers +=1 ;

        }

        odd_numbers+=1 ;

    }

    printf("%d %d" , even_numbers , odd_numbers) ;

    return 0;
}