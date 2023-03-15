/**
 * ques: https://leetcode.com/problems/sort-colors/
 * yt: https://www.youtube.com/watch?v=oaVa-9wmpns&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=3
*/

class Solution {
public:
    /*
    Single pass: Dutch National Flag Algorithm
    */    

    void sortColors(vector<int>& arr) {
        int low = 0, mid = 0, high = arr.size()-1; 
        while ( mid <= high){
            if ( arr[mid] == 0){
                swap ( arr[low++], arr[mid++]);
            }
            else if ( arr[mid] == 1) mid++;
            else {
                swap ( arr[mid], arr[high--]);
            }
        }
    }
};