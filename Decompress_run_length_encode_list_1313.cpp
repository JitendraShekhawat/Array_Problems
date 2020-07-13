//problme link


#include<bits/stdc++.h>
using namespace std;


//method 3
//faster ten 73%

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        
        for(int i = 0;i<nums.size(); i =i+2){
            
            res.insert(res.end(), nums[i], nums[i+1]);
        }
        return res;
    }
};


//Method 2
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

//method 3
//fater then 10 %
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        
        for(int i = 0;i<nums.size();i++){
            if(i%2 == 0){
                while(nums[i]--){
                    ans.push_back(nums[i+1]);
                }
            }
        }
        return ans;
    }
};