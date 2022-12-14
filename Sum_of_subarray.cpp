#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll> a,prefix;


int main()
{
    int n;
    cin >> n;
    a.resize(n);
    prefix.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        prefix[i] = a[i];
        if(i) prefix[i] += prefix[i-1]; 
    }
    ll sum,cnt = 0;
    cin >> sum;
    map<ll,ll> mp;mp[0]++;
    for(int j = 0; j < n; j++){
        mp[prefix[j]]++;
        cnt += mp[prefix[j] - sum];
    }

    cout << cnt << endl;

    return 0;
}