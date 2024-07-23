#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *mainHead=head;
        if(!head)
        {
            head=new Node(x);
            return head;
        }
        while(head->next)
        {
            head=head->next;
        }
        head->next=new Node(x);
        return mainHead;
    }
};

int main() {
    Solution obj;
    Node* head=nullptr;
    for(int i=0;i<5;i++)
    {
        Node* ans=obj.insertAtEnd(head,2);
        head=ans;
    }
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}