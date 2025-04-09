// To check if String ia Pallindrome or Not 

#include<stdio.h>
#include<string.h>
int main(){

    char a[250] ;
    scanf("%s" , &a) ;

    char b[250] ;
    strcpy(b , a) ;


    int i = 0 , j = strlen(a)-1 ;

    while(i<j){

        char temp = a[i] ;
        a[i] = a[j] ;
        a[j] = temp ;

        i++;
        j-- ;


    }


    if(a == b){

        printf("Yes") ;

    }

    else{

        printf("No") ;

        
    }

    
}