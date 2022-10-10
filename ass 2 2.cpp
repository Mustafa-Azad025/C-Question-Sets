#include<bits/stdc++.h>
using namespace std;

int min(int x,int y){
    if(x>y){
        return y;
    }else{
        return x;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Smallest Number among this is :"<<min(a,b);
    return 0;
}