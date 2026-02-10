// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std; 

int minNum(vector<int>& nums) 
{
    int left = 0;
    int right = nums.size() -1;
    
    for(int i=0; i<nums.size(); i++)
    {
        int mid = left + (right - left)/2;
        
        if(nums[left] > nums[right])
        {
            if(nums[mid] > nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        else
        {
            right = mid;
        }
    }
    
    return nums[left];
}

int main() {
    vector<int> nums = {3,4,5,1,2};
    cout<<minNum(nums);

    return 0;
}