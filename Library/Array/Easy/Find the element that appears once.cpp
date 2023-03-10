/**
 * ques: https://practice.geeksforgeeks.org/problems/element-appearing-once2552/0?company[]=Qualcomm&company[]=Qualcomm&difficulty[]=1&page=1&query=company[]Qualcommdifficulty[]1page1company[]Qualcomm&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=element-appearing-once
 * yt: https://www.youtube.com/watch?v=PzszoiY5XMQ
*/

class Solution{
        /*
	    left : 1st appearance even
	    right: 2nd appearance odd
	    */
	    
public:	
	int search(int arr[], int N){
	    int low = 0, high = N-1;  //rightmost element
	    
	    while ( low <= high)    {
	        int mid = (low + high)/2;
	        
	        if ( low == mid) return arr[low];
	        
	        if ( arr[mid] == arr[mid+1]){
	            if ( mid & 1)
	                high = mid - 1; 
	            else
	                low = mid + 2; 
	        }
	        else if ( arr[mid] == arr[mid-1]){
	            if ( (mid-1) & 1){
	                high = mid - 2; 
	            }else{
	                low = mid + 1; 
	            }
	        }
	        else return arr[mid];
	        
	    }
	    
	}
};
