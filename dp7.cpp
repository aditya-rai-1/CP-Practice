#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int f(int n,int index,int a[][3],int dp[][4]){
    if(n < 0) return 0;
    if(dp[n][index] != -1) return dp[n][index];
    int maxm = INT_MIN;
    for(int i = 0; i < 3; i++){
        if(i == index) continue;
        int pick = a[n][i] + f(n-1,i,a,dp);
        //int notPick = f(n-1,index,a);
        maxm = max(pick,maxm);  
    }
    return dp[n][index] = maxm;
}


int main()
{
    int n;
    cin >> n;
    int a[n][3];
    /*int dp[n][4];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            dp[i][j] = -1;
        }
    }*/

    vector<vector<int>> dp(n,vector<int>(4,-1));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];  
        }
    }

    //cout << f(n-1,3,a,dp);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            int maxi = INT_MIN;
            for(int k = 0; k < 3; k++){
                if(k == j) continue;
                int pick = a[i][k] + (i-1 < 0 ? 0 : dp[n-1][k]);
                maxi = max(maxi,pick);
            }
            dp[i][j] = maxi;
        }
    }
    cout << dp[n-1][3];



    return 0;
}


