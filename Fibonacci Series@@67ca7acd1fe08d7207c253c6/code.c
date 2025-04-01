void fibonacciSeries(int n){
   
    int a = 0 ;
    int b = 1 ;
    int i = 1 , c ;


    if(n==1){

        printf("0");
    }
    printf("%d %d" , a , b);

    while(i<=n-2){

        c = a+b ;
        printf(" %d",c);
        a = b ;
        b = c ;

        i++;
        
    }

    





}