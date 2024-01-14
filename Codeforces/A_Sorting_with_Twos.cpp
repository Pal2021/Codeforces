
#include<bits/stdc++.h>
using namespace std;
int find(int n){
    int c=0;
    return c=n/2;
}
void solve(vector<int>arr){
  
   for(int i=1;i<arr.size();i++){
     if(arr[i-1]>arr[i]){
        if(i!=1 && i!=2 && i!=4 && i!=8 && i !=16){
          cout<<"NO"<<endl;
          return;
        }
     }
   }
   cout<<"YES"<<endl;
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