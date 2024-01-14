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


void  solve(vector<int>arr,int n,int d){
 int max1=INT_MIN;
 if(n==1){
    max1=max(arr[0],2*(d-arr[0]));
    cout<<max1<<endl;
    return;
 }
 for(int i=1;i<n;i++){
    max1=max(max1,arr[i]-arr[i-1]);
 }
 
 max1=max(arr[0],max(max1,2*(d-arr[n-1])));
 cout<<max1<<endl;
return;
}
int main() {
    int t;
    cin>>t;
    while(t--){
      int n,d;
      cin>>n>>d;
      vector<int>arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      solve(arr,n,d);
    }
    return 0;
};