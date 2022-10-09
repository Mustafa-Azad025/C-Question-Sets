// Name: Tanmay Shukla
// Class: BE Second Year
// Roll No : 21C3068
// PROGRAM: Linked List
#include <iostream>
#include <limits>
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
          next = NULL;
     }
};
void displayList(Node *head)
{
     static int list_count = 1;
     // displaying the list from head to end
     cout << "DISPLATING LIST NO: " << list_count++ << endl;
     while (head != NULL)
     {
          cout << head->data << "\t";
          head = head->next;
     }
     cout << endl;
}
Node *insertAtFront(Node *head, Node *x)
{
     // to insert 'x' node at the front
     if (head == NULL)
          return x;
     x->next = head;
     return x;
}
void insertInMiddle(Node *head, Node *x, int index)
{
     // to insert the element at the index passed in argument
     for (int i = 0; i < index - 1; i++)
          head = head->next;
     x->next = head->next;
     head->next = x;
}
void insertAtEnd(Node *head, Node *x)
{
     while (head->next != NULL)
          head = head->next;
     head->next = x;
     x->next = NULL;
}
Node *deleteAtFront(Node *head)
{
     if (head == NULL)
          return NULL;
     head = head->next;
     return head;
}
void deleteInMiddle(Node *head, int index)
{
     if (head == NULL)
          return;
     for (int i = 0; i < index - 1; i++)
          head = head->next;
     Node *ptr = head->next;
     head->next = ptr->next;
}
void deleteAtEnd(Node *head)
{
     if (head == NULL)
          return;
     else
     {
          while (head->next->next != NULL)
               head = head->next;
          head->next = NULL;
     }
}
bool searchList(Node *head, Node *x)
{
     Node *ptr = new Node();
     while (head->next != x && head != NULL)
     {
          head = head->next;
          if (head == NULL)
               return false;
     }
     return true;
}
int findLength(Node *head)
{
     int length = 0;
     while (head != NULL)
     {
          length++;
          head = head->next;
     }
     return length;
}
int main()
{
     Node *head = new Node(45);
     head->next = new Node(12);
     head->next->next = new Node(16);
     displayList(head);
     Node *front = new Node(1);
     head = insertAtFront(head, front);
     displayList(head);
     Node *middle = new Node(5);
     insertInMiddle(head, middle, 2);
     displayList(head);
     Node *end = new Node(10);
     insertAtEnd(head, end);
     displayList(head);
     head = deleteAtFront(head);
     displayList(head);
     deleteInMiddle(head, 1);
     displayList(head);
     deleteAtEnd(head);
     displayList(head);
     Node *ptr = new Node(12);
     // ptr = head;
     // while(ptr->data != 16)
     //      ptr = ptr->next;
     if (!searchList(head, ptr))
          cout << "NODE NOT FOUND IN LINKED LIST" << endl;
     else
          cout << "NODE FOUND IN LINKED LIST HAVING ADDRESS = " << ptr << endl;
     cout << findLength(head) << endl;
     return 0;
}