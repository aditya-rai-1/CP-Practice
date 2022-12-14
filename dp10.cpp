#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int f(int i,int j,vector<vector<int>> &a,vector<vector<int>> &dp){
    if(i < 0 || j < 0) return INT_MAX;
    if(i == 0 && j == 0) return a[i][j];
    if(dp[i][j] != -1) return dp[i][j];
    int sum1 = f(i-1,j,a,dp);
    int sum2 = f(i,j-1,a,dp);
    return dp[i][j] = (a[i][j] + min(sum1,sum2));
}

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> dp(n,vector<int>(m,-1));
    dp[0][0] = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 && j == 0) continue;
            int a1 = (i-1 < 0 ? INT_MAX : dp[i-1][j]);
            int a2 = (j-1 < 0 ? INT_MAX : dp[i][j-1]);
            dp[i][j] = a[i][j] + min(a1,a2);
        }
    }
    cout << dp[n-1][m-1];
    
    return 0;
}