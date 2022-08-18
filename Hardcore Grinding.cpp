#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, x1, x2; vector<int> vec((int)1e7+1, 0), dif((int)1e7+2, 0);


void update(vector<int>& D, int l, int r){
    D[l]++; D[r]--;
}


int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	for(int i=0; i<n; i++){
        cin>>x1>>x2; update(dif, x1, x2);
	}

	for(int i=0; i<(1e7+1); i++){
        if(i == 0) vec[i] = dif[i];
        else vec[i] = dif[i]+vec[i-1];
	}

	int mx = 0;
    for(int& i:vec){
        if(i > mx) mx = i;
    }

    cout<<mx<<'\n';

	return 0;
}
