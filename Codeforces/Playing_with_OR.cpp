#include<bits/stdc++.h>
using namespace std;



void solve(vector<int>arr,int n,int k){
   map<int,int>mp;
   int c=0;
   int i=0,j=0;
   while(j<n){
      if(arr[j]%2!=0){
        mp[arr[j]]++;
      }
      if((j-i+1)<k){
        j++;
      }else if((j-i+1)==k){
        if(mp.size()>0){
            c++;
            mp.erase(arr[i]);
        }
        i++;
        j++;
      }
   }
   cout<<c<<endl;
}
/*
5 2
5 7 13 4 6
       i
         j
mp->
c=1

*/
int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        solve(A,N,K);
    }
    return 0;
}
