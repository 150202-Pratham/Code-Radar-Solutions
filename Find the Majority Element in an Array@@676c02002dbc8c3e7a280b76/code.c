#include<stdio.h>
#include<limits.h>

int main(){

    int n ;
    scanf("%d" , &n) ;
    int max_count = INT_MIN ;
    int count = 0 ;

    int arr[n] ;
    for(int i = 0 ;i<n ; i++){
        scanf("%d",&arr[i]) ;

    }
    for(int i = 0 ; i<n ; i++){

        for(int j = 0 ; j<n ; j++){
            if(arr[i]==arr[j]){
                count++ ;
               



            }
        }
        max_count = INT_MAX(max_count , count) ;
        count = 0 ;
        
    }

    printf("%d",max_count) 
}