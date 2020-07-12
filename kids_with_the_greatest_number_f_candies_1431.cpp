//Problem link
//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> greatestCandies(candies.size(), false);
        int max = candies[0];
        for(int i = 1; i<candies.size();i++){
            
            if(max < candies[i]){
                max = candies[i];
            }
        }
        
        for(int i = 0;i < candies.size(); i++){
            
            if(candies[i] + extraCandies >= max){
                greatestCandies[i] = true;
            }
        }
        
        return greatestCandies;
    }
};