#include<bits/stdc++.h>
using namespace std;

int digit(int n,int k){
    if(k==0 && n==0){
        return 0;
    }
    else if(k<=0 || n==0){
        return -1;
    }
    if(n>0){
    for(int i=0;i<k;i++){
        n/=10;
    }
    }
    if(n!=0){
        return n%10;
    }
    return n;
}
int main(){
    int a,b;
    cin>>a>>b;
    if(digit(a,b)==-1){
        cout<<"Please enter value of n and k from 1 to n";
    }
    else{
    cout<<"The Digit at "<<b<<" index is :"<<digit(a,b);
    }
    return 0;
}