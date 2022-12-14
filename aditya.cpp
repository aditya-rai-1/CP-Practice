#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(ll a, ll b){ return (a>b);}




int main()
{
    // int a[7] = {5,6,10,2,15,1,53};
    // //sort(a,a+7,[](int a, int b){return (a<b);});
    // //nth_element(a,a+5,a+7);
    // reverse(a,a+7);
    // for(int i = 0; i < 7; i++)
    //     cout << a[i] << " ";

    string a = "AAAbbbaaaccdeeeEEE";
    *unique(a.begin(), a.begin()+a.size()) = 0;
    //unique doesn't resizes the string/array/vector.
    int i = 0;
    while(a[i]) cout << a[i++];
    //cout << a[0];
    return 0;

}