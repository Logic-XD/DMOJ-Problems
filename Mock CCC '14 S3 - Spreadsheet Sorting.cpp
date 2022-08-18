#include <bits/stdc++.h>
using namespace std;
//-----------------------

int r, c, n, t;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>r>>c;
	vector<vector<int>> vec(r, vector<int>(c, 0));
	for(int i=0; i<r; i++){
        for(int j=0; j<c; j++) cin>>vec[i][j];
	}

    for(cin>>n; n--;){
        cin>>t; t--;
        stable_sort(vec.begin(), vec.end(), [&](const vector<int> &x, const vector<int> &y){return x[t] < y[t];});
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++) cout<<vec[i][j]<<' ';
        cout<<'\n';
	}

	return 0;
}
