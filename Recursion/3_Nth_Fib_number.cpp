#include<bits/stdc++.h>
using namespace std;
# define ll long long
ll fib(int n){
    //base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    //recursive case
    return fib(n-1)+fib(n-2);
    
}

//0 1 1 2 3 5 8 13 21 34
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
        cout<<"Nth Fibonacci Number is=>"<<fib(n);
    }
    return 0;
}

//using integer we find only upto 12 factorial
//using long long int upto 19.
