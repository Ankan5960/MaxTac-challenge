#include<iostream>
#include<vector>
using namespace std;    

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* temp=head;
        while(temp)
        {
            ListNode* fornt=temp->next;
            temp->next=prev;
            prev=temp;
            temp=fornt;
        }
        return prev;
    }
};

int main()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    Solution obj;
    ListNode* ans=obj.reverseList(head);
    while(ans)
    {
        cout<<ans->val<<" ";
        ans=ans->next;  
    }   
}