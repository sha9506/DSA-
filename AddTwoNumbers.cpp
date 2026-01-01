// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwo( ListNode* L1, ListNode* L2)
{
  ListNode* dummy = new ListNode(0);
  ListNode* curr = dummy;
  int carry  = 0;
  
  while(L1 != NULL || L2 != NULL || carry != 0)
  {
      int a = (L1 != NULL) ? L1->val : 0;
      int b = (L2 != NULL) ? L2->val : 0;
      
      int sum = a + b + carry;
      carry = sum/10;
      
      curr->next = new ListNode(sum % 10);
      curr = curr->next;
      
      if(L1 != NULL) L1 = L1->next;
      if(L2 != NULL) L2 = L2->next;
  }
  
  return dummy->next;
}

ListNode* create(vector<int> nums)
{
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    
    for(int n : nums)
    {
        curr->next = new ListNode(n);
        curr = curr->next;
    }
    
    return dummy->next;
}

void print(ListNode* head)
{
    while(head != NULL)
    {
        cout<<head->val;
        if(head->next != NULL) cout<<"->";
        head = head->next;
    }
    cout<<endl;
}



int main() {
    vector<int> num1 = {2, 4, 3};
    vector<int> num2 = {5, 6, 4};
    
    ListNode* L1 = create(num1);
    ListNode* L2 = create(num2);
    
    cout << "List 1: ";
    print(L1);

    cout << "List 2: ";
    print(L2);

    ListNode* result = addTwo(L1, L2);

    cout << "Result: ";
    print(result);

    return 0;
}