// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std; 

int maxProd(vector<int>& nums) 
{
    int maxsum = nums[0];
    int curr = nums[0];
    int neg = nums[0];
    
    for(int i =1; i<nums.size(); i++)
    {
        if(nums[i] < 0)
        {
            swap(curr, neg);
        }
        
        curr = max(nums[i], nums[i] * curr);
        neg = min(nums[i], nums[i]*neg);
        maxsum = max(curr, maxsum);
    }
    return maxsum;
}

int main() {
    vector<int> nums = {-2,3,-4};
    cout<<maxProd(nums);

    return 0;
}