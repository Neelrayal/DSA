/**
 * ques: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/0?company[]=Visa&company[]=Visa&page=2&query=company[]Visapage2company[]Visa
 * yt: https://www.youtube.com/watch?v=w_KEocd__20&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=6
*/



class Solution{
    public:

    long long maxSubarraySum(int arr[], int n){
        
        long int sum = 0, maxi = INT_MIN;
        for(int i=0; i<n; ++i){
            sum += arr[i];
            maxi = max(maxi, sum);
            
            if ( sum < 0) sum = 0;
                
        }
        return maxi; 
        
    }
};

