// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int>& nums)
{
    for(int i=1; i<nums.size(); i++)
    {
        int key = nums[i];
        int j = i-1;
        
        while(j>=0 && nums[j] > key)
        {
            nums[j+1] = nums[j];
            j = j-1;
        }
        nums[j+1] = key;
    }
}

int main() {
    vector<int> nums = {5,6,1,3,0};
    int n = nums.size();
    insertion(nums);
       
   for(int i=0; i<nums.size(); i++)
   {
       cout<<nums[i]<<",";
   }

    return 0;
}