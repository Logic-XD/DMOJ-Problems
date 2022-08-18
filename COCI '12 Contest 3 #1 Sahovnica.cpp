#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, a, b; cin >> r >> c >> a >> b;
    for(int i = 0; i < r; i++){
        string s = "";
        for(int j = 0; j < c; j++){
            char add;
            if(!((i+j)%2)) add = 'X';
            else add = '.';
            for(int k = 0; k < b; k++) s += add;
        }
        for(int j = 0; j < a; j++){
            cout << s << endl;
        }
    }

    return 0;
}