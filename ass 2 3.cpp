#include<bits/stdc++.h>
using namespace std;

int min(int x,int y,int z){
    // if(x>y && x>z){
    //     if(y>z){
    //         return z;
    //     }else{
    //         return y;
    //     }
    // }
    // else if(y>x && y>z){
    //     if(z>x){
    //         return x;
    //     }else{
    //         return z;
    //     }
    // }
    // else{
    //     if(x>y){
    //         return y;
    //     }else{
    //         return x;
    //     }
    // }
    // if(x>y && x>z && y>z){
    //     return z;
    // }else{
    //     return y;
    // }
    // if(y>x && y>z && z>x){
    //     return x;
    // }else{
    //     return z;
    // }
    // if(z>x && z>y && y>x){
    //     return x;
    // }
    // else{
    //     return y;
    // }
    int min = x;
    if(y<min){
        min=y;
    }
    if(z<min){
        min = z;
    }
    return min;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Smallest Number among this is :"<<min(a,b,c);
    return 0;
}