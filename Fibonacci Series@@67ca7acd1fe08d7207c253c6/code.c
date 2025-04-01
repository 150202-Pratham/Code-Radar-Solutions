void fibonacciSeries(int n){

    int a = 0 ;
    int b = 1 ;
    int i = 1 , c ;
    printf("%d %d" , a , b);

    while(i<=n-2){

        c = a+b ;
        printf(" %d",c);
        a = b ;
        b = c ;

        i++;
        
    }

    return 0 ;

    



}