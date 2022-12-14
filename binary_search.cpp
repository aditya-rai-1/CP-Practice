#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int to_find;
    cin >> to_find;

    int low = 0,high = n-1;
    while(high - low > 1){
        int mid = low + (high - low)/2;
        if(v[mid] < to_find){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }

    if(v[low] == to_find) cout << low;
    else if(v[high] == to_find) cout << high;
    else cout << "not found";

    return 0;
}

int lower_bound(vector <int> &v,int key){
    int lo = 0,hi = v.size()-1;
    while(hi-lo > 1){
        int mid = lo +(hi-lo)/2;
        if(v[mid] < key) lo = mid+1;
        else hi = mid;
    }
    if(v[lo] >= key) return lo;
    else if(v[hi] >= key) return hi;
    return -1;
}

int upper_bound(vector <int> &v,int key){
    int lo = 0,hi = v.size()-1;
    while(hi - lo >1){
        int mid = lo + (hi-lo)/2;
        if(v[mid] < key) lo = mid+1;
        else hi = mid;
    }
    if(v[lo] > key) return lo;
    else if(v[hi] > key) return hi;
    return -1;
}