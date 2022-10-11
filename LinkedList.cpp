#include <bits/stdc++.h>
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