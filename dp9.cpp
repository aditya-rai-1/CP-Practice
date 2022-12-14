#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int n,m;

int f(int i,int j,vector<vector<int>> &a,vector<vector<int>> &dp){
     if(i < 0 || j < 0) return 0;
     if(a[i][j] == -1) return 0;
     if(i == 0 && j == 0) return 1;
     if(dp[i][j] != -1) return dp[i][j];
     int left = f(i,j-1,a,dp)%mod;
     int up = f(i-1,j,a,dp)%mod;
     return dp[i][j] = left + up; 
}

int main()
{
    
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> dp(n,vector<int> (m,-1));
    dp[0][0] = (a[0][0] == -1 ? 0 : 1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 && j == 0) continue;
            if(a[i][j] == -1) dp[i][j] = 0;
            else{
                dp[i][j] = (i-1 < 0? 0 : dp[i-1][j]%mod) +(j-1 < 0? 0 : dp[i][j-1]%mod);  
            }
        }
    } 
    cout << dp[n-1][m-1];

    return 0; 
}