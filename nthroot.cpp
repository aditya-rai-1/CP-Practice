#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double epsilon = 1e-5;
double result(double mid,int n){
    double val = 1.0;
    for(int i = 0; i < n ; i++){
        val *= mid;
    }
    return val;
}

int main()
{   double num;
    int n;
    cin >> num >> n;
    double lo = 1,hi= num;
    while(hi - lo > epsilon){
        double mid = lo + (hi-lo)/2;
        if(result(mid,n) == num){
            lo = mid;
            break;
        }
        else if(result(mid,n) > num) hi = mid;
        else lo = mid;
    }
    cout << lo << "\n";
    return 0;
}