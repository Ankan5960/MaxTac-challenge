#include "0.header.cpp"

Node *SingleLL::insertAtEnd(Node *head, int x)
{
    Node *mainHead = head;
    if (!head)
    {
        head = new Node(x);
        return head;
    }
    while (head->next)
    {
        head = head->next;
    }
    head->next = new Node(x);
    return mainHead;
}

int main()
{
    SingleLL obj;
    Node *head = nullptr;
    for (int i = 0; i < 5; i++)
    {
        Node *ans = obj.insertAtEnd(head, 2);
        head = ans;
    }
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}