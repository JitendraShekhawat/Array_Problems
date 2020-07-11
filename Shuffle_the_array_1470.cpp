//Problem link
//https://leetcode.com/problems/shuffle-the-array/submissions/

#include<bits/stdc++.h>
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int i = 0, j = n+1;
        vector<int> arr(2*n, 0);
        
        for (int i = 0, j = n; i<n; i++, j++){
            
            arr[2*i] = nums[i];
            arr[2*i + 1] = nums[j];
        }
        
        return arr;
    }
};