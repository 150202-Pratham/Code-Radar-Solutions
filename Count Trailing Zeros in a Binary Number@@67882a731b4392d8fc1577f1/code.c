// Your code here...

#include<stdio.h>

int main(){
    int a,b=0;
    scanf("%d",&a);

    while(!(a&1)){
        b++;
        a>>=1;
    }
    printf("%d",b);
    return 0;
}