#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{    
    int n1 = m - l + 1;
    int n2 = r - m; 
    int arr1[n1+1];
    int arr2[n2+1];

    for(int i=0; i<n1; ++i){
        arr1[i] = arr[i+l];
    }
    for(int i=0; i<n2; ++i){
        arr2[i] = arr[m+i+1];
    }

    int k1 = 0, k2 = 0, indx = l; 

    while ( k1 < n1 && k2 < n2){
        if ( arr1[k1] <= arr2[k2]){
            arr[indx++] = arr1[k1++];
        }
        else{
            arr[indx++] = arr2[k2++];
        }
    }

    while ( k1 < n1){
        arr[indx++] = arr1[k1++];
    }
    while ( k2 < n2){
        arr[indx++] = arr2[k2++];
    }        
}

void mergeSort(int arr[], int l, int r){
    if ( l >= r ) return ;
        int mid = (l + r)/2; 
        mergeSort(arr, l, mid); 
        mergeSort(arr, mid+1, r);
        cout << l << " " << mid << " " << r << "\n";
        merge(arr, l , mid, r);
    
    //cout << "mergesort " << l << " " << r << "\n";
    
}

int main(){        

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE
     
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
    #endif
    
    int t;
    cin >> t;
    while(t--){
        int n;         
        cin >> n; 
        int arr[n];
        for(int i=0; i<n; ++i)
            cin >> arr[i];
            
        mergeSort(arr, 0, n-1);        
        for(int i=0; i<n; ++i){
            cout << arr[i] << " ";        
        }
            
    }

}