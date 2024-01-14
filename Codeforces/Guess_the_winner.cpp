#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n % 2 == 0 || n==1){
        cout<<"Bob"<<endl;
    }else{
        cout<<"Alice"<<endl;
    }
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}
