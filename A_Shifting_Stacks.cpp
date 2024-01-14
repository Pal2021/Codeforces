#include<bits/stdc++.h>
using namespace std;

// int gcd(int a, int b) {
//     return b == 0 ? a : gcd(b, a % b);    
// }

// #define ll long long  

void solve(int n1,int n2) {
//    cout<<--n1<<"`"<<--n2<<endl;
   cout<<++n1<<endl;//9
   cout<<n1++<<endl;//8
   cout<<--n1<<endl;//7
   cout<<n1--<<endl;//8
}

int main() {
    int n1,n2;
    cin>>n1>>n2;
    solve(n1,n2);
    
}
