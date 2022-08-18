#include <bits/stdc++.h>
using namespace std;
//-----------------------

int q, a, b; bool p; vector<int> vec((int)10e5+1);

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	vec[0] = 0;
	for(int n=1; n<=10e5; n++){
		p = true;
		for(int j=2; j<=sqrt(n); j++){
			if(n%j == 0){p = false;break;}
		}
		if(n == 1) p = false;

		if(p) vec[n] = vec[n-1]+n;
		else vec[n] = vec[n-1];
	}

	cin>>q;
	for(int i=0; i<q; i++){
		cin>>a>>b; cout<<vec[b]-vec[a-1]<<endl;
	}

	return 0;
}
