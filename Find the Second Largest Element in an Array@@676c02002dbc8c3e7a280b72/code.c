#include<stdio.h>
#include<limits.h>
#include<stdbool.h> 
int main(){

    int N ;
    scanf("%d" , &N) ;
    bool sameElement = false ;

    int arr[N] ;
    
    for(int i = 0 ; i<N;i++){

        scanf("%d" , &arr[i]) ;
    }
    
    int largest = INT_MIN , secondmax = INT_MIN;

    for(int i = 0 ; i<N ; i++){

        if(arr[i]>largest){

            largest = arr[i];

        }
        


    }

    for(int i = 0 ; i<N ; i++){

        if(arr[i]>secondmax && arr[i]!=largest){

            secondmax = arr[i] ;

        }
    }
    
    for(int i = 0 ; i<N-1 ; i++){

        if(arr[i]==arr[i+1]){
            sameElement = true ;

        }
    }
    

    if(sameElement == true){

        printf("-1") ;


    }

    else{
        printf("%d" , secondmax);
    }



}