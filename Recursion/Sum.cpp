#include<bits/stdc++.h>
using namespace std;
# define ll long long
ll sum(int n){
    //base case
    if(n==0){
        return 0;
    }
    
    //recursive case
    return n+sum(n-1);
    
}


int main(){
    cout<<"----------------sum of n Number------------------"<<endl;
    cout<<endl;
    cout<<"Enter the Number=>";
    ll n;
    cin>>n;
    if(n<0){
        cout<<"Enter Positive Number Only.";
    }
    else{
        cout<<"Addition is="<<sum(n);
    }
    return 0;
}

//using integer we find only upto 12 factorial
//using long long int upto 19.