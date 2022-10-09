#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
     int coef, exp;
     Node *next;
     Node()
     {
          coef = 0;
          exp = 0;
          next = NULL;
     }
     Node(int exp, int coef)
     {
          this->exp = exp;
          this->coef = coef;
          next = NULL;
     }
};
void startpolynomial(Node *head, int n, int i = 0)
{
     if (i == n - 1)
     {
          cin >> head->coef >> head->exp;
          head->next = NULL;
          return;
     }
     cin >> head->coef >> head->exp;
     head->next = new Node();
     startpolynomial(head->next, n, ++i);
}
void printpolynomial(Node *head)
{
     static int count = 1;
     cout << "DISPLAYING POLYNOMIAL " << count++ << ":" << endl;
     while (head != NULL)
     {
          if (head->next == NULL)
          {
               if (head->exp == 0)
                    cout << head->coef;
               else
                    cout << head->coef << "x^" << head->exp;
          }
          else
          {
               if (head->exp != 0)
                    cout << head->coef << "x^" << head->exp << " + ";
               else
                    cout << head->coef << " + ";
          }
          head = head->next;
     }
     cout << endl;
}
Node *polynomialadd(Node *h1, Node *h2)
{
     Node *ptr = new Node();
     Node *p1 = ptr;
     while (h1 != NULL && h2 != NULL)
     {
          if (h1->exp > h2->exp)
          {
               ptr->exp = h1->exp;
               ptr->coef = h1->coef;
               h1 = h1->next;
          }
          else if (h1->exp < h2->exp)
          {
               ptr->exp = h2->exp;
               ptr->coef = h2->coef;
               h2 = h2->next;
          }
          else
          {
               ptr->exp = h1->exp;
               ptr->coef = h1->coef + h2->coef;
               h1 = h1->next;
               h2 = h2->next;
          }
          if (ptr->coef != 0)
          {
               ptr->next = new Node();
               ptr = ptr->next;
          }
     }
     while (h1 != NULL)
     {
          ptr->coef = h1->coef;
          ptr->exp = h1->exp;
          if (h1->next != NULL)
          {
               ptr->next = new Node();
               ptr = ptr->next;
          }
          h1 = h1->next;
     }
     while (h2 != NULL)
     {
          ptr->coef = h2->coef;
          ptr->exp = h2->exp;
          if (h2->next != NULL)
          {
               ptr->next = new Node();
               ptr = ptr->next;
          }
          h2 = h2->next;
     }
     ptr->next = NULL;
     return p1;
}
int main()
{
     int n1, n2;
     cout<<"Enter The Number :"<<endl;
     cin>>n1>>n2;
     Node *head = new Node();
     Node *head2 = new Node();
     startpolynomial(head, n1);
     startpolynomial(head2, n2);
     printpolynomial(head);
     printpolynomial(head2);
     Node *head3 = polynomialadd(head, head2);
     printpolynomial(head3);
     return 0;
}