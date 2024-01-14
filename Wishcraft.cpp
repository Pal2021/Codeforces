
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(vector<ll>arr,ll n,ll p,ll q){
  sort(arr.begin(),arr.end());
  ll ans=arr[n-1]-arr[0];
  vector<ll>v;
  for(ll i=1;i<n-1;i++){
    v.push_back(abs(arr[i]));
  }
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  for(ll i=0;i<min((ll)v.size(),p+q);i++){
    ans+=v[i];
  }
  cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,p,q;
        cin>>n;
        cout<<endl;
        cin>>p>>q;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,n,p,q);
    }
}