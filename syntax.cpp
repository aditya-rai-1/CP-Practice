#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,k,cnt = 0,profit = 0;
    cin >> n >> c >> k;
    // vector<pair<int,int>> v(n);
    // for(int i = 0; i < n; i++){
    //     cin >> v[i].second >> v[i].first;
    // }

    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[y] = x;
    }
    while(cnt != k){  // Complexity --> k*(n + log(n)) --> O(k*n);
        auto it = mp.begin();
        while(it != mp.end()){
            if(it->second <= c){
                profit += (it->second);
                c += profit;
                mp.erase(it);
                cnt++;
                break;    
            }
            it++;
        }
    }

    return 0;
}