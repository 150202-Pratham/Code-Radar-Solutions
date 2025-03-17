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
        int count = 0 ;
        
        for(int j = 0 ; j<n ; j++){
            if(arr[i]==arr[j]){
                count++ ;
            }
        }
        if (count > max_count) {
            max_count = count;
        }
        
    }

    printf("%d",max_count) ;

}