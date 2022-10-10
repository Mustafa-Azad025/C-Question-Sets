#include<bits/stdc++.h>
using namespace std;

float average(float x,float y,float z,float p,float total){
    return (x+y+z+p)/total;
}

int main(){
    float a,b,c,d,count=0;
    int n;
    cout<<"For Avarage Choose Total Number Till 4"<<endl; 
    cin>>n;
    switch(n){
        case 1: cin>>a;
                cout<<average(a,0,0,0,count+1);
                break;
        case 2: cin>>a>>b;
                cout<<average(a,b,0,0,count+2);
                break;
        case 3: cin>>a>>b>>c;
                cout<<average(a,b,c,0,count+3);
                break;
        
        case 4: cin>>a>>b>>c>>d;
                cout<<average(a,b,c,d,count+4);
                break;
    }
    return 0;
}