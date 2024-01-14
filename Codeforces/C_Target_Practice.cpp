
#include<bits/stdc++.h>
using namespace std;
void solve(int n,vector<vector<char>>nums){
    int ans=0;
    vector<vector<char>>arr(10, vector<char>(10));

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(j==0){
               arr[i][j]=1; 
            }else if(i==9){
                arr[i][j]=1;
            }
            else if(j==1){
                arr[i][j]=2;
            }else if(i==8){
                arr[i][j]=2;
            }
            else if(j==2){
                arr[i][j]=3;
            }else if(i==7){
                arr[i][j]=3;
            }
            else if(j==3){
                arr[i][j]=4;
            }
            else if(i==6){
                arr[i][j]=4;
            }
             else if(j==4){
                arr[i][j]=5;
            }
            else if(i==5){
                arr[i][j]=5;
            }
        }
    }
    // for(int i=0;i<10;i++){
    //     arr[i][0]=1;
    //     arr[0][i]=1;
    //     arr[i][9]=1;
    //     arr[9][i]=1;
    // }
    // for(int i=1;i<9;i++){
    //     arr[i][1]=2;
    //     arr[1][i]=2;
    //     arr[i][8]=2;
    //     arr[8][i]=2;
    // }
    // for(int i=2;i<8;i++){
    //     arr[i][2]=3;
    //     arr[2][i]=3;
    //     arr[i][7]=3;
    //     arr[7][i]=3;
    // }
    // for(int i=3;i<7;i++){
    //     arr[i][3]=4;
    //     arr[3][i]=4;
    //     arr[i][6]=4;
    //     arr[6][i]=4;
    // }
    // for(int i=4;i<6;i++){
    //     arr[i][4]=5;
    //     arr[4][i]=5;
    //     arr[i][5]=5;
    //     arr[5][i]=5;
    // }

    int sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(nums[i][j]=='X'){
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
      vector<vector<char>>arr(10, vector<char>(10));
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >>arr[i][j];
            }
        }
        solve(n,arr);
    }
}