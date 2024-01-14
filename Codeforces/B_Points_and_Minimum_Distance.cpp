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


 void  solve(vector<vector<int>>arr,int n){
    vector<vector<int>>ans;
     for(int i=0;i<n;i++){
        vector<int>prev=arr[i];
        sort(arr[i].begin(),arr[i].end());
        if(arr[i][n-1]!=-1){
            ans.push_back(prev);
        }
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
 }
int main() {
     int n;
     cin>>n;
    vector<vector<int>>mat(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    solve(mat,n);
    return 0;
};