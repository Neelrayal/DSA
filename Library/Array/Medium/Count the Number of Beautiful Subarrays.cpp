/**
 * ques: https://leetcode.com/problems/count-the-number-of-beautiful-subarrays/description/
 * yt: https://www.youtube.com/watch?v=l4Ygez5NSt4
 * TAG: Prefix Array
*/

class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {

        long int temp = 0, count = 0; 
        map<int, long > m;
        m[0] = 1; 
        for(int i=0; i<nums.size(); ++i){
            temp ^= nums[i];
            count += m[temp];            
            m[temp]++;
        }
        return count; 

    }
};

