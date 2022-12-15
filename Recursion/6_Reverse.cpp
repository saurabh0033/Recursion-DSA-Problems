#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&v,int l,int r){
    //bases case
    if(l>=r){
        return;
    }
    swap(v[l],v[r]);
    reverse(v,l+1,r-1);
}

int main(){
    cout<<"-------------------Reverse an Array--------------------"<<endl;
    cout<<endl;
    
    vector<int>v;
    v={1,2,3,4,5};
    reverse(v,0,v.size()-1);
    cout<<"After reversing-";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
