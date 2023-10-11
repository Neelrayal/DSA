/**
 * ques: https://leetcode.com/problems/majority-element-ii/description/
 * yt: https://www.youtube.com/watch?v=yDbkQd9t2ig&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=18
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort + 2 pointer
        sort(nums.begin(), nums.end());
        vector<vector<int> > ans; 
        int i=0, left, right;
        while(i < nums.size()){
            int a = -1*nums[i];
            left = i+1, right = nums.size()-1;
            while ( left < right){
                if ( nums[left] + nums[right] == a){
                    ans.push_back( {nums[i], nums[left], nums[right]} );
                    int old_left = left, old_right = right; 
                    while (left<nums.size() && nums[old_left] == nums[left]) left++;
                    while (right>=0 && nums[old_right] == nums[right]) right--;
                }
                else if ( nums[left] + nums[right] < a)
                    left++;
                else 
                    right--;
            }
            int old_i = i;
            while (i<nums.size() && nums[old_i] == nums[i]) ++i;
        }
        return ans; 
    }
};

