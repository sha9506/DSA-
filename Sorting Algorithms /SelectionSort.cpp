// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selection(vector<int>& nums)
{
    for(int i=0; i<nums.size()-1; i++)
    {
        int minNum = i;
        for(int j =i+1; j<nums.size(); j++)
        {
            if(nums[j]< nums[minNum])
            {
                minNum = j;
            }
        }
        swap(nums[i], nums[minNum]);
    }
}

int main() {
    vector<int> nums = {5,6,1,3,0};
    int n = nums.size();
    selection(nums);
       
   for(int i=0; i<nums.size(); i++)
   {
       cout<<nums[i]<<",";
   }

    return 0;
}