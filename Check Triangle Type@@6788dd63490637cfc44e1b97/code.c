#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int a , b , c;

   if(a==b && b==c && c==a){
    printf("Equilateral") ;

   }
   else if(a!=b && b!=c && c!=a ){
    printf("Scalene") ;

   }
   else{
    printf("Isosceles") ;

   }
}