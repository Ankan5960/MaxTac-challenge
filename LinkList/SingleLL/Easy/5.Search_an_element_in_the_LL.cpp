#include "0.header.cpp"

    bool SingleLL::searchKey(int n,Node* head, int key) {
        Node* temp=head;
        while(temp)
        {
            if(temp->data==key)
                return true;
            temp=temp->next;
        }
        return false;
    }


int main()
{
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next= new Node(4);
    SingleLL sol;
    cout<<(sol.searchKey(4,head,4)?"true":"false");
}