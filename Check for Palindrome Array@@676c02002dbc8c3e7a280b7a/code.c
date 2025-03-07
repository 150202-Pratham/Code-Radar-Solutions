#include<stdio.h>
int main(){

    int N ;
    scanf("%d",&N);

    int arr[N] ;

    for(int i = 0 ; i<N ; i++){
        scanf("%d" , &arr[i]) ;
        
    }

    int i = 0 , j = N-1 ;

    int result = 1 ;

    while(i<j){
        
        if(arr[i]==arr[j]){
            result = 0 ;

        }

        i++ ;
        j-- ;

    }

    if(result==0){
        printf("YES") ;
    }

    else{
        printf("NO");
    }
}