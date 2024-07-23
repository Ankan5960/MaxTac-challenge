#include "0.header.cpp"

void DoubleLinklist::addNode(int pos, int data)
{
    Node *newnode = new Node(data);
    int length = 0;
    Node *temp = head;
    while (temp->next)
    {
        if (pos == length)
        {
            newnode->next = temp->next;
            temp->next->prev = newnode;
            temp->next = newnode;
            newnode->prev = temp;
            return;
        }
        length++;
        temp = temp->next;
    }
    newnode->prev = temp;
    temp->next = newnode;
    return;
}

int main()
{
    DoubleLinklist LL;
    LL.Insert(1);
    LL.Insert(2);
    LL.Insert(3);
    LL.Insert(4);
    LL.addNode(3, 5);
    LL.Display();
}