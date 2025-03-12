#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool checkPallindrome(int n ){
    if(n<0){

        return false ;

        
    }
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
        if(arr[i]<0){
            continue ;


        }
        bool result = checkPallindrome(arr[i]);
        
        if(result){
            count++ ;
        }

    }

    printf("%d", count) ;


}