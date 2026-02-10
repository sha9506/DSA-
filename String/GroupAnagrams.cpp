// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
   unordered_map<string, vector<string>> mp;
   
   for(string s : strs)
   {
       vector<int> freq(26 , 0);
       
       for(char c : s)
       {
           freq[c - 'a']++;
       }
       
       string key;
       for(int f : freq)
       {
           key += f + '#'; 
       }
       
       mp[key].push_back(s);
   }
   
   vector<vector<string>> result;
   for(auto& entry : mp)
   {
       result.push_back(entry.second);
   }
   
   return result;
}

int main() {
   vector<string> strs = {"eat","tea","ate","tan","nat","bat"};
   vector<vector<string>> groups = groupAnagrams(strs);
   
   for(auto& group : groups)
   {
       cout<<"[ ";
       for(auto& words : group)
       {
           cout<<words<<" ";
       }
       cout<<"]"<<endl;
   }

    return 0;
}