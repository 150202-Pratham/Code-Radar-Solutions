int binarySearch(int arr[] , int n , int target){

    int start  = 0 ;

    int end = n-1 ;

    int mid = 0 ;

    while(start<=end){

        mid = start+(end-start)/2 ;

        if(arr[mid]==target){

            return mid ;

        }

        else if(arr[mid]<target){

            start = mid+1 ;

        }

        else{

            end = mid-1 ;

        }
    }
}