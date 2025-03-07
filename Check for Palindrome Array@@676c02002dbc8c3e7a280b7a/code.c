#include<stdio.h>
int main(){

    int N ;
    scanf("%d",&N);

    int arr[N] ;

    for(int i = 0 ; i<N ; i++){
        scanf("%d" , &arr[i]) ;
        
    }

    int i = 0 , j = N-1 ;

    int result = 0 ;

    while(i<j){
        
        if(arr[i]!=arr[j]){
            result = 1 ;
            break ;


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