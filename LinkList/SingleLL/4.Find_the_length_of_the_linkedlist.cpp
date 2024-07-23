#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    int getCount(struct Node* head) {
        int count=0;
        Node* temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
};

int main() {
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next= new Node(4);
    Solution obj;
    cout<<obj.getCount(head);
    return 0;
}