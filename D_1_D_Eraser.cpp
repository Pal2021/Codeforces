
#include<bits/stdc++.h>
using namespace std;
void solve(string s,int n,int k){
    int ans=0;
    int idx=0;
 
    for(int i=0;i<n;i++){
        if(s[i]=='B' && ans==0){
            idx=i;
            ans++;
        }
       if(s[i]=='B' && (i-idx)>=k){
          idx=i;
          ans++;
       }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        solve(s,n,k);
    }
}