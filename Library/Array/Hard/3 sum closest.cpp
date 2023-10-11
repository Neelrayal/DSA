/**
 * ques: https://practice.geeksforgeeks.org/problems/3-sum-closest/1
 * yt: https://www.youtube.com/watch?v=onLoX6Nhvmg&list=PLgUwDviBIf0p4ozDR_kJJkONnb1wdx2Ma&index=42
*/

class Solution {
public:

    // Slightly optimized. N^2 * logM 
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int, int> freq; 

        for(int i=0; i<nums.size(); ++i)
            freq[nums[i]]++;
        
        for(int i=0; i<nums.size(); ++i){
            freq[nums[i]]--;
            for(int j = i+1; j<nums.size(); ++j){
                freq[nums[j]]--;
                int rem = nums[i] + nums[j];
                rem *= -1;
                if ( freq[rem] ){
                    // doubt. Which container to use to store triplets in c++? 
                }
                freq[nums[j]]++;
            }
            freq[nums[i]]++;
        }
    }
};