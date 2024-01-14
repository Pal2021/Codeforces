
#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    if(s[0]!='a' && s[1]!='b' && s[2]!='c'){
        cout<<"NO"<<endl;
        return;
    }    
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
    }
}