int isPrime(int n){
     int count  = 0 ; 

    if(n<=1){
        return 0 ;

    }

    else{

        for(int i = 2 ; i<n ; i++){
            if(n%i==0){
                count++ ;


            }

            if(count>2){
                return 0 ;

            }

            


        }


    }

    return 1 ;


}