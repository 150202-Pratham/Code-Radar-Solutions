#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool checkPallindrome(int n ){

    int original  = n ;
    int rev = 0 ;
    while(n!=0){

        int rem = n%10 ;
        rev = rev*10+rem ;
        n = n/10 ;
    }

    if(original==rev)return true ;
    
    
    
    return false ;



}
int main(){

    int N ;
    scanf("%d" , &N) ;

    int arr[N] ;
    int count =0 ;

    for(int i = 0 ; i<N ;i++){

        scanf("%d" , &arr[i]) ;
        int value = abs(arr[i]) ;
        printf("%d" , value) ;

        
        bool result = checkPallindrome(value) ;
        
        if(result){
            count++ ;
        }

    }

    printf("%d", count) ;


}