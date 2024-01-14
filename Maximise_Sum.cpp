
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);    
}
#define ll long long  
void solve(ll n,vector<ll>arr){
  vector<ll>pre(n);
  vector<ll>suf(n);
  pre[0]=arr[0];
  for(int i=1;i<n;i++){
    pre[i]=max(arr[i],pre[i-1]);
  }
  suf[n-1]=arr[n-1];
  for(int i=n-1;i>0;i--){
    suf[i]=max(arr[i],suf[i-1]);
  }
 ll sum=0;
 for(int i=0;i<n;i++){
    sum+=max(pre[i],suf[i]);
 }
 cout<<sum<<endl;
}
void solve(string s){
     stack<char>st;
    for(int i=0;i<s.size();i++){
         
          if(s[i]=='#'){
             if(st.size()==0){
              continue;
            }else{
              st.pop();
            }
          }else{
            st.push(s[i]);
          }
    }
       string ans="";
        while(!st.empty()){
          ans=st.top()+ans;
          st.pop();
          
        }
        cout<<ans;
}
int main(){
    // int t;
    // cin>>t;
    // while(t--){
    //     ll n;
    //     cin>>n;
    //    vector<ll>arr(n);
    //   for(int i=0;i<n;i++){
    //     cin>>arr[i];
    //   }
    //     solve(n,arr);
    // }
    string s;
    cin>>s;
    solve(s);
}