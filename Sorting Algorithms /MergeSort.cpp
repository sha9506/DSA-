// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 void mergeSort(vector<int>& nums, int left, int mid, int right)
    {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<int> l(n1), r(n2);
        for(int i=0; i<n1; i++)
        {
            l[i] = nums[left+i];
        }
        for(int i=0; i<n2; i++)
        {
            r[i] = nums[mid+1+i];
        }
        int i=0, j=0, k=left;

        while(i<n1 && j<n2)
        {
            if(l[i] < r[j])
            {
                nums[k] = l[i];
                i++;
            }
            else
            {
                nums[k] = r[j];
                j++;
            }
            k++;
        }

        while(i<n1)
        {
            nums[k] = l[i];
            k++; 
            i++;
        }
        while(j<n2)
        {
            nums[k] = r[j];
            k++;
            j++;
        }
    }

    void merge(vector<int>& nums, int left, int right)
    {
        if(left >=right) return;

        int mid = left + (right - left)/2;
        merge(nums, left , mid);
        merge(nums, mid+1, right);
        mergeSort(nums, left , mid, right);
    }
int main() {
    vector<int> nums = {5,6,1,3,0};
    int n = nums.size();
    merge(nums, 0, n-1);
       
   for(int i=0; i<nums.size(); i++)
   {
       cout<<nums[i]<<",";
   }

    return 0;
}