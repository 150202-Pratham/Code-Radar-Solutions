#include <stdio.h>

int main() {
    int cp , sp ;

    scanf("%d %d" , &cp , &sp) ;

    if(sp>cp){
        printf("Profit") ;

    }
    else if(cp==sp){
        printf("No Profit No Loss") ;
    }
    else{
        printf("Loss") ;
        
    }
    return 0;
}