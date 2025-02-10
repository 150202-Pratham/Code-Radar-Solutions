#include <stdio.h>
#include<limits.h>

int main() {
   int num , count ;

   scanf("%d" , &num) ;

   count = 0 ;

   while(!(num & (~INT_MAX))){
    count++ ;
    num<<=1 ;

   }

   pritnf("%d" , count) ;

    return 0;
}