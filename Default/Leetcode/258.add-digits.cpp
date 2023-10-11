/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        while(num >= 10){
        int temp = num;         
        int sum = 0;
        while(temp){
            int rem = temp % 10;
            temp = temp/10;
            sum += rem;
        }
        num = sum;
    }
    return num;

    }
};
// @lc code=end

