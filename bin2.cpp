#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isValid(int m, vector <int> &v,int k){
    int j = 0,sum = 0,count = 0;
    while(j < v.size()){
        if(count != k-1){
            if(sum < m) sum += v[j];
            else {
                sum = 0;
                count++;
            }
        }
        else sum += v[j];
        j++;
    }
    if(sum > m) return false;
    return true;
}

int main()
{   int n,k;
    cin >> n >> k;
    vector <int> v(n);
    int sum = 0,max = -1;
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
        sum += v[i];
        if(v[i] > max) max = v[i];
    }
    int lo = max,hi = sum;
    while(hi - lo > 1){
        int mid = lo + (hi - lo)/2;
        
         
    }









    return 0;
}