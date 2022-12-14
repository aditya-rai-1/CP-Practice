#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//memoization me top to bottom
//tabulation me bottom to top


// f(n) bta rha ki n tk aane k kitne tarike hai
int f(int n){
    if(n < 0) return 0;
    if(n == 0) return 1;


    return f(n-1) + f(n-2);
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n+1);
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n];







    return 0;
}