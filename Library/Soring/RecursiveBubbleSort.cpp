void bubbleSort(int arr[], int n)
    {
        bool flag = true; 
        for(int i=0; i<n-1; ++i){
            if ( arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
                flag = false; 
            }
        }
        if (!flag) bubbleSort(arr, n-1); 
    }