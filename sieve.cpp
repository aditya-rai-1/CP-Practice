#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N = 1e8;
vector<bool> isPrime(N,true);


void solve(string& s,int index,int& flag){
    if(flag) return;

    if(index == s.size()){
        cout << s << "\n";
        /*int num = 0;
        for(int i = 0; i < s.size(); i++){
            num = num*10 + s[i] - '0';
        }
        if(isPrime[num]){
            cout << "YES\n" << s << "\n";
            flag = 1;
        }*/
        return;
    }

    for(int i = index; i < s.size(); i++){
        swap(s[index],s[i]);
        solve(s,index+1,flag);
        swap(s[index],s[i]);
    }

    return;
}



int main() {
	
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i < N; i++){
        if(isPrime[i]){
            for(int j = 2*i; j < N; j += i){
                isPrime[j] = false;
            }
        }
    }

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int flag = 0;
        solve(s,0,flag);
        if(!flag) cout << "NO\n";
    }

    return 0;    
}