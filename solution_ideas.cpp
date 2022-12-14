#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main()
// {   int n,m;
//     cin >> n >> m;
//     vector<int> a(n),b(m);
//     for(int i = 0; i < n; i++) cin >> a[i];
//     for(int i = 0; i < m; i++) cin >> b[i];

//     sort(a.begin(),a.end());
//     for(int i = 0; i < m; i++){
//         int cnt = 0, j = 0;
//         while(b[i] >= 0){
//             b[i] -= a[j++];
//             cnt++;
//         }
//         cout << cnt << "\n";
//     }
//     //Complexity = O(nlog(n) + m*n) --> How to optimize it further ?
//     return 0;
// }

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];





    return 0;
}