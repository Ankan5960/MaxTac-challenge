#include "0.header.cpp"

void SingleLL::deleteNode(Node *temp)
{
    temp->data = temp->next->data;
    temp->next = temp->next->next;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    SingleLL obj;
    Node* temp=head->next->next;
    obj.deleteNode(temp);
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}