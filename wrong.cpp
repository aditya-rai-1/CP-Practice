#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;
int a[N][N],n;
bool ans[N][N];

void check(int row, int column)
{
    int i = row,j = column,flag1 = 1,flag2 = 1,flag3 = 1,flag4 = 1;
    vector<pair<int,int>> v;
    pair<int,int> p;
    while(j >= 0){
        if(a[row][j]){ p.first = row;p.second = j;v.push_back(p);}
        else{ flag1 = 0; break;}
        j--;
    }
    j = column;
    while(j <= n-1){
        if(a[row][j]){ p.first = row;p.second = j;v.push_back(p);}
        else{ flag2 = 0; break;}
        j++;
    }
    while(i >= 0){
        if(a[i][column]){ p.first = i;p.second = column;v.push_back(p);}
        else{ flag3 = 0; break;}
        i--;
    }
    i = row;
    while(i <= n-1){
        if(a[i][column]){ p.first = i;p.second = column ;v.push_back(p);}
        else{ flag4 = 0; break;}
        i++;
    }
    if(flag1 || flag2 || flag3 || flag4 ){
        for(int k = 0; k < v.size(); k++){
            ans[v[k].first][v[k].second] = false;
        }
    }
    return;   
}

int main()
{
    cin >> n;
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(!(i == 0 || i == n-1 || j == 0|| j == n-1) && a[i][j]){
                ans[i][j] = true;
            }
            else ans[i][j] = false;
        }
    }

    for(int i = 1; i < n-1; i++){
        for(int j  = 1; j < n-1 ; j++){
            if(a[i][j]){
                check(i,j);
            }
        }
    }
    
    cout << "\n\n\n";
    for(int i = 0; i < n; i++){
        for(int j  = 0; j < n ; j++){
            if(!ans[i][j]) cout << a[i][j] << " ";
            else cout << 0 << " ";
        }
        cout<< "\n";
    }
    return 0;
}