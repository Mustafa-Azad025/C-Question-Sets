#include <bits/stdc++.h>
using namespace std;
int **polynomialadd(int **ar1, int **ar2, int l1, int l2)
{
     int **ar;
     ar = new int *[2];
     for (int i = 0; i < 2; i++)
          ar[i] = new int[l1 + l2];
     int i, j, k = 0;
     for(int i = 0;i<2;i++)
          for(int j = 0;j<l1+l2;j++)
               ar[i][j] = INT_MIN;
     for (i = 0, j = 0; i < l1 && j < l2;)
     {
          if (ar1[1][i] > ar2[1][j])
          {
               ar[0][k] = ar1[0][i];
               ar[1][k] = ar1[1][i++];
          }
          else if (ar1[1][i] < ar2[1][j])
          {
               ar[0][k] = ar2[0][j];
               ar[1][k] = ar2[1][j++];
          }
          else
          {
               ar[0][k] = ar1[0][i] + ar2[0][j++];
               ar[1][k] = ar1[1][i++];
          }
          if(ar[0][k] != 0)
               k++;
     }
     for (; i < l1; i++, k++)
     {
          ar[0][k] = ar1[0][i];
          ar[1][k] = ar1[1][i];
     }
     for (; j < l2; j++, k++)
     {
          ar[0][k] = ar2[0][j];
          ar[1][k] = ar2[1][j];
     }
     return ar;
}
int lengthlist(int** ar, int n)
{
     int count = 0;
     for(int i = 0;i<n;i++)
     {
          if(ar[0][i]==INT_MIN)
               break;
          count++;
     }
     return count;
}
void printpolynomial(int **ar, int n)
{
     static int count = 1;
     cout << "DISPLAYING POLYNOMIAL " << count++ << ":" << endl;
     for (int i = 0; i < n; i++)
     {
          if (i == n - 1)
          {
               if (ar[1][i] == 0)
                    cout << ar[0][i];
               else
                    cout << ar[0][i] << "x^" << ar[1][i];
          }
          else
          {
               if (ar[1][i] != 0)
                    cout << ar[0][i] << "x^" << ar[1][i] << " + ";
               else
                    cout << ar[0][i] << " + ";
          }
     }
     cout << endl;
}
int main()
{
     int **ar1;
     int **ar2;
     ar1 = new int *[2];
     for (int i = 0; i < 2; i++)
          ar1[i] = new int[5];
     ar2 = new int *[2];
     for (int i = 0; i < 2; i++)
          ar2[i] = new int[8];
     for (int i = 0; i < 5; i++)
          cin >> ar1[0][i] >> ar1[1][i];
     printpolynomial(ar1, 5);
     for (int i = 0; i < 8; i++)
          cin >> ar2[0][i] >> ar2[1][i];
     printpolynomial(ar2, 8);
     int** ar = polynomialadd(ar1, ar2, 5, 8);
     printpolynomial(ar, lengthlist(ar, 5 + 8));
     cout<<"PROGRAM END"<<endl;
     return 0;
}