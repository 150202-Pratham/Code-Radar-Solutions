#include<stdio.h>
int main(){

    int N ;

    scanf("%d" , &N) ;

    int arr[N];
    int hashtable[1000] = {0} ;

    for(int i = 0 ; i<N ; i++){

        scanf("%d" , &arr[i]) ;
    }
    int k ;
    scanf("%d",&k) ; 
    for(int i = 0 ; i<N ; i++){

        int complement = k-arr[i] ;
        
        if(hashtable[k]){

            printf("%d %d\n",arr[i],complement) ;

        }

        hashtable[complement] = 1 ;

    }
    


}