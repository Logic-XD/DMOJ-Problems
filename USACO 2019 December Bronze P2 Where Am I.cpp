#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n; string s; bool b;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>s;
	for(int l=1; l<=n; l++){
        unordered_set<string> st; b = true;
        for(int i=0; i+l<=n; i++){
            string s1 = s.substr(i, l); if(st.count(s1)) b = false;
            st.insert(s1);
        }
        if(b){cout<<l<<'\n'; break;}
	}

	return 0;
}
