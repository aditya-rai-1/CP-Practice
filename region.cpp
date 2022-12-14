#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
const int MOD = 1e9 + 7;

multiset<pair<ll,ll>> m;

void insert(ll l,ll r)
{   
    auto it = m.lower_bound({l,-MOD*MOD});
    if(it != m.begin()){
        it--;
        if(it->second >= r){
            return;
        }
        if(it->second >= l){
            l = it->first;
            //m.insert({l,r});
            m.erase(it);
        }    
    }

    auto it = m.upper_bound({r,MOD*MOD});
    if(it != m.begin()){
        it--;
        if(l >= it->first) return;
        if(r >= it->first){
            r = it->second;
            //m.insert({l,r});
            m.erase(it);
        }
    }
}

ll getSeg(){
    return m.size();
}






int main()
{   int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int x,y;
        cin >> x >> y;
        m.insert({x,y}); 
    }

    




    return 0;
}