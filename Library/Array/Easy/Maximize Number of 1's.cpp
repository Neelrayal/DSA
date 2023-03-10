// ques: https://practice.geeksforgeeks.org/problems/maximize-number-of-1s0905/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximize-number-of-1s
// Two pointer approach. Helpful video: https://www.youtube.com/watch?v=hzueK-imcXg
    
    int findZeroes(int arr[], int n, int m) {
        int left = 0, right = 0, count = 0, ans = 0; 
        while ( right < n){
            if ( arr[right] == 0) count++; 
            
            while ( count > m){
                if ( arr[left] == 0) --count; 
                ++left; 
            }
            
            ans = max(ans, right - left + 1); 
            ++right; 
        }
        return ans; 
    }  