#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int n,m;
int f(int i,int j,vector<vector<int>> &a){
    if(j < 0 || (i != 0 && j >= m)) return INT_MIN;
    if(i == n-1) return a[i][j];

    if(i == 0){
        int maxi = INT_MIN;
        for(int k = 0; k < m; k++){
            int a1 = a[i][k] + f(i+1,k+1,a);
            int a2 = a[i][k] + f(i+1,k-1,a);
            int a3 = a[i][k] + f(i+1,k,a);
            /*maxi = max(a1,maxi);
            maxi = max(a2,maxi);
            maxi = max(a3,maxi);*/
            maxi = max(max(maxi,a1),max(a2,a3));
        }
        return maxi;
    }
    else{
        int a1 = a[i][j] + f(i+1,j+1,a);
        int a2 = a[i][j] + f(i+1,j-1,a);
        int a3 = a[i][j] + f(i+1,j,a);

        return max(max(a1,a2),a3);
    }
    
}


int main()
{
    //int n,m;
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cin >> a[i][j];
        }
    }

    //cout << f(0,m,a);
    vector<vector<int>> dp(n,vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0) dp[i][j] = a[i][j];
            else{
                int a1 = a[i][j] + dp[i-1][j];
                int a2 = a[i][j] + (j+1 >= m ? INT_MIN : dp[i-1][j+1]);
                int a3 = a[i][j] + (j-1 < 0 ? INT_MIN : dp[i-1][j-1]);
                dp[i][j] = max(max(a1,a2),a3);
            }
        }
    }
    int maxi = INT_MIN;
    for(int i = 0; i < m; i++){
        maxi = max(maxi,dp[n-1][i]);
    }
    cout << maxi;

    return 0;
}