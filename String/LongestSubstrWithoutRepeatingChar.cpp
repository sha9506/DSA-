// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int length(string s)
{
    vector<int> seen(256, -1);
    int maxlen = 0;
    int start = 0;
    
    for(int end =0; end<s.length(); end++)
    {
        char a = s[end];
        
        if(seen[a] >= start)
        {
            start = seen[a] + 1;
        }
        
        seen[a] = end;
        maxlen = max(maxlen, end - start + 1);
    }
    
    return maxlen;
}

int main() {
    string s = "abcabcbb" ;
    cout<< "length : "<<length(s)<<endl;

    return 0;
}