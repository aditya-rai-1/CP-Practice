#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int max_length = -1;
    int i = 0;
    /*for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int curr_length = 1;
            if(abs(v[j-1] - v[j]) <= 1) curr_length++;
            else 
        }
    }*/
    while(i < n){
        int j = i+1;
        int curr_length = 1;
        while(abs(v[j-1] - v[j]) <= 1){
            curr_length++;
            j++;
        }
        max_length = max(max_length,curr_length);
        i = j;
    }

    cout << max_length;



    return 0;
}