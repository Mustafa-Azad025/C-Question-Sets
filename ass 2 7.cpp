#include<bits/stdc++.h>
using namespace std;

float dotproduct(float x1,float y1,float z1,float x2,float y2,float z2){
    // if (x1! && y1! && z1! && x2! && y2! && z2!){
    //     int prod = x1*x2 + y1*y2 + z1*z2;
    //     return prod;
    // }
    // if((x1= && x2=) || (y1= && y2=) || (z1= && z2=)){
    //     int prod = x1*x2 + y1*y2 + z1*z2;
    //     return prod;
    // }
    int prod = x1*x2 + y1*y2 + z1*z2;
    return prod;
}
int main(){
    float a,b,c,a1,b1,c1,k=2;
    cout<<"You Want To See Which Dimension of Dot Product 1 or 2 or 3"<<endl;
    cin>>k;
    if (k==2){
        cin>>a>>b>>a1>>b1;
        cout<<"Dot Product of 2D is :"<<dotproduct(a,b,0,a1,b1,0);
    }else if(k==3){
        cin>>a>>b>>c>>a1>>b1>>c1;
        cout<<"Dot Product of 3D is :"<<dotproduct(a,b,c,a1,b1,c1);
    }else if (k==1){
        cin>>a>>a1;
        cout<<"Dot Product of 1D is :"<<dotproduct(a,0,0,a1,0,0);
    }else{
        cout<<"Sorry This Dimension is Not Yet Included";
    }
    return 0;
}