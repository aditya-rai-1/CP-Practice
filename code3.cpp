#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
vector<int> v(N);
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        long long int sum = 0,cnt = 0;
        for(int i = 0; i <n ; i++){
            cin >> v[i];
            sum += v[i];
        }

        for(int i = 0; i < n ; i++){
            for(int j = i+1; j < n; j++){
                if(n*(v[i]+v[j]) == 2*sum) cnt++;
            }
        }
        cout << cnt << "\n";
    }


 
    return 0;
}