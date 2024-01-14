
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>arr){
    int ans=0;
    if(arr[0]==0){
      ans+=10;
    }else{
       ans+=abs(arr[0]-1)+1;
    }
     cout<<ans<<endl;
    for(int i=0;i<4;i++){
        
        ans+=abs(arr[i]-arr[i-1])+1;
    }
   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>arr(4);
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        solve(arr);
    }
}