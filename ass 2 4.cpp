#include<bits/stdc++.h>
using namespace std;

int min(int w,int x,int y,int z){
    int min=w;
    if (x<min){
        min=x;
    }
    if(y<min){
        min=y;
    }
    if(z<min){
        min=z;
    }
    return min;
}
int main(){
    int n1,n2,n3,n4;
    cout<<"enter number here :";
    cin>>n1>>n2>>n3>>n4;
    cout<<"Minimum Among Four Number is :"<<min(n1,n2,n3,n4)<<endl;
    return 0;
}