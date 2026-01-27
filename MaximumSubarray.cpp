// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std; 

int maxSub(vector<int>& nums) 
{
    int maxsum = nums[0];
    int curr = nums[0];
    for(int i =1; i<nums.size(); i++)
    {
        curr = max(nums[i], nums[i]+curr);
        maxsum = max(maxsum, curr);
    }
    return maxsum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSub(nums);

    return 0;
}