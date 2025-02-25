#include<stdio.h>

int main(){

    int n ;

    scanf("%d" , &n) ;

    int arr[n] ;

    for(int i = 0 ; i<n ;i++){
        scanf("%d" , &arr[i]) ;
        

    }
    int counter = 1 ;

    for(int i = 0 ; i<n-1 ; i++){

        if(arr[i]>arr[i+1]){
            counter = 0 ;
            break ;

        }

    }

    if(counter==1){
        printf("Sorted") ;
        
    }

    else{
        printf("Non-Sorted");


    }
    
    return 0 ;


    

}