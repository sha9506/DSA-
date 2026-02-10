// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& nums, int low, int high)
{
    int pivot = nums[high];
    int k = low -1 ;
    for(int i= low; i<=high-1; i++)
    {
        if(nums[i] < pivot)
        {
            k++;
            swap(nums[i], nums[k]);
        }
    }
    swap(nums[high], nums[k+1]);
    return k+1;
}
void quick(vector<int>& nums, int low, int high)
{
   if(low < high)
   {
       int p = partition(nums, low, high);
       quick(nums, low, p-1);
       quick(nums, p+1, high);
   }
}
int main() {
    vector<int> nums = {5,6,1,3,0};
    int n = nums.size();
    quick(nums, 0, n-1);
       
   for(int i=0; i<nums.size(); i++)
   {
       cout<<nums[i]<<",";
   }

    return 0;
}