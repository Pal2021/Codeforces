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
 ll c=0;
 int min1=INT_MAX;
 int max1=INT_MIN;
 for(int i=0;i<n;i++){
    min1=min(min1,arr[i]);
    max1=max(max1,arr[i]);
 }
 vector<int>ans;
      while(min1!=max1){
        if(max1%2==min1%2){
            ans.push_back(0);
        }else if(max1%2==0){
            ans.push_back(1);
            min1++;
            max1++;
        }else{
            ans.push_back(0);
        }
        min1=min1/2;
        max1=max1/2;
      }
       cout<<ans.size()<<endl;
        if(ans.size()>n)return;
         for(int i=0;i<ans.size();i++){
          cout<<ans[i]<<" ";
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