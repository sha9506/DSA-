// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height)
{
    int left = 0;
    int right  = height.size() -1;
    int leftmax = 0;
    int rightmax = 0;
    int w = 0;
    
   while(left < right)
   {
       if(height[left] < height[right])
       {
           if(height[left] >= leftmax)
           {
               leftmax = height[left];
           }
           else
           {
               w += leftmax - height[left];
           }
           left++;
       }
       else
       {
           if(height[right] >= rightmax)
           {
               rightmax = height[right];
           }
           else
           {
               w += rightmax - height[right];
           }
           right++;
       }
   }
    return w;
}


int main() {
    vector<int> height = {4, 2, 0, 3, 2, 5};
    
   cout<<trap(height);
   
    return 0;
}