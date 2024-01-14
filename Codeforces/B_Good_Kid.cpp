
#include<bits/stdc++.h>
using namespace std;
void solve(int n,vector<int>arr){
    int min1=INT_MAX;
   for(int i=0;i<n;i++){
    min1=min(min1,arr[i]);
   }
   bool flag=false;
   int pro=1;
   int val=1;
  for(int i=0;i<n;i++){
    if(arr[i]==min1 && flag==false){
        val=arr[i];
        flag=true;
        continue;
    }
    pro=pro*arr[i];
  }
  cout<<pro*(val+1)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(n,arr);
    }
}