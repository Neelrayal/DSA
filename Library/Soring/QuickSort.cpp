void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low], pivot_indx = low;
    low++;
    while (low <= high)
    {
        while (arr[low] <= pivot)
            low++;
        while (arr[high] > pivot)
            high--;
        if (low < high)
            swap(arr[low], arr[high]);
    }
    swap(arr[high], arr[pivot_indx]);
    return high;
}