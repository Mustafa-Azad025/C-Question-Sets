#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
bool findlist(Node *head, int x)
{

    while (head->next != NULL)
    {
        head = head->next;
        if (head->data == x)
            return true;
    }
    return false;
}
int getlength(Node *head)
{
    int count = 1;
    if (head == NULL)
    {
        return 1;
    }
    while (head->next != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void insertBegin(Node* &head, int x)
{

    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
}
void insertMiddle(Node* &head, int ind, int x)
{
    Node *temp = new Node(x);
    Node *curr = head;
    int cnt = 0;
    while (cnt < ind - 1)
    {
        curr = curr->next;
        cnt++;
    }
    temp->next = curr->next;

    curr->next = temp;
}
void insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
    {
        head = temp;
    }

    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = temp;
}

void DeleteBegin(Node *&head)
{
    if (head == NULL)
    {
        head = NULL;
    }
    head = head->next;
}

void DeleteEnd(Node *head)
{

    int cnt = 1;
    while (cnt < getlength(head))
    {
        head = head->next;
        cnt++;
    }
    head->next = NULL;
}

void DeleteMiddle(Node *head, int ind)
{

    if (head == NULL || head->next == NULL)
    {
        head = NULL;
        return;
    }
    int cnt = 0;
    if (ind == 0)
    {
        head = head->next;
    }
    else
    {
        while (cnt < ind - 1)
        {
            head = head->next;
            cnt++;
        }
        head->next = head->next->next;
    }
}
void Print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    Print(head->next);
    if (head->next == NULL)
    {
        return;
    }
}

int main()
{

    Node *head = new Node(10);
    head->next = new Node(22);
    head->next->next = new Node(34);
    head->next->next->next = new Node(45);

    DeleteMiddle(head, 1);
    cout << "Delete at index 1 : " << endl;
    Print(head); cout<<endl;
    insertBegin(head, 144);
    cout << "Insert at head : " << endl;
    Print(head); cout<<endl;

    DeleteEnd(head);
    cout << "Delete at end " << endl;
    Print(head); cout<<endl;

    insertEnd(head, 89);
    cout << "Insert at end : " << endl;
    Print(head); cout<<endl;

    DeleteBegin(head);
    cout << "Delete at start : " << endl;
    Print(head); cout<<endl;

    insertMiddle(head, 2, 39);
    cout << "Insert at index 2 : " << endl;
    Print(head); cout<<endl;

    

    return 0;
}