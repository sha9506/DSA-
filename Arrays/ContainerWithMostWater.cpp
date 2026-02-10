// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int container(vector<int> nums)
{
    int left = 0;
    int right = nums.size() -1;
    int maxwater = 0;
    
    for(int i =0; i<nums.size(); i++)
    {
        int h = min(nums[left], nums[right]);
        int w = right - left;
        
        maxwater = max(maxwater , h*w);
        if(nums[left] > nums[right])
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    
    return maxwater;
}

int main() {
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    cout<<container(nums);
    return 0;
}