<<<<<<< HEAD
#include <bits/stdc++.h>
=======
#include <iostream>
#include <limits>
>>>>>>> d79e9557db295b82153439933ec7f9ddc416c750
using namespace std;

struct Node {
    int data;
    Node *next;
    Node (int x){
        data = x;
        next = NULL;
    }
};

void print(Node *head){
    while(head != NULL){
        cout<<(head->data)<<" ";
        head=head->next;
    }
};

Node *insertBegin(Node *head,int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
};

Node *insertEnd(Node *head, int x){
    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    while(head->next != NULL){
        head = head->next;
    }
    head->next = temp;
    return head;
};

int getlen(Node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

Node *insertMiddle(Node *head,int x){
    int len = getlen(head);
    int mid = (len%2 == 0)?((len+1)/2):(len/2);
    Node *temp = new Node(x);
    
    Node *curr = head;
    int cnt = 0;
    while (cnt < mid-1)
    {
        curr = curr->next;
        cnt++;
    }
    temp->next = curr->next;

    curr->next = temp;
    return curr;
};

Node *DeleteBegin(Node *head){
    if (head == NULL)
    {
        head = NULL;
    }
    return head->next;
};

Node *DeleteEnd(Node *head){
    if (head == NULL)
          return head;
     else
     {
          while (head->next->next != NULL)
               head = head->next;
          head->next = NULL;
     }
     return head;
}

Node *DeleteMiddle(Node *head){
    int len = getlen(head);
    int mid = (len%2 == 0)?((len+1)/2):(len/2);
    Node *curr = head;
    int cnt = 0;
    while (cnt < mid-1)
    {
        curr = curr->next;
        cnt++;
    }
    curr->next = curr->next->next;
    return curr;
}

int main()
{
<<<<<<< HEAD
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = insertBegin(head,40);
    insertEnd(head,50);
    insertMiddle(head,60);
    head=DeleteBegin(head);
    DeleteEnd(head);
    DeleteMiddle(head);
    DeleteMiddle(head);
    print(head);

    return 0;
}
=======
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
>>>>>>> d79e9557db295b82153439933ec7f9ddc416c750
