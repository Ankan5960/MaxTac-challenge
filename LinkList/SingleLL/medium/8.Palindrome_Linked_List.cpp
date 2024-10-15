#include<iostream>
#include<cmath>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int rev=0,org=0,count=0;
        while (temp != NULL) {
            rev+=pow(10,count)*temp->val;
            org=(org*10)+temp->val;
            count++;
            temp=temp->next;
        }
        cout<<rev<<endl;
        cout<<org<<endl;
        return (org==rev);
    }
};

int main()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(2);
    head->next->next->next=new ListNode(1);
    Solution sol;
    cout<<sol.isPalindrome(head);
}