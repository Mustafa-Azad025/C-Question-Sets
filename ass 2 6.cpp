#include<bits/stdc++.h>
using namespace std;

float computerectangle(float *a,float *b,float w,float h){
    *a=w*h;
    *b=2*(w+h);
}
int main(){
    float m,n,p,q;
    cin>>p>>q;
    computerectangle(&m,&n,p,q);
    cout<<"area of ractangle is :"<<m<<endl;
    cout<<"perimeter of ractangle is :"<<n;
    return 0;
}
