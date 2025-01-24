#include <stdio.h>
int main() {
    char a; 

    scanf("%c" , &a) ;
    if(a=='a' || a=='e' || a=='i' || a== 'o' || a=='u'|| a=="U" || a=='E' ||a=='I'|| a=='O'|| a=='A' ){
        printf("Vowel");

    }

    else if(a!='a' || a!='e' || a!='i' || a!='o' || a!='u' || a!='A' || a!= 'E' || a!= 'I' || a!= 'O' ||a!='U'){
        printf("Consonant") ;
    }

    else if(a>=0 && a<=9){
        printf("Digit") ;

    }
    else{
        print("Special Character") ;

    }
}