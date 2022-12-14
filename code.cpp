#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//initially flag = 0;

bool check(string& s,int i,int flag){
    if(i >= s.size()) return true;

    if(s[0] == 'a'){
        if(s[i] == 'a'){
            if(flag) return check(s,i+1,flag-1);
            else return check(s,i+1,flag);
        }

        else if(i != s.size()-1 && s[i] == 'b' && s[i+1] == 'b' && !flag){
            return check(s,i+2,flag+1);
        }
    }

    return false;
}

int main()
{
    string s;
    cin >> s;

    if(check(s,0,0)) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}


