#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n; vector<string> vec(n);
	for(int i=0; i<n; i++) cin>>vec[i];

    sort(vec.begin(), vec.end(), [](string x, string y){return ((x+y) > (y+x));});

    for(string x:vec) cout<<x;

	return 0;
}
