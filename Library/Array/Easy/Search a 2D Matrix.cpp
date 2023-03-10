/**
 * ques: https://leetcode.com/problems/search-a-2d-matrix/description/
 * yt: https://www.youtube.com/watch?v=ZYpYur0znng
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); // rows
        int n = matrix[0].size(); //cols
        int low = 0, high = m*n-1, mid;        
        while ( low <= high){            
            mid = (low + high)>>1;
            int row = mid/n;
            int col = mid%n;                        
            if ( matrix[row][col] == target) return true;
            else if ( matrix[row][col] < target) low = mid + 1;
            else high = mid - 1;                                         
            
        }
        return false; 
    }
};