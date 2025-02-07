#include <stdio.h>
void  bubbleSort(int *arr , int n){
    for(int i = 0 ; i<n i++){
        for(int j  = 0 ; j<n-i-1 ; j++){
            int temp = arr[j] ;
            arr[j] = arr[n-1] ;
            arr[n-1] = temp ;


        }
    }
}

int main() {
    int n ;
    scanf("%d" , &n) ;
    int arr[n] ;

    for(int i = 0 ; i<n ; i++){
        scanf("%d" , &arr[i]) ;

    }
    bubbleSort(arr , n) ;
    printArray(arr , n) ;

    return 0 ;

   
}