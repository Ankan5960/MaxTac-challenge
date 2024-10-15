#include<bits/stdc++.h>

using namespace std;    

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    int findLength(ListNode* slow, ListNode* fast){
        int cnt = 1;
        fast = fast->next;
        while(slow!=fast){
            cnt++;
            fast = fast->next;
        }
        return cnt;
    }

    int countNodesinLoop(struct ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int count=0;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                return findLength(slow,fast);
            }
        }
        return 0;
    }
};

int main()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    head->next->next->next->next->next=new ListNode(6);
    head->next->next->next->next->next=head->next;
    Solution obj;
    cout<<obj.countNodesinLoop(head);
}