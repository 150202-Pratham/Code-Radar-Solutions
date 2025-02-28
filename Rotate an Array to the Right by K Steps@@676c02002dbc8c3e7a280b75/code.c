#include<stdio.h>
int main(){

    int  n ;
    scanf("%d" , &n) ;
    
    int arr[n] ;

    for(int i = 0 ; i<n ; i++){
        scanf("%d" , &arr[i]) ;

    }
    int K ;

    scanf("%d" , &K) ;

    for(int i = 0 ; i<K ; i++ ){
        int temp = arr[n-1];

        for(int j = n-1 ; j>=0 ; j--){
            arr[j] = arr[j-1] ;

        }

        arr[0] = temp ;

    }

    for(int j = 0 ; j<n ; j++){
        printf("%d ", arr[j]) ;  
    }
}