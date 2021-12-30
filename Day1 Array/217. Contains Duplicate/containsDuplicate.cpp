#include <bits/stdc++.h>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> freq;
        
        for(auto itr=nums.begin(); itr!=nums.end(); itr++)
        {
            if(freq.count(*itr)>0)
            {
                return true;
            }
            else
            {
                freq[*itr] = true;
            }
        }
        
        
        
        return false;
    }
};
