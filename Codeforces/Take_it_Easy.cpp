
#include<bits/stdc++.h>
using namespace std;
int find(int n){
    int c=0;
    return c=n/2;
}
void solve(vector<int>arr){
   int sum=0;
   int ans=0,c=0;
   int n=arr.size();
   for(int i=0;i<n;i++){
    sum+=arr[i];
    c+=arr[i]/2;
   }
   int mod=sum%2;
   if(mod%2!=0){
    cout<<"No"<<endl;
    return;
   }
   if(sum%2!=0){
    cout<<"No"<<endl;
    return;
   }
   if(((mod/2)+c)%2!=0){
    cout<<"No"<<endl;
    return;
   }else{
    cout<<"Yes"<<endl;
   }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr);
    }
}