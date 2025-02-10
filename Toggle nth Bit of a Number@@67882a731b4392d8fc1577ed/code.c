#include <stdio.h>
int main() {
    int num , newnum , n ;
    scanf("%d" , &num, &n);

   newnum  = num^(1<<n) ;

   printf("%d" , newnum) ;

    return 0;
}
