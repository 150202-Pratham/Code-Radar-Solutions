#include<stdio.h>
#include<string.h>
int main(){

    char a[1000] ;
    scanf("%s" , &a) ;

    char inputA ;
    scanf("%c" , &inputA) ;

    char replacer ;
    scanf("%c", &replacer) ;

    for(int i = 0 ; i<strlen(a[i]) ; i++){

        if(a[i]==inputA){
            a[i] = replacer ;

        }
    }

    printf("%s" , a) ;
    


}