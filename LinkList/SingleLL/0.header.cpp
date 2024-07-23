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

class SingleLL
{
    Node *head;
public:
    SingleLL(){
        head=nullptr;
    }

    Node* constructLL(vector<int>&);
    Node* insertAtEnd(Node* , int);
    void deleteNode(Node* );
    int getCount(Node *);
    bool searchKey(int ,Node* head, int);

    void printList() {
    Node* temp=head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
};
