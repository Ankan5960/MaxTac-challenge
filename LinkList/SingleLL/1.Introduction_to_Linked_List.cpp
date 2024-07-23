#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution
{
    Node *head;

public:
    Solution()
    {
        head = nullptr;
    }
    Node *constructLL(vector<int> &arr)
    {
        // code here
        if (!head)
        {
            head = new Node(arr[0]);
        }
        Node *temp=head;
        for(int i=1;i<arr.size();i++)
        {
            temp->next=new Node(arr[i]);
            temp=temp->next;
        }
        return head;
    }
};

int main()
{
    vector<int> arr = {1,2,3,4,5};
    Solution obj;
    Node *ans = obj.constructLL(arr);
    while (ans)
    {
        cout << ans->data << " ";
        ans = ans->next;
    }
    return 0;
}