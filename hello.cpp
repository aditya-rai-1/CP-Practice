#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ans(vector <int> &v,int mid){
    int val=0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] - mid < 0) continue;
        val += (v[i] - mid);
    }
    return val;
}

int main()
{   int n,m;
    int min,max;
    cin >> n >> m;
    vector <int> v(n);
    cin >> v[0];
    max = min = v[0];
    for(int i = 1; i < n; i++){
        cin >> v[i];
        if(v[i] > max) max = v[i];
        if(v[i] < min) min = v[i];
    }

    int hi = max, lo = min;
    while(hi - lo > 1){
        int mid = lo + (hi - lo)/2;
        if(ans(v,mid) >= m) lo = mid;
        else hi = mid-1;
    }

    cout << hi << "\n";
    return 0;
}

