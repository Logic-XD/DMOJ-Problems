#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, n0;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

    // loop from 2 to n, find prime factorization for every number O(NsqrtN)

	for(int _=0; _<5; _++){
		cin>>n; vector<int> f(n+1, 0);

		for(int k=2; k<=n; k++){
            int k0 = k;
            while(k0!=1){
                for(int i=2; i<=n; i++){
                    if(k0%i == 0){f[i]++; k0/=i; break;}
        }}}

        string ans = "";
		for(int i=2; i<=n; i++)
        if(f[i]!=0) ans += to_string(i)+'^'+to_string(f[i])+" * ";
		cout<<ans.substr(0, (ans.size()-3))<<endl;
    }

	return 0;
}
