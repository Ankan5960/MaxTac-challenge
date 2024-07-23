#include "0.header.cpp"

void DoubleLinklist::constructDLL(vector<int> &arr)
{
    Node *newnode = new Node(arr[0]);
    head = newnode;
    tail = newnode;
    for (int i = 1; i < arr.size(); i++)
    {
        newnode = new Node(arr[i]);
        newnode->prev = tail;
        tail->next = newnode;
        tail = tail->next;
    }
    return ;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    DoubleLinklist obj;
    obj.constructDLL(arr);
    obj.Display();
    return 0;
}