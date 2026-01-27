// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std; 

int stock(vector<int> nums)
{
    int minval = nums[0]; 
    int ans = 0;
    for(int i =1; i<nums.size(); i++)
    {
        minval = min(nums[i], minval);
        ans = max(ans, nums[i]-minval);
    }
    
    return ans;
}

int main() {
    vector<int> nums = {7,1,5,3,6,4};
    cout<<stock(nums);

    return 0;
}