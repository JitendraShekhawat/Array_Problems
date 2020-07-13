//problme link


#include<bits/stdc++.h>
using namespace std;

//Method 1
//faster then 73%
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int freq = 0, val = 0;
       // if(nums.size() % 2 == 0){return 0}
        
        for (int i = 0;i<nums.size() / 2; i++){
            
            freq = nums[2*i];
            val = nums[2*i +1];
            
            for(int i = 0;i<freq;i++){
                ans.push_back(val);
            }
        }
        return ans;
    }
};