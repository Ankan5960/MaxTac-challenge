#include<iostream>
#include<vector>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};

class DoubleLinklist
{
public:
    Node *head;
    Node *tail;
    int length;
    DoubleLinklist()
    {
        head = nullptr;
        tail = nullptr;
        length = 0;
    }
    void Display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void Insert(int data)
    {
        Node *newnode = new Node(data);
        if (!head)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            newnode->prev = tail;
            tail->next = newnode;
            tail = tail->next;
        }
    }

    void addNode(int, int);
    void constructDLL(vector<int>&);
    void deleteNode(int) ;
    void reverseDLL();
};