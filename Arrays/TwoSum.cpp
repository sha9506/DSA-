// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> nums, int target)
{
    unordered_map<int, int> mp;
    
    for(int i=0; i<nums.size(); i++)
    {
        int a = target - nums[i];
        
        if(mp.find(a) != mp.end())
        {
            return {mp[a], i};
        }
        
        mp[nums[i]] = i;
    }
    
    return {};
}


int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    if(!result.empty())
    {
        cout<<result[0]<<" and "<<result[1];
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}