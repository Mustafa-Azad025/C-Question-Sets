#include <bits/stdc++.h>
using namespace std;

struct Node{
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

Node *insertBegin(Node *head, int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node *insertEnd(Node *head,int x){
    Node *temp = new Node(x);
    while(head->next != NULL){
        head = head->next;
    }
    head->next = temp;
    return head;
}

int getlength(Node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

Node *insertMiddle(Node *head,int x){
    int len = getlength(head);
    int mid = (len%2 == 0)?((len+1)/2):(len/2);
    Node *temp = new Node(x);
    int cnt = 0;
    Node *curr = head;
    while(cnt < mid - 1){
        cnt++;
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return curr;
}

Node *DeleteBegin(Node *head){
    return head->next;
}

Node *DeleteEnd(Node *head){
    while(head->next->next != NULL){
        head = head->next;
    }
    head->next = NULL;
    return head;
}

Node *DeleteMiddle(Node *head){
    int len = getlength(head);
    int mid = (len%2 == 0)?((len+1)/2):(len/2);
    int cnt = 0;
    while(cnt < mid -1){
        cnt++;
        head = head->next;
    }
    head->next = head->next->next;
    return head;
}

int findelem(Node *head,int x){
    int cnt = 0;
    while(head != NULL){
        cnt++;
        if(head->data == x){
            return cnt;
        }
        head = head->next;
    }
    return -1;
    
    
}

int main (){
    
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    cout<<findelem(head,20)<<endl;
    print(head);
    return 0;
}
