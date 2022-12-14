#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define fast_io ios_base:: sync_with_stdio(false);cin.tie(NULL)


void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);
    #endif
}

const int N = 1e6;
vector<bool> isPrime(N,true);




int main() {
	// your code goes here
    init_code();
    
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i < N; i++){
        if(isPrime[i]){
            for(int j = 2*i; j < N; j += i){
                isPrime[j] = false;
            }
        }
    }

    if(isPrime[7]) cout << "YES";












    return 0;    
}
