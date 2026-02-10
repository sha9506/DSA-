// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int>& nums)
{
   
    for(int i = 0; i<nums.size() -1; i++)
    {
        bool swapped = false;
        for(int j = 0; j<nums.size() -i-1; j++)
        {
            if(nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
                swapped = true;
            }
        }
        
        if(!swapped)
        {
            break;
        }
    }
    
    for(int i=0; i<nums.size();i++)
    {
        cout<<nums[i]<<",";
    }
}
int main() {
    vector<int> nums = {5,6,1,3,0};
    bubble(nums);


    return 0;
}