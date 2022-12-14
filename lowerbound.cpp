#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5;

bool isPrime[MAX];
void sieve(){
	for(int i = 0; i < MAX; i++){
		isPrime[i] = true;
	}
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i < MAX; i++){
		if(isPrime[i]){
			for(int j = i*2; j < MAX; j += i){
				isPrime[j] = false;
			}
		}
	}
}





int main()
{
    vector<char> v(110);
    int j = 0,i = 2;
    while( j != 28){
        if(isPrime[i]){
            v[i] = 'a'+j;
            j++;
        }
        i++;
    }
    v[103] = ',';
    v[107] = '.';
    





    return 0;
}