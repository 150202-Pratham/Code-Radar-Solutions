#include<stdio.h>
#include<string.h>

int main(){
    
    int count  = 0 ; 
    char a[1000] ;
    scanf("%s", &a) ;
    
    
    getchar() ;
    char b;
    scanf("%c" , &b) ;

    for(int i = 0 ; i<strlen(a);i++){

        if(a[i]==b){

            count++ ;

        }

    }

    printf("%d" , count) ;

    return 0 ;

}