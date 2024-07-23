#include "0.header.cpp"

void DoubleLinklist::deleteNode(int x)
{
    Node* temp =head;
    int length=2;
    if(x==1)
    {
        head=temp->next;
        head->prev=nullptr;
        return ;
    }
    while(temp->next){
        if(length==x)
        {
            temp->next->prev=temp;
            temp->next=temp->next->next;
            return ;
        }
        length++;
        temp=temp->next;
    }
    return ;
}

int main()
{
    DoubleLinklist LL;
    LL.Insert(1);
    LL.Insert(2);
    LL.Insert(3);
    LL.Insert(4);
    LL.Insert(5);
    LL.deleteNode(3);
    LL.Display();
}