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


void  solve(string s,int n){
   int zeroes = 0, ones = 0;
    
  
    for (char c : s) {
        if (c == '0') {
            zeroes++;
        } else {
            ones++;
        }
    }
    if (zeroes > ones) {
        cout<<"YES"<<endl;
        return;
    }
  for(int i=0;i<n-1;i++){
    if(s[i]!=s[i+1]){
      cout<<"YES"<<endl;
      return;
    }
  }
  cout<<"NO"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
      solve(s,n);
    }
    return 0;
};