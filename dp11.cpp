#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int n,m;

int f1(int i,int j,vector<vector<int>> &a){
    if(i < 0 || j < 0 ) return INT_MAX;
    if(i == 0 && j == 0) return a[0][0];



}
int f(int i,int j,vector<vector<int>> &a){
    if(j > i+1) return INT_MAX;
    if(i == n-1){
        return a[i][j];
    }
    int a1 = a[i][j] + f(i+1,j,a);
    int a2 = a[i][j] + f(i+1,j+1,a);
    return min(a1,a2);
}
int main()
{
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    //cout << f(0,0,a);
    vector<vector<int>> dp(n,vector<int>(m));
    dp[0][0] = a[0][0];
    for(int i = 0; i < n;i++){
        for(int j = 0; j <= i; j++){
            if(i == 0 && j == 0) continue;
            int a1 = ((j > i-1) ? INT_MAX : dp[i-1][j]);
            int a2 = ((j-1 < 0) ? INT_MAX : dp[i-1][j-1]);
            dp[i][j] = a[i][j] + min(a1,a2);
        }
    }
    int mini = INT_MAX;
    for(int j = 0; j < m; j++){
        mini = min(mini,dp[n-1][j]);
    }

    cout << mini;

    return 0;
}