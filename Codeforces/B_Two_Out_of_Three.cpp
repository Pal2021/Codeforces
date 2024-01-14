#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define vpii vector<pair<int,int>>  
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }


void  solve(vector<int>arr,int n){
  unordered_map<int,int>mp;
  vector<int>ans;
  for(int i=0;i<n;i++){
    mp[arr[i]]++;
  }
  for(auto i:mp){
    if(i.second>1){
        ans.push_back(i.first);
    }
  }
  
  if(ans.size()<2){
    cout<<"-1"<<endl;return;
  }
  
  for(int i=0;i<arr.size();i++){
   // cout<<arr[0];
    if(arr[i]==ans[0]){
        ans[0]=-1;
       cout<<"2"<<" ";
    }else if(arr[i]==ans[1]){
        ans[1]=-1;
        cout<<"3"<<" ";
    }else{
         cout<<"1"<<" ";
    }
  }
     cout<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      solve(arr,n);
    }
    return 0;
};