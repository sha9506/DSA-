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

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    
    while(curr!= nullptr)
    {
        next = curr->next;
        curr->next = prev; 
        prev = curr;
        curr = next;
    }
    
    return prev;
}

void display(Node *head)
{
    while(head!= nullptr)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    head = reverse(head);
    display(head);

    return 0;
}