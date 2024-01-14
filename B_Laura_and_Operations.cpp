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


void  solve(vector<int>arr){
  if((arr[1]+arr[2])%2==0){
   cout<<1<<" ";
  }else {
    cout<<0<<" ";
  }
  if((arr[0]+arr[2])%2==0){
   cout<<1<<" ";
  }else {
    cout<<0<<" ";
  }
   if((arr[0]+arr[1])%2==0){
   cout<<1<<" ";
  }else {
    cout<<0<<" ";
  }
  cout<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
      vector<int>arr(3);
      for(int i=0;i<3;i++){
        cin>>arr[i];
      }
      solve(arr);
    }
    return 0;
};