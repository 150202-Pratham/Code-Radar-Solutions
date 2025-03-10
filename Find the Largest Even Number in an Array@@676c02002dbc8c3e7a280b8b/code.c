#include<stdio.h>
#include<limits.h>

int main(){

    int N ;
    scanf("%d" , &N) ;
     
    int arr[N] ;

    for(int i = 0;i<N ; i++){

       scanf("%d" , &arr[i]) ;

       

    }

    int max_Even = INT_MIN ; 


    for(int j = 0 ;j<N ; j++){

        if(arr[i]%2==0 && arr[i]>max_Even){

            max_Even = arr[i] ;


        }
    }


    printf("%d",max_Even) ;

    
}