//Problem link
//https://leetcode.com/problems/xor-operation-in-an-array/

#include<bits/stdc++.h>
using namesapce std;

class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector<int> nums(n, 0);
        int bitwise_xor = 0;
        
        for(int i =0 ;i<n;i++){
            nums[i] = start + 2*i;
            //cout<<nums[i]<<"\t";
        }
        
        for (int i = 0;i<n;i++){
            //cout<<bitwise_xor<<"\t";
            bitwise_xor = bitwise_xor ^ nums[i];
            
        }
        
        return bitwise_xor;
    }
};