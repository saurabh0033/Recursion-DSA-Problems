#include <bits/stdc++.h>
using namespace std;

bool isPal(string &str, int l, int r){
    if(l>=r){
       return true;
    }
    if(str[l]!=str[r]){
        return false;
    }
    return isPal(str,l+1,r-1);
}

int main(){
    cout<<"----------------Palindrome or Not--------------------"<<endl;
    cout<<endl;
    string str;
    cout<<"Enter the String->";
    cin>>str;
    if(isPal(str,0,str.size()-1)){
        cout<<"It is Palindrome..!"<<endl;
    }
    else{
        cout<<"It is not Palindrome..!"<<endl;
    }
    return 0;
}
