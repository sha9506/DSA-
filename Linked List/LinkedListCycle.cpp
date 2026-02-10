// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
   public: 
    int data;
    Node *next;
    
    Node(int newdata)
    {
        data = newdata;
        next = nullptr;
    }
};

bool loop(Node *head)
{
   Node *fast = head;
   Node *slow = head;
   while(fast && fast->next)
   {
       fast = fast->next->next;
       slow = slow->next;
       
       if(slow == fast)
       {
           return true;
       }
   }
   
   return false;
}


int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(6);
    
   if(loop(head))
   {
       cout<<"true";
   }
   else
   {
       cout<<"false";
   }

    return 0;
}