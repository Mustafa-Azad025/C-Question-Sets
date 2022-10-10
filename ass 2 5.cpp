#include<bits/stdc++.h>
using namespace std;

float power(float x,unsigned p){
    float y = pow(p,x);
    cout<<"the result of "<< p<<"raise to power "<<x<<"is :"<<y;
}
int main(){
    float a;
    unsigned b;
    cin>>a>>b;
    power(a,b);
    return 0;
}