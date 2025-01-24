#include <stdio.h>

int main() {
    int a ;

    int *arr[7] = {"Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday"} ;
    scanf("%d" , &a) ;
    
    if(a>=1 && a<=7 ){

        printf("%s",arr[a-1]);
    
    }

    return 0;
}