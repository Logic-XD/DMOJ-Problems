#include <bits/stdc++.h>
using namespace std;

int main() {
    
    float n, o; cin >> n >> o; int mx = 0; int mn = 201;
    for(float i = 0; i < o+2; i++){
        int t = ceil((i+o)/n*(n-1));
        if(t == o && t < mn) mn = i+t;
        if(t == o && t > mx) mx = i+t;
    }
    cout << mx << " " << mn;
    return 0;
}