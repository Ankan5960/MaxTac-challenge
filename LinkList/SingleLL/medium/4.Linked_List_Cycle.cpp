#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle_burte_force(ListNode *head) {
        if(!head || !head->next)
            return false;
        vector<ListNode*>NodeArr;
        ListNode* tempHead=head;
        while(tempHead->next)
        {
            vector<ListNode*>::iterator  it;
            it=find(NodeArr.begin(),NodeArr.end(),tempHead->next);
            if(it != NodeArr.end())
                return true;
            else
                NodeArr.push_back(tempHead->next);
            tempHead=tempHead->next;
        }
        return false;
    }
    bool hasCycle_hasMap(ListNode *head) {
        map<ListNode*,int>mpp;
        ListNode* tempHead=head;
        while(tempHead)
        {
            if(mpp.find(tempHead)!=mpp.end())
                return true;
            mpp[tempHead]=1;
            tempHead=tempHead->next;
        }
        return false;
    }
     bool hasCycle_Optimal(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast)
                return true;
        }
        return false;
    }
};

int main()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    //head->next->next->next->next->next=head;
    Solution obj;
    cout<<obj.hasCycle_Optimal(head);
    return 0;
}