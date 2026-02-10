// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std; 

bool duplicate(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    for(int i =0; i<nums.size();i++)
    {
        if(nums[i] == nums[i-1]) return true;
    }
    
    return false;
}

int main() {
    vector<int> nums = {7,1,1,3,6,4};
    cout<<duplicate(nums);

    return 0;
}