// Concatenate two strings 

#include<stdio.h>

int main(){

    char a[1000] ;
    char b[1000] ;

     
    fgets(a , 1000, stdin);
    fgets(b , 1000 , stdin) ;
    
    // By default you cannot concatenate the two strings togehter you need to iterate through the String 

    // Removing the null chardacter from first String 

    int i = 0 ;

    while(a[i]!='\0'){

        i+=1 ;
    }
    //  iterating over the another string to reach its null point 

    int j = 0 ; 

    while(b[j]!='\0'){

        a[i] = b[j] ;

        i++;
        j++;


    }
    
    a[i] = '\0' ;
    
    printf("%s" , a) ;
    return 0 ;


}