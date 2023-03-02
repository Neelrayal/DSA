int select(int arr[], int i, int n)
    {
        int minn = INT_MAX, pos = i; 
        for (int j=i; j<n; ++j){
            if ( arr[j] < minn){
                minn = arr[j]; 
                pos = j; 
            }
        }
        return pos; 
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int i=0; i<n-1; ++i){
           int pos = select(arr, i, n); 
           swap(arr[i], arr[pos]);
       }
    }

