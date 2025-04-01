int searchInRotatedArray(int arr[] , int n  , int target){
     
    int result = -1 ;

    for(int i = 0 ; i<n ; i++){

        if(arr[i]==target){

            result  = arr[i] ;
            break ;

        }
    }


    return result ;

    
}