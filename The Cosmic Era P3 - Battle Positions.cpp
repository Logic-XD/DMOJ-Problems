#include <bits/stdc++.h>
using namespace std;
//-----------------------

int s, n, t, x1, x2, k;


vector<int> getArray(vector<int>& A){

    int n = A.size(); vector<int> D(n + 1);

    D[0] = A[0], D[n] = 0;
    for (int i=1; i<n; i++) D[i] = A[i] - A[i-1];

    return D;
}


void update(vector<int>& D, int l, int r, int x){
    D[l] += x; D[r + 1] -= x;
}



int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>s>>n>>t; vector<int> vec(s, 0); vector<int> dif = getArray(vec);
	for(int i=0; i<t; i++){
        cin>>x1>>x2>>k; update(dif, x1, x2, k);
	}

	for(int i=0; i<s; i++){
        if(i == 0) vec[i] = dif[i];
        else vec[i] = dif[i] + vec[i - 1];
	}

	int ans = 0;
    for(int i=0; i<s; i++){
        if(vec[i] < n) ans++;
    }

    cout<<ans;


	return 0;
}
