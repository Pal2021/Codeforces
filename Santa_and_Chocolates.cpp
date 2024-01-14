
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>arr,int n,int k){
    vector<int>ans;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    for(int i=0;i<n;i++){
        ans.push_back(sum/n);
    }
    int t=sum%n;
    for(int i=0;i<t;i++){
        ans[i]++;
    }
    // for(int i=0;i<n;i++){
    //     cout<<ans[i]<<" ";
    // }
    //cout<<ans[0]-ans[n-1]<<" "<<k;
    if((ans[0]-ans[n-1])>k || ans[n-1]==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

    
}
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       vector<int>arr(n);
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
        solve(arr,n,k);
    }
}