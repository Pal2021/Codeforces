
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);    
}
  
void solve(int n,int m,int k){
  
    while(k--){
       if(n>m){
         n=gcd(n,m);
     }else{
         m=gcd(n,m);
     }
    }
     
   cout<<n+m<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       vector<int>arr;
       int n,m,k;
       
       cin>>n>>m>>k;
      
        solve(n,m, k);
    }
}