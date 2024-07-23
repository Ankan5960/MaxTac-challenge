#include "0.header.cpp"

void DoubleLinklist::reverseDLL()
{
    if(!head || !head->next)
        return;
    
    Node* current=head;
    Node* previous=nullptr;
    while(current)
    {
        previous=current->prev;
        current->prev=current->next;
        current->next=previous;
        current=current->prev;
    }
    head=previous->prev;
}

int main()
{
    DoubleLinklist LL;
    for(int i=0;i<5;i++)
    {
        LL.Insert(i);
    }
    
    LL.reverseDLL();
    LL.Display();
}