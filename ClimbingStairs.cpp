// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int climbingstairs(int nums)
{
    if(nums < 3) return nums;
    
    int f = 1;
    int s = 2;
    int a = 0;
    for(int i=3; i<=nums; i++)
    {
        a = f + s;
        f = s;
        s= a;
    }
    
    return a;
}

int main() {
    int nums = 3;
    cout<<climbingstairs(nums);
    return 0;
}