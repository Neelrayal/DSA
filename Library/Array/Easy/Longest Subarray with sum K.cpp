/**
 * ques: https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k
 * yt: https://www.youtube.com/watch?v=fFVZt-6sgyo
*/

int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map <int, int > ump; 
        
        int sum = 0, ans = 0; 
        ump[0] = 1; 
        for(int i=0; i<N; ++i){
            sum += A[i]; 
            
            if (sum == K)
                ans = i + 1; 
                
            if (ump.find(sum) == ump.end())
                ump[sum] = i; 
            
            if ( ump.count( sum - K ) > 0){
                ans = max(ans, i - ump[sum - K]);
            }
            
        }
        
        return ans; 
    } 
