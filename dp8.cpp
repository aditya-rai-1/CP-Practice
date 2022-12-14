#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m;


//IF U ARE WRITING MEMOIZED SOLUTION WRITE IT IN TOP TO BOTTOM FORM...




int f(int n,int m,vector<vector<int>> &dp){
    if(n < 0 || m < 0) return 0;
    if(n == 0 && n == 0) return 1;
    if(dp[n][m] != -1) return dp[n][m];
    int left = f(n,m-1,dp);
    int up = f(n-1,m,dp);
    return (dp[n][m] = (left + up));
}


/*int f(int i,int j,vector<vector<int>> &dp){
    if(i >= n || j >= m) return 0;
    if(i == n-1 && j == m-1) return 1;
    if(dp[i][j] != -1) return dp[i][j];
    int right = f(i,j+1,dp);
    int down = f(i+1,j,dp);
    return dp[i][j] = (right + down);
}*/



int main()
{
    
    cin >> n >> m;
    vector<vector<int>> dp(n,vector<int>(m,-1));
    //cout << f(0,0,dp);
    //TABULATION
    dp[0][0] = 1;

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 && j == 0) continue;
            dp[i][j] = (i-1 < 0? 0: dp[i-1][j]) +(j-1 < 0? 0: dp[i][j-1]);   
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }






    return 0;
}