#include<bits/stdc++.h>
using namespace std;

// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
void starPrint(int n){
    //base case
    if(n==0){
        return ;
    }
    
    //recursive call
    starPrint(n-1);
    
    
    //printing star
    for(int i=0;i<n;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}

int main(){
    cout<<"----------------Star Pattern Using Recursion-----------------"<<endl;
    cout<<endl;
    int n;
    cout<<"Enter the Number=>";
    cin>>n;
    
    starPrint(n);
    return 0;
}
