#include<bits/stdc++.h>
using namespace std;
void solve(int x){
        if (x<10){
            cout<<x<<"\n";
        } else if (x>45){
            cout<<-1<<"\n";
        } else{
            int n = x;
            vector<int> v;
            int k = 9;
            int sum = 0;
            while (n!=sum){
                if ((n-sum)>k){
                    sum+=k;
                    v.push_back(k);
                    k--;
                } else{
                    v.push_back(n-sum);
                    sum=n;
                }
            }
            for (int j = v.size()-1; j >=0 ; j--) {
                cout<<v[j]<<"";
            }
            cout<<endl;
        }
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
}