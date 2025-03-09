#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int N){

    int count = 0 ;

    if(N<=1){
        return false ;

    }
    
    else{

        for(int i = 1 ; i<N ; i++ ){

            if(N%i==0){
                count++ ;


            }

            if(count>=2){

                return false ;

            }


        }

    }

    return true ;


}
int main(){

    int N ;
    scanf("%d" , &N) ;

    int arr[N] ;

    for(int i = 0 ;i<N ; i++){

        scanf("%d" , &arr[i]) ;


    }

    int final_cnt = 0 ;

    for(int i = 0 ;i<N ; i++){

        bool result = checkPrime(arr[i]) ;

        if(result==true){
            final_cnt++ ;


        }
    }


    printf("%d" , final_cnt) ;
    
}