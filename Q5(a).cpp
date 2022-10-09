#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
  int *arr;
  int tope;
  int size;

  Stack(int size)
  {
    this->size = size;
    arr = new int[size];
    tope = -1;
  }
  void add(int element)
  {
    if (size - tope > 1)
    {
      tope++;
      arr[tope] = element;
    }
    else
    {
      cout << "STACK OVERFLOW" << endl;
    }
  }
  void deletefromStack()
  {
    if (tope >= 0)
    {
      tope--;
    }
    else
    {
      cout << "STACK UNDERFLOW" << endl;
    }
  }

  void top()
  {
    if (tope >= 0)
    {
      cout << arr[tope] << endl;
    }
    else
    {
      cout << "STACK EMPTY" << endl;
      ;
    }
  }
  bool isEmpty()
  {
    if (tope >= 0)
    {
      return false;
    }
    else
    {
      return true;
    }
  }
};

int main()
{
  Stack st(5);
  st.add(65);
  st.add(39);
  st.add(74);

  cout << "topmost element : ";
  st.top();
  cout << endl;
  st.deletefromStack();
  cout << "topmost element after deletion is : ";
  st.top();
  cout << endl;
  cout << "Checking is empty" << endl;
  cout << st.isEmpty();

  return 0;
}