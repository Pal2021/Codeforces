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


 void solve(ll n,ll m,ll k){
    // if(n<m){
    //     cout<<m<<endl;
    //     return;
    // }else{
    // cout<<m+(m-(n+k))<<endl;
    //     return;
    // }
    if(n>m){
        cout<<n<<endl;
        return;
    }
    if(n+k>=m){
        cout<<m<<endl;
        return;
    }
    else{
        cout<<2*m-(n+k)<<endl;
        return;
    }
 }
int main() {
      ll t;
      cin>>t;
      while(t--){
          ll n,m,k;
        cin>>n>>m>>k;
        solve(n,m,k); 
      }
       
    return 0;
};