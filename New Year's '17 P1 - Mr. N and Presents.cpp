#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n, x; char c; deque<pair<int, int>> dq; map<int, int> mp;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	for(int i=0; i<n; i++){
        cin>>c>>x;
        if(c == 'F'){mp[x] = i; dq.push_front({x, i});}
        else if(c == 'E'){mp[x] = i; dq.push_back({x, i});}
        else mp[x] = -1;
	}

    for(int i=0; i<dq.size(); i++){
        if(mp[dq[i].first] == dq[i].second) cout<<dq[i].first<<'\n';
    }

	return 0;
}
