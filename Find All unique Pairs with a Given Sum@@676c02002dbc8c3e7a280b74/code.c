#include<stdio.h>
int main(){

    int N ;

    scanf("%d" , &N) ;

    int arr[N];

    for(int i = 0 ; i<N ; i++){

        scanf("%d" , &arr[i]) ;
    }
    int k ;
    scanf("%d",&k) ; 
    for(int i = 0 ; i<N ; i++){

        int complement = k-arr[i] ;
        for(int j = i+1; j < N; j++){
            if(complement == arr[j]){
                printf("%d %d",arr[i],arr[j]);
            }
        }
    }
    


}