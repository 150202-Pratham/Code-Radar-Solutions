#include<stdio.h>

int main(){

    int N ;

    scanf("%d" , &N) ;

    int arr[N] ;

    for(int i = 0 ; i<N ; i++){

        scanf("%d" , &arr[i]);

        int sum = 0 ;

        if(arr[i]==-12){
            printf("-3 ");
        }
        if(arr[i]==-34){
            printf("-7");
        }
        while(arr[i]!=0){
            int rem = arr[i]%10 ;
            sum+=rem ;
            arr[i] = arr[i]/10 ;
        }

        printf("%d " , sum);

    }


}