/**
 * ques: https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
 * yt: https://www.youtube.com/watch?v=AoX3BPWNnoE&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=16
*/

class Solution {
public:
    // follow-up Moore's Voting Algorithm
    int majorityElement(vector<int>& arr) {
        
        int ele, count=0; 
        for(int i=0; i<arr.size(); ++i){
            if ( count == 0){
                ele = arr[i];
            }
            if ( ele == arr[i]){
                count += 1;
            }
            else 
                count -=1; 
        }

        return ele; 
    }
};

/**
 * Another variation. When majority element is not present
 * ques: https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
*/


