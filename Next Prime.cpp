#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n; bool p;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;

	while(true){
		p = true;
		for(int i=2; i<=sqrt(n)+1; i++){
			if(!(n%i)){p = false; break;}
		}
		if(n == 1) p = false;
		if(n == 2) p = true;
		if(p){cout<<n<<'\n'; return 0;}
		n++;
	}
}
