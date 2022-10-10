// Q8
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m>>n;
//     long long ar[m][n];
//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             cin>>ar[i][j];
//         }
//     }
//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             if(i==0 && j==0){
//                 if(ar[i][j]>ar[i+1][j] && ar[i][j]>ar[i][j+1] && ar[i][j]>ar[i+1][j+1]){
//                     cout<<"Number"<<ar[i][j]<<"at indices ("<<i<<","<<j<<") is greater than its neibouring element"<<endl;
//                 }
//             }
//             else if(i==0 && j==(n-1)){
//                 if(ar[i][j]>ar[i+1][j] && ar[i][j]>ar[i][j-1] && ar[i][j]>ar[i+1][j-1]){
//                     cout<<"Number"<<ar[i][j]<<"at indices ("<<i<<","<<j<<") is greater than its neibouring element"<<endl;
//                 }
//             }
//             else if(i==(m-1) && j==0){
//                 if(ar[i][j]>ar[i-1][j] && ar[i][j]>ar[i-1][j+1] && ar[i][j]>ar[i][j+1]){
//                     cout<<"Number"<<ar[i][j]<<"at indices ("<<i<<","<<j<<") is greater than its neibouring element"<<endl;
//                 }
//             }
//             else if(i==(m-1) && j==(n-1)){
//                 if(ar[i][j]>ar[i-1][j] && ar[i][j]>ar[i][j-1] && ar[i][j]>ar[i-1][j-1]){
//                     cout<<"Number"<<ar[i][j]<<"at indices ("<<i<<","<<j<<") is greater than its neibouring element"<<endl;
//                 }
//             }
//             else if(i==0 && j!=0){
//                 if(ar[i][j]>ar[i+1][j] && ar[i][j]>ar[i][j+1] && ar[i][j]>ar[i+1][j+1] && ar[i][j]>ar[i][j-1] && ar[i][j]>ar[i+1][j-1]){
//                     cout<<"Number"<<ar[i][j]<<"at indices ("<<i<<","<<j<<") is greater than its neibouring element"<<endl;
//                 }
//             }
//             else if(i==(m-1) && j!=0){
//                 if(ar[i][j]>ar[i][j+1] && ar[i][j]>ar[i][j-1] && ar[i][j]>ar[i-1][j-1] && ar[i][j]>ar[i-1][j] && ar[i][j]>ar[i-1][j+1]){
//                     cout<<"Number"<<ar[i][j]<<"at indices ("<<i<<","<<j<<") is greater than its neibouring element"<<endl;
//                 }
//             }
//             else if(i!=0 && j==0){
//                 if(ar[i][j]>ar[i-1][j] && ar[i][j]>ar[i+1][j] && ar[i][j]>ar[i-1][j+1] && ar[i][j]>ar[i][j+1] && ar[i][j]>ar[i+1][j+1]){
//                     cout<<"Number"<<ar[i][j]<<"at indices ("<<i<<","<<j<<") is greater than its neibouring element"<<endl;
//                 }
//             }
//             else if(i!=0 && j==(n-1)){
//                 if(ar[i][j]>ar[i-1][j] && ar[i][j]>ar[i+1][j] && ar[i][j]>ar[i-1][j-1] && ar[i][j]>ar[i][j-1] && ar[i][j]>ar[i+1][j-1]){
//                     cout<<"Number"<<ar[i][j]<<"at indices ("<<i<<","<<j<<") is greater than its neibouring element"<<endl;
//                 }
//             }
//             else{
//                 if (ar[i][j]>ar[i-1][j] && ar[i][j]>ar[i+1][j] && ar[i][j]>ar[i-1][j-1] && ar[i][j]>ar[i][j-1] && ar[i][j]>ar[i+1][j-1] && ar[i][j]>ar[i-1][j+1] && ar[i][j]>ar[i][j+1] && ar[i][j]>ar[i+1][j+1]){
//                     cout<<"Number"<<ar[i][j]<<"at indices ("<<i<<","<<j<<") is greater than its neibouring element"<<endl;
//                 }
//             }
//         }
//     }
//     return 0;
// }
// Q10
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int m,n,k=0;
//     cin>>m>>n;
//     long long ar[m][n],a[m*n];
//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             cin>>ar[i][j];
//         }
//         if((i+1)%2!=0){
//             for(int j=0;j<n;j++){
//                 a[k]=ar[i][j];
//                 k++;
//             }
//         }
//         else{
//             for (int j=(n-1);j>=0;j--){
//                 a[k]=ar[i][j];
//                 k++;
//             }
//         }
//     }
//     return 0;
// }

// Q12
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int m,n,k=0;
//     cin>>m>>n;
//     long long ar[m][n],a[m*n];
//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             cin>>ar[i][j];
//         }
//     }
//     a[k]=ar[i][j];
//     k++;i++;
//     while(k<m*n){
//         while (i!=0 && j<m-1){
//             a[k]=ar[i][j];
//             k++;i--;j++;
//         }
//         a[k]=ar[i][j];
//         k++;
//         if(j!=m-1){
//             j++;
//         }else{i++;}
//         while(j!=0 && i<n-1){
//             a[k]=ar[i][j];
//             k++;i++;j--;
//         }
//         a[k]=ar[i][j];
//         k++;
//         if (j==0 || i==n-1){
//             if (i!=n-1){i++;}
//             else{j++;}
//         }
//     }
//     for (int i=0;i<m*n;i++){
//         cout<<a[i]<<end=" ";
//     }
//     return 0;
// }