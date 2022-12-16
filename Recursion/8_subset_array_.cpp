 #include<bits/stdc++.h>
 using namespace std;
 
 void solve(vector<int>&v, vector<int>temp,int i,vector<vector<int>>&ans){
     //base case
     if(i>=v.size()){
         ans.push_back(temp);
         return ;
     }
     
     //exclude call
     solve(v,temp,i+1,ans);
     
     //inclusive call
     int data=v[i];
     temp.push_back(data);
     solve(v,temp,i+1,ans);
 }
 
 int main(){
     cout<<"----------Subsets--------------------";
     cout<<endl<<endl;
     
     vector<int>v;
     v={1,2,3};
     vector<int>temp;
     vector<vector<int>>ans;
     int i=0;
     solve(v,temp,i,ans);
     
     for(int i=0;i<ans.size();i++){
         cout<<"{";
         for(int j=0;j<ans[i].size();j++){
             cout<<ans[i][j]<<" ";
         }
         cout<<"}"<<endl;
     }
     return 0;
 }
