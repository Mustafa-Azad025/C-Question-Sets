#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
     int data;
     Node *next;
     Node *prev;
     Node()
     {
          data = 0;
          next = NULL;
          prev = NULL;
     }
     Node(int data)
     {
          this->data = data;
          next = NULL;
          prev = NULL;
     }
     Node(int data, Node *prev, Node *next = NULL)
     {
          this->data = data;
          this->next = next;
          this->prev = prev;
     }
};
Node *insertBegin(Node *head, Node *x)
{
     if (head == NULL)
          return x;
     x->next = head;
     head->prev = x;
     return x;
}
void insertMiddle(Node *head, Node *x, int index)
{
     if (head == NULL)
     {
          head = x;
          return;
     }
     if (head->next == NULL)
     {
          head->next = x;
          x->prev = head;
          x->next = NULL;
          return;
     }
     for (int i = 0; i < index - 1; i++)
          head = head->next;
     x->next = head->next;
     head->next->prev = x;
     head->next = x;
     x->prev = head;
}
void insertEnd(Node *head, Node *x)
{
     if (head == NULL)
     {
          head = x;
          return;
     }
     while (head->next != NULL)
          head = head->next;
     head->next = x;
     x->next = NULL;
     x->prev = head;
}
Node *DeleteFront(Node *head)
{
     if (head->next == NULL || head == NULL)
          return NULL;
     head = head->next;
     head->prev = NULL;
     return head;
}
void deleteInMiddle(Node *head, int index)
{
     if (head->next == NULL || head == NULL)
     {
          head = NULL;
          return;
     }
     for (int i = 0; i < index - 1; i++)
          head = head->next;
     head->next->next->prev = head;
     head->next = head->next->next;
}
void deleteAtEnd(Node *head)
{
     if (head->next == NULL || head == NULL)
     {
          head = NULL;
          return;
     }
     while(head->next != NULL)
          head = head->next;
     head->prev->next = NULL;
}
void displayListForward(Node* head)
{
     static int count = 1;
     if(head == NULL)
     {
          cout<<"EMPTY LIST"<<endl;
          return;
     }
     cout<<"DISPLAYING LIST "<<count++<<":"<<endl;
     while(head != NULL){
          cout<<head->data<<"\t";
          head = head->next;
     }         
     cout<<endl;
}

int main()
{
     Node* head = new Node(1);
     head->next = new Node(2, head);
     head->next->next = new Node(3, head->next);
     head->next->next->next = new Node(4, head->next->next);
     displayListForward(head);
     head = insertBegin(head, new Node(5));
     displayListForward(head);
     insertMiddle(head, new Node(6), 3);
     displayListForward(head);
     insertEnd(head, new Node(7));
     displayListForward(head);
     head = DeleteFront(head);
     displayListForward(head);
     deleteInMiddle(head, 3);
     displayListForward(head);
     deleteAtEnd(head);
     displayListForward(head);
     return 0;
}