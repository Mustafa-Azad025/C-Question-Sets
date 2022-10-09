#include<bits/stdc++.h>
using namespace std;
class node{
public: int data;
        node* next;

        node(int x,node* n=NULL){
            data=x;
            next=n;

        }
     
};
int lengthlist(node* head){
      node* curr = head;
      int count=1;
      while(curr->next!=head){
        curr=curr->next;
        count++;
      }
      return count ;

}
void search(node* &head,int val){
     node* curr = head;
     while(curr->next!=head){
        if(curr->data==val){
            cout<<"Element present.";
            
            return;
        }
        else{
            curr=curr->next;
        }
        
     }
     cout<<"Element not present.";



}
void insertBegin(node* &head,int val){
          node* temp = new node(val);
          node* curr = head;

         while(curr->next!=head){
            curr=curr->next ;
         }
         curr->next=temp;
         temp->next=head;
         
      
         head=temp;
}
void insertEnd(node* &e,int val){
     node* temp = new node(val);
     node* curr = e;
     if(curr==NULL){
        insertBegin(curr,val);
        
     }
     while(curr->next!=e){
        curr=curr->next;
     }
     curr->next=temp;
     temp->next=e;

     
}
void insertMiddle(node* &head, int ind, int value){
           node* curr = head ;
           node* temp = new node(value);
           int count = 0;
           while(count<ind-1){
            
            curr=curr->next;
            count++;
           }
           temp->next=curr->next;

           curr->next=temp;
           

}
void DeleteBegin(node* &head){
       node* curr = head;
       while(curr->next!=head){
        curr=curr->next;
       }
       curr->next = head->next ;
       head=head->next;
}
void DeleteMiddle(node* &head,int ind){
      node* curr = head;
      int count=0;
      while(count<ind-1){
           curr=curr->next;
           count++;
      }
      curr->next=curr->next->next;


}
void DeleteEnd(node* &head){
    node* curr=head;
    int count=1;
    while(count<lengthlist(head)-1){
        curr=curr->next;
        count++;
    }
    curr->next=head;
    

}
void Print(node* &h){
    node* temp = h ;
    do{
    cout<<temp->data<<" ";
    temp=temp->next;
    }while(temp!=h);
    return;
}

int main()
{
node* head = new node(34);
head->next = new node(45);
head->next->next = new node(56,head);
cout<<"BEFORE INSERTION OPERATIONS : "<<endl;
Print(head);
insertEnd(head,67);
insertBegin(head,59);
insertMiddle(head,2,58);
insertBegin(head,99);
cout<<endl;
cout<<"AFTER INSERTION OPERATIONS : "<<endl;
Print(head);
cout<<endl;
DeleteEnd(head);
cout<<"AFTER DELETING TAIL : "<<endl;
Print(head);
cout<<endl;
DeleteBegin(head);
cout<<"DELETED HEAD : "<<endl;
Print(head);
cout<<endl;
cout<<"DELETING AT INDEX 2 : "<<endl;
DeleteMiddle(head,2);
Print(head);
cout<<endl;
cout<<"LENGTH OF LINKEDLIST : "<<lengthlist(head)<<endl;
search(head,45);

return 0;
}