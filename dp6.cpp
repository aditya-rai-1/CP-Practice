#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int f(int n,vector<int> &v,vector<int> &dp){
    if(n == 0) return v[0];
    if(n < 0) return 0;
    if(dp[n] != -1) return dp[n];  //MEMOIZATION
    int pick = v[n] + f(n-2,v,dp);
    int notPick = 0 + f(n-1,v,dp);

    return dp[n] = max(pick,notPick);

}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<int> dp(n,-1);
    //cout << f(n,v,dp);
    //specify the purpose of dp[i]
    //in this case ,it will tell me the maximum sum upto that index.
    dp[0] = v[0];
    dp[1] = max(v[1],v[0]);
    for(int i = 2; i < n; i++){
        dp[i] = max(dp[i-1],v[i] + dp[i-2]);
    }
    cout << dp[n-1];




    return 0;
}