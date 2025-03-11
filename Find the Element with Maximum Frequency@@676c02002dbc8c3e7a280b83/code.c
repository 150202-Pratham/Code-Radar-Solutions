#include<stdio.h>

int main(){

    int N ;
    scanf("%d", &N);

    int arr[N] ;

    int hashTable[100000] = {0} ;

    for(int i = 0; i<N ; i++){

        scanf("%d" , &arr[i]) ;
    }
    
   int Max_frequency = 1 ;
    int Most_frequent = -1 ;


    for(int i = 0 ;i<N ; i++){

        hashTable[arr[i]]++ ;

        if(hashTable[arr[i]]>Max_frequency){
            
            Max_frequency = hashTable[arr[i]] ;
            Most_frequent = arr[i] ;


        }
    }



    printf("%d", Most_frequent);


    




}