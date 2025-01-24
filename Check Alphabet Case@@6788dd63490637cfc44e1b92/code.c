#include <stdio.h>

int main() {
   char a ;

   scanf("%c",&a) ;

   if(a>=65 && a<90){
    printf("Uppercase") ;
   }

   else(a>=90 && a<=122){
    printf("Lowercase") ;
    
   }

   else{
    printf("Not a alphabet") ;

   }
    return 0;
}