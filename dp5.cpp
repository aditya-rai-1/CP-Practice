#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{   int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 
    vector<int> dp(n);
    dp[0] = a[0];
    dp[1] = a[1];
    for(int i = 2; i < n; i++){
        int j = i-2,maxm = INT_MIN;
        while(j >= 0){
            int ans = a[i] + dp[j];
            maxm = max(ans,maxm);
            j--;
        }
        dp[i] = maxm;
    }
    cout << dp[n-1];

    return 0;
}