#include<stdio.h>
int main(){

    int N ;
    scanf("%d" , &N) ;

    int arr[N] ;

    for(int i = 0 ; i<N ; i++ ){

        scanf("%d" , &arr[i]) ;
    }

    int frequencyelem[100000] = {0} ;

    for(int i = 0 ; i< N ; i++){

        frequencyelem[arr[i]] ++ ;
        
        if(frequencyelem[arr[i]]==2){
            printf("%d" , arr[i]) ;
            break ;
            
            
        }
     

    }
   printf("-1");
}