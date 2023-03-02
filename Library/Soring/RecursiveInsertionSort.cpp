void insertionSort(int arr[], int n)
    {
        if ( n <=1 ) return; 
        
        insertionSort(arr, n-1);
        
        int last = arr[n-1]; // working same as current i.e arr[i]
        int j = n-2; // working same as i - 1
        
        while ( j >= 0 && arr[j] > last){
            arr[j+1] = arr[j]; 
            j--; 
        }
        arr[j+1] = last; 
        
    }