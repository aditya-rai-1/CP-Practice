#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    bool a[500];
    a[0] = a[1] = false; 
    for (int i = 2; i < 500; i++)
    {
        a[i] = true;
    }

    for (int i = 2; i < 500; i++)
    {
        for (int j = i + 2; j < 500; j += 2)
        {
            if (!(j % i))
                a[j] = false;
        }
    }
    for(int i = 0; i < 500; i++){
        if(a[i]) cout << i << " ";
    }
    return 0;
}
