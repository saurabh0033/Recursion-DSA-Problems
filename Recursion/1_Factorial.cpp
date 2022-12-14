#include<bits/stdc++.h>
using namespace std;
# define ll long long
ll fact(int n){
    //base case
    if(n==0 || n==1){
        return 1;
    }
    
    //recursive case
    return n*fact(n-1);
    
}


int main(){
    cout<<"----------------Factorial of Number------------------"<<endl;
    cout<<endl;
    cout<<"Enter the Number=>";
    ll n;
    cin>>n;
    cout<<"factorial of "<<n<<" is="<<fact(n);
    return 0;
}

//using integer we find only upto 12 factorial
//using long long int upto 19.
