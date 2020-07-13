// problem link
//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

#include<bits/stdc++.h>
using namespace std;

//method 1
//time complexity O(n^2)

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> smaller_arr(nums.size(), 0);
        
        for (int i = 0;i<nums.size(); i++){
            for (int j = 0;j<nums.size();j++){
                if(nums[i] > nums[j]){
                    smaller_arr[i]++;
                }
            }
        }
        return smaller_arr;
    }
};


//Method 2 
//time complexity O(n)
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> a(101, 0);
        vector<int> b(101, 0);
        vector<int> ans(nums.size() ,0);
        //making the frequency array
        for(int i = 0;i<nums.size();i++){
            a[nums[i]]++;
        }
        //fillig the prefix sum
        for (int i =0;i<101;i++){
            if(i == 0 ){
                b[i] = 0;
            }
            else{
                b[i] = b[i-1] + a[i-1];
            }
        }
        for (int i = 0 ;i<nums.size();i++){
            
            ans[i] = b[nums[i]];
        }
        return ans;
    }
};
