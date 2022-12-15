#include<bits/stdc++.h>
using namespace std;
int Power(int n,int m){
    if(m==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    
    if(m%2==0){
        return Power(n,m/2)*Power(n,m/2);
    }
    else{
        if(m>0){
            return n*Power(n,m/2)*Power(n,m/2);
        }
        
    }
}

int main(){
    cout<<"----------------Power of Number---------------------"<<endl;
    cout<<endl;
    int n,m;
    cout<<"Enter the Number->";
    cin>>n;
    cout<<"Enter the Power->";
    cin>>m;
    cout<<"Answer is->"<<Power(n,m);
    
    return 0;
}
