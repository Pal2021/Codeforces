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
   int max1=INT_MIN;
   int sum=0;
   int prev=arr[0];
   for (int i = 0; i <n; i++) {
       
       if(abs(arr[i]%2)==abs(prev%2)){
        sum=0;
        }
        sum= sum+ arr[i];
        if (max1<sum){
            max1=sum;
        } 
        if (sum < 0){
             sum=0;
        }
       prev=arr[i];
    }
    cout<<max1<<endl;
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