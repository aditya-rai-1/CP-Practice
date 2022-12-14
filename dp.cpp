#include<iostream>
#include<bits/stdc++.h>
using namespace std;




//recursive code -> memoized code -> tabulated code

int solve(int n, vector<int> &dp){
    if(n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    else{
        return dp[n] = solve(n-1,dp) + solve(n-2,dp);
    }

}



int main()
{
    int n;
    cin >> n;
    vector<int> dp(n+1,-1); 

    dp[0] = 0;dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << "\n";


    return 0;
}