#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std; 

void product(vector<int>& nums) 
{
    int n = nums.size();
    vector<int> res(n, 1);
    int left = 1;
    int right = 1;
    for(int i =0; i<nums.size(); i++)
    {
        res[i] = left;
        left *= nums[i];
    }
    for(int i = n-1; i>=0; i--)
    {
        res[i] *= right;
        right *= nums[i];
    }
    
    for(int i =0; i<res.size(); i++)
    {
        cout<<res[i]<<",";
    }
}

int main() {
    vector<int> nums = {1,2,3,4};
    product(nums);

    return 0;
}