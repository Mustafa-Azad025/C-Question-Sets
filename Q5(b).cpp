#include <bits/stdc++.h>
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
class Stack
{
public:
    Node *head;
    int size;

    Stack()
    {
        head = NULL;
        size = 0;
    }

    void add(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        size++;
        head = temp;
    }

    void top()
    {
        if (head == NULL)
        {
            cout << "NULL";
        }
        else
        {
            cout << head->data;
        }
    }

    void deletee()
    {
        head = head->next;
    }
};
int main()
{
    Stack st;
    st.add(45);
    st.add(67);
    cout<<"TOPMOST ELEMENT : "<<endl;
    st.top();
    st.deletee();
    cout<<endl;
    cout<<"TOPMOST ELEMENT AFTER DELETION : "<<endl;
    st.top();
    return 0;
}