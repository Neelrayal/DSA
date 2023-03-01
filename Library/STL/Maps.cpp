/*
Problem to practice maps
Link: https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    
  public:
    /***
     * Using this we can compare the elements of pairs of vectors
     * Here I'm sorting them by frequency and if freq is same sorting by first element
    */
    static bool cmp( pair<int, int>& a, pair<int, int>& b){
        
        if ( a.second == b.second){
            return a.first > b.first; 
        }
        return a.second > b.second; 
        
    }
        
  
    vector<int> topK(vector<int>& nums, int k) {
        
        map <int, int > mpp; 
        for(int i=0; i<nums.size(); ++i){
            // unitialized vaules are zero by default in maps
            mpp[ nums[i] ]++; 
        }

        vector< pair<int,int> > arr; 
        /***
         * For iterating through maps we can use auto keyword: 
         * 
        */

        for ( auto x: mpp){
            //cout << x.first << "->" << x.second << "\n";
            arr.push_back ( x ); 
        }
        
        /*
        Similarily, vector<pair<int,int>> can be iterated using auto keyword
        for ( auto x: arr){
            cout << x.first << " " << x.second << "\n";
        }
        
        */
        sort ( arr.begin (), arr.end(), cmp); 
        
        vector <int> ans; 
        for(int i=0; i<k; ++i)
            ans.push_back(arr[i].first); 
            
        return ans; 
        
        
    }
};

