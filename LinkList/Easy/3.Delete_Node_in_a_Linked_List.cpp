#include<bits/stdc++.h>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};

int main()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next= new ListNode(4);
    Solution obj;
    obj.deleteNode(head->next->next);
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}