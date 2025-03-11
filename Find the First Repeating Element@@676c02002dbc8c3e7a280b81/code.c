#include<stdio.h>
int main(){
    int result = -1 ;

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
            result = arr[i] ;

            break ;
            
            
        }

       
     

    }

    printf("%d" , result) ;
    
  
}