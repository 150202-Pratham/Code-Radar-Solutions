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
        
        if(complement >=0 && hashtable[complement]){
            
            if(arr[i]>complement)  printf("%d %d\n",arr[i],complement) ;

            else {
                printf("%d %d\n" complement , arr[i]) ;

            }

        }

      hashtable[arr[i]] = 1 ;

    }
    


}