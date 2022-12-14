#include<bits/stdc++.h>
using namespace std;

const int N = 100;
int n;
int a[2][N];
int cnt;
void solve(int i, int j){
    if(cnt == 1) return;
    if(i > 2 || i < 0 || j < 0 || j > n-1) return ;
    if(a[i][j] == 1) return ;
    if(i == 1 && j == n-1){
        cnt++;
        return;
    }
    solve(i+1,j);
    solve(i-1,j);
    solve(i,j+1);
    solve(i,j-1);
    solve(i+1,j+1);
    solve(i-1,j-1); 
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < 2;i++){
            for(int j = 0; j < n ; j++){
                cin >> a[i][j];
            }
        }
        cnt = 0;
        solve(0,0);
        if(cnt) cout << "YES\n";
        else cout << "NO\n";


    }





    return 0;
}