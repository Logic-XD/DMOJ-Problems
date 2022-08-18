#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N; vector<pair<int, int>> coords; cin >> N; int xsum = 0; int ysum = 0;
    for(int i = 0; i < N; i++){
        int x, y; cin >> x >> y; coords.push_back({x, y}); xsum += x; ysum += y;
    }
    float xbar = xsum/N; float ybar = ysum/N; float numerator = 0; float denominator = 0;
    for(int i = 0; i < N; i++){

    }


	return 0;
}
