#include "0.header.cpp"

Node *SingleLL::constructLL(vector<int> &arr)
{
    if (!head)
    {
        head = new Node(arr[0]);
    }
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    SingleLL obj;
    Node *ans = obj.constructLL(arr);
    while (ans)
    {
        cout << ans->data << " ";
        ans = ans->next;
    }
    return 0;
}