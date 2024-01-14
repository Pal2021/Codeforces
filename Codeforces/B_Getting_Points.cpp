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


void  solve(ll n,ll p,ll l,ll t){
    ll c=0;
    if(n%7==0){
        c+=n/7;
    }else{
        c+=n/7;
        c++;
    }
   ll sum=c*t;
   p=p-sum;
   if(p<0){
    cout<<n-1<<endl;
    return;
   }
  int rem=0;
   if(p%l==0){
        rem+=p/l;
    }else{
        rem+=p/l;
        rem++;
    }
    cout<<n-rem<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
     ll n,p,l,t;
     cin>>n>>p>>l>>t;
     solve(n,p,l,t);
    }
    return 0;
};